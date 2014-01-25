#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Pixelmask
#include <com/haxepunk/masks/Pixelmask.h>
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
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Pixelmask_obj::__construct(Dynamic source,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_PUSH("Pixelmask::new","com/haxepunk/masks/Pixelmask.hx",26);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(27)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(30)
	if ((::Std_obj::is(source,hx::ClassOf< ::flash::display::BitmapData >()))){
		HX_STACK_LINE(31)
		this->_data = source;
	}
	else{
		HX_STACK_LINE(33)
		this->_data = ::com::haxepunk::HXP_obj::getBitmap(source);
	}
	HX_STACK_LINE(35)
	if (((this->_data == null()))){
		HX_STACK_LINE(36)
		hx::Throw (HX_CSTRING("Invalid Pixelmask source image."));
	}
	HX_STACK_LINE(38)
	this->threshold = (int)1;
	HX_STACK_LINE(40)
	this->_rect = ::com::haxepunk::HXP_obj::rect;
	HX_STACK_LINE(41)
	this->_point = ::com::haxepunk::HXP_obj::point;
	HX_STACK_LINE(42)
	this->_point2 = ::com::haxepunk::HXP_obj::point2;
	HX_STACK_LINE(45)
	this->_width = this->get_data()->get_width();
	HX_STACK_LINE(46)
	this->_height = this->get_data()->get_height();
	HX_STACK_LINE(47)
	this->_x = x;
	HX_STACK_LINE(48)
	this->_y = y;
	HX_STACK_LINE(51)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >()),this->collideMask_dyn());
	HX_STACK_LINE(52)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Pixelmask >()),this->collidePixelmask_dyn());
	HX_STACK_LINE(53)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >()),this->collideHitbox_dyn());
}
;
	return null();
}

Pixelmask_obj::~Pixelmask_obj() { }

Dynamic Pixelmask_obj::__CreateEmpty() { return  new Pixelmask_obj; }
hx::ObjectPtr< Pixelmask_obj > Pixelmask_obj::__new(Dynamic source,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Pixelmask_obj > result = new Pixelmask_obj();
	result->__construct(source,__o_x,__o_y);
	return result;}

Dynamic Pixelmask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Pixelmask_obj > result = new Pixelmask_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::flash::display::BitmapData Pixelmask_obj::set_data( ::flash::display::BitmapData value){
	HX_STACK_PUSH("Pixelmask::set_data","com/haxepunk/masks/Pixelmask.hx",133);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(134)
	this->_data = value;
	HX_STACK_LINE(135)
	this->_width = value->get_width();
	HX_STACK_LINE(136)
	this->_height = value->get_height();
	HX_STACK_LINE(137)
	this->update();
	HX_STACK_LINE(138)
	return this->_data;
}


HX_DEFINE_DYNAMIC_FUNC1(Pixelmask_obj,set_data,return )

