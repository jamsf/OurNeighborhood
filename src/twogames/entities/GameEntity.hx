package twogames.entities;

import com.haxepunk.Entity;
import com.haxepunk.Graphic;
import com.haxepunk.Mask;

import extendedhxpunk.ext.EXTScene;


/**
 * ...
 * @author Jams
 */
class GameEntity extends Entity
{
	
	public function new(x:Float=0, y:Float=0, graphic:Graphic=null, mask:Mask=null) 
	{
		super(x, y, graphic, mask);
		_xVel = 0;	
		_yVel = 0;
	}
	
	override public function update():Void 
	{
		super.update();
		this.moveBy(_xVel, _yVel, ["solid_structure"], false);
		updateAnimation();
	}
	
	private function updateAnimation():Void
	{
		
	}
	
	/* Movement Variables */
	private var _xVel:Float;
	private var _yVel:Float;
	private var _xMaxVel:Float;
	private var _yMaxVel:Float;
	private var _accel:Float;
	private var _decel:Float;
	private var _onGround:Bool;
	
	private var _controlled:Bool;
}