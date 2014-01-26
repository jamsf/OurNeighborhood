package twogames.entities;

import com.haxepunk.graphics.Image;
import com.haxepunk.HXP;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;

import extendedhxpunk.ext.EXTMath;

/**
 * ...
 * @author jams
 */
class Flyer extends GameEntity
{

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
		_xMaxVel = FLYER_VELOCITY;
		_yMaxVel = FLYER_VELOCITY;
		_accel = 0.75;
		_decel = 2;
		
		graphic = new Image("gfx/flyer.png");
		this.setHitbox(64, 64);
	}
	
	override public function update():Void 
	{
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
	
	private inline static var FLYER_VELOCITY:Int = 5;
	
}