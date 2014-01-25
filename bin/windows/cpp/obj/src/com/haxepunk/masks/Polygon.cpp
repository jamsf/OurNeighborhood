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
#ifndef INCLUDED_com_haxepunk_masks_Circle
#include <com/haxepunk/masks/Circle.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Polygon
#include <com/haxepunk/masks/Polygon.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Projection
#include <com/haxepunk/math/Projection.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Vector
#include <com/haxepunk/math/Vector.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
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

Void Polygon_obj::__construct(Array< ::Dynamic > points,::flash::geom::Point origin)
{
HX_STACK_PUSH("Polygon::new","com/haxepunk/masks/Polygon.hx",23);
{
	HX_STACK_LINE(24)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(25)
	this->_points = points;
	HX_STACK_LINE(27)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >()),this->collideHitbox_dyn());
	HX_STACK_LINE(28)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Circle >()),this->collideCircle_dyn());
	HX_STACK_LINE(29)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Polygon >()),this->collidePolygon_dyn());
	HX_STACK_LINE(30)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >()),this->collideGrid_dyn());
	HX_STACK_LINE(32)
	this->origin = (  (((origin != null()))) ? ::flash::geom::Point(origin) : ::flash::geom::Point(::flash::geom::Point_obj::__new(null(),null())) );
	HX_STACK_LINE(33)
	this->_angle = (int)0;
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			this->_axes = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(35)
			Float store;		HX_STACK_VAR(store,"store");
			HX_STACK_LINE(35)
			int numberOfPoints = (this->_points->length - (int)1);		HX_STACK_VAR(numberOfPoints,"numberOfPoints");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(35)
				while(((_g < numberOfPoints))){
					HX_STACK_LINE(35)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(35)
					::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
					HX_STACK_LINE(35)
					edge->x = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->x - this->_points->__get((i + (int)1)).StaticCast< ::flash::geom::Point >()->x);
					HX_STACK_LINE(35)
					edge->y = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->y - this->_points->__get((i + (int)1)).StaticCast< ::flash::geom::Point >()->y);
					HX_STACK_LINE(35)
					store = edge->y;
					HX_STACK_LINE(35)
					edge->y = -(edge->x);
					HX_STACK_LINE(35)
					edge->x = store;
					HX_STACK_LINE(35)
					edge->normalize((int)1);
					HX_STACK_LINE(35)
					this->_axes->push(edge);
				}
			}
			HX_STACK_LINE(35)
			::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(35)
			edge->x = (this->_points->__get(numberOfPoints).StaticCast< ::flash::geom::Point >()->x - this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->x);
			HX_STACK_LINE(35)
			edge->y = (this->_points->__get(numberOfPoints).StaticCast< ::flash::geom::Point >()->y - this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->y);
			HX_STACK_LINE(35)
			store = edge->y;
			HX_STACK_LINE(35)
			edge->y = -(edge->x);
			HX_STACK_LINE(35)
			edge->x = store;
			HX_STACK_LINE(35)
			edge->normalize((int)1);
			HX_STACK_LINE(35)
			this->_axes->push(edge);
		}
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_axes->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(35)
			while(((_g1 < _g))){
				HX_STACK_LINE(35)
				int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
				HX_STACK_LINE(35)
				{
					HX_STACK_LINE(35)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->_axes->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(35)
					while(((_g3 < _g2))){
						HX_STACK_LINE(35)
						int jj = (_g3)++;		HX_STACK_VAR(jj,"jj");
						HX_STACK_LINE(35)
						if (((bool((ii == jj)) || bool((::Math_obj::max(ii,jj) >= this->_axes->length))))){
							HX_STACK_LINE(35)
							continue;
						}
						HX_STACK_LINE(35)
						if (((bool((bool((this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->x == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->y == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->y)))) || bool((bool((-(this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->x) == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((-(this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->y) == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->y))))))){
							HX_STACK_LINE(35)
							this->_axes->splice(jj,(int)1);
						}
					}
				}
			}
		}
		HX_STACK_LINE(35)
		this->update();
	}
}
;
	return null();
}

Polygon_obj::~Polygon_obj() { }

Dynamic Polygon_obj::__CreateEmpty() { return  new Polygon_obj; }
hx::ObjectPtr< Polygon_obj > Polygon_obj::__new(Array< ::Dynamic > points,::flash::geom::Point origin)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(points,origin);
	return result;}

Dynamic Polygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Polygon_obj::updateAxes( ){
{
		HX_STACK_PUSH("Polygon::updateAxes","com/haxepunk/masks/Polygon.hx",472);
		HX_STACK_THIS(this);
		HX_STACK_LINE(473)
		{
			HX_STACK_LINE(473)
			this->_axes = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(473)
			Float store;		HX_STACK_VAR(store,"store");
			HX_STACK_LINE(473)
			int numberOfPoints = (this->_points->length - (int)1);		HX_STACK_VAR(numberOfPoints,"numberOfPoints");
			HX_STACK_LINE(473)
			{
				HX_STACK_LINE(473)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(473)
				while(((_g < numberOfPoints))){
					HX_STACK_LINE(473)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(473)
					::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
					HX_STACK_LINE(473)
					edge->x = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->x - this->_points->__get((i + (int)1)).StaticCast< ::flash::geom::Point >()->x);
					HX_STACK_LINE(473)
					edge->y = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->y - this->_points->__get((i + (int)1)).StaticCast< ::flash::geom::Point >()->y);
					HX_STACK_LINE(473)
					store = edge->y;
					HX_STACK_LINE(473)
					edge->y = -(edge->x);
					HX_STACK_LINE(473)
					edge->x = store;
					HX_STACK_LINE(473)
					edge->normalize((int)1);
					HX_STACK_LINE(473)
					this->_axes->push(edge);
				}
			}
			HX_STACK_LINE(473)
			::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(473)
			edge->x = (this->_points->__get(numberOfPoints).StaticCast< ::flash::geom::Point >()->x - this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->x);
			HX_STACK_LINE(473)
			edge->y = (this->_points->__get(numberOfPoints).StaticCast< ::flash::geom::Point >()->y - this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->y);
			HX_STACK_LINE(473)
			store = edge->y;
			HX_STACK_LINE(473)
			edge->y = -(edge->x);
			HX_STACK_LINE(473)
			edge->x = store;
			HX_STACK_LINE(473)
			edge->normalize((int)1);
			HX_STACK_LINE(473)
			this->_axes->push(edge);
		}
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_axes->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(474)
			while(((_g1 < _g))){
				HX_STACK_LINE(474)
				int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
				HX_STACK_LINE(474)
				{
					HX_STACK_LINE(474)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->_axes->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(474)
					while(((_g3 < _g2))){
						HX_STACK_LINE(474)
						int jj = (_g3)++;		HX_STACK_VAR(jj,"jj");
						HX_STACK_LINE(474)
						if (((bool((ii == jj)) || bool((::Math_obj::max(ii,jj) >= this->_axes->length))))){
							HX_STACK_LINE(474)
							continue;
						}
						HX_STACK_LINE(474)
						if (((bool((bool((this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->x == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->y == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->y)))) || bool((bool((-(this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->x) == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((-(this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->y) == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->y))))))){
							HX_STACK_LINE(474)
							this->_axes->splice(jj,(int)1);
						}
					}
				}
			}
		}
		HX_STACK_LINE(475)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,updateAxes,(void))

