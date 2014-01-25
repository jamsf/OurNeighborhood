#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Touch
#include <com/haxepunk/utils/Touch.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Touch_obj::__construct(Float x,Float y,int id)
{
HX_STACK_PUSH("Touch::new","com/haxepunk/utils/Touch.hx",31);
{
	HX_STACK_LINE(32)
	this->x = x;
	HX_STACK_LINE(33)
	this->y = y;
	HX_STACK_LINE(34)
	this->id = id;
	HX_STACK_LINE(35)
	this->time = (int)0;
}
;
	return null();
}

Touch_obj::~Touch_obj() { }

Dynamic Touch_obj::__CreateEmpty() { return  new Touch_obj; }
hx::ObjectPtr< Touch_obj > Touch_obj::__new(Float x,Float y,int id)
{  hx::ObjectPtr< Touch_obj > result = new Touch_obj();
	result->__construct(x,y,id);
	return result;}

Dynamic Touch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Touch_obj > result = new Touch_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Touch_obj::update( ){
{
		HX_STACK_PUSH("Touch::update","com/haxepunk/utils/Touch.hx",60);
		HX_STACK_THIS(this);
		HX_STACK_LINE(60)
		hx::AddEq(this->time,::com::haxepunk::HXP_obj::elapsed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,update,(void))

bool Touch_obj::get_pressed( ){
	HX_STACK_PUSH("Touch::get_pressed","com/haxepunk/utils/Touch.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_LINE(54)
	return (this->time == (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,get_pressed,return )

Float Touch_obj::get_sceneY( ){
	HX_STACK_PUSH("Touch::get_sceneY","com/haxepunk/utils/Touch.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_LINE(48)
	return (this->y + ::com::haxepunk::HXP_obj::camera->y);
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,get_sceneY,return )

Float Touch_obj::get_sceneX( ){
	HX_STACK_PUSH("Touch::get_sceneX","com/haxepunk/utils/Touch.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_LINE(42)
	return (this->x + ::com::haxepunk::HXP_obj::camera->x);
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,get_sceneX,return )


Touch_obj::Touch_obj()
{
}

void Touch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Touch);
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void Touch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic Touch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"sceneY") ) { return get_sceneY(); }
		if (HX_FIELD_EQ(inName,"sceneX") ) { return get_sceneX(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return get_pressed(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_sceneY") ) { return get_sceneY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sceneX") ) { return get_sceneX_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Touch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Touch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pressed"));
	outFields->push(HX_CSTRING("sceneY"));
	outFields->push(HX_CSTRING("sceneX"));
	outFields->push(HX_CSTRING("time"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("get_pressed"),
	HX_CSTRING("get_sceneY"),
	HX_CSTRING("get_sceneX"),
	HX_CSTRING("time"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("id"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Touch_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Touch_obj::__mClass,"__mClass");
};

Class Touch_obj::__mClass;

void Touch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.Touch"), hx::TCanCast< Touch_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Touch_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
