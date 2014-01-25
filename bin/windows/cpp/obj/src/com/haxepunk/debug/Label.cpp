#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_debug_Label
#include <com/haxepunk/debug/Label.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
namespace com{
namespace haxepunk{
namespace debug{

Void Label_obj::__construct()
{
HX_STACK_PUSH("Label::new","com/haxepunk/debug/LayerList.hx",20);
{
	HX_STACK_LINE(20)
	super::__construct();
}
;
	return null();
}

Label_obj::~Label_obj() { }

Dynamic Label_obj::__CreateEmpty() { return  new Label_obj; }
hx::ObjectPtr< Label_obj > Label_obj::__new()
{  hx::ObjectPtr< Label_obj > result = new Label_obj();
	result->__construct();
	return result;}

Dynamic Label_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Label_obj > result = new Label_obj();
	result->__construct();
	return result;}

int Label_obj::set_layer( int value){
	HX_STACK_PUSH("Label::set_layer","com/haxepunk/debug/LayerList.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(25)
	if (((this->layer != value))){
		HX_STACK_LINE(27)
		this->layer = value;
		HX_STACK_LINE(28)
		this->set_text((HX_CSTRING("Layer: ") + value));
	}
	HX_STACK_LINE(30)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_layer,return )


Label_obj::Label_obj()
{
}

void Label_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Label);
	HX_MARK_MEMBER_NAME(layer,"layer");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Label_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(layer,"layer");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Label_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_layer") ) { return set_layer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Label_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { if (inCallProp) return set_layer(inValue);layer=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Label_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("layer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_layer"),
	HX_CSTRING("layer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Label_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Label_obj::__mClass,"__mClass");
};

Class Label_obj::__mClass;

void Label_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.debug.Label"), hx::TCanCast< Label_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Label_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace debug