Void Polygon_obj::update( ){
{
		HX_STACK_PUSH("Polygon::update","com/haxepunk/masks/Polygon.hx",448);
		HX_STACK_THIS(this);
		HX_STACK_LINE(449)
		this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
		HX_STACK_LINE(450)
		this->_x = ::Math_obj::ceil(::com::haxepunk::masks::Polygon_obj::firstProj->min);
		HX_STACK_LINE(451)
		this->_width = ::Math_obj::ceil((::com::haxepunk::masks::Polygon_obj::firstProj->max - ::com::haxepunk::masks::Polygon_obj::firstProj->min));
		HX_STACK_LINE(452)
		this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
		HX_STACK_LINE(453)
		this->_y = ::Math_obj::ceil(::com::haxepunk::masks::Polygon_obj::secondProj->min);
		HX_STACK_LINE(454)
		this->_height = ::Math_obj::ceil((::com::haxepunk::masks::Polygon_obj::secondProj->max - ::com::haxepunk::masks::Polygon_obj::secondProj->min));
		HX_STACK_LINE(456)
		if (((this->parent != null()))){
			HX_STACK_LINE(459)
			this->parent->width = this->_width;
			HX_STACK_LINE(460)
			this->parent->height = this->_height;
			HX_STACK_LINE(463)
			this->parent->originX = ::Std_obj::_int((Float((((this->_width - ::com::haxepunk::masks::Polygon_obj::firstProj->max) - ::com::haxepunk::masks::Polygon_obj::firstProj->min))) / Float((int)2)));
			HX_STACK_LINE(464)
			this->parent->originY = ::Std_obj::_int((Float((((this->_height - ::com::haxepunk::masks::Polygon_obj::secondProj->max) - ::com::haxepunk::masks::Polygon_obj::secondProj->min))) / Float((int)2)));
		}
		HX_STACK_LINE(468)
		if (((this->list != null()))){
			HX_STACK_LINE(468)
			this->list->update();
		}
	}
return null();
}


Array< ::Dynamic > Polygon_obj::set_points( Array< ::Dynamic > value){
	HX_STACK_PUSH("Polygon::set_points","com/haxepunk/masks/Polygon.hx",438);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(439)
	if (((this->_points == value))){
		HX_STACK_LINE(439)
		return value;
	}
	HX_STACK_LINE(440)
	this->_points = value;
	HX_STACK_LINE(442)
	if (((bool((this->list != null())) || bool((this->parent != null()))))){
		HX_STACK_LINE(442)
		{
			HX_STACK_LINE(442)
			this->_axes = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(442)
			Float store;		HX_STACK_VAR(store,"store");
			HX_STACK_LINE(442)
			int numberOfPoints = (this->_points->length - (int)1);		HX_STACK_VAR(numberOfPoints,"numberOfPoints");
			HX_STACK_LINE(442)
			{
				HX_STACK_LINE(442)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(442)
				while(((_g < numberOfPoints))){
					HX_STACK_LINE(442)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(442)
					::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
					HX_STACK_LINE(442)
					edge->x = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->x - this->_points->__get((i + (int)1)).StaticCast< ::flash::geom::Point >()->x);
					HX_STACK_LINE(442)
					edge->y = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->y - this->_points->__get((i + (int)1)).StaticCast< ::flash::geom::Point >()->y);
					HX_STACK_LINE(442)
					store = edge->y;
					HX_STACK_LINE(442)
					edge->y = -(edge->x);
					HX_STACK_LINE(442)
					edge->x = store;
					HX_STACK_LINE(442)
					edge->normalize((int)1);
					HX_STACK_LINE(442)
					this->_axes->push(edge);
				}
			}
			HX_STACK_LINE(442)
			::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(442)
			edge->x = (this->_points->__get(numberOfPoints).StaticCast< ::flash::geom::Point >()->x - this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->x);
			HX_STACK_LINE(442)
			edge->y = (this->_points->__get(numberOfPoints).StaticCast< ::flash::geom::Point >()->y - this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->y);
			HX_STACK_LINE(442)
			store = edge->y;
			HX_STACK_LINE(442)
			edge->y = -(edge->x);
			HX_STACK_LINE(442)
			edge->x = store;
			HX_STACK_LINE(442)
			edge->normalize((int)1);
			HX_STACK_LINE(442)
			this->_axes->push(edge);
		}
		HX_STACK_LINE(442)
		{
			HX_STACK_LINE(442)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_axes->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(442)
			while(((_g1 < _g))){
				HX_STACK_LINE(442)
				int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
				HX_STACK_LINE(442)
				{
					HX_STACK_LINE(442)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->_axes->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(442)
					while(((_g3 < _g2))){
						HX_STACK_LINE(442)
						int jj = (_g3)++;		HX_STACK_VAR(jj,"jj");
						HX_STACK_LINE(442)
						if (((bool((ii == jj)) || bool((::Math_obj::max(ii,jj) >= this->_axes->length))))){
							HX_STACK_LINE(442)
							continue;
						}
						HX_STACK_LINE(442)
						if (((bool((bool((this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->x == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->y == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->y)))) || bool((bool((-(this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->x) == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((-(this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->y) == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->y))))))){
							HX_STACK_LINE(442)
							this->_axes->splice(jj,(int)1);
						}
					}
				}
			}
		}
		HX_STACK_LINE(442)
		this->update();
	}
	HX_STACK_LINE(443)
	return this->_points;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,set_points,return )

