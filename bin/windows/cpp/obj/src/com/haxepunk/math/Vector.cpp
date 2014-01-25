#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_math_Vector
#include <com/haxepunk/math/Vector.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
namespace com{
namespace haxepunk{
namespace math{

Void Vector_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{
HX_STACK_PUSH("Vector::new","com/haxepunk/math/Vector.hx",14);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(14)
	super::__construct(x,y);
}
;
	return null();
}

Vector_obj::~Vector_obj() { }

Dynamic Vector_obj::__CreateEmpty() { return  new Vector_obj; }
hx::ObjectPtr< Vector_obj > Vector_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{  hx::ObjectPtr< Vector_obj > result = new Vector_obj();
	result->__construct(__o_x,__o_y);
	return result;}

Dynamic Vector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector_obj > result = new Vector_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::com::haxepunk::math::Vector Vector_obj::cross( ){
	HX_STACK_PUSH("Vector::cross","com/haxepunk/math/Vector.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_LINE(31)
	return ::com::haxepunk::math::Vector_obj::__new(this->y,-(this->x));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,cross,return )

Float Vector_obj::dot( ::flash::geom::Point p){
	HX_STACK_PUSH("Vector::dot","com/haxepunk/math/Vector.hx",26);
	HX_STACK_THIS(this);
	HX_STACK_ARG(p,"p");
	HX_STACK_LINE(26)
	return ((this->x * p->x) + (this->y * p->y));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,dot,return )


Vector_obj::Vector_obj()
{
}

void Vector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vector);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Vector_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Vector_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dot") ) { return dot_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cross") ) { return cross_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cross"),
	HX_CSTRING("dot"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector_obj::__mClass,"__mClass");
};

Class Vector_obj::__mClass;

void Vector_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.math.Vector"), hx::TCanCast< Vector_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Vector_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace math
