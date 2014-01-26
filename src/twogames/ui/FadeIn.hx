package twogames.ui;

import com.haxepunk.Entity;
import com.haxepunk.Graphic;
import com.haxepunk.graphics.Image;
import com.haxepunk.Mask;

import com.haxepunk.HXP;

/**
 * ...
 * @author jams
 */
class FadeIn extends Entity
{
	private var fading		:Bool;
	private var fadeTimer	:Int;
	private var nextWorld	:String;
	
	private var img : Image;
	
	public function new() 
	{
		super();
		img = new Image("gfx/spr_black.png");
		graphic = img;
		img.scale = 1000;
		img.alpha = 1;
		fadeTimer = 120;
	}
	
	override public function update():Void 
	{
		super.update();
		
		x = HXP.scene.camera.x;
		y = HXP.scene.camera.y;
		
		--fadeTimer;
		img.alpha = fadeTimer / 120;
		
		if (fadeTimer == 0)
		{
			HXP.scene.remove(this);
		}
	}
}