Array< ::Dynamic > Polygon_obj::get_points( ){
	HX_STACK_PUSH("Polygon::get_points","com/haxepunk/masks/Polygon.hx",436);
	HX_STACK_THIS(this);
	HX_STACK_LINE(436)
	return this->_points;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_points,return )

Float Polygon_obj::set_angle( Float value){
	HX_STACK_PUSH("Polygon::set_angle","com/haxepunk/masks/Polygon.hx",424);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(425)
	if (((value == this->_angle))){
		HX_STACK_LINE(425)
		return value;
	}
	HX_STACK_LINE(426)
	this->rotate((this->_angle - value));
	HX_STACK_LINE(427)
	if (((bool((this->list != null())) || bool((this->parent != null()))))){
		HX_STACK_LINE(427)
		this->update();
	}
	HX_STACK_LINE(428)
	return this->_angle = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,set_angle,return )

Float Polygon_obj::get_angle( ){
	HX_STACK_PUSH("Polygon::get_angle","com/haxepunk/masks/Polygon.hx",422);
	HX_STACK_THIS(this);
	HX_STACK_LINE(422)
	return this->_angle;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_angle,return )

Void Polygon_obj::debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_PUSH("Polygon::debugDraw","com/haxepunk/masks/Polygon.hx",403);
		HX_STACK_THIS(this);
		HX_STACK_ARG(graphics,"graphics");
		HX_STACK_ARG(scaleX,"scaleX");
		HX_STACK_ARG(scaleY,"scaleY");
		HX_STACK_LINE(403)
		if (((this->parent != null()))){
			struct _Function_2_1{
				inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",406);
					{
						HX_STACK_LINE(406)
						::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(406)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",407);
					{
						HX_STACK_LINE(407)
						::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(407)
						return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
					}
					return null();
				}
			};
			HX_STACK_LINE(406)
			Float offsetX = (_Function_2_1::Block(this) - ::com::haxepunk::HXP_obj::camera->x);		HX_STACK_VAR(offsetX,"offsetX");
			Float offsetY = (_Function_2_2::Block(this) - ::com::haxepunk::HXP_obj::camera->y);		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(409)
			graphics->moveTo((((this->_points->__get((this->_points->length - (int)1)).StaticCast< ::flash::geom::Point >()->x + offsetX)) * scaleX),(((this->_points->__get((this->_points->length - (int)1)).StaticCast< ::flash::geom::Point >()->y + offsetY)) * scaleY));
			HX_STACK_LINE(410)
			{
				HX_STACK_LINE(410)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(410)
				while(((_g1 < _g))){
					HX_STACK_LINE(410)
					int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
					HX_STACK_LINE(412)
					graphics->lineTo((((this->_points->__get(ii).StaticCast< ::flash::geom::Point >()->x + offsetX)) * scaleX),(((this->_points->__get(ii).StaticCast< ::flash::geom::Point >()->y + offsetY)) * scaleY));
				}
			}
		}
	}
return null();
}


Void Polygon_obj::rotate( Float angle){
{
		HX_STACK_PUSH("Polygon::rotate","com/haxepunk/masks/Polygon.hx",376);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_LINE(377)
		hx::MultEq(angle,(Float(::Math_obj::PI) / Float((int)-180)));
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(379)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_points;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(379)
			while(((_g < _g1->length))){
				HX_STACK_LINE(379)
				::flash::geom::Point p = _g1->__get(_g).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(379)
				++(_g);
				HX_STACK_LINE(381)
				Float dx = (p->x - this->origin->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(382)
				Float dy = (p->y - this->origin->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(384)
				Float pointAngle = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(pointAngle,"pointAngle");
				HX_STACK_LINE(385)
				Float length = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(387)
				p->x = ((::Math_obj::cos((pointAngle + angle)) * length) + this->origin->x);
				HX_STACK_LINE(388)
				p->y = ((::Math_obj::sin((pointAngle + angle)) * length) + this->origin->y);
			}
		}
		HX_STACK_LINE(390)
		{
			HX_STACK_LINE(390)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(390)
			while(((_g < _g1->length))){
				HX_STACK_LINE(390)
				::com::haxepunk::math::Vector ax = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(ax,"ax");
				HX_STACK_LINE(390)
				++(_g);
				HX_STACK_LINE(393)
				Float axisAngle = ::Math_obj::atan2(ax->y,ax->x);		HX_STACK_VAR(axisAngle,"axisAngle");
				HX_STACK_LINE(395)
				ax->x = ::Math_obj::cos((axisAngle + angle));
				HX_STACK_LINE(396)
				ax->y = ::Math_obj::sin((axisAngle + angle));
			}
		}
		HX_STACK_LINE(398)
		hx::AddEq(this->_angle,angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,rotate,(void))

Void Polygon_obj::project( ::com::haxepunk::math::Vector axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_PUSH("Polygon::project","com/haxepunk/masks/Polygon.hx",354);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(projection,"projection");
		struct _Function_1_1{
			inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this,::com::haxepunk::math::Vector &axis){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",355);
				{
					HX_STACK_LINE(355)
					::flash::geom::Point p = __this->_points->__get((int)0).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(355)
					return ((axis->x * p->x) + (axis->y * p->y));
				}
				return null();
			}
		};
		HX_STACK_LINE(355)
		Float min = _Function_1_1::Block(this,axis);		HX_STACK_VAR(min,"min");
		Float max = min;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(358)
		{
			HX_STACK_LINE(358)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(358)
			while(((_g1 < _g))){
				HX_STACK_LINE(358)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				struct _Function_3_1{
					inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this,::com::haxepunk::math::Vector &axis,int &i){
						HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",360);
						{
							HX_STACK_LINE(360)
							::flash::geom::Point p = __this->_points->__get(i).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(360)
							return ((axis->x * p->x) + (axis->y * p->y));
						}
						return null();
					}
				};
				HX_STACK_LINE(360)
				Float cur = _Function_3_1::Block(this,axis,i);		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(362)
				if (((cur < min))){
					HX_STACK_LINE(363)
					min = cur;
				}
				else{
					HX_STACK_LINE(366)
					if (((cur > max))){
						HX_STACK_LINE(367)
						max = cur;
					}
				}
			}
		}
		HX_STACK_LINE(371)
		projection->min = min;
		HX_STACK_LINE(372)
		projection->max = max;
	}
return null();
}