::flash::display::BitmapData Pixelmask_obj::get_data( ){
	HX_STACK_PUSH("Pixelmask::get_data","com/haxepunk/masks/Pixelmask.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_LINE(131)
	return this->_data;
}


HX_DEFINE_DYNAMIC_FUNC0(Pixelmask_obj,get_data,return )

bool Pixelmask_obj::collidePixelmask( ::com::haxepunk::masks::Pixelmask other){
	HX_STACK_PUSH("Pixelmask::collidePixelmask","com/haxepunk/masks/Pixelmask.hx",90);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Pixelmask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Pixelmask.hx",99);
			{
				HX_STACK_LINE(99)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(99)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Pixelmask_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Pixelmask.hx",99);
			{
				HX_STACK_LINE(99)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(99)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(99)
	this->_point->x = ((_Function_1_1::Block(other) + other->_x) - ((_Function_1_2::Block(this) + this->_x)));
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Pixelmask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Pixelmask.hx",100);
			{
				HX_STACK_LINE(100)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(100)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Pixelmask_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Pixelmask.hx",100);
			{
				HX_STACK_LINE(100)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(100)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(100)
	this->_point->y = ((_Function_1_3::Block(other) + other->_y) - ((_Function_1_4::Block(this) + this->_y)));
	HX_STACK_LINE(102)
	::flash::geom::Rectangle r1 = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->_data->get_width(),this->_data->get_height());		HX_STACK_VAR(r1,"r1");
	HX_STACK_LINE(103)
	::flash::geom::Rectangle r2 = ::flash::geom::Rectangle_obj::__new(this->_point->x,this->_point->y,other->_data->get_width(),other->_data->get_height());		HX_STACK_VAR(r2,"r2");
	HX_STACK_LINE(105)
	::flash::geom::Rectangle intersect = r1->intersection(r2);		HX_STACK_VAR(intersect,"intersect");
	HX_STACK_LINE(107)
	if ((intersect->isEmpty())){
		HX_STACK_LINE(107)
		return false;
	}
	HX_STACK_LINE(111)
	{
		HX_STACK_LINE(111)
		int _g1 = ::Math_obj::floor(intersect->x);		HX_STACK_VAR(_g1,"_g1");
		int _g = ::Math_obj::floor(((intersect->x + intersect->width) + (int)1));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(111)
		while(((_g1 < _g))){
			HX_STACK_LINE(111)
			int dx = (_g1)++;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				int _g3 = ::Math_obj::floor(intersect->y);		HX_STACK_VAR(_g3,"_g3");
				int _g2 = ::Math_obj::floor(((intersect->y + intersect->height) + (int)1));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(112)
				while(((_g3 < _g2))){
					HX_STACK_LINE(112)
					int dy = (_g3)++;		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(113)
					int p1 = (int((int(this->_data->getPixel32(dx,dy)) >> int((int)24))) & int((int)255));		HX_STACK_VAR(p1,"p1");
					HX_STACK_LINE(114)
					int p2 = (int((int(other->_data->getPixel32(::Math_obj::floor((dx - this->_point->x)),::Math_obj::floor((dy - this->_point->y)))) >> int((int)24))) & int((int)255));		HX_STACK_VAR(p2,"p2");
					HX_STACK_LINE(117)
					if (((bool((p1 > (int)0)) && bool((p2 > (int)0))))){
						HX_STACK_LINE(117)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(123)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Pixelmask_obj,collidePixelmask,return )

bool Pixelmask_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_PUSH("Pixelmask::collideHitbox","com/haxepunk/masks/Pixelmask.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Pixelmask_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Pixelmask.hx",75);
			{
				HX_STACK_LINE(75)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(75)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(75)
	this->_point->x = (_Function_1_1::Block(this) + this->_x);
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Pixelmask_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Pixelmask.hx",76);
			{
				HX_STACK_LINE(76)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(76)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(76)
	this->_point->y = (_Function_1_2::Block(this) + this->_y);
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Pixelmask.hx",77);
			{
				HX_STACK_LINE(77)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(77)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(77)
	this->_rect->x = (_Function_1_3::Block(other) + other->_x);
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Pixelmask.hx",78);
			{
				HX_STACK_LINE(78)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(78)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(78)
	this->_rect->y = (_Function_1_4::Block(other) + other->_y);
	HX_STACK_LINE(79)
	this->_rect->width = other->_width;
	HX_STACK_LINE(80)
	this->_rect->height = other->_height;
	HX_STACK_LINE(84)
	return false;
}


bool Pixelmask_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_PUSH("Pixelmask::collideMask","com/haxepunk/masks/Pixelmask.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Pixelmask_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Pixelmask.hx",59);
			{
				HX_STACK_LINE(59)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(59)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(59)
	this->_point->x = (_Function_1_1::Block(this) + this->_x);
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Pixelmask_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Pixelmask.hx",60);
			{
				HX_STACK_LINE(60)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(60)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(60)
	this->_point->y = (_Function_1_2::Block(this) + this->_y);
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Pixelmask.hx",61);
			{
				HX_STACK_LINE(61)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(61)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(61)
	this->_rect->x = (_Function_1_3::Block(other) - other->parent->originX);
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Pixelmask.hx",62);
			{
				HX_STACK_LINE(62)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(62)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(62)
	this->_rect->y = (_Function_1_4::Block(other) - other->parent->originY);
	HX_STACK_LINE(63)
	this->_rect->width = other->parent->width;
	HX_STACK_LINE(64)
	this->_rect->height = other->parent->height;
	HX_STACK_LINE(68)
	return false;
}



Pixelmask_obj::Pixelmask_obj()
{
}

void Pixelmask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pixelmask);
	HX_MARK_MEMBER_NAME(_point2,"_point2");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(threshold,"threshold");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Pixelmask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_point2,"_point2");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(threshold,"threshold");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Pixelmask_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return get_data(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { return _point2; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collidePixelmask") ) { return collidePixelmask_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Pixelmask_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return set_data(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { _point2=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"threshold") ) { threshold=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pixelmask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_point2"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("threshold"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_point2"),
	HX_CSTRING("_point"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_data"),
	HX_CSTRING("set_data"),
	HX_CSTRING("get_data"),
	HX_CSTRING("collidePixelmask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("threshold"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pixelmask_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pixelmask_obj::__mClass,"__mClass");
};

Class Pixelmask_obj::__mClass;

void Pixelmask_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Pixelmask"), hx::TCanCast< Pixelmask_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Pixelmask_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
