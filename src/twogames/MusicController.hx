package twogames;

import com.haxepunk.Sfx;
import com.haxepunk.tweens.sound.SfxFader;

/**
 * ...
 * @author Jams
 */
class MusicController 
{	
	public var bus : Sfx;
	public var rent : Sfx;
	public var marbles : Sfx;
	
	public function new() 
	{
		bus = new Sfx("music/bus.mp3");
		rent = new Sfx("music/rent.mp3");
		marbles = new Sfx("music/marbles.mp3");
	}
	
	private static var _instance : MusicController;
	
	public static var Instance(get, never):MusicController;
	public static function get_Instance():MusicController
	{
		if (_instance == null)
			_instance = new MusicController();
		return _instance;
	}
	
	public function stopAll()
	{
		bus.stop();
		rent.stop();
		marbles.stop();
	}
}