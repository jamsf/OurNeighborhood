package twogames.entities;

import com.haxepunk.graphics.Spritemap;
import com.haxepunk.Graphic;
import com.haxepunk.graphics.Image;
import com.haxepunk.Mask;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;
import com.haxepunk.utils.Joystick;
import com.haxepunk.HXP;
import twogames.scenes.MainRoom;
import twogames.ui.PopupText;

import extendedhxpunk.ext.EXTMath;
import extendedhxpunk.ext.EXTConsole;

import twogames.entities.Shifter.ActorPosition;
import twogames.entities.Shifter.ShifterPosition;

enum ShifterFacing
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
class Shifter extends GameEntity
{
	public var gamepad(get, never):Joystick;
	public function get_gamepad():Joystick { return _gamepad; }
	
	public var Facing(get, never):ShifterFacing;
	public function get_Facing():ShifterFacing { return _facing; }
	
	public var ShifterText(get, never):PopupText;
	public function get_ShifterText():PopupText { return _popupText; }
	
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
		_relativeXVel = 0;
		_relativeYVel = 0;
		
		_controlled = controlled;
		_AIBehavingTimer = 0;
		_AIIdleTimer = 0;
		_AIBehavior = WALK_LEFT;
		_shifterPos = FLOOR;
		
		//tweak the bounding box for better feel
		_facing = ShifterFacing.LEFT;
		_gamepad = Input.joystick(0);
		
		setHitbox(64, 64);
		_spritemap = new Spritemap("gfx/shifter_spritesheet.png", 64, 64);
		
		_spritemap.add("idle", [0], 0, false);
		_spritemap.add("walk", [1,2], 6, true);
		
