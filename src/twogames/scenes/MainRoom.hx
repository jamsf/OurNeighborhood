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
import twogames.triggers.ChangeToShifter;
import twogames.MusicController;
import twogames.ui.FadeIn;

import extendedhxpunk.ext.EXTUtility;
import extendedhxpunk.ext.EXTScene;
import extendedhxpunk.ext.EXTOffsetType;

/**
 * ...
 * @author jams
 */
class MainRoom extends EXTScene
{

	public function new(p:Bool=false) 
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
		
		var startX : Int = 18 * 32;
		var startY : Int = 54 * 32;
		
		var privileged : Bool = false;
		if (p) privileged = true;
		else
		{
			var lifechance : Float = Math.random();
			privileged = lifechance >= 0.95 ? true : false;
		}
		
		addNPCS(privileged);
		MusicController.Instance.stopAll();
		
		// Add player
		if (privileged)
		{
			var pvg:Flyer = new Flyer(startX, startY, true);
			this.add(pvg);
			_player = new Player(startX, startY, pvg);
			this.add(_player);
			MusicController.Instance.marbles.loop();
		}
		else
		{
			var plr:Walker = new Walker(startX, startY, true);
			this.add(plr);
			_player = new Player(startX, startY, plr);
			this.add(_player);
			// Play intro music
			MusicController.Instance.bus.loop();
		}
		
		// Add Triggers
		this.add(new ChangeToShifter());
		
		//this.worldCamera.zoomWithAnchor( -0.2, EXTUtility.ZERO_POINT, EXTOffsetType.CENTER);
		this.worldCamera.setCurrentPosition(EXTOffsetType.CENTER, new Point(startX, startY));
		
		// Add fade in
		this.add(new FadeIn());
	}
	
	public function addNPCS(privileged:Bool)
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
			if (j % 15 == 0)
			{
				var walker : Walker = new Walker(j * 32, 52 * 32);
				this.add(walker);
				if (privileged)
					walker.WalkerText.privilegeMod(8);
			}
		}
		
		// Add Shifters
		for (k in 20...90)
		{
			if (k % 25 == 0 )
			{
				var shifter : Shifter = new Shifter(k * 32, 52 * 32);
				this.add(shifter);
				if (privileged)
					shifter.ShifterText.privilegeMod(8);
			}
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
			
		if (Input.pressed(Key.P))
			HXP.scene = new MainRoom(true);
	}
	
	private var _room : TmxEntity;
	private var _player : Player;
	
	private var _background:Entity;
	
	public var stageRotation : Float;
}