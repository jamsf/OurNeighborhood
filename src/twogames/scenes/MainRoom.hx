package twogames.scenes;

import com.haxepunk.Entity;
import com.haxepunk.HXP;
import com.haxepunk.tmx.TmxEntity;
import flash.geom.Point;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;
import com.haxepunk.graphics.Image;
import twogames.entities.Player;
import twogames.entities.Flyer;
import twogames.entities.Shifter;
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
		
		var bgImg : Image = new Image("gfx/background.png");
		bgImg.color = 0x888888;
		bgImg.scale = 1.25;
		_background = new Entity(0, 0, bgImg);
		_background.layer = 400;
		this.add(_background);
		
		// create the map
		_room = new TmxEntity("maps/newroom.tmx");
		// load layers named bottom, main, top with the appropriate tileset
		_room.loadGraphic("gfx/terrain_tileset.png", ["main"]);
		//_room.loadGraphic("gfx/terrain_tileset.png", ["terrain"]);
		// loads a grid layer named collision and sets the entity type to walls
		_room.loadMask("collide", "solid_structure");
		add(_room);
		
		addNPCS();
		var startX : Int = 18 * 32;
		var startY : Int = 54 * 32;
		
		var plr:Walker = new Walker(startX, startY, true);
		this.add(plr);
		_player = new Player(startX, startY, plr);
		this.add(_player);
		
		this.worldCamera.zoomWithAnchor( -0.2, EXTUtility.ZERO_POINT, EXTOffsetType.CENTER);
		this.worldCamera.setCurrentPosition(EXTOffsetType.CENTER, new Point(startX, startY));
	}
	
	public function addNPCS()
	{
		// Add Flyers
		var flyerXPos:Array<Int> = [ 13, 19, 46, 56, 44 ];
		var flyerYPos:Array<Int> = [ 8, 36, 29, 7, 23 ];
		for (i in 0...flyerXPos.length-1)
		{
			this.add(new Flyer((flyerXPos[i]+40) * 32, (flyerYPos[i]+20) * 32));
		}
		
		// Add Walkers
		for (j in 20...90)
		{
			if (j % 10 == 0)
				this.add(new Walker(j * 32, 43 * 32));
		}
		
		// Add Shifters
		for (k in 20...90)
		{
			if (k % 20 == 0 )
				this.add(new Shifter(k * 32, 43 * 32));
		}
	}
	
	override public function update():Void 
	{
		super.update();
		
		this.worldCamera.lerpToPosition(_player.x - (HXP.screen.width * 0.5 / worldCamera.zoom), _player.y - (HXP.screen.height * 0.5 / worldCamera.zoom));
		//this.camera.x = _player.x - (HXP.screen.width * 0.5);
		//this.camera.y = _player.y - (HXP.screen.height * 0.5);
		
		//HXP.screen.x = Std.int(_player.x);
		//HXP.screen.y = Std.int(_player.y);
		_background.x = this.worldCamera.x;
		_background.y = this.worldCamera.y;
		
		if (Input.pressed(Key.B))
			HXP.scene = new MainRoom();
	}
	
	private var _room : TmxEntity;
	private var _player : Player;
	
	private var _background:Entity;
	
	public var stageRotation : Float;
}