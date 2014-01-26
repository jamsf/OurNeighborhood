package twogames.entities;

import com.haxepunk.Graphic;
import com.haxepunk.Mask;
import twogames.entities.Shifters.ActorPosition;
import twogames.entities.Shifters.ShifterPosition;

enum ActorFacing
{
	LEFT;
	RIGHT;
}

enum ShifterBehavior
{
	WALK_LEFT;
	WALK_RIGHT;
	SHIFT_LEFT;
	SHIFT_RIGHT;
	JUMP;
}

enum ShifterPosition
{
	FLOOR;
	CEILING;
	LEFT_WALL;
	RIGHT_WALL;
}

enum ActorPosition
{
	ON_GROUND;
	IN_AIR;
}

/**
 * ...
 * @author jams
 */
class Shifters extends GameEntity
{
public var gamepad(get, never):Joystick;
        public function get_gamepad():Joystick { return _gamepad; }
        
        public var Facing(get, never):ActorFacing;
        public function get_Facing():ActorFacing { return _facing; }
        
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
			width = 64;
			height = 64;
			_facing = ActorFacing.LEFT;
			_gamepad = Input.joystick(0);
			
			_spritemap = new Spritemap("gfx/shifter_spritesheet.png", 32, 32);
			
			_spritemap.add("idle", [0], 0, false);
			_spritemap.add("walk", [1,2], 6, true);
			
			graphic = _spritemap;
			_spritemap.play("idle");
        }
        
        override public function added():Void 
        {
            super.added();
        }
        
        override public function update():Void
        {
			updateMovement();
			updateAnimation();
			
			super.update();
        }
        
        override private function updateAnimation():Void
        {	
			// Flip image accordingly
			if (_xVel < 0 && _facing != LEFT)
			{
				var img : Image = cast(graphic, Image);
				img.flipped = true;
				_facing = ActorFacing.LEFT;
			}
			else if (_xVel > 0 && _facing != RIGHT)
			{
				var img : Image = cast(graphic, Image);
				img.flipped = false;
				_facing = ActorFacing.RIGHT;
			}
			
			if (_xVel > 0.1 || _xVel < -0.1)
				_spritemap.play("walk");
			else
				_spritemap.play("idle");
        }
        
        private function updateMovement():Void
        {
			var relativeYPos : Float;
			var relativeXPos : Float;
			
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
			
			// Falling
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
			
			// Apply relative velocity
			switch(_shifterPos)
			{
				case FLOOR:
					_xVel = relativeXPos;
					_yPos = relativeYPos;
				case CEILING:
					_xVel = -relativeXPos;
					_yVel = -relativeYPos;
				case LEFT_WALL:
					_xVel = -relativeYPos;
					_yVel = relativeXPos;
				case RIGHT_WALL:
					_xVel = relativeYPos;
					_yVel = -relativeXPos
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
        
        private var _position : ActorPosition;
        private var _facing : ActorFacing;
        private var _gamepad : Joystick;
		private var _shifterPos : ShifterPosition;
		
		private var _AIIdleTimer:Int;
		private var _AIBehavingTimer:Int;
		private var _AIBehavior:WalkerBehavior;
        
        private var _spritemap : Spritemap;
}