bool Polygon_obj::collidePolygon( ::com::haxepunk::masks::Polygon other){
	HX_STACK_PUSH("Polygon::collidePolygon","com/haxepunk/masks/Polygon.hx",315);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",316);
			{
				HX_STACK_LINE(316)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(316)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Polygon &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",316);
			{
				HX_STACK_LINE(316)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(316)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(316)
	Float offsetX = (_Function_1_1::Block(this) - _Function_1_2::Block(other));		HX_STACK_VAR(offsetX,"offsetX");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",317);
			{
				HX_STACK_LINE(317)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(317)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Polygon &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",317);
			{
				HX_STACK_LINE(317)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(317)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(317)
	Float offsetY = (_Function_1_3::Block(this) - _Function_1_4::Block(other));		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(319)
	{
		HX_STACK_LINE(319)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(319)
		while(((_g < _g1->length))){
			HX_STACK_LINE(319)
			::com::haxepunk::math::Vector a = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(319)
			++(_g);
			HX_STACK_LINE(321)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(322)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(325)
			Float offset = ((offsetX * a->x) + (offsetY * a->y));		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(326)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(327)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",329);
					{
						HX_STACK_LINE(329)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(329)
						return (bool((_this->min > other1->max)) || bool((_this->max < other1->min)));
					}
					return null();
				}
			};
			HX_STACK_LINE(329)
			if ((_Function_3_1::Block())){
				HX_STACK_LINE(330)
				return false;
			}
		}
	}
	HX_STACK_LINE(335)
	{
		HX_STACK_LINE(335)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = other->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(335)
		while(((_g < _g1->length))){
			HX_STACK_LINE(335)
			::com::haxepunk::math::Vector a = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(335)
			++(_g);
			HX_STACK_LINE(337)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(338)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(341)
			Float offset = ((offsetX * a->x) + (offsetY * a->y));		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(342)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(343)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",345);
					{
						HX_STACK_LINE(345)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(345)
						return (bool((_this->min > other1->max)) || bool((_this->max < other1->min)));
					}
					return null();
				}
			};
			HX_STACK_LINE(345)
			if ((_Function_3_1::Block())){
				HX_STACK_LINE(346)
				return false;
			}
		}
	}
	HX_STACK_LINE(350)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collidePolygon,return )

bool Polygon_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_PUSH("Polygon::collideMask","com/haxepunk/masks/Polygon.hx",265);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",267);
			{
				HX_STACK_LINE(267)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(267)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",267);
			{
				HX_STACK_LINE(267)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(267)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",268);
			{
				HX_STACK_LINE(268)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(268)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",268);
			{
				HX_STACK_LINE(268)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(268)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(266)
	Float offset;		HX_STACK_VAR(offset,"offset");
	Float offsetX = (_Function_1_1::Block(this) - _Function_1_2::Block(other));		HX_STACK_VAR(offsetX,"offsetX");
	Float offsetY = (_Function_1_3::Block(this) - _Function_1_4::Block(other));		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(270)
	this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(271)
	other->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(273)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(274)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetY);
	struct _Function_1_5{
		inline static bool Block( ){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",276);
			{
				HX_STACK_LINE(276)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(276)
				return (bool((_this->min > other1->max)) || bool((_this->max < other1->min)));
			}
			return null();
		}
	};
	HX_STACK_LINE(276)
	if ((_Function_1_5::Block())){
		HX_STACK_LINE(277)
		return false;
	}
	HX_STACK_LINE(281)
	this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(282)
	other->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(284)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(285)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetX);
	struct _Function_1_6{
		inline static bool Block( ){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",287);
			{
				HX_STACK_LINE(287)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(287)
				return (bool((_this->min > other1->max)) || bool((_this->max < other1->min)));
			}
			return null();
		}
	};
	HX_STACK_LINE(287)
	if ((_Function_1_6::Block())){
		HX_STACK_LINE(288)
		return false;
	}
	HX_STACK_LINE(292)
	{
		HX_STACK_LINE(292)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(292)
		while(((_g < _g1->length))){
			HX_STACK_LINE(292)
			::com::haxepunk::math::Vector a = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(292)
			++(_g);
			HX_STACK_LINE(294)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(295)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(297)
			Float offset1 = ((offsetX * a->x) + (offsetY * a->y));		HX_STACK_VAR(offset1,"offset1");
			HX_STACK_LINE(298)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset1);
			HX_STACK_LINE(299)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset1);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",301);
					{
						HX_STACK_LINE(301)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(301)
						return (bool((_this->min > other1->max)) || bool((_this->max < other1->min)));
					}
					return null();
				}
			};
			HX_STACK_LINE(301)
			if ((_Function_3_1::Block())){
				HX_STACK_LINE(302)
				return false;
			}
		}
	}
	HX_STACK_LINE(306)
	return true;
}


