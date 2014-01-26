package twogames.entities;

import com.haxepunk.HXP;
import com.haxepunk.Entity;
import com.haxepunk.Graphic;
import com.haxepunk.Mask;

/**
 * ...
 * @author jams
 */
class Player extends Entity
{
	
	public function new(x:Float=0, y:Float=0, controllingEntity) 
	{
		super(x, y);
		
		_controllingEntity = controllingEntity;
		this.type = "Player";
		setHitbox(32, 32);
		centerOrigin();
	}
	
	override public function update():Void 
	{
		super.update();
		
		x = _controllingEntity.centerX;
		y = _controllingEntity.centerY;
	}
	
	public function changeToShifter():Void
	{
		HXP.world.remove(_controllingEntity);
		_controllingEntity = new Shifter(Std.int(x), Std.int(y) - 32, true);
		HXP.world.add(_controllingEntity);
	}
	
	public function changeToFlyer():Void
	{
		HXP.world.remove(_controllingEntity);
		_controllingEntity = new Flyer(Std.int(x), Std.int(y), true);
		HXP.world.add(_controllingEntity);
	}
	
	private var _controllingEntity:GameEntity;
	
	public var Controlling(get, never):GameEntity;
	public function get_Controlling():GameEntity { return _controllingEntity; }
}