#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_twogames_MainScene
#include <twogames/MainScene.h>
#endif
namespace twogames{

Void MainScene_obj::__construct()
{
HX_STACK_PUSH("MainScene::new","twogames/MainScene.hx",7);
{
	HX_STACK_LINE(7)
	super::__construct();
}
;
	return null();
}

MainScene_obj::~MainScene_obj() { }

Dynamic MainScene_obj::__CreateEmpty() { return  new MainScene_obj; }
hx::ObjectPtr< MainScene_obj > MainScene_obj::__new()
{  hx::ObjectPtr< MainScene_obj > result = new MainScene_obj();
	result->__construct();
	return result;}

Dynamic MainScene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainScene_obj > result = new MainScene_obj();
	result->__construct();
	return result;}


MainScene_obj::MainScene_obj()
{
}

void MainScene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainScene);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainScene_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MainScene_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic MainScene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MainScene_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainScene_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainScene_obj::__mClass,"__mClass");
};

Class MainScene_obj::__mClass;

void MainScene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("twogames.MainScene"), hx::TCanCast< MainScene_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MainScene_obj::__boot()
{
}

} // end namespace twogames
