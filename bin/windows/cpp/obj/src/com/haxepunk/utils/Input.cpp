#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_JoyButtonState
#include <com/haxepunk/utils/JoyButtonState.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Joystick
#include <com/haxepunk/utils/Joystick.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Touch
#include <com/haxepunk/utils/Touch.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_ui_Multitouch
#include <flash/ui/Multitouch.h>
#endif
#ifndef INCLUDED_flash_ui_MultitouchInputMode
#include <flash/ui/MultitouchInputMode.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_events_JoystickEvent
#include <openfl/events/JoystickEvent.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Input_obj::__construct()
{
	return null();
}

Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new()
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct();
	return result;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct();
	return result;}

::String Input_obj::keyString;

int Input_obj::lastKey;

bool Input_obj::mouseDown;

bool Input_obj::mouseUp;

bool Input_obj::mousePressed;

bool Input_obj::mouseReleased;

bool Input_obj::rightMouseDown;

bool Input_obj::rightMouseUp;

bool Input_obj::rightMousePressed;

bool Input_obj::rightMouseReleased;

bool Input_obj::middleMouseDown;

bool Input_obj::middleMouseUp;

bool Input_obj::middleMousePressed;

bool Input_obj::middleMouseReleased;

bool Input_obj::mouseWheel;

bool Input_obj::multiTouchSupported;

int Input_obj::get_mouseWheelDelta( ){
	HX_STACK_PUSH("Input::get_mouseWheelDelta","com/haxepunk/utils/Input.hx",100);
	HX_STACK_LINE(101)
	if ((::com::haxepunk::utils::Input_obj::mouseWheel)){
		HX_STACK_LINE(103)
		::com::haxepunk::utils::Input_obj::mouseWheel = false;
		HX_STACK_LINE(104)
		return ::com::haxepunk::utils::Input_obj::_mouseWheelDelta;
	}
	HX_STACK_LINE(106)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseWheelDelta,return )

int Input_obj::get_mouseX( ){
	HX_STACK_PUSH("Input::get_mouseX","com/haxepunk/utils/Input.hx",114);
	HX_STACK_LINE(114)
	return ::com::haxepunk::HXP_obj::screen->get_mouseX();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseX,return )

int Input_obj::get_mouseY( ){
	HX_STACK_PUSH("Input::get_mouseY","com/haxepunk/utils/Input.hx",123);
	HX_STACK_LINE(123)
	return ::com::haxepunk::HXP_obj::screen->get_mouseY();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseY,return )

int Input_obj::get_mouseFlashX( ){
	HX_STACK_PUSH("Input::get_mouseFlashX","com/haxepunk/utils/Input.hx",132);
	HX_STACK_LINE(132)
	return ::Std_obj::_int(::com::haxepunk::HXP_obj::stage->get_mouseX());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseFlashX,return )

int Input_obj::get_mouseFlashY( ){
	HX_STACK_PUSH("Input::get_mouseFlashY","com/haxepunk/utils/Input.hx",141);
	HX_STACK_LINE(141)
	return ::Std_obj::_int(::com::haxepunk::HXP_obj::stage->get_mouseY());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseFlashY,return )

