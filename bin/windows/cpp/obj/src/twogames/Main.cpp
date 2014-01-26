#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_extendedhxpunk_ext_EXTConsole
#include <extendedhxpunk/ext/EXTConsole.h>
#endif
#ifndef INCLUDED_extendedhxpunk_ext_EXTScene
#include <extendedhxpunk/ext/EXTScene.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_twogames_Main
#include <twogames/Main.h>
#endif
#ifndef INCLUDED_twogames_scenes_MainRoom
#include <twogames/scenes/MainRoom.h>
#endif
namespace twogames{

Void Main_obj::__construct()
{
HX_STACK_PUSH("Main::new","twogames/Main.hx",15);
{
	HX_STACK_LINE(15)
	super::__construct((int)640,(int)380,(int)60,false,null());
}
;
	return null();
}

Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::update( ){
{
		HX_STACK_PUSH("Main::update","twogames/Main.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_LINE(30)
		this->super::update();
		HX_STACK_LINE(32)
		::extendedhxpunk::ext::EXTConsole_obj::update();
	}
return null();
}


Void Main_obj::init( ){
{
		HX_STACK_PUSH("Main::init","twogames/Main.hx",20);
		HX_STACK_THIS(this);
		HX_STACK_LINE(21)
		::extendedhxpunk::ext::EXTConsole_obj::initializeConsole();
		HX_STACK_LINE(22)
		::com::haxepunk::HXP_obj::screen->set_color((int)0);
		HX_STACK_LINE(23)
		::com::haxepunk::HXP_obj::screen->set_scale((int)1);
		HX_STACK_LINE(25)
		::com::haxepunk::HXP_obj::set_scene(::twogames::scenes::MainRoom_obj::__new());
	}
return null();
}


int Main_obj::kClearColor;

::String Main_obj::kProjectName;

Void Main_obj::main( ){
{
		HX_STACK_PUSH("Main::main","twogames/Main.hx",37);
		HX_STACK_LINE(37)
		::twogames::Main app = ::twogames::Main_obj::__new();		HX_STACK_VAR(app,"app");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("kClearColor"),
	HX_CSTRING("kProjectName"),
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::kClearColor,"kClearColor");
	HX_MARK_MEMBER_NAME(Main_obj::kProjectName,"kProjectName");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::kClearColor,"kClearColor");
	HX_VISIT_MEMBER_NAME(Main_obj::kProjectName,"kProjectName");
};

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("twogames.Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Main_obj::__boot()
{
	kClearColor= (int)0;
	kProjectName= HX_CSTRING("GGJ");
}

} // end namespace twogames
