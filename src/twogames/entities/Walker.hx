package twogames.entities;

import flash.display.Bitmap;
import flash.geom.Point;
import twogames.ui.PopupText;
import twogames.entities.Walker.WalkerBehavior;

import com.haxepunk.graphics.Image;
import com.haxepunk.HXP;
import com.haxepunk.utils.Input;
import com.haxepunk.Entity;
import com.haxepunk.utils.Key;
import com.haxepunk.utils.Joystick;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.tmx.TmxEntity;

import extendedhxpunk.ext.EXTScene;
import extendedhxpunk.ext.EXTConsole;
import extendedhxpunk.ext.EXTMath;

#if nme
import nme.Assets;
#else
import openfl.Assets;
#end

enum WalkerFacing
{
	LEFT;
	RIGHT;
}

enum WalkerBehavior
{
	WALK_LEFT;
	WALK_RIGHT;
	JUMP_LEFT;
	JUMP_RIGHT;
	JUMP;
}

enum WalkerPosition
{
	ON_GROUND;
	IN_AIR;
}

/**
 * ...
 * @author Jams
 */
class Walker extends GameEntity
{
        public var gamepad(get, never):Joystick;
        public function get_gamepad():Joystick { return _gamepad; }
        
        public var Facing(get, never):WalkerFacing;
        public function get_Facing():WalkerFacing { return _facing; }
		
		public var WalkerText(get, never):PopupText;
		public function get_WalkerText():PopupText { return _popupText; }
        
        public function new(startX:Int, startY:Int, controlled:Bool=false) 
        {
			super();
			
			x = startX;
			y = startY;
			_xMaxVel = NORMAL_VELOCITY_X;
			_yMaxVel = NORMAL_VELOCITY_Y;
			_accel = ACCEL;
			_decel = DECEL;
			_facing = LEFT;
			
			_controlled = controlled;
			_AIBehavingTimer = 0;
			_AIIdleTimer = 0;
			_AIBehavior = WALK_LEFT;
			
			//tweak the bounding box for better feel
			width = 32;
			height = 32;
			_facing = WalkerFacing.LEFT;
			_gamepad = Input.joystick(0);
			
			_spritemap = new Spritemap("gfx/walker_spritesheet.png", 32, 32);
			
			_spritemap.add("idle", [0], 0, false);
			_spritemap.add("walk", [1,2], 6, true);
			
			graphic = _spritemap;
			_spritemap.play("idle");
			
			_popupText = new PopupText(this, walkerText());
			
        }
        
        override public function added():Void 
        {
            super.added();
			HXP.scene.add(_popupText);
        }
        
        override public function update():Void
        {
			updateMovement();
			updateAnimation();
			
			if (!_controlled && this.collide("Player", x, y) != null)
			{
				_popupText.startTextRead();
			}
			
			super.update();
        }
        
        override private function updateAnimation():Void
        {	
			// Flip image accordingly
			if (_xVel < 0 && _facing != LEFT)
			{
				var img : Image = cast(graphic, Image);
				img.flipped = true;
				_facing = WalkerFacing.LEFT;
			}
			else if (_xVel > 0 && _facing != RIGHT)
			{
				var img : Image = cast(graphic, Image);
				img.flipped = false;
				_facing = WalkerFacing.RIGHT;
			}
			
			if (_xVel > 0.1 || _xVel < -0.1)
				_spritemap.play("walk");
			else
				_spritemap.play("idle");
        }
        
        private function updateMovement():Void
        {
			var jump:Bool = false;
			var xMovement:Float = 0;
			
			if (_controlled)
			{
				// User defined what is pressed
				if (_gamepad.pressed(XBOX_GAMEPAD.LB_BUTTON) || Input.check(Key.UP) || Input.check(Key.W))
					jump = true;
				
				xMovement = _gamepad.getAxis(XBOX_GAMEPAD.LEFT_ANALOGUE_X);
				if (Input.check(Key.LEFT) || Input.check(Key.A)) xMovement = -1;
				if (Input.check(Key.RIGHT) || Input.check(Key.D)) xMovement = 1;
			}
			else
			{
				// AI Defines what is pressed
				if (_AIIdleTimer < 0)
					AIResetBehavior();
				if (_AIBehavingTimer >= 0)
				{
					switch(_AIBehavior)
					{
						case WALK_LEFT:
							xMovement = -0.7;
						case WALK_RIGHT:
							xMovement = 0.7;
						case JUMP_LEFT:
							xMovement = -0.7; jump = true;
						case JUMP_RIGHT:
							xMovement = 0.7; jump = true;
						case JUMP:
							jump = true;
					}
				}
				
				--_AIBehavingTimer;
				--_AIIdleTimer;
			}
			
			// Jumping
			if (collide("solid_structure", x, y + 1) != null) 
			{
				_position = ON_GROUND;
				_yVel = 0;
				if (jump)
					_yVel -= JUMP_POWER;
			}
			else 
			{
					_position = IN_AIR;
					_yVel += GRAVITY;
					if (this.collide("solid_structure", x, y - 1) != null)
						_yVel = 0.3;
			}
			
			// X axis movement
			if (xMovement > 0)
			{
				// Move Right
				if (_xVel < 0)
					_xVel += _decel;
				else
				{
					if (_xVel < _xMaxVel*xMovement)
						_xVel += _accel ;
					else
						_xVel = (_xMaxVel*xMovement);
				}
			}
			else if (xMovement < 0)
			{
				// Move Left
				if (_xVel > 0)
					_xVel -= _decel;
				else
				{
					if (_xVel > (_xMaxVel*xMovement))
						_xVel -= _accel;
					else
						_xVel = (_xMaxVel*xMovement);
				}
			}
			else
			{
				// FRICTION
				_xVel = _xVel - Math.min(Math.abs(_xVel), _accel) * EXTMath.sgn(_xVel);
			}
        }
		
		private function AIResetBehavior():Void
		{
			_AIIdleTimer = 120 + Std.int(Math.random() * 120);
			_AIBehavingTimer = 60;
			var newRandBehavior : Int = Std.int(Math.random() * 4);
			switch(newRandBehavior)
			{
				case 0:
					_AIBehavior = WALK_LEFT;
				case 1:
					_AIBehavior = WALK_RIGHT;
				case 2:
					_AIBehavior = JUMP_LEFT;
				case 3:
					_AIBehavior = JUMP_RIGHT;
				case 4:
					_AIBehavior = JUMP;
			}
		}
		
		private function walkerText():Array<String>
		{
			return 
			[
				"It looks so pretty up there...",
				"It's hard just to make ends meet.",
				"I wish things were the way they used to be...",
				"It's getting so expensive here.",
				"I can't believe how much this place has changed.",
				"What a dump...",
				"Times have been rough."
			];
		}
        
        /* Movement Constants */
        private static var GRAVITY : Float = 0.6;
        private static var WALL_FRICTION : Float = 1.0;
        private static var NORMAL_VELOCITY_X : Float = 3;
        private static var NORMAL_VELOCITY_Y : Float = 2;
        private static var SPRINT_VELOCITY_X : Float = 10;
        private static var SPRINT_VELOCITY_Y : Float = 6;
        private static var ACCEL : Float = 0.85;
        private static var DECEL : Float = 3;
        private static var JUMP_POWER : Float = 10;
        
        private var _position : WalkerPosition;
        private var _facing : WalkerFacing;
        private var _gamepad : Joystick;
		
		private var _AIIdleTimer:Int;
		private var _AIBehavingTimer:Int;
		private var _AIBehavior:WalkerBehavior;
		
		private var _popupText:PopupText;
        
        private var _spritemap : Spritemap;
}