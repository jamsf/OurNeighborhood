package twogames.entities;

import com.haxepunk.graphics.Image;
import com.haxepunk.HXP;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;
import twogames.ui.PopupText;

import extendedhxpunk.ext.EXTMath;

/**
 * ...
 * @author jams
 */
class Flyer extends GameEntity
{

	public var FlyerText(get, never):PopupText;
	public function get_FlyerText():PopupText { return _popupText; }
	
	public function new(x:Int, y:Int, controlled:Bool = false ) 
	{
		super();
		
		this.x = x;
		this.y = y;
		_controlled = controlled;
		
		// Start movement for NPC
		if (!controlled)
		{
			_xVel = Math.random() > 0.5 ? -FLYER_VELOCITY : FLYER_VELOCITY;
			_yVel = Math.random() > 0.5 ? -FLYER_VELOCITY : FLYER_VELOCITY;
		}
		_xMaxVel = FLYER_VELOCITY + 2;
		_yMaxVel = FLYER_VELOCITY + 2;
		_accel = 0.75;
		_decel = 2;
		
		graphic = new Image("gfx/flyer.png");
		this.setHitbox(64, 64);
		
		_popupText = new PopupText(this, flyerText());
		_popupText.privilegeMod(24);
	}
	
	override public function added():Void 
	{
		super.added();
		HXP.scene.add(_popupText);
	}
	
	override public function update():Void 
	{
		if (!_controlled && this.collide("Player", x, y) != null)
			_popupText.startTextRead();
		
		updateMovement();
		
		super.update();
	}
	
	public function updateMovement():Void
	{
		// If player controlled
		if (_controlled)
		{
			// Y axis movement
			if (Input.check(Key.S) || Input.check(Key.DOWN))
			{
				if (_yVel < 0)
						_yVel += _decel;
				else
				{
					if (_yVel < _yMaxVel)
						_yVel += _accel;
					else
						_yVel = _yMaxVel;
				}
			}
			else if (Input.check(Key.W) || Input.check(Key.UP))
			{
				if (_yVel > 0)
						_yVel -= _decel;
				else
				{
					if (_yVel > -_yMaxVel)
						_yVel -= _accel;
					else
						_yVel = -_yMaxVel;
				}
			}
			else
			{
				// FRICTION
				_yVel = _yVel - Math.min(Math.abs(_yVel), _accel) * EXTMath.sgn(_yVel);
			}
			
			// X axis movement
			if (Input.check(Key.D) || Input.check(Key.RIGHT))
			{
				if (_xVel < 0)
					_xVel += _decel;
				else
				{
					if (_xVel < _xMaxVel)
						_xVel += _accel;
					else
						_xVel = _xMaxVel;
				}
			}
			else if (Input.check(Key.A) || Input.check(Key.LEFT))
			{
				if (_xVel > 0)
						_xVel -= _decel;
				else
				{
					if (_xVel > -_xMaxVel)
						_xVel -= _accel;
					else
						_xVel = -_xMaxVel;
				}
			}
			else
			{
				// FRICTION
				_xVel = _xVel - Math.min(Math.abs(_xVel), _accel) * EXTMath.sgn(_xVel);
			}
		}
		// AI Controlled
		else
		{
			AIControlMovement();
		}
	}
	
	private function AIControlMovement()
	{
		// Hit ground
		if (this.collide("solid_structure", x, y - 1) != null ||
			this.collide("solid_structure", x, y + 1) != null)
			_yVel = -_yVel;
		if (this.collide("solid_structure", x + 1, y) != null ||
			this.collide("solid_structure", x - 1, y) != null)
			_xVel = -_xVel;
	}
	
	private function flyerText():Array<String>
	{
		return 
		[
			"Wow, this neighborhood is so diverse!",
			"I love the restaurants down on the bottom!",
			"Our new home is wonderful!",
			"I'm glad to call this 'Our Neighborhood'",
			"We're building so many new things!",
			"This is the new capital for us Blues!",
			"Even the sketchy parts of our neighborhood is cool!"
		];
	}
	
	private inline static var FLYER_VELOCITY:Int = 3;
	
	private var _popupText : PopupText;
}