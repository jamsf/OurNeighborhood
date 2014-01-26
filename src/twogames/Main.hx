package twogames;

import com.haxepunk.Engine;
import com.haxepunk.HXP;
import extendedhxpunk.ext.EXTConsole;
import twogames.scenes.MainRoom;

class Main extends Engine
{

	public static inline var kClearColor:Int = 0x000000;
	public static inline var kProjectName:String = "GGJ";

	function new()
	{
		super(GGJConstants.PLAY_SPACE_WIDTH, GGJConstants.PLAY_SPACE_HEIGHT, GGJConstants.FPS, false);
	}

	override public function init()
	{
		EXTConsole.initializeConsole();
		HXP.screen.color = kClearColor;
		HXP.screen.scale = 1;
		
		HXP.scene = new MainRoom();
	}
	
	override public function update():Void
	{
		super.update();
#if debug
		EXTConsole.update();
#end
	}
	
	public static function main()
	{
		var app = new Main();
	}

}