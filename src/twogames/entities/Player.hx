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
	
	private var _controllingEntity:GameEntity;
	
	public var Controlling(get, never):GameEntity;
	public function get_Controlling():GameEntity { return _controllingEntity; }
}