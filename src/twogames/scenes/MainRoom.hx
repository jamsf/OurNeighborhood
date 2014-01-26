package twogames.scenes;

import com.haxepunk.HXP;
import com.haxepunk.tmx.TmxEntity;
import flash.geom.Point;
import twogames.entities.Player;
import twogames.entities.Flyer;
import twogames.entities.Walker;

import extendedhxpunk.ext.EXTUtility;
import extendedhxpunk.ext.EXTScene;
import extendedhxpunk.ext.EXTOffsetType;

/**
 * ...
 * @author jams
 */
class MainRoom extends EXTScene
{

	public function new() 
	{
		super();
		
		// create the map
		_room = new TmxEntity("maps/mainroom.tmx");
		// load layers named bottom, main, top with the appropriate tileset
		_room.loadGraphic("gfx/tileset.png", ["main"]);
		// loads a grid layer named collision and sets the entity type to walls
		_room.loadMask("main", "solid_structure");
		add(_room);
		
		addNPCS();
		
		var walker:Walker = new Walker(550, 550, true);
		this.add(walker);
		_player = new Player(550, 550, walker);
		this.add(_player);
		
		this.worldCamera.zoomWithAnchor( -0.4, EXTUtility.ZERO_POINT, EXTOffsetType.CENTER);
		this.worldCamera.setCurrentPosition(EXTOffsetType.CENTER, new Point(550, 550));
	}
	
	public function addNPCS()
	{
		// Add Flyers
		var flyerXPos:Array<Int> = [ 13, 19, 46, 58, 76, 90, 89, 56, 44 ];
		var flyerYPos:Array<Int> = [ 8, 36, 29, 37, 31, 21, 7, 7, 23 ];
		for (i in 0...flyerXPos.length-1)
		{
			this.add(new Flyer(flyerXPos[i] * 32, flyerYPos[i] * 32));
		}
		
		// Add Walkers
		for (j in 2...65)
		{
			this.add(new Walker(j * 32, 41 * 32));
		}
	}
	
	override public function update():Void 
	{
		super.update();
		
		this.worldCamera.lerpToPosition(_player.x - (HXP.screen.width * 0.5 / worldCamera.zoom), _player.y - (HXP.screen.height * 0.5 / worldCamera.zoom));
		//this.camera.x = _player.x - (HXP.screen.width * 0.5);
		//this.camera.y = _player.y - (HXP.screen.height * 0.5);
	}
	
	private var _room : TmxEntity;
	private var _player : Player;
	
	
}