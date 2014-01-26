package twogames.ui;
import com.haxepunk.Entity;
import com.haxepunk.graphics.Text;
import com.haxepunk.HXP;
/**
 * ...
 * @author jams
 */
class PopupText extends Entity
{
	private var _text			:Text;
	private var _possStrs		:Array<String>;
	private var _owner			:Entity;
	
	private var _started		:Bool;
	private var _chosenStr		:String;
	private var _strIndex		:Int;
	private var _typingWait		:Int;
	private var _strs			:Array<String>;
	private var _visibleTimer	:Int;
	
	private var _shake 			:Bool;
	
	
	public function new(owner:Entity, possStrs:Array<String>=null, shake:Bool=false)
	{
		super();
		this._owner = owner;
		this._possStrs = possStrs;
		_text = new Text("null", _owner.x - 64, _owner.y - 64, 1024, 32);
		_text.alpha = 0;
		_text.size = 16;
		graphic = _text;
		_shake = shake;
		
		//HXP.world.add(this);
		
		_strs = possStrs;
	}
	
	override public function update():Void 
	{
		super.update();
		
		if (_started)
		{
			HXP.world.bringToFront(this);
			
			if (_shake)
			{
				_text.x += (Math.random() * 4 - 2);
				_text.y += (Math.random() * 4 - 2);
			}
			
			// Turn up alpha & write string
			if (_strIndex <= _chosenStr.length)
			{
				_text.alpha = Math.min(_text.alpha + 0.01, 1);
				_text.text = _chosenStr.substr(0, _strIndex);
				if (_typingWait == 0)
				{
					++_strIndex;
					_typingWait = 2;
				}
				else
					--_typingWait;
			}
			else
			{
				// Set timer
				if (_visibleTimer == 0)
				{
					if (_text.alpha <= 0)
					{
						_started = false;
					}
					else
						_text.alpha -= 0.025;
				}
				else
					_visibleTimer -= 1;
			}
		}
		else
		{
			_text.x = _owner.x - 64;
			_text.y = _owner.y - 32;
		}
	}
	
	public function startTextRead():Void
	{
		if (_started == false)
		{
			_started = true;
			_chosenStr = _strs[Std.int(Math.random() * _strs.length)];
			_strIndex = 1;
			_visibleTimer = 60;
		}
	}
	
	public function privilegeMod(s:Int):Void
	{
		_text.size = s;
	}
}