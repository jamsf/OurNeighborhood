package twogames.triggers;

import com.haxepunk.Entity;
import com.haxepunk.Graphic;
import com.haxepunk.graphics.Image;
import com.haxepunk.Mask;
import com.haxepunk.HXP;
import twogames.entities.Player;
import twogames.ui.PopupText;
import twogames.MusicController;
import twogames.entities.Flyer;

/**
 * ...
 * @author jams
 */
class ChangeToShifter extends Entity
{

	public function new(x:Float=0, y:Float=0, graphic:Graphic=null, mask:Mask=null) 
	{
		super(68*36, 30*36, graphic, mask);
		
		setHitbox(360, 64);
	}
	
	override public function update():Void 
	{
		super.update();
		
		if (this.collide("Player", x, y) != null)
		{
			var player : Player = cast(this.collide("Player", x, y), Player);
			
			if (Std.is(player.Controlling, Flyer))
				return;
			
			player.changeToShifter();
			
			var popup:PopupText = new PopupText(player, ["Congratulations! You are now Angry."]);
			HXP.scene.add(popup);
			popup.startTextRead();
			
			MusicController.Instance.bus.stop();
			MusicController.Instance.rent.loop();
			
			HXP.scene.remove(this);
			
		}
	}
	
}