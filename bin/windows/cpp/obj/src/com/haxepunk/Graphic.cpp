#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
namespace com{
namespace haxepunk{

Void Graphic_obj::__construct()
{
HX_STACK_PUSH("Graphic::new","com/haxepunk/Graphic.hx",60);
{
	HX_STACK_LINE(61)
	this->active = false;
	HX_STACK_LINE(62)
	this->set_visible(true);
	HX_STACK_LINE(63)
	this->x = this->y = (int)0;
	HX_STACK_LINE(64)
	this->scrollX = this->scrollY = (int)1;
	HX_STACK_LINE(65)
	this->relative = true;
	HX_STACK_LINE(66)
	this->_scroll = true;
	HX_STACK_LINE(67)
	this->_point = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(68)
	this->set_layer((int)10);
}
;
	return null();
}

Graphic_obj::~Graphic_obj() { }

Dynamic Graphic_obj::__CreateEmpty() { return  new Graphic_obj; }
hx::ObjectPtr< Graphic_obj > Graphic_obj::__new()
{  hx::ObjectPtr< Graphic_obj > result = new Graphic_obj();
	result->__construct();
	return result;}

Dynamic Graphic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphic_obj > result = new Graphic_obj();
	result->__construct();
	return result;}

int Graphic_obj::set_layer( int value){
	HX_STACK_PUSH("Graphic::set_layer","com/haxepunk/Graphic.hx",115);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(115)
	return this->layer = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphic_obj,set_layer,return )

Void Graphic_obj::resume( ){
{
		HX_STACK_PUSH("Graphic::resume","com/haxepunk/Graphic.hx",110);
		HX_STACK_THIS(this);
		HX_STACK_LINE(110)
		this->active = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,resume,(void))

Void Graphic_obj::pause( ){
{
		HX_STACK_PUSH("Graphic::pause","com/haxepunk/Graphic.hx",102);
		HX_STACK_THIS(this);
		HX_STACK_LINE(102)
		this->active = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,pause,(void))

Void Graphic_obj::setEntity( ::com::haxepunk::Entity entity){
{
		HX_STACK_PUSH("Graphic::setEntity","com/haxepunk/Graphic.hx",93);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entity,"entity");
		HX_STACK_LINE(94)
		this->_entity = entity;
		HX_STACK_LINE(95)
		this->set_layer((  (((entity != null()))) ? int(entity->_layer) : int((int)10) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphic_obj,setEntity,(void))

Void Graphic_obj::render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_PUSH("Graphic::render","com/haxepunk/Graphic.hx",90);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(camera,"camera");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphic_obj,render,(void))

Void Graphic_obj::destroy( ){
{
		HX_STACK_PUSH("Graphic::destroy","com/haxepunk/Graphic.hx",82);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,destroy,(void))

Void Graphic_obj::update( ){
{
		HX_STACK_PUSH("Graphic::update","com/haxepunk/Graphic.hx",75);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,update,(void))

bool Graphic_obj::set_visible( bool value){
	HX_STACK_PUSH("Graphic::set_visible","com/haxepunk/Graphic.hx",20);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(20)
	return this->_visible = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphic_obj,set_visible,return )

bool Graphic_obj::get_visible( ){
	HX_STACK_PUSH("Graphic::get_visible","com/haxepunk/Graphic.hx",19);
	HX_STACK_THIS(this);
	HX_STACK_LINE(19)
	return this->_visible;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,get_visible,return )


Graphic_obj::Graphic_obj()
{
}

void Graphic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphic);
	HX_MARK_MEMBER_NAME(_visible,"_visible");
	HX_MARK_MEMBER_NAME(_blit,"_blit");
	HX_MARK_MEMBER_NAME(_entity,"_entity");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_scroll,"_scroll");
	HX_MARK_MEMBER_NAME(layer,"layer");
	HX_MARK_MEMBER_NAME(relative,"relative");
	HX_MARK_MEMBER_NAME(scrollY,"scrollY");
	HX_MARK_MEMBER_NAME(scrollX,"scrollX");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void Graphic_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_visible,"_visible");
	HX_VISIT_MEMBER_NAME(_blit,"_blit");
	HX_VISIT_MEMBER_NAME(_entity,"_entity");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_scroll,"_scroll");
	HX_VISIT_MEMBER_NAME(layer,"layer");
	HX_VISIT_MEMBER_NAME(relative,"relative");
	HX_VISIT_MEMBER_NAME(scrollY,"scrollY");
	HX_VISIT_MEMBER_NAME(scrollX,"scrollX");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(active,"active");
}

Dynamic Graphic_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_blit") ) { return _blit; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_entity") ) { return _entity; }
		if (HX_FIELD_EQ(inName,"_scroll") ) { return _scroll; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollY") ) { return scrollY; }
		if (HX_FIELD_EQ(inName,"scrollX") ) { return scrollX; }
		if (HX_FIELD_EQ(inName,"visible") ) { return get_visible(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_visible") ) { return _visible; }
		if (HX_FIELD_EQ(inName,"relative") ) { return relative; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_layer") ) { return set_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"setEntity") ) { return setEntity_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphic_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_blit") ) { _blit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layer") ) { if (inCallProp) return set_layer(inValue);layer=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_entity") ) { _entity=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scroll") ) { _scroll=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollY") ) { scrollY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollX") ) { scrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { return set_visible(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_visible") ) { _visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"relative") ) { relative=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_visible"));
	outFields->push(HX_CSTRING("_blit"));
	outFields->push(HX_CSTRING("_entity"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_scroll"));
	outFields->push(HX_CSTRING("layer"));
	outFields->push(HX_CSTRING("relative"));
	outFields->push(HX_CSTRING("scrollY"));
	outFields->push(HX_CSTRING("scrollX"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("active"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_visible"),
	HX_CSTRING("_blit"),
	HX_CSTRING("_entity"),
	HX_CSTRING("_point"),
	HX_CSTRING("_scroll"),
	HX_CSTRING("set_layer"),
	HX_CSTRING("resume"),
	HX_CSTRING("pause"),
	HX_CSTRING("setEntity"),
	HX_CSTRING("render"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("layer"),
	HX_CSTRING("relative"),
	HX_CSTRING("scrollY"),
	HX_CSTRING("scrollX"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("active"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphic_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphic_obj::__mClass,"__mClass");
};

Class Graphic_obj::__mClass;

void Graphic_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Graphic"), hx::TCanCast< Graphic_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Graphic_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