		//_spritemap.centerOO();
		//_spritemap.centerOrigin();
		graphic = _spritemap;
		_spritemap.play("idle");
		
		
		_popupText = new PopupText(this, shifterText(), true);
	}
	
	override public function added():Void 
	{
		super.added();
		HXP.scene.add(_popupText);
	}
	
	override public function update():Void
	{
		if (!_controlled && this.collide("Player", x, y) != null)
		{
			_popupText.startTextRead();
		}
		
		updateMovement();
		updateAnimation();
		
		super.update();
	}
	
	override private function updateAnimation():Void
	{	
		// Flip image accordingly
		if (_relativeXVel < 0 && _facing != LEFT)
		{
			var img : Image = cast(graphic, Image);
			img.flipped = true;
			_facing = ShifterFacing.LEFT;
		}
		else if (_relativeXVel > 0 && _facing != RIGHT)
		{
			var img : Image = cast(graphic, Image);
			img.flipped = false;
			_facing = ShifterFacing.RIGHT;
		}
		
		if (_relativeXVel > 0.1 || _relativeXVel < -0.1)
			_spritemap.play("walk");
		else
			_spritemap.play("idle");
	}
	
	private function updateMovement():Void
	{
		var xMovement:Float = 0;
		
		if (_controlled)
		{
			xMovement = _gamepad.getAxis(XBOX_GAMEPAD.LEFT_ANALOGUE_X);
			if (Input.check(Key.LEFT) || Input.check(Key.A)) xMovement = -1;
			if (Input.check(Key.RIGHT) || Input.check(Key.D)) xMovement = 1;
			
			if (this._position == ON_GROUND && Input.pressed(Key.E))
				shiftLeft();
			else if (this._position == ON_GROUND && Input.pressed(Key.Q))
				shiftRight();
		}
		else
		{
			// AI Defines what is pressed
			if (_AIIdleTimer < 0)
			{
				AIResetBehavior();
				if (_AIBehavior == SHIFT_LEFT) shiftLeft();
				if (_AIBehavior == SHIFT_RIGHT) shiftRight();
			}
			if (_AIBehavingTimer >= 0)
			{
				switch(_AIBehavior)
				{
					case WALK_LEFT:
						xMovement = -0.7;
					case WALK_RIGHT:
						xMovement = 0.7;
					default:
						
				}
			}
			
			--_AIBehavingTimer;
			--_AIIdleTimer;
		}
		
		// Falling
		if ((_shifterPos == FLOOR && this.collide("solid_structure", x, y + 1) != null) || 
				(_shifterPos == CEILING && this.collide("solid_structure", x, y - 1) != null) ||
				(_shifterPos == LEFT_WALL && this.collide("solid_structure", x - 1, y) != null) ||
				(_shifterPos == RIGHT_WALL && this.collide("solid_structure", x + 1, y) != null))
		{
			_position = ON_GROUND;
			_relativeYVel = 0;
		}
		else
		{
			_position = IN_AIR;
			_relativeYVel = Math.min(_relativeYVel + GRAVITY, 15);
			if ((_shifterPos == FLOOR && this.collide("solid_structure", x, y - 1) != null) || 
					(_shifterPos == CEILING && this.collide("solid_structure", x, y + 1) != null) ||
					(_shifterPos == LEFT_WALL && this.collide("solid_structure", x + 1, y) != null) ||
					(_shifterPos == RIGHT_WALL && this.collide("solid_structure", x - 1, y) != null))
				_relativeYVel = 0.3;
		}
		
		// X axis movement
		if (xMovement > 0)
		{
			// Move Right
			if (_relativeXVel < 0)
				_relativeXVel += _decel;
			else
			{
				if (_relativeXVel < _xMaxVel*xMovement)
					_relativeXVel += _accel ;
				else
					_relativeXVel = (_xMaxVel*xMovement);
			}
		}
		else if (xMovement < 0)
		{
			// Move Left
			if (_relativeXVel > 0)
				_relativeXVel -= _decel;
			else
			{
				if (_relativeXVel > (_xMaxVel*xMovement))
					_relativeXVel -= _accel;
				else
					_relativeXVel = (_xMaxVel*xMovement);
			}
		}
		else
		{
			// FRICTION
			_relativeXVel = _relativeXVel - Math.min(Math.abs(_relativeXVel), _accel) * EXTMath.sgn(_relativeXVel);
		}
		
		//EXTConsole.debug("Shifter.hx", "relYVel: " + Std.string(_relativeYVel), []);
		
		// Apply relative velocity
		switch(_shifterPos)
		{
			case FLOOR:
				_xVel = _relativeXVel;
				_yVel = _relativeYVel;
			case CEILING:
				_xVel = -_relativeXVel;
				_yVel = -_relativeYVel;
			case LEFT_WALL:
				_xVel = -_relativeYVel;
				_yVel = _relativeXVel;
			case RIGHT_WALL:
				_xVel = _relativeYVel;
				_yVel = -_relativeXVel;
		}
		//EXTConsole.debug("Shifter.hx", "yVel: " + Std.string(_yVel), []);
	}
	
	private function AIResetBehavior():Void
	{
		_AIIdleTimer = 120 + Std.int(Math.random() * 120);
		_AIBehavingTimer = 60;
		var newRandBehavior : Int = Std.int(Math.random() * 3);
		switch(newRandBehavior)
		{
			case 0:
				_AIBehavior = WALK_LEFT;
			case 1:
				_AIBehavior = WALK_RIGHT;
			case 2:
				_AIBehavior = SHIFT_LEFT;
			case 3:
				_AIBehavior = SHIFT_RIGHT;
		}
	}
	
	private function shiftLeft():Void
	{
		var img:Image = cast(graphic, Image);
		img.angle -= 90;
		if (_shifterPos == FLOOR) { _shifterPos = LEFT_WALL; img.x = originX + 64; img.y = originY; }
		else if (_shifterPos == LEFT_WALL) { _shifterPos = CEILING; img.x = originX + 64; img.y = originY + 64; HXP.screen.originX = -HXP.screen.width; HXP.screen.originY = -HXP.screen.height; }
		else if (_shifterPos == CEILING) { _shifterPos = RIGHT_WALL; img.x = originX; img.y = originY + 64; }
		else if (_shifterPos == RIGHT_WALL) { _shifterPos = FLOOR; img.x = originX; img.y = originY; HXP.screen.originX = 0; HXP.screen.originY = 0; }
		/*
		if (_shifterPos == FLOOR) { _shifterPos = LEFT_WALL; setOrigin(originX, originY + 64); }
		else if (_shifterPos == LEFT_WALL) { _shifterPos = CEILING; setOrigin(originX + 64, originY); }
		else if (_shifterPos == CEILING) { _shifterPos = RIGHT_WALL; setOrigin(originX - 64, originY); }
		else if (_shifterPos == RIGHT_WALL) { _shifterPos = FLOOR; setOrigin(originX, originY - 64); }
		*/
	}
	
	private function shiftRight():Void
	{
		var img:Image = cast(graphic, Image);
		img.angle += 90;
		if (_shifterPos == CEILING) { _shifterPos = LEFT_WALL; img.x = originX + 64; img.y = originY; }
		else if (_shifterPos == RIGHT_WALL) { _shifterPos = CEILING; img.x = originX + 64; img.y = originY + 64; HXP.screen.originX = -HXP.screen.width; HXP.screen.originY = -HXP.screen.height; }
		else if (_shifterPos == FLOOR) { _shifterPos = RIGHT_WALL; img.x = originX; img.y = originY + 64; }
		else if (_shifterPos == LEFT_WALL) { _shifterPos = FLOOR; img.x = originX; img.y = originY; HXP.screen.originX = 0; HXP.screen.originY = 0; }
		/*
		if (_shifterPos == CEILING) { _shifterPos = LEFT_WALL; setOrigin(originX, originY + 64); }
		else if (_shifterPos == RIGHT_WALL) { _shifterPos = CEILING; setOrigin(originX + 64, originY); }
		else if (_shifterPos == FLOOR) { _shifterPos = RIGHT_WALL; setOrigin(originX - 64, originY); }
		else if (_shifterPos == LEFT_WALL) { _shifterPos = FLOOR; setOrigin(originX, originY - 64); }
		*/
	}
	
	private function shifterText():Array<String>
	{
		return 
		[
			"I don't like these new blue people...",
			"This neighborbood belongs to US, not THOSE BLUES!",
			"They think they're so great, flying around.",
			"Those new blues don't deserve to be here!",
			"The blues keep all the nice stuff for themselves!",
			"I've been here for 30 years! Why do I have to move?",
			"We need to get rid of those flying blues!",
			"Protest the Blues! Protest the Blues!",
			"Blues, get your yuppie restaurants out of here!",
			"That new over-priced restaurant is a disgrace!"
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
	
	private var _position : ActorPosition;
	private var _facing : ShifterFacing;
	private var _gamepad : Joystick;
	private var _shifterPos : ShifterPosition;
	
	private var _AIIdleTimer:Int;
	private var _AIBehavingTimer:Int;
	private var _AIBehavior:ShifterBehavior;
	
	private var _popupText:PopupText;
	
	private var _relativeXVel:Float;
	private var _relativeYVel:Float;
	
	private var _spritemap : Spritemap;
}