Void Input_obj::define( ::String name,Array< int > keys){
{
		HX_STACK_PUSH("Input::define","com/haxepunk/utils/Input.hx",151);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(keys,"keys");
		HX_STACK_LINE(151)
		::com::haxepunk::utils::Input_obj::_control->set(name,keys);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Input_obj,define,(void))

bool Input_obj::check( Dynamic input){
	HX_STACK_PUSH("Input::check","com/haxepunk/utils/Input.hx",161);
	HX_STACK_ARG(input,"input");
	HX_STACK_LINE(162)
	if ((::Std_obj::is(input,hx::ClassOf< ::String >()))){
		struct _Function_2_1{
			inline static bool Block( Dynamic &input){
				HX_STACK_PUSH("*::closure","com/haxepunk/utils/Input.hx",165);
				{
					HX_STACK_LINE(165)
					::String key = input;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(165)
					return ::com::haxepunk::utils::Input_obj::_control->exists(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(165)
		if ((!(_Function_2_1::Block(input)))){
			HX_STACK_LINE(167)
			::com::haxepunk::HXP_obj::log(((HX_CSTRING("Input '") + ::Std_obj::string(input)) + HX_CSTRING("' not defined")));
			HX_STACK_LINE(168)
			return false;
		}
		struct _Function_2_2{
			inline static Array< int > Block( Dynamic &input){
				HX_STACK_PUSH("*::closure","com/haxepunk/utils/Input.hx",171);
				{
					HX_STACK_LINE(171)
					::String key = input;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(171)
					return ::com::haxepunk::utils::Input_obj::_control->get(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(171)
		Array< int > v = _Function_2_2::Block(input);		HX_STACK_VAR(v,"v");
		int i = v->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(173)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(175)
			if (((v->__get(i) < (int)0))){
				HX_STACK_LINE(177)
				if (((::com::haxepunk::utils::Input_obj::_keyNum > (int)0))){
					HX_STACK_LINE(177)
					return true;
				}
				HX_STACK_LINE(178)
				continue;
			}
			HX_STACK_LINE(180)
			if (((::com::haxepunk::utils::Input_obj::_key->__get(v->__get(i)) == true))){
				HX_STACK_LINE(180)
				return true;
			}
		}
		HX_STACK_LINE(182)
		return false;
	}
	HX_STACK_LINE(184)
	return (  (((input < (int)0))) ? bool((::com::haxepunk::utils::Input_obj::_keyNum > (int)0)) : bool(::com::haxepunk::utils::Input_obj::_key->__get(input)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,check,return )

bool Input_obj::pressed( Dynamic input){
	HX_STACK_PUSH("Input::pressed","com/haxepunk/utils/Input.hx",193);
	HX_STACK_ARG(input,"input");
	struct _Function_1_1{
		inline static bool Block( Dynamic &input){
			HX_STACK_PUSH("*::closure","com/haxepunk/utils/Input.hx",194);
			{
				HX_STACK_LINE(194)
				::String key = input;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(194)
				return ::com::haxepunk::utils::Input_obj::_control->exists(key);
			}
			return null();
		}
	};
	HX_STACK_LINE(194)
	if (((bool(::Std_obj::is(input,hx::ClassOf< ::String >())) && bool(_Function_1_1::Block(input))))){
		struct _Function_2_1{
			inline static Array< int > Block( Dynamic &input){
				HX_STACK_PUSH("*::closure","com/haxepunk/utils/Input.hx",196);
				{
					HX_STACK_LINE(196)
					::String key = input;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(196)
					return ::com::haxepunk::utils::Input_obj::_control->get(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(196)
		Array< int > v = _Function_2_1::Block(input);		HX_STACK_VAR(v,"v");
		int i = v->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(198)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(199)
			if (((  (((v->__get(i) < (int)0))) ? bool((::com::haxepunk::utils::Input_obj::_pressNum != (int)0)) : bool((::Lambda_obj::indexOf(::com::haxepunk::utils::Input_obj::_press,v->__get(i)) >= (int)0)) ))){
				HX_STACK_LINE(200)
				return true;
			}
		}
		HX_STACK_LINE(202)
		return false;
	}
	struct _Function_1_2{
		inline static int Block( Dynamic &input){
			HX_STACK_PUSH("*::closure","com/haxepunk/utils/Input.hx",204);
			{
				HX_STACK_LINE(204)
				int v = input;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(204)
				return ::Lambda_obj::indexOf(::com::haxepunk::utils::Input_obj::_press,v);
			}
			return null();
		}
	};
	HX_STACK_LINE(204)
	return (  (((input < (int)0))) ? bool((::com::haxepunk::utils::Input_obj::_pressNum != (int)0)) : bool((_Function_1_2::Block(input) >= (int)0)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,pressed,return )

bool Input_obj::released( Dynamic input){
	HX_STACK_PUSH("Input::released","com/haxepunk/utils/Input.hx",213);
	HX_STACK_ARG(input,"input");
	HX_STACK_LINE(214)
	if ((::Std_obj::is(input,hx::ClassOf< ::String >()))){
		struct _Function_2_1{
			inline static Array< int > Block( Dynamic &input){
				HX_STACK_PUSH("*::closure","com/haxepunk/utils/Input.hx",216);
				{
					HX_STACK_LINE(216)
					::String key = input;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(216)
					return ::com::haxepunk::utils::Input_obj::_control->get(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(216)
		Array< int > v = _Function_2_1::Block(input);		HX_STACK_VAR(v,"v");
		int i = v->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(218)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(219)
			if (((  (((v->__get(i) < (int)0))) ? bool((::com::haxepunk::utils::Input_obj::_releaseNum != (int)0)) : bool((::Lambda_obj::indexOf(::com::haxepunk::utils::Input_obj::_release,v->__get(i)) >= (int)0)) ))){
				HX_STACK_LINE(220)
				return true;
			}
		}
		HX_STACK_LINE(222)
		return false;
	}
	struct _Function_1_1{
		inline static int Block( Dynamic &input){
			HX_STACK_PUSH("*::closure","com/haxepunk/utils/Input.hx",224);
			{
				HX_STACK_LINE(224)
				int v = input;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(224)
				return ::Lambda_obj::indexOf(::com::haxepunk::utils::Input_obj::_release,v);
			}
			return null();
		}
	};
	HX_STACK_LINE(224)
	return (  (((input < (int)0))) ? bool((::com::haxepunk::utils::Input_obj::_releaseNum != (int)0)) : bool((_Function_1_1::Block(input) >= (int)0)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,released,return )

Void Input_obj::touchPoints( Dynamic touchCallback){
{
		HX_STACK_PUSH("Input::touchPoints","com/haxepunk/utils/Input.hx",228);
		HX_STACK_ARG(touchCallback,"touchCallback");
		HX_STACK_LINE(228)
		for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Touch > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Touch >(::com::haxepunk::utils::Input_obj::_touches->iterator());  __it->hasNext(); ){
			::com::haxepunk::utils::Touch touch = __it->next();
			touchCallback(touch).Cast< Void >();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,touchPoints,(void))

::haxe::ds::IntMap Input_obj::get_touches( ){
	HX_STACK_PUSH("Input::get_touches","com/haxepunk/utils/Input.hx",237);
	HX_STACK_LINE(237)
	return ::com::haxepunk::utils::Input_obj::_touches;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_touches,return )

::com::haxepunk::utils::Joystick Input_obj::joystick( int id){
	HX_STACK_PUSH("Input::joystick","com/haxepunk/utils/Input.hx",249);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(250)
	::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::_joysticks->get(id);		HX_STACK_VAR(joy,"joy");
	HX_STACK_LINE(251)
	if (((joy == null()))){
		HX_STACK_LINE(253)
		joy = ::com::haxepunk::utils::Joystick_obj::__new();
		HX_STACK_LINE(254)
		::com::haxepunk::utils::Input_obj::_joysticks->set(id,joy);
	}
	HX_STACK_LINE(256)
	return joy;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,joystick,return )

int Input_obj::get_joysticks( ){
	HX_STACK_PUSH("Input::get_joysticks","com/haxepunk/utils/Input.hx",264);
	HX_STACK_LINE(265)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(266)
	for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Joystick > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Joystick >(::com::haxepunk::utils::Input_obj::_joysticks->iterator());  __it->hasNext(); ){
		::com::haxepunk::utils::Joystick joystick = __it->next();
		if ((joystick->get_connected())){
			HX_STACK_LINE(269)
			hx::AddEq(count,(int)1);
		}
;
	}
	HX_STACK_LINE(273)
	return count;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_joysticks,return )

Void Input_obj::enable( ){
{
		HX_STACK_PUSH("Input::enable","com/haxepunk/utils/Input.hx",280);
		HX_STACK_LINE(280)
		if (((bool(!(::com::haxepunk::utils::Input_obj::_enabled)) && bool((::com::haxepunk::HXP_obj::stage != null()))))){
			HX_STACK_LINE(283)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,::com::haxepunk::utils::Input_obj::onKeyDown_dyn(),false,(int)2,null());
			HX_STACK_LINE(284)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,::com::haxepunk::utils::Input_obj::onKeyUp_dyn(),false,(int)2,null());
			HX_STACK_LINE(285)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,::com::haxepunk::utils::Input_obj::onMouseDown_dyn(),false,(int)2,null());
			HX_STACK_LINE(286)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,::com::haxepunk::utils::Input_obj::onMouseUp_dyn(),false,(int)2,null());
			HX_STACK_LINE(287)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_WHEEL,::com::haxepunk::utils::Input_obj::onMouseWheel_dyn(),false,(int)2,null());
			HX_STACK_LINE(290)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN,::com::haxepunk::utils::Input_obj::onMiddleMouseDown_dyn(),null(),(int)2,null());
			HX_STACK_LINE(291)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MIDDLE_MOUSE_UP,::com::haxepunk::utils::Input_obj::onMiddleMouseUp_dyn(),null(),(int)2,null());
			HX_STACK_LINE(292)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::RIGHT_MOUSE_DOWN,::com::haxepunk::utils::Input_obj::onRightMouseDown_dyn(),null(),(int)2,null());
			HX_STACK_LINE(293)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::RIGHT_MOUSE_UP,::com::haxepunk::utils::Input_obj::onRightMouseUp_dyn(),null(),(int)2,null());
			HX_STACK_LINE(296)
			::com::haxepunk::utils::Input_obj::multiTouchSupported = ::flash::ui::Multitouch_obj::get_supportsTouchEvents();
			HX_STACK_LINE(297)
			if ((::com::haxepunk::utils::Input_obj::multiTouchSupported)){
				HX_STACK_LINE(299)
				::flash::ui::Multitouch_obj::set_inputMode(::flash::ui::MultitouchInputMode_obj::TOUCH_POINT);
				HX_STACK_LINE(301)
				::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,::com::haxepunk::utils::Input_obj::onTouchBegin_dyn(),null(),null(),null());
				HX_STACK_LINE(302)
				::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::TouchEvent_obj::TOUCH_MOVE,::com::haxepunk::utils::Input_obj::onTouchMove_dyn(),null(),null(),null());
				HX_STACK_LINE(303)
				::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::TouchEvent_obj::TOUCH_END,::com::haxepunk::utils::Input_obj::onTouchEnd_dyn(),null(),null(),null());
			}
			HX_STACK_LINE(307)
			::com::haxepunk::HXP_obj::stage->addEventListener(HX_CSTRING("axisMove"),::com::haxepunk::utils::Input_obj::onJoyAxisMove_dyn(),null(),null(),null());
			HX_STACK_LINE(308)
			::com::haxepunk::HXP_obj::stage->addEventListener(HX_CSTRING("ballMove"),::com::haxepunk::utils::Input_obj::onJoyBallMove_dyn(),null(),null(),null());
			HX_STACK_LINE(309)
			::com::haxepunk::HXP_obj::stage->addEventListener(HX_CSTRING("buttonDown"),::com::haxepunk::utils::Input_obj::onJoyButtonDown_dyn(),null(),null(),null());
			HX_STACK_LINE(310)
			::com::haxepunk::HXP_obj::stage->addEventListener(HX_CSTRING("buttonUp"),::com::haxepunk::utils::Input_obj::onJoyButtonUp_dyn(),null(),null(),null());
			HX_STACK_LINE(311)
			::com::haxepunk::HXP_obj::stage->addEventListener(HX_CSTRING("hatMove"),::com::haxepunk::utils::Input_obj::onJoyHatMove_dyn(),null(),null(),null());
			HX_STACK_LINE(315)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_64"),(int)45);
			HX_STACK_LINE(316)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_65"),(int)35);
			HX_STACK_LINE(317)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_66"),(int)40);
			HX_STACK_LINE(318)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_67"),(int)34);
			HX_STACK_LINE(319)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_68"),(int)37);
			HX_STACK_LINE(320)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_69"),(int)-1);
			HX_STACK_LINE(321)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_70"),(int)39);
			HX_STACK_LINE(322)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_71"),(int)36);
			HX_STACK_LINE(323)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_72"),(int)38);
			HX_STACK_LINE(324)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_73"),(int)33);
			HX_STACK_LINE(325)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_266"),(int)46);
			HX_STACK_LINE(326)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("123_222"),(int)219);
			HX_STACK_LINE(327)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("125_187"),(int)221);
			HX_STACK_LINE(328)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("126_233"),(int)192);
			HX_STACK_LINE(330)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_80"),(int)112);
			HX_STACK_LINE(331)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_81"),(int)113);
			HX_STACK_LINE(332)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_82"),(int)114);
			HX_STACK_LINE(333)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_83"),(int)115);
			HX_STACK_LINE(334)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_84"),(int)116);
			HX_STACK_LINE(335)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_85"),(int)117);
			HX_STACK_LINE(336)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_86"),(int)118);
			HX_STACK_LINE(337)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_87"),(int)119);
			HX_STACK_LINE(338)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_88"),(int)120);
			HX_STACK_LINE(339)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_89"),(int)121);
			HX_STACK_LINE(340)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("0_90"),(int)122);
			HX_STACK_LINE(342)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("48_224"),(int)48);
			HX_STACK_LINE(343)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("49_38"),(int)49);
			HX_STACK_LINE(344)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("50_233"),(int)50);
			HX_STACK_LINE(345)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("51_34"),(int)51);
			HX_STACK_LINE(346)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("52_222"),(int)52);
			HX_STACK_LINE(347)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("53_40"),(int)53);
			HX_STACK_LINE(348)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("54_189"),(int)54);
			HX_STACK_LINE(349)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("55_232"),(int)55);
			HX_STACK_LINE(350)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("56_95"),(int)56);
			HX_STACK_LINE(351)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("57_231"),(int)57);
			HX_STACK_LINE(353)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("48_64"),(int)96);
			HX_STACK_LINE(354)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("49_65"),(int)97);
			HX_STACK_LINE(355)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("50_66"),(int)98);
			HX_STACK_LINE(356)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("51_67"),(int)99);
			HX_STACK_LINE(357)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("52_68"),(int)100);
			HX_STACK_LINE(358)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("53_69"),(int)101);
			HX_STACK_LINE(359)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("54_70"),(int)102);
			HX_STACK_LINE(360)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("55_71"),(int)103);
			HX_STACK_LINE(361)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("56_72"),(int)104);
			HX_STACK_LINE(362)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("57_73"),(int)105);
			HX_STACK_LINE(363)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("42_268"),(int)106);
			HX_STACK_LINE(364)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("43_270"),(int)107);
			HX_STACK_LINE(366)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("45_269"),(int)109);
			HX_STACK_LINE(367)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("46_266"),(int)110);
			HX_STACK_LINE(368)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("44_266"),(int)110);
			HX_STACK_LINE(369)
			::com::haxepunk::utils::Input_obj::_nativeCorrection->set(HX_CSTRING("47_267"),(int)111);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,enable,(void))

