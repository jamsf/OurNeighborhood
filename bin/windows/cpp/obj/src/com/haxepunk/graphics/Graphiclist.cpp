#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Graphiclist
#include <com/haxepunk/graphics/Graphiclist.h>
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
namespace graphics{

Void Graphiclist_obj::__construct(Dynamic graphic)
{
HX_STACK_PUSH("Graphiclist::new","com/haxepunk/graphics/Graphiclist.hx",20);
{
	HX_STACK_LINE(21)
	this->_graphics = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(22)
	this->_temp = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(23)
	this->_camera = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(24)
	this->_count = (int)0;
	HX_STACK_LINE(26)
	super::__construct();
	HX_STACK_LINE(28)
	if (((graphic != null()))){
		HX_STACK_LINE(30)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		while(((_g < graphic->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(30)
			Dynamic g = graphic->__GetItem(_g);		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(30)
			++(_g);
			HX_STACK_LINE(30)
			if (((hx::TCast< com::haxepunk::Graphic >::cast(g) != null()))){
				HX_STACK_LINE(30)
				this->add(g);
			}
		}
	}
}
;
	return null();
}

Graphiclist_obj::~Graphiclist_obj() { }

Dynamic Graphiclist_obj::__CreateEmpty() { return  new Graphiclist_obj; }
hx::ObjectPtr< Graphiclist_obj > Graphiclist_obj::__new(Dynamic graphic)
{  hx::ObjectPtr< Graphiclist_obj > result = new Graphiclist_obj();
	result->__construct(graphic);
	return result;}

Dynamic Graphiclist_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphiclist_obj > result = new Graphiclist_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Graphiclist_obj::updateCheck( ){
{
		HX_STACK_PUSH("Graphiclist::updateCheck","com/haxepunk/graphics/Graphiclist.hx",174);
		HX_STACK_THIS(this);
		HX_STACK_LINE(175)
		this->active = false;
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(176)
			while(((_g < _g1->length))){
				HX_STACK_LINE(176)
				::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(176)
				++(_g);
				HX_STACK_LINE(178)
				if ((g->active)){
					HX_STACK_LINE(180)
					this->active = true;
					HX_STACK_LINE(181)
					return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,updateCheck,(void))

int Graphiclist_obj::set_layer( int value){
	HX_STACK_PUSH("Graphiclist::set_layer","com/haxepunk/graphics/Graphiclist.hx",162);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(163)
	if (((this->layer == value))){
		HX_STACK_LINE(163)
		return value;
	}
	HX_STACK_LINE(164)
	this->layer = value;
	HX_STACK_LINE(165)
	{
		HX_STACK_LINE(165)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(165)
		while(((_g < _g1->length))){
			HX_STACK_LINE(165)
			::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(165)
			++(_g);
			HX_STACK_LINE(166)
			g->set_layer(value);
		}
	}
	HX_STACK_LINE(167)
	return value;
}


Void Graphiclist_obj::setEntity( ::com::haxepunk::Entity entity){
{
		HX_STACK_PUSH("Graphiclist::setEntity","com/haxepunk/graphics/Graphiclist.hx",152);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entity,"entity");
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(153)
			while(((_g < _g1->length))){
				HX_STACK_LINE(153)
				::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(153)
				++(_g);
				HX_STACK_LINE(155)
				g->setEntity(entity);
			}
		}
		HX_STACK_LINE(158)
		this->super::setEntity(entity);
	}
return null();
}


int Graphiclist_obj::get_count( ){
	HX_STACK_PUSH("Graphiclist::get_count","com/haxepunk/graphics/Graphiclist.hx",149);
	HX_STACK_THIS(this);
	HX_STACK_LINE(149)
	return this->_count;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,get_count,return )

Array< ::Dynamic > Graphiclist_obj::get_children( ){
	HX_STACK_PUSH("Graphiclist::get_children","com/haxepunk/graphics/Graphiclist.hx",143);
	HX_STACK_THIS(this);
	HX_STACK_LINE(143)
	return this->_graphics;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,get_children,return )

Void Graphiclist_obj::removeAll( ){
{
		HX_STACK_PUSH("Graphiclist::removeAll","com/haxepunk/graphics/Graphiclist.hx",132);
		HX_STACK_THIS(this);
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			Dynamic array = this->_graphics;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(133)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			Dynamic array = this->_temp;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(134)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(135)
		this->_count = (int)0;
		HX_STACK_LINE(136)
		this->active = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,removeAll,(void))

Void Graphiclist_obj::removeAt( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_PUSH("Graphiclist::removeAt","com/haxepunk/graphics/Graphiclist.hx",121);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
{
		HX_STACK_LINE(122)
		if (((this->_graphics->length == (int)0))){
			HX_STACK_LINE(122)
			return null();
		}
		HX_STACK_LINE(123)
		hx::ModEq(index,this->_graphics->length);
		HX_STACK_LINE(124)
		this->remove(this->_graphics->__get(hx::Mod(index,this->_graphics->length)).StaticCast< ::com::haxepunk::Graphic >());
		HX_STACK_LINE(125)
		this->updateCheck();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,removeAt,(void))

::com::haxepunk::Graphic Graphiclist_obj::remove( ::com::haxepunk::Graphic graphic){
	HX_STACK_PUSH("Graphiclist::remove","com/haxepunk/graphics/Graphiclist.hx",99);
	HX_STACK_THIS(this);
	HX_STACK_ARG(graphic,"graphic");
	HX_STACK_LINE(100)
	if (((::Lambda_obj::indexOf(this->_graphics,graphic) < (int)0))){
		HX_STACK_LINE(100)
		return graphic;
	}
	HX_STACK_LINE(101)
	graphic->setEntity(null());
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		Dynamic array = this->_temp;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(102)
		array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
	}
	HX_STACK_LINE(104)
	{
		HX_STACK_LINE(104)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(104)
		while(((_g < _g1->length))){
			HX_STACK_LINE(104)
			::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(104)
			++(_g);
			HX_STACK_LINE(106)
			if (((g == graphic))){
				HX_STACK_LINE(106)
				(this->_count)--;
			}
			else{
				HX_STACK_LINE(107)
				this->_temp[this->_temp->length] = g;
			}
		}
	}
	HX_STACK_LINE(109)
	Array< ::Dynamic > temp = this->_graphics;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(110)
	this->_graphics = this->_temp;
	HX_STACK_LINE(111)
	this->_temp = temp;
	HX_STACK_LINE(112)
	this->updateCheck();
	HX_STACK_LINE(113)
	return graphic;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,remove,return )

::com::haxepunk::Graphic Graphiclist_obj::add( ::com::haxepunk::Graphic graphic){
	HX_STACK_PUSH("Graphiclist::add","com/haxepunk/graphics/Graphiclist.hx",85);
	HX_STACK_THIS(this);
	HX_STACK_ARG(graphic,"graphic");
	HX_STACK_LINE(86)
	if (((graphic == null()))){
		HX_STACK_LINE(86)
		return graphic;
	}
	HX_STACK_LINE(87)
	graphic->setEntity(this->_entity);
	HX_STACK_LINE(88)
	this->_graphics[(this->_count)++] = graphic;
	HX_STACK_LINE(89)
	if ((!(this->active))){
		HX_STACK_LINE(89)
		this->active = graphic->active;
	}
	HX_STACK_LINE(90)
	return graphic;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,add,return )

Void Graphiclist_obj::destroy( ){
{
		HX_STACK_PUSH("Graphiclist::destroy","com/haxepunk/graphics/Graphiclist.hx",72);
		HX_STACK_THIS(this);
		HX_STACK_LINE(73)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(73)
		while(((_g < _g1->length))){
			HX_STACK_LINE(73)
			::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(73)
			++(_g);
			HX_STACK_LINE(75)
			g->destroy();
		}
	}
return null();
}


Void Graphiclist_obj::render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_PUSH("Graphiclist::render","com/haxepunk/graphics/Graphiclist.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(46)
		hx::AddEq(point->x,this->x);
		HX_STACK_LINE(47)
		hx::AddEq(point->y,this->y);
		HX_STACK_LINE(48)
		hx::MultEq(camera->x,this->scrollX);
		HX_STACK_LINE(49)
		hx::MultEq(camera->y,this->scrollY);
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(51)
			while(((_g < _g1->length))){
				HX_STACK_LINE(51)
				::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(51)
				++(_g);
				HX_STACK_LINE(53)
				if ((g->get_visible())){
					HX_STACK_LINE(55)
					if ((g->relative)){
						HX_STACK_LINE(57)
						this->_point->x = point->x;
						HX_STACK_LINE(58)
						this->_point->y = point->y;
					}
					else{
						HX_STACK_LINE(60)
						this->_point->x = this->_point->y = (int)0;
					}
					HX_STACK_LINE(61)
					this->_camera->x = camera->x;
					HX_STACK_LINE(62)
					this->_camera->y = camera->y;
					HX_STACK_LINE(63)
					g->render(target,this->_point,this->_camera);
				}
			}
		}
	}
return null();
}


Void Graphiclist_obj::update( ){
{
		HX_STACK_PUSH("Graphiclist::update","com/haxepunk/graphics/Graphiclist.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_LINE(37)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(37)
		while(((_g < _g1->length))){
			HX_STACK_LINE(37)
			::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(37)
			++(_g);
			HX_STACK_LINE(39)
			if ((g->active)){
				HX_STACK_LINE(39)
				g->update();
			}
		}
	}
return null();
}



Graphiclist_obj::Graphiclist_obj()
{
}

void Graphiclist_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphiclist);
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_MEMBER_NAME(_temp,"_temp");
	HX_MARK_MEMBER_NAME(_graphics,"_graphics");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(children,"children");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Graphiclist_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	HX_VISIT_MEMBER_NAME(_count,"_count");
	HX_VISIT_MEMBER_NAME(_temp,"_temp");
	HX_VISIT_MEMBER_NAME(_graphics,"_graphics");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(children,"children");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Graphiclist_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_temp") ) { return _temp; }
		if (HX_FIELD_EQ(inName,"count") ) { return inCallProp ? get_count() : count; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return inCallProp ? get_children() : children; }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_graphics") ) { return _graphics; }
		if (HX_FIELD_EQ(inName,"set_layer") ) { return set_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"setEntity") ) { return setEntity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_count") ) { return get_count_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateCheck") ) { return updateCheck_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_children") ) { return get_children_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphiclist_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_temp") ) { _temp=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_graphics") ) { _graphics=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphiclist_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_camera"));
	outFields->push(HX_CSTRING("_count"));
	outFields->push(HX_CSTRING("_temp"));
	outFields->push(HX_CSTRING("_graphics"));
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("children"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_camera"),
	HX_CSTRING("_count"),
	HX_CSTRING("_temp"),
	HX_CSTRING("_graphics"),
	HX_CSTRING("updateCheck"),
	HX_CSTRING("set_layer"),
	HX_CSTRING("setEntity"),
	HX_CSTRING("get_count"),
	HX_CSTRING("count"),
	HX_CSTRING("get_children"),
	HX_CSTRING("children"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("removeAt"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("destroy"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphiclist_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphiclist_obj::__mClass,"__mClass");
};

Class Graphiclist_obj::__mClass;

void Graphiclist_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Graphiclist"), hx::TCanCast< Graphiclist_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Graphiclist_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
