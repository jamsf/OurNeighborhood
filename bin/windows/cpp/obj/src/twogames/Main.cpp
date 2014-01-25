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
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_TraceCapture
#include <com/haxepunk/debug/TraceCapture.h>
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
#ifndef INCLUDED_twogames_MainScene
#include <twogames/MainScene.h>
#endif
namespace twogames{

Void Main_obj::__construct(Dynamic width,Dynamic height,Dynamic frameRate,Dynamic fixed,::com::haxepunk::RenderMode renderMode)
{
HX_STACK_PUSH("Main::new","twogames/Main.hx",5);
{
	HX_STACK_LINE(5)
	super::__construct(width,height,frameRate,fixed,renderMode);
}
;
	return null();
}

Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new(Dynamic width,Dynamic height,Dynamic frameRate,Dynamic fixed,::com::haxepunk::RenderMode renderMode)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct(width,height,frameRate,fixed,renderMode);
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void Main_obj::init( ){
{
		HX_STACK_PUSH("Main::init","twogames/Main.hx",9);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::com::haxepunk::debug::Console Block( ){
				HX_STACK_PUSH("*::closure","twogames/Main.hx",11);
				{
					HX_STACK_LINE(11)
					if (((::com::haxepunk::HXP_obj::_console == null()))){
						HX_STACK_LINE(11)
						::com::haxepunk::HXP_obj::_console = ::com::haxepunk::debug::Console_obj::__new();
					}
					HX_STACK_LINE(11)
					return ::com::haxepunk::HXP_obj::_console;
				}
				return null();
			}
		};
		HX_STACK_LINE(11)
		(_Function_1_1::Block())->enable(null(),null());
		HX_STACK_LINE(13)
		::com::haxepunk::HXP_obj::set_scene(::twogames::MainScene_obj::__new());
	}
return null();
}


Void Main_obj::main( ){
{
		HX_STACK_PUSH("Main::main","twogames/Main.hx",16);
		HX_STACK_LINE(16)
		::twogames::Main_obj::__new(null(),null(),null(),null(),null());
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
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
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
}

} // end namespace twogames
