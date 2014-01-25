#ifndef INCLUDED_com_haxepunk_utils_Input
#define INCLUDED_com_haxepunk_utils_Input

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,haxepunk,utils,Input)
HX_DECLARE_CLASS3(com,haxepunk,utils,Joystick)
HX_DECLARE_CLASS3(com,haxepunk,utils,Touch)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,KeyboardEvent)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,events,TouchEvent)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,events,JoystickEvent)
namespace com{
namespace haxepunk{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Input_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Input_obj OBJ_;
		Input_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Input_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Input_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Input"); }

		static ::String keyString;
		static int lastKey;
		static bool mouseDown;
		static bool mouseUp;
		static bool mousePressed;
		static bool mouseReleased;
		static bool rightMouseDown;
		static bool rightMouseUp;
		static bool rightMousePressed;
		static bool rightMouseReleased;
		static bool middleMouseDown;
		static bool middleMouseUp;
		static bool middleMousePressed;
		static bool middleMouseReleased;
		static bool mouseWheel;
		static bool multiTouchSupported;
		static int get_mouseWheelDelta( );
		static Dynamic get_mouseWheelDelta_dyn();

		static int get_mouseX( );
		static Dynamic get_mouseX_dyn();

		static int get_mouseY( );
		static Dynamic get_mouseY_dyn();

		static int get_mouseFlashX( );
		static Dynamic get_mouseFlashX_dyn();

		static int get_mouseFlashY( );
		static Dynamic get_mouseFlashY_dyn();

		static Void define( ::String name,Array< int > keys);
		static Dynamic define_dyn();

		static bool check( Dynamic input);
		static Dynamic check_dyn();

		static bool pressed( Dynamic input);
		static Dynamic pressed_dyn();

		static bool released( Dynamic input);
		static Dynamic released_dyn();

		static Void touchPoints( Dynamic touchCallback);
		static Dynamic touchPoints_dyn();

		static ::haxe::ds::IntMap get_touches( );
		static Dynamic get_touches_dyn();

		static ::com::haxepunk::utils::Joystick joystick( int id);
		static Dynamic joystick_dyn();

		static int get_joysticks( );
		static Dynamic get_joysticks_dyn();

		static Void enable( );
		static Dynamic enable_dyn();

		static Void update( );
		static Dynamic update_dyn();

		static Void onKeyDown( ::flash::events::KeyboardEvent e);
		static Dynamic onKeyDown_dyn();

		static Void onKeyUp( ::flash::events::KeyboardEvent e);
		static Dynamic onKeyUp_dyn();

		static int keyCode( ::flash::events::KeyboardEvent e);
		static Dynamic keyCode_dyn();

		static Void onMouseDown( ::flash::events::MouseEvent e);
		static Dynamic onMouseDown_dyn();

		static Void onMouseUp( ::flash::events::MouseEvent e);
		static Dynamic onMouseUp_dyn();

		static Void onMouseWheel( ::flash::events::MouseEvent e);
		static Dynamic onMouseWheel_dyn();

		static Void onMiddleMouseDown( ::flash::events::MouseEvent e);
		static Dynamic onMiddleMouseDown_dyn();

		static Void onMiddleMouseUp( ::flash::events::MouseEvent e);
		static Dynamic onMiddleMouseUp_dyn();

		static Void onRightMouseDown( ::flash::events::MouseEvent e);
		static Dynamic onRightMouseDown_dyn();

		static Void onRightMouseUp( ::flash::events::MouseEvent e);
		static Dynamic onRightMouseUp_dyn();

		static Void onTouchBegin( ::flash::events::TouchEvent e);
		static Dynamic onTouchBegin_dyn();

		static Void onTouchMove( ::flash::events::TouchEvent e);
		static Dynamic onTouchMove_dyn();

		static Void onTouchEnd( ::flash::events::TouchEvent e);
		static Dynamic onTouchEnd_dyn();

		static Void onJoyAxisMove( ::openfl::events::JoystickEvent e);
		static Dynamic onJoyAxisMove_dyn();

		static Void onJoyBallMove( ::openfl::events::JoystickEvent e);
		static Dynamic onJoyBallMove_dyn();

		static Void onJoyButtonDown( ::openfl::events::JoystickEvent e);
		static Dynamic onJoyButtonDown_dyn();

		static Void onJoyButtonUp( ::openfl::events::JoystickEvent e);
		static Dynamic onJoyButtonUp_dyn();

		static Void onJoyHatMove( ::openfl::events::JoystickEvent e);
		static Dynamic onJoyHatMove_dyn();

		static int kKeyStringMax;
		static bool _enabled;
		static int _touchNum;
		static Array< bool > _key;
		static int _keyNum;
		static Array< int > _press;
		static int _pressNum;
		static Array< int > _release;
		static int _releaseNum;
		static int _mouseWheelDelta;
		static ::haxe::ds::IntMap _touches;
		static ::haxe::ds::IntMap _joysticks;
		static ::haxe::ds::StringMap _control;
		static ::haxe::ds::StringMap _nativeCorrection;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_Input */ 