bool Polygon_obj::collideHitbox( ::com::haxepunk::masks::Hitbox hitbox){
	HX_STACK_PUSH("Polygon::collideHitbox","com/haxepunk/masks/Polygon.hx",220);
	HX_STACK_THIS(this);
	HX_STACK_ARG(hitbox,"hitbox");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",222);
			{
				HX_STACK_LINE(222)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(222)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &hitbox){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",222);
			{
				HX_STACK_LINE(222)
				::com::haxepunk::Entity _this = hitbox->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(222)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",223);
			{
				HX_STACK_LINE(223)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(223)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &hitbox){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",223);
			{
				HX_STACK_LINE(223)
				::com::haxepunk::Entity _this = hitbox->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(223)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(221)
	Float offset;		HX_STACK_VAR(offset,"offset");
	Float offsetX = (_Function_1_1::Block(this) - _Function_1_2::Block(hitbox));		HX_STACK_VAR(offsetX,"offsetX");
	Float offsetY = (_Function_1_3::Block(this) - _Function_1_4::Block(hitbox));		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(225)
	this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(226)
	hitbox->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(228)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetY);
	HX_STACK_LINE(229)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetY);
	struct _Function_1_5{
		inline static bool Block( ){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",231);
			{
				HX_STACK_LINE(231)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(231)
				return (bool((_this->min > other->max)) || bool((_this->max < other->min)));
			}
			return null();
		}
	};
	HX_STACK_LINE(231)
	if ((_Function_1_5::Block())){
		HX_STACK_LINE(232)
		return false;
	}
	HX_STACK_LINE(236)
	this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(237)
	hitbox->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(239)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(240)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetX);
	struct _Function_1_6{
		inline static bool Block( ){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",242);
			{
				HX_STACK_LINE(242)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(242)
				return (bool((_this->min > other->max)) || bool((_this->max < other->min)));
			}
			return null();
		}
	};
	HX_STACK_LINE(242)
	if ((_Function_1_6::Block())){
		HX_STACK_LINE(243)
		return false;
	}
	HX_STACK_LINE(247)
	{
		HX_STACK_LINE(247)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(247)
		while(((_g < _g1->length))){
			HX_STACK_LINE(247)
			::com::haxepunk::math::Vector a = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(247)
			++(_g);
			HX_STACK_LINE(249)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(250)
			hitbox->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(252)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(253)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(254)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",256);
					{
						HX_STACK_LINE(256)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(256)
						return (bool((_this->min > other->max)) || bool((_this->max < other->min)));
					}
					return null();
				}
			};
			HX_STACK_LINE(256)
			if ((_Function_3_1::Block())){
				HX_STACK_LINE(257)
				return false;
			}
		}
	}
	HX_STACK_LINE(261)
	return true;
}


