#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Hitbox_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_PUSH("Hitbox::new","com/haxepunk/masks/Hitbox.hx",20);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(22)
	this->_width = width;
	HX_STACK_LINE(23)
	this->_height = height;
	HX_STACK_LINE(24)
	this->_x = x;
	HX_STACK_LINE(25)
	this->_y = y;
	HX_STACK_LINE(26)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >()),this->collideHitbox_dyn());
}
;
	return null();
}

Hitbox_obj::~Hitbox_obj() { }

Dynamic Hitbox_obj::__CreateEmpty() { return  new Hitbox_obj; }
hx::ObjectPtr< Hitbox_obj > Hitbox_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Hitbox_obj > result = new Hitbox_obj();
	result->__construct(__o_width,__o_height,__o_x,__o_y);
	return result;}

Dynamic Hitbox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hitbox_obj > result = new Hitbox_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Hitbox_obj::update( ){
{
		HX_STACK_PUSH("Hitbox::update","com/haxepunk/masks/Hitbox.hx",105);
		HX_STACK_THIS(this);
		HX_STACK_LINE(105)
		if (((this->parent != null()))){
			HX_STACK_LINE(109)
			this->parent->originX = -(this->_x);
			HX_STACK_LINE(110)
			this->parent->originY = -(this->_y);
			HX_STACK_LINE(111)
			this->parent->width = this->_width;
			HX_STACK_LINE(112)
			this->parent->height = this->_height;
			HX_STACK_LINE(114)
			if (((this->list != null()))){
				HX_STACK_LINE(115)
				this->list->update();
			}
		}
	}
return null();
}


int Hitbox_obj::set_height( int value){
	HX_STACK_PUSH("Hitbox::set_height","com/haxepunk/masks/Hitbox.hx",95);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(96)
	if (((this->_height == value))){
		HX_STACK_LINE(96)
		return value;
	}
	HX_STACK_LINE(97)
	this->_height = value;
	HX_STACK_LINE(98)
	if (((this->list != null()))){
		HX_STACK_LINE(98)
		this->list->update();
	}
	else{
		HX_STACK_LINE(99)
		if (((this->parent != null()))){
			HX_STACK_LINE(99)
			this->update();
		}
	}
	HX_STACK_LINE(100)
	return this->_height;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,set_height,return )