Void Input_obj::update( ){
{
		HX_STACK_PUSH("Input::update","com/haxepunk/utils/Input.hx",378);
		HX_STACK_LINE(379)
		while((((::com::haxepunk::utils::Input_obj::_pressNum)-- > (int)-1))){
			HX_STACK_LINE(379)
			::com::haxepunk::utils::Input_obj::_press[::com::haxepunk::utils::Input_obj::_pressNum] = (int)-1;
		}
		HX_STACK_LINE(380)
		::com::haxepunk::utils::Input_obj::_pressNum = (int)0;
		HX_STACK_LINE(381)
		while((((::com::haxepunk::utils::Input_obj::_releaseNum)-- > (int)-1))){
			HX_STACK_LINE(381)
			::com::haxepunk::utils::Input_obj::_release[::com::haxepunk::utils::Input_obj::_releaseNum] = (int)-1;
		}
		HX_STACK_LINE(382)
		::com::haxepunk::utils::Input_obj::_releaseNum = (int)0;
		HX_STACK_LINE(383)
		if ((::com::haxepunk::utils::Input_obj::mousePressed)){
			HX_STACK_LINE(383)
			::com::haxepunk::utils::Input_obj::mousePressed = false;
		}
		HX_STACK_LINE(384)
		if ((::com::haxepunk::utils::Input_obj::mouseReleased)){
			HX_STACK_LINE(384)
			::com::haxepunk::utils::Input_obj::mouseReleased = false;
		}
		HX_STACK_LINE(387)
		if ((::com::haxepunk::utils::Input_obj::middleMousePressed)){
			HX_STACK_LINE(387)
			::com::haxepunk::utils::Input_obj::middleMousePressed = false;
		}
		HX_STACK_LINE(388)
		if ((::com::haxepunk::utils::Input_obj::middleMouseReleased)){
			HX_STACK_LINE(388)
			::com::haxepunk::utils::Input_obj::middleMouseReleased = false;
		}
		HX_STACK_LINE(389)
		if ((::com::haxepunk::utils::Input_obj::rightMousePressed)){
			HX_STACK_LINE(389)
			::com::haxepunk::utils::Input_obj::rightMousePressed = false;
		}
		HX_STACK_LINE(390)
		if ((::com::haxepunk::utils::Input_obj::rightMouseReleased)){
			HX_STACK_LINE(390)
			::com::haxepunk::utils::Input_obj::rightMouseReleased = false;
		}
		HX_STACK_LINE(394)
		for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Joystick > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Joystick >(::com::haxepunk::utils::Input_obj::_joysticks->iterator());  __it->hasNext(); ){
			::com::haxepunk::utils::Joystick joystick = __it->next();
			joystick->update();
		}
		HX_STACK_LINE(396)
		if ((::com::haxepunk::utils::Input_obj::multiTouchSupported)){
			HX_STACK_LINE(397)
			for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Touch > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Touch >(::com::haxepunk::utils::Input_obj::_touches->iterator());  __it->hasNext(); ){
				::com::haxepunk::utils::Touch touch = __it->next();
				touch->update();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,update,(void))

Void Input_obj::onKeyDown( ::flash::events::KeyboardEvent e){
{
		HX_STACK_PUSH("Input::onKeyDown","com/haxepunk/utils/Input.hx",403);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(404)
		int code = ::com::haxepunk::utils::Input_obj::keyCode(e);		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(405)
		if (((code == (int)-1))){
			HX_STACK_LINE(406)
			return null();
		}
		HX_STACK_LINE(408)
		::com::haxepunk::utils::Input_obj::lastKey = code;
		HX_STACK_LINE(410)
		if (((code == (int)8))){
			HX_STACK_LINE(410)
			::com::haxepunk::utils::Input_obj::keyString = ::com::haxepunk::utils::Input_obj::keyString.substr((int)0,(::com::haxepunk::utils::Input_obj::keyString.length - (int)1));
		}
		else{
			HX_STACK_LINE(411)
			if (((bool((bool((bool((code > (int)47)) && bool((code < (int)58)))) || bool((bool((code > (int)64)) && bool((code < (int)91)))))) || bool((code == (int)32))))){
				HX_STACK_LINE(413)
				if (((::com::haxepunk::utils::Input_obj::keyString.length > (int)100))){
					HX_STACK_LINE(413)
					::com::haxepunk::utils::Input_obj::keyString = ::com::haxepunk::utils::Input_obj::keyString.substr((int)1,null());
				}
				HX_STACK_LINE(414)
				::String _char = ::String::fromCharCode(code);		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(416)
				if (((e->shiftKey != ::com::haxepunk::utils::Input_obj::check((int)20)))){
					HX_STACK_LINE(417)
					_char = _char.toUpperCase();
				}
				else{
					HX_STACK_LINE(418)
					_char = _char.toLowerCase();
				}
				HX_STACK_LINE(420)
				hx::AddEq(::com::haxepunk::utils::Input_obj::keyString,_char);
			}
		}
		HX_STACK_LINE(423)
		if ((!(::com::haxepunk::utils::Input_obj::_key->__get(code)))){
			HX_STACK_LINE(425)
			::com::haxepunk::utils::Input_obj::_key[code] = true;
			HX_STACK_LINE(426)
			(::com::haxepunk::utils::Input_obj::_keyNum)++;
			HX_STACK_LINE(427)
			::com::haxepunk::utils::Input_obj::_press[(::com::haxepunk::utils::Input_obj::_pressNum)++] = code;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onKeyDown,(void))

Void Input_obj::onKeyUp( ::flash::events::KeyboardEvent e){
{
		HX_STACK_PUSH("Input::onKeyUp","com/haxepunk/utils/Input.hx",432);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(433)
		int code = ::com::haxepunk::utils::Input_obj::keyCode(e);		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(434)
		if (((code == (int)-1))){
			HX_STACK_LINE(435)
			return null();
		}
		HX_STACK_LINE(437)
		if ((::com::haxepunk::utils::Input_obj::_key->__get(code))){
			HX_STACK_LINE(439)
			::com::haxepunk::utils::Input_obj::_key[code] = false;
			HX_STACK_LINE(440)
			(::com::haxepunk::utils::Input_obj::_keyNum)--;
			HX_STACK_LINE(441)
			::com::haxepunk::utils::Input_obj::_release[(::com::haxepunk::utils::Input_obj::_releaseNum)++] = code;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onKeyUp,(void))

int Input_obj::keyCode( ::flash::events::KeyboardEvent e){
	HX_STACK_PUSH("Input::keyCode","com/haxepunk/utils/Input.hx",446);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(450)
	Dynamic code = ::com::haxepunk::utils::Input_obj::_nativeCorrection->get(((e->charCode + HX_CSTRING("_")) + e->keyCode));		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(452)
	if (((code == null()))){
		HX_STACK_LINE(453)
		return e->keyCode;
	}
	else{
		HX_STACK_LINE(455)
		return code;
	}
	HX_STACK_LINE(452)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keyCode,return )

Void Input_obj::onMouseDown( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onMouseDown","com/haxepunk/utils/Input.hx",460);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(460)
		if ((!(::com::haxepunk::utils::Input_obj::mouseDown))){
			HX_STACK_LINE(463)
			::com::haxepunk::utils::Input_obj::mouseDown = true;
			HX_STACK_LINE(464)
			::com::haxepunk::utils::Input_obj::mouseUp = false;
			HX_STACK_LINE(465)
			::com::haxepunk::utils::Input_obj::mousePressed = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseDown,(void))

Void Input_obj::onMouseUp( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onMouseUp","com/haxepunk/utils/Input.hx",470);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(471)
		::com::haxepunk::utils::Input_obj::mouseDown = false;
		HX_STACK_LINE(472)
		::com::haxepunk::utils::Input_obj::mouseUp = true;
		HX_STACK_LINE(473)
		::com::haxepunk::utils::Input_obj::mouseReleased = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseUp,(void))

Void Input_obj::onMouseWheel( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onMouseWheel","com/haxepunk/utils/Input.hx",477);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(478)
		::com::haxepunk::utils::Input_obj::mouseWheel = true;
		HX_STACK_LINE(479)
		::com::haxepunk::utils::Input_obj::_mouseWheelDelta = e->delta;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseWheel,(void))

Void Input_obj::onMiddleMouseDown( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onMiddleMouseDown","com/haxepunk/utils/Input.hx",484);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(484)
		if ((!(::com::haxepunk::utils::Input_obj::middleMouseDown))){
			HX_STACK_LINE(487)
			::com::haxepunk::utils::Input_obj::middleMouseDown = true;
			HX_STACK_LINE(488)
			::com::haxepunk::utils::Input_obj::middleMouseUp = false;
			HX_STACK_LINE(489)
			::com::haxepunk::utils::Input_obj::middleMousePressed = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMiddleMouseDown,(void))

Void Input_obj::onMiddleMouseUp( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onMiddleMouseUp","com/haxepunk/utils/Input.hx",494);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(495)
		::com::haxepunk::utils::Input_obj::middleMouseDown = false;
		HX_STACK_LINE(496)
		::com::haxepunk::utils::Input_obj::middleMouseUp = true;
		HX_STACK_LINE(497)
		::com::haxepunk::utils::Input_obj::middleMouseReleased = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMiddleMouseUp,(void))

Void Input_obj::onRightMouseDown( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onRightMouseDown","com/haxepunk/utils/Input.hx",501);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(501)
		if ((!(::com::haxepunk::utils::Input_obj::rightMouseDown))){
			HX_STACK_LINE(504)
			::com::haxepunk::utils::Input_obj::rightMouseDown = true;
			HX_STACK_LINE(505)
			::com::haxepunk::utils::Input_obj::rightMouseUp = false;
			HX_STACK_LINE(506)
			::com::haxepunk::utils::Input_obj::rightMousePressed = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onRightMouseDown,(void))

Void Input_obj::onRightMouseUp( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onRightMouseUp","com/haxepunk/utils/Input.hx",511);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(512)
		::com::haxepunk::utils::Input_obj::rightMouseDown = false;
		HX_STACK_LINE(513)
		::com::haxepunk::utils::Input_obj::rightMouseUp = true;
		HX_STACK_LINE(514)
		::com::haxepunk::utils::Input_obj::rightMouseReleased = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onRightMouseUp,(void))

Void Input_obj::onTouchBegin( ::flash::events::TouchEvent e){
{
		HX_STACK_PUSH("Input::onTouchBegin","com/haxepunk/utils/Input.hx",519);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(520)
		::com::haxepunk::utils::Touch touchPoint = ::com::haxepunk::utils::Touch_obj::__new((Float(e->stageX) / Float(::com::haxepunk::HXP_obj::screen->fullScaleX)),(Float(e->stageY) / Float(::com::haxepunk::HXP_obj::screen->fullScaleY)),e->touchPointID);		HX_STACK_VAR(touchPoint,"touchPoint");
		HX_STACK_LINE(521)
		::com::haxepunk::utils::Input_obj::_touches->set(e->touchPointID,touchPoint);
		HX_STACK_LINE(522)
		hx::AddEq(::com::haxepunk::utils::Input_obj::_touchNum,(int)1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onTouchBegin,(void))

Void Input_obj::onTouchMove( ::flash::events::TouchEvent e){
{
		HX_STACK_PUSH("Input::onTouchMove","com/haxepunk/utils/Input.hx",526);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(527)
		::com::haxepunk::utils::Touch point = ::com::haxepunk::utils::Input_obj::_touches->get(e->touchPointID);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(528)
		point->x = (Float(e->stageX) / Float(::com::haxepunk::HXP_obj::screen->fullScaleX));
		HX_STACK_LINE(529)
		point->y = (Float(e->stageY) / Float(::com::haxepunk::HXP_obj::screen->fullScaleY));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onTouchMove,(void))

Void Input_obj::onTouchEnd( ::flash::events::TouchEvent e){
{
		HX_STACK_PUSH("Input::onTouchEnd","com/haxepunk/utils/Input.hx",533);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(534)
		::com::haxepunk::utils::Input_obj::_touches->remove(e->touchPointID);
		HX_STACK_LINE(535)
		hx::SubEq(::com::haxepunk::utils::Input_obj::_touchNum,(int)1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onTouchEnd,(void))

Void Input_obj::onJoyAxisMove( ::openfl::events::JoystickEvent e){
{
		HX_STACK_PUSH("Input::onJoyAxisMove","com/haxepunk/utils/Input.hx",541);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(542)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(544)
		joy->set_connected(true);
		HX_STACK_LINE(545)
		joy->axis = e->axis;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyAxisMove,(void))

Void Input_obj::onJoyBallMove( ::openfl::events::JoystickEvent e){
{
		HX_STACK_PUSH("Input::onJoyBallMove","com/haxepunk/utils/Input.hx",549);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(550)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(552)
		joy->set_connected(true);
		HX_STACK_LINE(553)
		joy->ball->x = (  (((::Math_obj::abs(e->x) < 0.15))) ? Float((int)0) : Float(e->x) );
		HX_STACK_LINE(554)
		joy->ball->y = (  (((::Math_obj::abs(e->y) < 0.15))) ? Float((int)0) : Float(e->y) );
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyBallMove,(void))

Void Input_obj::onJoyButtonDown( ::openfl::events::JoystickEvent e){
{
		HX_STACK_PUSH("Input::onJoyButtonDown","com/haxepunk/utils/Input.hx",558);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(559)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(561)
		joy->set_connected(true);
		HX_STACK_LINE(562)
		joy->buttons->set(e->id,::com::haxepunk::utils::JoyButtonState_obj::BUTTON_PRESSED);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyButtonDown,(void))

Void Input_obj::onJoyButtonUp( ::openfl::events::JoystickEvent e){
{
		HX_STACK_PUSH("Input::onJoyButtonUp","com/haxepunk/utils/Input.hx",566);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(567)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(569)
		joy->set_connected(true);
		HX_STACK_LINE(570)
		joy->buttons->set(e->id,::com::haxepunk::utils::JoyButtonState_obj::BUTTON_OFF);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyButtonUp,(void))

Void Input_obj::onJoyHatMove( ::openfl::events::JoystickEvent e){
{
		HX_STACK_PUSH("Input::onJoyHatMove","com/haxepunk/utils/Input.hx",574);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(575)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(577)
		joy->set_connected(true);
		HX_STACK_LINE(578)
		joy->hat->x = (  (((::Math_obj::abs(e->x) < 0.15))) ? Float((int)0) : Float(e->x) );
		HX_STACK_LINE(579)
		joy->hat->y = (  (((::Math_obj::abs(e->y) < 0.15))) ? Float((int)0) : Float(e->y) );
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyHatMove,(void))

int Input_obj::kKeyStringMax;

bool Input_obj::_enabled;

int Input_obj::_touchNum;

Array< bool > Input_obj::_key;

int Input_obj::_keyNum;

Array< int > Input_obj::_press;

int Input_obj::_pressNum;

Array< int > Input_obj::_release;

int Input_obj::_releaseNum;

int Input_obj::_mouseWheelDelta;

::haxe::ds::IntMap Input_obj::_touches;

::haxe::ds::IntMap Input_obj::_joysticks;

::haxe::ds::StringMap Input_obj::_control;

::haxe::ds::StringMap Input_obj::_nativeCorrection;


Input_obj::Input_obj()
{
}

void Input_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Input);
	HX_MARK_END_CLASS();
}

void Input_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Input_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_key") ) { return _key; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return check_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mouseX") ) { return get_mouseX(); }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return get_mouseY(); }
		if (HX_FIELD_EQ(inName,"define") ) { return define_dyn(); }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_press") ) { return _press; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lastKey") ) { return lastKey; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"touches") ) { return get_touches(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"keyCode") ) { return keyCode_dyn(); }
		if (HX_FIELD_EQ(inName,"_keyNum") ) { return _keyNum; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { return released_dyn(); }
		if (HX_FIELD_EQ(inName,"joystick") ) { return joystick_dyn(); }
		if (HX_FIELD_EQ(inName,"_enabled") ) { return _enabled; }
		if (HX_FIELD_EQ(inName,"_release") ) { return _release; }
		if (HX_FIELD_EQ(inName,"_touches") ) { return _touches; }
		if (HX_FIELD_EQ(inName,"_control") ) { return _control; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyString") ) { return keyString; }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown; }
		if (HX_FIELD_EQ(inName,"joysticks") ) { return get_joysticks(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchNum") ) { return _touchNum; }
		if (HX_FIELD_EQ(inName,"_pressNum") ) { return _pressNum; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mouseWheel") ) { return mouseWheel; }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"_joysticks") ) { return _joysticks; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouseFlashX") ) { return get_mouseFlashX(); }
		if (HX_FIELD_EQ(inName,"mouseFlashY") ) { return get_mouseFlashY(); }
		if (HX_FIELD_EQ(inName,"touchPoints") ) { return touchPoints_dyn(); }
		if (HX_FIELD_EQ(inName,"get_touches") ) { return get_touches_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		if (HX_FIELD_EQ(inName,"_releaseNum") ) { return _releaseNum; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mousePressed") ) { return mousePressed; }
		if (HX_FIELD_EQ(inName,"rightMouseUp") ) { return rightMouseUp; }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchBegin") ) { return onTouchBegin_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyHatMove") ) { return onJoyHatMove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseReleased") ) { return mouseReleased; }
		if (HX_FIELD_EQ(inName,"middleMouseUp") ) { return middleMouseUp; }
		if (HX_FIELD_EQ(inName,"get_joysticks") ) { return get_joysticks_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyAxisMove") ) { return onJoyAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyBallMove") ) { return onJoyBallMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyButtonUp") ) { return onJoyButtonUp_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightMouseDown") ) { return rightMouseDown; }
		if (HX_FIELD_EQ(inName,"onRightMouseUp") ) { return onRightMouseUp_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"middleMouseDown") ) { return middleMouseDown; }
		if (HX_FIELD_EQ(inName,"mouseWheelDelta") ) { return get_mouseWheelDelta(); }
		if (HX_FIELD_EQ(inName,"get_mouseFlashX") ) { return get_mouseFlashX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseFlashY") ) { return get_mouseFlashY_dyn(); }
		if (HX_FIELD_EQ(inName,"onMiddleMouseUp") ) { return onMiddleMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyButtonDown") ) { return onJoyButtonDown_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onRightMouseDown") ) { return onRightMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"_mouseWheelDelta") ) { return _mouseWheelDelta; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rightMousePressed") ) { return rightMousePressed; }
		if (HX_FIELD_EQ(inName,"onMiddleMouseDown") ) { return onMiddleMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { return _nativeCorrection; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"rightMouseReleased") ) { return rightMouseReleased; }
		if (HX_FIELD_EQ(inName,"middleMousePressed") ) { return middleMousePressed; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"middleMouseReleased") ) { return middleMouseReleased; }
		if (HX_FIELD_EQ(inName,"multiTouchSupported") ) { return multiTouchSupported; }
		if (HX_FIELD_EQ(inName,"get_mouseWheelDelta") ) { return get_mouseWheelDelta_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_key") ) { _key=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_press") ) { _press=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lastKey") ) { lastKey=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { mouseUp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyNum") ) { _keyNum=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_release") ) { _release=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touches") ) { _touches=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_control") ) { _control=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyString") ) { keyString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { mouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touchNum") ) { _touchNum=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pressNum") ) { _pressNum=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mouseWheel") ) { mouseWheel=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_joysticks") ) { _joysticks=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_releaseNum") ) { _releaseNum=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mousePressed") ) { mousePressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightMouseUp") ) { rightMouseUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseReleased") ) { mouseReleased=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"middleMouseUp") ) { middleMouseUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightMouseDown") ) { rightMouseDown=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"middleMouseDown") ) { middleMouseDown=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseWheelDelta") ) { _mouseWheelDelta=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rightMousePressed") ) { rightMousePressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { _nativeCorrection=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"rightMouseReleased") ) { rightMouseReleased=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"middleMousePressed") ) { middleMousePressed=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"middleMouseReleased") ) { middleMouseReleased=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multiTouchSupported") ) { multiTouchSupported=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("keyString"),
	HX_CSTRING("lastKey"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("mousePressed"),
	HX_CSTRING("mouseReleased"),
	HX_CSTRING("rightMouseDown"),
	HX_CSTRING("rightMouseUp"),
	HX_CSTRING("rightMousePressed"),
	HX_CSTRING("rightMouseReleased"),
	HX_CSTRING("middleMouseDown"),
	HX_CSTRING("middleMouseUp"),
	HX_CSTRING("middleMousePressed"),
	HX_CSTRING("middleMouseReleased"),
	HX_CSTRING("mouseWheel"),
	HX_CSTRING("multiTouchSupported"),
	HX_CSTRING("get_mouseWheelDelta"),
	HX_CSTRING("get_mouseX"),
	HX_CSTRING("get_mouseY"),
	HX_CSTRING("get_mouseFlashX"),
	HX_CSTRING("get_mouseFlashY"),
	HX_CSTRING("define"),
	HX_CSTRING("check"),
	HX_CSTRING("pressed"),
	HX_CSTRING("released"),
	HX_CSTRING("touchPoints"),
	HX_CSTRING("get_touches"),
	HX_CSTRING("joystick"),
	HX_CSTRING("get_joysticks"),
	HX_CSTRING("enable"),
	HX_CSTRING("update"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("keyCode"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onMiddleMouseDown"),
	HX_CSTRING("onMiddleMouseUp"),
	HX_CSTRING("onRightMouseDown"),
	HX_CSTRING("onRightMouseUp"),
	HX_CSTRING("onTouchBegin"),
	HX_CSTRING("onTouchMove"),
	HX_CSTRING("onTouchEnd"),
	HX_CSTRING("onJoyAxisMove"),
	HX_CSTRING("onJoyBallMove"),
	HX_CSTRING("onJoyButtonDown"),
	HX_CSTRING("onJoyButtonUp"),
	HX_CSTRING("onJoyHatMove"),
	HX_CSTRING("kKeyStringMax"),
	HX_CSTRING("_enabled"),
	HX_CSTRING("_touchNum"),
	HX_CSTRING("_key"),
	HX_CSTRING("_keyNum"),
	HX_CSTRING("_press"),
	HX_CSTRING("_pressNum"),
	HX_CSTRING("_release"),
	HX_CSTRING("_releaseNum"),
	HX_CSTRING("_mouseWheelDelta"),
	HX_CSTRING("_touches"),
	HX_CSTRING("_joysticks"),
	HX_CSTRING("_control"),
	HX_CSTRING("_nativeCorrection"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Input_obj::keyString,"keyString");
	HX_MARK_MEMBER_NAME(Input_obj::lastKey,"lastKey");
	HX_MARK_MEMBER_NAME(Input_obj::mouseDown,"mouseDown");
	HX_MARK_MEMBER_NAME(Input_obj::mouseUp,"mouseUp");
	HX_MARK_MEMBER_NAME(Input_obj::mousePressed,"mousePressed");
	HX_MARK_MEMBER_NAME(Input_obj::mouseReleased,"mouseReleased");
	HX_MARK_MEMBER_NAME(Input_obj::rightMouseDown,"rightMouseDown");
	HX_MARK_MEMBER_NAME(Input_obj::rightMouseUp,"rightMouseUp");
	HX_MARK_MEMBER_NAME(Input_obj::rightMousePressed,"rightMousePressed");
	HX_MARK_MEMBER_NAME(Input_obj::rightMouseReleased,"rightMouseReleased");
	HX_MARK_MEMBER_NAME(Input_obj::middleMouseDown,"middleMouseDown");
	HX_MARK_MEMBER_NAME(Input_obj::middleMouseUp,"middleMouseUp");
	HX_MARK_MEMBER_NAME(Input_obj::middleMousePressed,"middleMousePressed");
	HX_MARK_MEMBER_NAME(Input_obj::middleMouseReleased,"middleMouseReleased");
	HX_MARK_MEMBER_NAME(Input_obj::mouseWheel,"mouseWheel");
	HX_MARK_MEMBER_NAME(Input_obj::multiTouchSupported,"multiTouchSupported");
	HX_MARK_MEMBER_NAME(Input_obj::kKeyStringMax,"kKeyStringMax");
	HX_MARK_MEMBER_NAME(Input_obj::_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(Input_obj::_touchNum,"_touchNum");
	HX_MARK_MEMBER_NAME(Input_obj::_key,"_key");
	HX_MARK_MEMBER_NAME(Input_obj::_keyNum,"_keyNum");
	HX_MARK_MEMBER_NAME(Input_obj::_press,"_press");
	HX_MARK_MEMBER_NAME(Input_obj::_pressNum,"_pressNum");
	HX_MARK_MEMBER_NAME(Input_obj::_release,"_release");
	HX_MARK_MEMBER_NAME(Input_obj::_releaseNum,"_releaseNum");
	HX_MARK_MEMBER_NAME(Input_obj::_mouseWheelDelta,"_mouseWheelDelta");
	HX_MARK_MEMBER_NAME(Input_obj::_touches,"_touches");
	HX_MARK_MEMBER_NAME(Input_obj::_joysticks,"_joysticks");
	HX_MARK_MEMBER_NAME(Input_obj::_control,"_control");
	HX_MARK_MEMBER_NAME(Input_obj::_nativeCorrection,"_nativeCorrection");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Input_obj::keyString,"keyString");
	HX_VISIT_MEMBER_NAME(Input_obj::lastKey,"lastKey");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseDown,"mouseDown");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseUp,"mouseUp");
	HX_VISIT_MEMBER_NAME(Input_obj::mousePressed,"mousePressed");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseReleased,"mouseReleased");
	HX_VISIT_MEMBER_NAME(Input_obj::rightMouseDown,"rightMouseDown");
	HX_VISIT_MEMBER_NAME(Input_obj::rightMouseUp,"rightMouseUp");
	HX_VISIT_MEMBER_NAME(Input_obj::rightMousePressed,"rightMousePressed");
	HX_VISIT_MEMBER_NAME(Input_obj::rightMouseReleased,"rightMouseReleased");
	HX_VISIT_MEMBER_NAME(Input_obj::middleMouseDown,"middleMouseDown");
	HX_VISIT_MEMBER_NAME(Input_obj::middleMouseUp,"middleMouseUp");
	HX_VISIT_MEMBER_NAME(Input_obj::middleMousePressed,"middleMousePressed");
	HX_VISIT_MEMBER_NAME(Input_obj::middleMouseReleased,"middleMouseReleased");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseWheel,"mouseWheel");
	HX_VISIT_MEMBER_NAME(Input_obj::multiTouchSupported,"multiTouchSupported");
	HX_VISIT_MEMBER_NAME(Input_obj::kKeyStringMax,"kKeyStringMax");
	HX_VISIT_MEMBER_NAME(Input_obj::_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(Input_obj::_touchNum,"_touchNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_key,"_key");
	HX_VISIT_MEMBER_NAME(Input_obj::_keyNum,"_keyNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_press,"_press");
	HX_VISIT_MEMBER_NAME(Input_obj::_pressNum,"_pressNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_release,"_release");
	HX_VISIT_MEMBER_NAME(Input_obj::_releaseNum,"_releaseNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_mouseWheelDelta,"_mouseWheelDelta");
	HX_VISIT_MEMBER_NAME(Input_obj::_touches,"_touches");
	HX_VISIT_MEMBER_NAME(Input_obj::_joysticks,"_joysticks");
	HX_VISIT_MEMBER_NAME(Input_obj::_control,"_control");
	HX_VISIT_MEMBER_NAME(Input_obj::_nativeCorrection,"_nativeCorrection");
};

Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.Input"), hx::TCanCast< Input_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Input_obj::__boot()
{
	keyString= HX_CSTRING("");
	multiTouchSupported= false;
	kKeyStringMax= (int)100;
	_enabled= false;
	_touchNum= (int)0;
	_key= Array_obj< bool >::__new();
	_keyNum= (int)0;
	_press= Array_obj< int >::__new();
	_pressNum= (int)0;
	_release= Array_obj< int >::__new();
	_releaseNum= (int)0;
	_mouseWheelDelta= (int)0;
	_touches= ::haxe::ds::IntMap_obj::__new();
	_joysticks= ::haxe::ds::IntMap_obj::__new();
	_control= ::haxe::ds::StringMap_obj::__new();
	_nativeCorrection= ::haxe::ds::StringMap_obj::__new();
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