bool Polygon_obj::collideCircle( ::com::haxepunk::masks::Circle circle){
	HX_STACK_PUSH("Polygon::collideCircle","com/haxepunk/masks/Polygon.hx",156);
	HX_STACK_THIS(this);
	HX_STACK_ARG(circle,"circle");
	HX_STACK_LINE(157)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(160)
	Float distanceSquared = ((int)179 * ::Math_obj::pow((int)10,(int)306));		HX_STACK_VAR(distanceSquared,"distanceSquared");
	HX_STACK_LINE(161)
	::flash::geom::Point closestPoint = null();		HX_STACK_VAR(closestPoint,"closestPoint");
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_points;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(162)
		while(((_g < _g1->length))){
			HX_STACK_LINE(162)
			::flash::geom::Point p = _g1->__get(_g).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(162)
			++(_g);
			struct _Function_3_1{
				inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",164);
					{
						HX_STACK_LINE(164)
						::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(164)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( ::com::haxepunk::masks::Circle &circle){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",164);
					{
						HX_STACK_LINE(164)
						::com::haxepunk::Entity _this = circle->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(164)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(164)
			Float dx = (((_Function_3_1::Block(this) + p->x) - _Function_3_2::Block(circle)) - circle->_radius);		HX_STACK_VAR(dx,"dx");
			struct _Function_3_3{
				inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",165);
					{
						HX_STACK_LINE(165)
						::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(165)
						return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
					}
					return null();
				}
			};
			struct _Function_3_4{
				inline static Float Block( ::com::haxepunk::masks::Circle &circle){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",165);
					{
						HX_STACK_LINE(165)
						::com::haxepunk::Entity _this = circle->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(165)
						return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
					}
					return null();
				}
			};
			HX_STACK_LINE(165)
			Float dy = (((_Function_3_3::Block(this) + p->y) - _Function_3_4::Block(circle)) - circle->_radius);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(166)
			Float tempDistance = ((dx * dx) + (dy * dy));		HX_STACK_VAR(tempDistance,"tempDistance");
			HX_STACK_LINE(168)
			if (((tempDistance < distanceSquared))){
				HX_STACK_LINE(170)
				distanceSquared = tempDistance;
				HX_STACK_LINE(171)
				closestPoint = p;
			}
		}
	}
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",175);
			{
				HX_STACK_LINE(175)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(175)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Circle &circle){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",175);
			{
				HX_STACK_LINE(175)
				::com::haxepunk::Entity _this = circle->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(175)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(175)
	Float offsetX = ((_Function_1_1::Block(this) - _Function_1_2::Block(circle)) - circle->_radius);		HX_STACK_VAR(offsetX,"offsetX");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",176);
			{
				HX_STACK_LINE(176)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(176)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Circle &circle){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",176);
			{
				HX_STACK_LINE(176)
				::com::haxepunk::Entity _this = circle->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(176)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(176)
	Float offsetY = ((_Function_1_3::Block(this) - _Function_1_4::Block(circle)) - circle->_radius);		HX_STACK_VAR(offsetY,"offsetY");
	struct _Function_1_5{
		inline static Float Block( ::com::haxepunk::masks::Circle &circle){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",180);
			{
				HX_STACK_LINE(180)
				::com::haxepunk::Entity _this = circle->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(180)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",180);
			{
				HX_STACK_LINE(180)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(180)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(180)
	::com::haxepunk::masks::Polygon_obj::_axis->x = ((_Function_1_5::Block(circle) - _Function_1_6::Block(this)) + closestPoint->y);
	struct _Function_1_7{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",181);
			{
				HX_STACK_LINE(181)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(181)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_8{
		inline static Float Block( ::com::haxepunk::masks::Circle &circle){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",181);
			{
				HX_STACK_LINE(181)
				::com::haxepunk::Entity _this = circle->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(181)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(181)
	::com::haxepunk::masks::Polygon_obj::_axis->y = ((_Function_1_7::Block(this) + closestPoint->x) - _Function_1_8::Block(circle));
	HX_STACK_LINE(182)
	::com::haxepunk::masks::Polygon_obj::_axis->normalize((int)1);
	HX_STACK_LINE(184)
	this->project(::com::haxepunk::masks::Polygon_obj::_axis,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(185)
	circle->project(::com::haxepunk::masks::Polygon_obj::_axis,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(187)
	offset = ((offsetX * ::com::haxepunk::masks::Polygon_obj::_axis->x) + (offsetY * ::com::haxepunk::masks::Polygon_obj::_axis->y));
	HX_STACK_LINE(188)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
	HX_STACK_LINE(189)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
	struct _Function_1_9{
		inline static bool Block( ){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",191);
			{
				HX_STACK_LINE(191)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(191)
				return (bool((_this->min > other->max)) || bool((_this->max < other->min)));
			}
			return null();
		}
	};
	HX_STACK_LINE(191)
	if ((_Function_1_9::Block())){
		HX_STACK_LINE(192)
		return false;
	}
	HX_STACK_LINE(196)
	{
		HX_STACK_LINE(196)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(196)
		while(((_g < _g1->length))){
			HX_STACK_LINE(196)
			::com::haxepunk::math::Vector a = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(196)
			++(_g);
			HX_STACK_LINE(198)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(199)
			circle->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(201)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(202)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(203)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",205);
					{
						HX_STACK_LINE(205)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(205)
						return (bool((_this->min > other->max)) || bool((_this->max < other->min)));
					}
					return null();
				}
			};
			HX_STACK_LINE(205)
			if ((_Function_3_1::Block())){
				HX_STACK_LINE(206)
				return false;
			}
		}
	}
	HX_STACK_LINE(211)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideCircle,return )

bool Polygon_obj::collideGrid( ::com::haxepunk::masks::Grid grid){
	HX_STACK_PUSH("Polygon::collideGrid","com/haxepunk/masks/Polygon.hx",95);
	HX_STACK_THIS(this);
	HX_STACK_ARG(grid,"grid");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = (this->_points->length - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(96)
		while(((_g1 < _g))){
			HX_STACK_LINE(96)
			int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
			struct _Function_3_1{
				inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",98);
					{
						HX_STACK_LINE(98)
						::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(98)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(98)
			Float p1X = (Float(((_Function_3_1::Block(this) + this->_points->__get(ii).StaticCast< ::flash::geom::Point >()->x))) / Float(::Std_obj::_int(grid->_tile->width)));		HX_STACK_VAR(p1X,"p1X");
			struct _Function_3_2{
				inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",99);
					{
						HX_STACK_LINE(99)
						::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(99)
						return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
					}
					return null();
				}
			};
			HX_STACK_LINE(99)
			Float p1Y = (Float(((_Function_3_2::Block(this) + this->_points->__get(ii).StaticCast< ::flash::geom::Point >()->y))) / Float(::Std_obj::_int(grid->_tile->height)));		HX_STACK_VAR(p1Y,"p1Y");
			struct _Function_3_3{
				inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",100);
					{
						HX_STACK_LINE(100)
						::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(100)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(100)
			Float p2X = (Float(((_Function_3_3::Block(this) + this->_points->__get((ii + (int)1)).StaticCast< ::flash::geom::Point >()->x))) / Float(::Std_obj::_int(grid->_tile->width)));		HX_STACK_VAR(p2X,"p2X");
			struct _Function_3_4{
				inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",101);
					{
						HX_STACK_LINE(101)
						::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(101)
						return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
					}
					return null();
				}
			};
			HX_STACK_LINE(101)
			Float p2Y = (Float(((_Function_3_4::Block(this) + this->_points->__get((ii + (int)1)).StaticCast< ::flash::geom::Point >()->y))) / Float(::Std_obj::_int(grid->_tile->height)));		HX_STACK_VAR(p2Y,"p2Y");
			HX_STACK_LINE(103)
			Float k = (Float(((p2Y - p1Y))) / Float(((p2X - p1X))));		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(104)
			Float m = (p1Y - (k * p1X));		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(106)
			Float min;		HX_STACK_VAR(min,"min");
			HX_STACK_LINE(107)
			Float max;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(109)
			if (((p2X > p1X))){
				HX_STACK_LINE(109)
				min = p1X;
				HX_STACK_LINE(109)
				max = p2X;
			}
			else{
				HX_STACK_LINE(110)
				max = p1X;
				HX_STACK_LINE(110)
				min = p2X;
			}
			HX_STACK_LINE(112)
			Float x = min;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(113)
			while(((x < max))){
				HX_STACK_LINE(115)
				int y = ::Std_obj::_int(((k * x) + m));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(116)
				if ((grid->getTile(::Std_obj::_int(x),y))){
					HX_STACK_LINE(117)
					return true;
				}
				HX_STACK_LINE(119)
				(x)++;
			}
		}
	}
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",123);
			{
				HX_STACK_LINE(123)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(123)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(123)
	Float p1X = (Float(((_Function_1_1::Block(this) + this->_points->__get((this->_points->length - (int)1)).StaticCast< ::flash::geom::Point >()->x))) / Float(::Std_obj::_int(grid->_tile->width)));		HX_STACK_VAR(p1X,"p1X");
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",124);
			{
				HX_STACK_LINE(124)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(124)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(124)
	Float p1Y = (Float(((_Function_1_2::Block(this) + this->_points->__get((this->_points->length - (int)1)).StaticCast< ::flash::geom::Point >()->y))) / Float(::Std_obj::_int(grid->_tile->height)));		HX_STACK_VAR(p1Y,"p1Y");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",125);
			{
				HX_STACK_LINE(125)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(125)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(125)
	Float p2X = (Float(((_Function_1_3::Block(this) + this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->x))) / Float(::Std_obj::_int(grid->_tile->width)));		HX_STACK_VAR(p2X,"p2X");
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",126);
			{
				HX_STACK_LINE(126)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(126)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(126)
	Float p2Y = (Float(((_Function_1_4::Block(this) + this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->y))) / Float(::Std_obj::_int(grid->_tile->height)));		HX_STACK_VAR(p2Y,"p2Y");
	HX_STACK_LINE(128)
	Float k = (Float(((p2Y - p1Y))) / Float(((p2X - p1X))));		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(129)
	Float m = (p1Y - (k * p1X));		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(131)
	Float min;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(132)
	Float max;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(134)
	if (((p2X > p1X))){
		HX_STACK_LINE(134)
		min = p1X;
		HX_STACK_LINE(134)
		max = p2X;
	}
	else{
		HX_STACK_LINE(135)
		max = p1X;
		HX_STACK_LINE(135)
		min = p2X;
	}
	HX_STACK_LINE(137)
	Float x = min;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(138)
	while(((x < max))){
		HX_STACK_LINE(140)
		int y = ::Std_obj::_int(((k * x) + m));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(141)
		if ((grid->getTile(::Std_obj::_int(x),y))){
			HX_STACK_LINE(142)
			return true;
		}
		HX_STACK_LINE(144)
		(x)++;
	}
	HX_STACK_LINE(147)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideGrid,return )

Void Polygon_obj::removeDuplicateAxes( ){
{
		HX_STACK_PUSH("Polygon::removeDuplicateAxes","com/haxepunk/masks/Polygon.hx",70);
		HX_STACK_THIS(this);
		HX_STACK_LINE(71)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_axes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		while(((_g1 < _g))){
			HX_STACK_LINE(71)
			int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = this->_axes->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(73)
				while(((_g3 < _g2))){
					HX_STACK_LINE(73)
					int jj = (_g3)++;		HX_STACK_VAR(jj,"jj");
					HX_STACK_LINE(75)
					if (((bool((ii == jj)) || bool((::Math_obj::max(ii,jj) >= this->_axes->length))))){
						HX_STACK_LINE(75)
						continue;
					}
					HX_STACK_LINE(79)
					if (((bool((bool((this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->x == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->y == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->y)))) || bool((bool((-(this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->x) == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((-(this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->y) == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->y))))))){
						HX_STACK_LINE(81)
						this->_axes->splice(jj,(int)1);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,removeDuplicateAxes,(void))

Void Polygon_obj::generateAxes( ){
{
		HX_STACK_PUSH("Polygon::generateAxes","com/haxepunk/masks/Polygon.hx",39);
		HX_STACK_THIS(this);
		HX_STACK_LINE(40)
		this->_axes = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(41)
		Float store;		HX_STACK_VAR(store,"store");
		HX_STACK_LINE(42)
		int numberOfPoints = (this->_points->length - (int)1);		HX_STACK_VAR(numberOfPoints,"numberOfPoints");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(43)
			while(((_g < numberOfPoints))){
				HX_STACK_LINE(43)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(45)
				::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
				HX_STACK_LINE(46)
				edge->x = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->x - this->_points->__get((i + (int)1)).StaticCast< ::flash::geom::Point >()->x);
				HX_STACK_LINE(47)
				edge->y = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->y - this->_points->__get((i + (int)1)).StaticCast< ::flash::geom::Point >()->y);
				HX_STACK_LINE(50)
				store = edge->y;
				HX_STACK_LINE(51)
				edge->y = -(edge->x);
				HX_STACK_LINE(52)
				edge->x = store;
				HX_STACK_LINE(53)
				edge->normalize((int)1);
				HX_STACK_LINE(55)
				this->_axes->push(edge);
			}
		}
		HX_STACK_LINE(57)
		::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
		HX_STACK_LINE(59)
		edge->x = (this->_points->__get(numberOfPoints).StaticCast< ::flash::geom::Point >()->x - this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->x);
		HX_STACK_LINE(60)
		edge->y = (this->_points->__get(numberOfPoints).StaticCast< ::flash::geom::Point >()->y - this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->y);
		HX_STACK_LINE(61)
		store = edge->y;
		HX_STACK_LINE(62)
		edge->y = -(edge->x);
		HX_STACK_LINE(63)
		edge->x = store;
		HX_STACK_LINE(64)
		edge->normalize((int)1);
		HX_STACK_LINE(66)
		this->_axes->push(edge);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,generateAxes,(void))

::com::haxepunk::masks::Polygon Polygon_obj::createPolygon( hx::Null< int >  __o_sides,hx::Null< Float >  __o_radius,hx::Null< Float >  __o_angle){
int sides = __o_sides.Default(3);
Float radius = __o_radius.Default(100);
Float angle = __o_angle.Default(0);
	HX_STACK_PUSH("Polygon::createPolygon","com/haxepunk/masks/Polygon.hx",486);
	HX_STACK_ARG(sides,"sides");
	HX_STACK_ARG(radius,"radius");
	HX_STACK_ARG(angle,"angle");
{
		HX_STACK_LINE(487)
		if (((sides < (int)3))){
			HX_STACK_LINE(488)
			hx::Throw (HX_CSTRING("The polygon needs at least 3 sides"));
		}
		HX_STACK_LINE(492)
		Float rotationAngle = (Float((::Math_obj::PI * (int)2)) / Float(sides));		HX_STACK_VAR(rotationAngle,"rotationAngle");
		HX_STACK_LINE(495)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(497)
			while(((_g < sides))){
				HX_STACK_LINE(497)
				int ii = (_g)++;		HX_STACK_VAR(ii,"ii");
				HX_STACK_LINE(499)
				Float tempAngle = (ii * rotationAngle);		HX_STACK_VAR(tempAngle,"tempAngle");
				HX_STACK_LINE(500)
				::flash::geom::Point p = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(501)
				p->x = (::Math_obj::cos(tempAngle) * radius);
				HX_STACK_LINE(502)
				p->y = (::Math_obj::sin(tempAngle) * radius);
				HX_STACK_LINE(503)
				points->push(p);
			}
		}
		HX_STACK_LINE(506)
		::com::haxepunk::masks::Polygon poly = ::com::haxepunk::masks::Polygon_obj::__new(points,null());		HX_STACK_VAR(poly,"poly");
		HX_STACK_LINE(507)
		poly->set_angle(angle);
		HX_STACK_LINE(508)
		return poly;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,createPolygon,return )

::com::haxepunk::masks::Polygon Polygon_obj::createFromArray( Array< Float > points){
	HX_STACK_PUSH("Polygon::createFromArray","com/haxepunk/masks/Polygon.hx",518);
	HX_STACK_ARG(points,"points");
	HX_STACK_LINE(519)
	Array< ::Dynamic > p = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(521)
	int ii = (int)0;		HX_STACK_VAR(ii,"ii");
	HX_STACK_LINE(522)
	while(((ii < points->length))){
		HX_STACK_LINE(523)
		p->push(::flash::geom::Point_obj::__new(points->__get((ii)++),points->__get((ii)++)));
	}
	HX_STACK_LINE(526)
	return ::com::haxepunk::masks::Polygon_obj::__new(p,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,createFromArray,return )

::com::haxepunk::math::Vector Polygon_obj::_axis;

::com::haxepunk::math::Projection Polygon_obj::firstProj;

::com::haxepunk::math::Projection Polygon_obj::secondProj;

::com::haxepunk::math::Vector Polygon_obj::vertical;

::com::haxepunk::math::Vector Polygon_obj::horizontal;


Polygon_obj::Polygon_obj()
{
}

void Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Polygon);
	HX_MARK_MEMBER_NAME(_axes,"_axes");
	HX_MARK_MEMBER_NAME(_points,"_points");
	HX_MARK_MEMBER_NAME(_angle,"_angle");
	HX_MARK_MEMBER_NAME(origin,"origin");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_axes,"_axes");
	HX_VISIT_MEMBER_NAME(_points,"_points");
	HX_VISIT_MEMBER_NAME(_angle,"_angle");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Polygon_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { return _axis; }
		if (HX_FIELD_EQ(inName,"_axes") ) { return _axes; }
		if (HX_FIELD_EQ(inName,"angle") ) { return get_angle(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { return _angle; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"points") ) { return get_points(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { return _points; }
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { return vertical; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstProj") ) { return firstProj; }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondProj") ) { return secondProj; }
		if (HX_FIELD_EQ(inName,"horizontal") ) { return horizontal; }
		if (HX_FIELD_EQ(inName,"updateAxes") ) { return updateAxes_dyn(); }
		if (HX_FIELD_EQ(inName,"set_points") ) { return set_points_dyn(); }
		if (HX_FIELD_EQ(inName,"get_points") ) { return get_points_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"generateAxes") ) { return generateAxes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createPolygon") ) { return createPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"collideCircle") ) { return collideCircle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collidePolygon") ) { return collidePolygon_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createFromArray") ) { return createFromArray_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeDuplicateAxes") ) { return removeDuplicateAxes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Polygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { _axis=inValue.Cast< ::com::haxepunk::math::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_axes") ) { _axes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { return set_angle(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points") ) { return set_points(inValue); }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { _points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { vertical=inValue.Cast< ::com::haxepunk::math::Vector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstProj") ) { firstProj=inValue.Cast< ::com::haxepunk::math::Projection >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondProj") ) { secondProj=inValue.Cast< ::com::haxepunk::math::Projection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"horizontal") ) { horizontal=inValue.Cast< ::com::haxepunk::math::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_axes"));
	outFields->push(HX_CSTRING("_points"));
	outFields->push(HX_CSTRING("_angle"));
	outFields->push(HX_CSTRING("points"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("origin"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createPolygon"),
	HX_CSTRING("createFromArray"),
	HX_CSTRING("_axis"),
	HX_CSTRING("firstProj"),
	HX_CSTRING("secondProj"),
	HX_CSTRING("vertical"),
	HX_CSTRING("horizontal"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_axes"),
	HX_CSTRING("_points"),
	HX_CSTRING("_angle"),
	HX_CSTRING("updateAxes"),
	HX_CSTRING("update"),
	HX_CSTRING("set_points"),
	HX_CSTRING("get_points"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("get_angle"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("rotate"),
	HX_CSTRING("project"),
	HX_CSTRING("collidePolygon"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideCircle"),
	HX_CSTRING("collideGrid"),
	HX_CSTRING("removeDuplicateAxes"),
	HX_CSTRING("generateAxes"),
	HX_CSTRING("origin"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Polygon_obj::_axis,"_axis");
	HX_MARK_MEMBER_NAME(Polygon_obj::firstProj,"firstProj");
	HX_MARK_MEMBER_NAME(Polygon_obj::secondProj,"secondProj");
	HX_MARK_MEMBER_NAME(Polygon_obj::vertical,"vertical");
	HX_MARK_MEMBER_NAME(Polygon_obj::horizontal,"horizontal");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Polygon_obj::_axis,"_axis");
	HX_VISIT_MEMBER_NAME(Polygon_obj::firstProj,"firstProj");
	HX_VISIT_MEMBER_NAME(Polygon_obj::secondProj,"secondProj");
	HX_VISIT_MEMBER_NAME(Polygon_obj::vertical,"vertical");
	HX_VISIT_MEMBER_NAME(Polygon_obj::horizontal,"horizontal");
};

Class Polygon_obj::__mClass;

void Polygon_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Polygon"), hx::TCanCast< Polygon_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Polygon_obj::__boot()
{
	_axis= ::com::haxepunk::math::Vector_obj::__new(null(),null());
	firstProj= ::com::haxepunk::math::Projection_obj::__new();
	secondProj= ::com::haxepunk::math::Projection_obj::__new();
	vertical= ::com::haxepunk::math::Vector_obj::__new((int)0,(int)1);
	horizontal= ::com::haxepunk::math::Vector_obj::__new((int)1,(int)0);
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