int Hitbox_obj::get_height( ){
	HX_STACK_PUSH("Hitbox::get_height","com/haxepunk/masks/Hitbox.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_LINE(93)
	return this->_height;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,get_height,return )

int Hitbox_obj::set_width( int value){
	HX_STACK_PUSH("Hitbox::set_width","com/haxepunk/masks/Hitbox.hx",81);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(82)
	if (((this->_width == value))){
		HX_STACK_LINE(82)
		return value;
	}
	HX_STACK_LINE(83)
	this->_width = value;
	HX_STACK_LINE(84)
	if (((this->list != null()))){
		HX_STACK_LINE(84)
		this->list->update();
	}
	else{
		HX_STACK_LINE(85)
		if (((this->parent != null()))){
			HX_STACK_LINE(85)
			this->update();
		}
	}
	HX_STACK_LINE(86)
	return this->_width;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,set_width,return )

int Hitbox_obj::get_width( ){
	HX_STACK_PUSH("Hitbox::get_width","com/haxepunk/masks/Hitbox.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_LINE(79)
	return this->_width;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,get_width,return )

int Hitbox_obj::set_y( int value){
	HX_STACK_PUSH("Hitbox::set_y","com/haxepunk/masks/Hitbox.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(68)
	if (((this->_y == value))){
		HX_STACK_LINE(68)
		return value;
	}
	HX_STACK_LINE(69)
	this->_y = value;
	HX_STACK_LINE(70)
	if (((this->list != null()))){
		HX_STACK_LINE(70)
		this->list->update();
	}
	else{
		HX_STACK_LINE(71)
		if (((this->parent != null()))){
			HX_STACK_LINE(71)
			this->update();
		}
	}
	HX_STACK_LINE(72)
	return this->_y;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,set_y,return )

int Hitbox_obj::get_y( ){
	HX_STACK_PUSH("Hitbox::get_y","com/haxepunk/masks/Hitbox.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_LINE(65)
	return this->_y;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,get_y,return )

int Hitbox_obj::set_x( int value){
	HX_STACK_PUSH("Hitbox::set_x","com/haxepunk/masks/Hitbox.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(54)
	if (((this->_x == value))){
		HX_STACK_LINE(54)
		return value;
	}
	HX_STACK_LINE(55)
	this->_x = value;
	HX_STACK_LINE(56)
	if (((this->list != null()))){
		HX_STACK_LINE(56)
		this->list->update();
	}
	else{
		HX_STACK_LINE(57)
		if (((this->parent != null()))){
			HX_STACK_LINE(57)
			this->update();
		}
	}
	HX_STACK_LINE(58)
	return this->_x;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,set_x,return )

int Hitbox_obj::get_x( ){
	HX_STACK_PUSH("Hitbox::get_x","com/haxepunk/masks/Hitbox.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_LINE(51)
	return this->_x;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,get_x,return )

bool Hitbox_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_PUSH("Hitbox::collideHitbox","com/haxepunk/masks/Hitbox.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Hitbox_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Hitbox.hx",41);
			{
				HX_STACK_LINE(41)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(41)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Hitbox.hx",41);
			{
				HX_STACK_LINE(41)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(41)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Hitbox_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Hitbox.hx",42);
			{
				HX_STACK_LINE(42)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(42)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Hitbox.hx",42);
			{
				HX_STACK_LINE(42)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(42)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static Float Block( ::com::haxepunk::masks::Hitbox_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Hitbox.hx",43);
			{
				HX_STACK_LINE(43)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(43)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Hitbox.hx",43);
			{
				HX_STACK_LINE(43)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(43)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_7{
		inline static Float Block( ::com::haxepunk::masks::Hitbox_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Hitbox.hx",44);
			{
				HX_STACK_LINE(44)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(44)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_8{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Hitbox.hx",44);
			{
				HX_STACK_LINE(44)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(44)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(40)
	return (bool((bool((bool((((_Function_1_1::Block(this) + this->_x) + this->_width) > (_Function_1_2::Block(other) + other->_x))) && bool((((_Function_1_3::Block(this) + this->_y) + this->_height) > (_Function_1_4::Block(other) + other->_y))))) && bool(((_Function_1_5::Block(this) + this->_x) < ((_Function_1_6::Block(other) + other->_x) + other->_width))))) && bool(((_Function_1_7::Block(this) + this->_y) < ((_Function_1_8::Block(other) + other->_y) + other->_height))));
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,collideHitbox,return )

bool Hitbox_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_PUSH("Hitbox::collideMask","com/haxepunk/masks/Hitbox.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Hitbox_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Hitbox.hx",32);
			{
				HX_STACK_LINE(32)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(32)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Hitbox.hx",32);
			{
				HX_STACK_LINE(32)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(32)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Hitbox_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Hitbox.hx",33);
			{
				HX_STACK_LINE(33)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(33)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Hitbox.hx",33);
			{
				HX_STACK_LINE(33)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(33)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static Float Block( ::com::haxepunk::masks::Hitbox_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Hitbox.hx",34);
			{
				HX_STACK_LINE(34)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(34)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Hitbox.hx",34);
			{
				HX_STACK_LINE(34)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(34)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_7{
		inline static Float Block( ::com::haxepunk::masks::Hitbox_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Hitbox.hx",35);
			{
				HX_STACK_LINE(35)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(35)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_8{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Hitbox.hx",35);
			{
				HX_STACK_LINE(35)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(35)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(31)
	return (bool((bool((bool((((_Function_1_1::Block(this) + this->_x) + this->_width) > (_Function_1_2::Block(other) - other->parent->originX))) && bool((((_Function_1_3::Block(this) + this->_y) + this->_height) > (_Function_1_4::Block(other) - other->parent->originY))))) && bool(((_Function_1_5::Block(this) + this->_x) < ((_Function_1_6::Block(other) - other->parent->originX) + other->parent->width))))) && bool(((_Function_1_7::Block(this) + this->_y) < ((_Function_1_8::Block(other) - other->parent->originY) + other->parent->height))));
}



Hitbox_obj::Hitbox_obj()
{
}

void Hitbox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Hitbox);
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_width,"_width");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Hitbox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Hitbox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hitbox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Hitbox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_y"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_y"),
	HX_CSTRING("_x"),
	HX_CSTRING("_height"),
	HX_CSTRING("_width"),
	HX_CSTRING("update"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_x"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideMask"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hitbox_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hitbox_obj::__mClass,"__mClass");
};

Class Hitbox_obj::__mClass;

void Hitbox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Hitbox"), hx::TCanCast< Hitbox_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Hitbox_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
