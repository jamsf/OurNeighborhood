package twogames.scenes;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
import extendedhxpunk.ext.EXTScene;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;
import com.haxepunk.HXP;

/**
 * ...
 * @author jams
 */
class TitleRoom extends EXTScene
{

	public function new() 
	{
		super();
		
		_title = new Entity(0, 0, new Image("gfx/title.png"));
		this.add(_title);
	}
	
	override public function update():Void 
	{
		super.update();
		
		if (Input.pressed(Key.ANY))
			HXP.scene = new MainRoom();
	}
	
	private var _title : Entity;
}