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
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Pixelmask
#include <com/haxepunk/masks/Pixelmask.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Grid_obj::__construct(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_PUSH("Grid::new","com/haxepunk/masks/Grid.hx",33);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(34)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(37)
	if (((bool((bool((bool((width == (int)0)) || bool((height == (int)0)))) || bool((tileWidth == (int)0)))) || bool((tileHeight == (int)0))))){
		HX_STACK_LINE(38)
		hx::Throw (HX_CSTRING("Illegal Grid, sizes cannot be 0."));
	}
	HX_STACK_LINE(42)
	this->_rect = ::com::haxepunk::HXP_obj::rect;
	HX_STACK_LINE(43)
	this->_point = ::com::haxepunk::HXP_obj::point;
	HX_STACK_LINE(44)
	this->_point2 = ::com::haxepunk::HXP_obj::point2;
	HX_STACK_LINE(47)
	this->columns = ::Std_obj::_int((Float(width) / Float(tileWidth)));
	HX_STACK_LINE(48)
	this->rows = ::Std_obj::_int((Float(height) / Float(tileHeight)));
	HX_STACK_LINE(50)
	this->_tile = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,tileWidth,tileHeight);
	HX_STACK_LINE(51)
	this->_x = x;
	HX_STACK_LINE(52)
	this->_y = y;
	HX_STACK_LINE(53)
	this->_width = width;
	HX_STACK_LINE(54)
	this->_height = height;
	HX_STACK_LINE(55)
	this->usePositions = false;
	HX_STACK_LINE(58)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >()),this->collideMask_dyn());
	HX_STACK_LINE(59)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >()),this->collideHitbox_dyn());
	HX_STACK_LINE(60)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Pixelmask >()),this->collidePixelmask_dyn());
	HX_STACK_LINE(61)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >()),this->collideGrid_dyn());
	HX_STACK_LINE(63)
	this->data = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->rows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		while(((_g1 < _g))){
			HX_STACK_LINE(64)
			int x1 = (_g1)++;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(66)
			this->data->push(Array_obj< bool >::__new());
		}
	}
}
;
	return null();
}

Grid_obj::~Grid_obj() { }

Dynamic Grid_obj::__CreateEmpty() { return  new Grid_obj; }
hx::ObjectPtr< Grid_obj > Grid_obj::__new(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct(width,height,tileWidth,tileHeight,__o_x,__o_y);
	return result;}

Dynamic Grid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Grid_obj::squareProjection( ::flash::geom::Point axis,::flash::geom::Point point){
{
		HX_STACK_PUSH("Grid::squareProjection","com/haxepunk/masks/Grid.hx",510);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(510)
		if (((axis->x < axis->y))){
			HX_STACK_LINE(513)
			point->x = axis->x;
			HX_STACK_LINE(514)
			point->y = axis->y;
		}
		else{
			HX_STACK_LINE(518)
			point->y = axis->x;
			HX_STACK_LINE(519)
			point->x = axis->y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,squareProjection,(void))

Void Grid_obj::debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_PUSH("Grid::debugDraw","com/haxepunk/masks/Grid.hx",470);
		HX_STACK_THIS(this);
		HX_STACK_ARG(graphics,"graphics");
		HX_STACK_ARG(scaleX,"scaleX");
		HX_STACK_ARG(scaleY,"scaleY");
		struct _Function_1_1{
			inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",471);
				{
					HX_STACK_LINE(471)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(471)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(471)
		::com::haxepunk::HXP_obj::point->x = ((((this->_x + _Function_1_1::Block(this)) - ::com::haxepunk::HXP_obj::camera->x)) * ::com::haxepunk::HXP_obj::screen->fullScaleX);
		struct _Function_1_2{
			inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",472);
				{
					HX_STACK_LINE(472)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(472)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(472)
		::com::haxepunk::HXP_obj::point->y = ((((this->_y + _Function_1_2::Block(this)) - ::com::haxepunk::HXP_obj::camera->y)) * ::com::haxepunk::HXP_obj::screen->fullScaleY);
		HX_STACK_LINE(474)
		graphics->beginFill((int)255,0.3);
		HX_STACK_LINE(475)
		Float stepX = (::Std_obj::_int(this->_tile->width) * ::com::haxepunk::HXP_obj::screen->fullScaleX);		HX_STACK_VAR(stepX,"stepX");
		Float stepY = (::Std_obj::_int(this->_tile->height) * ::com::haxepunk::HXP_obj::screen->fullScaleY);		HX_STACK_VAR(stepY,"stepY");
		Float pos = (::com::haxepunk::HXP_obj::point->x + stepX);		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(479)
		{
			HX_STACK_LINE(479)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->columns;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(479)
			while(((_g1 < _g))){
				HX_STACK_LINE(479)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(481)
				graphics->drawRect(pos,::com::haxepunk::HXP_obj::point->y,(int)1,(this->_height * ::com::haxepunk::HXP_obj::screen->fullScaleX));
				HX_STACK_LINE(482)
				hx::AddEq(pos,stepX);
			}
		}
		HX_STACK_LINE(485)
		pos = (::com::haxepunk::HXP_obj::point->y + stepY);
		HX_STACK_LINE(486)
		{
			HX_STACK_LINE(486)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(486)
			while(((_g1 < _g))){
				HX_STACK_LINE(486)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(488)
				graphics->drawRect(::com::haxepunk::HXP_obj::point->x,pos,(this->_width * ::com::haxepunk::HXP_obj::screen->fullScaleY),(int)1);
				HX_STACK_LINE(489)
				hx::AddEq(pos,stepY);
			}
		}
		HX_STACK_LINE(492)
		::com::haxepunk::HXP_obj::rect->y = ::com::haxepunk::HXP_obj::point->y;
		HX_STACK_LINE(493)
		{
			HX_STACK_LINE(493)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(493)
			while(((_g1 < _g))){
				HX_STACK_LINE(493)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(495)
				::com::haxepunk::HXP_obj::rect->x = ::com::haxepunk::HXP_obj::point->x;
				HX_STACK_LINE(496)
				{
					HX_STACK_LINE(496)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->columns;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(496)
					while(((_g3 < _g2))){
						HX_STACK_LINE(496)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(498)
						if ((this->data->__get(y).StaticCast< Array< bool > >()->__get(x))){
							HX_STACK_LINE(499)
							graphics->drawRect(::com::haxepunk::HXP_obj::rect->x,::com::haxepunk::HXP_obj::rect->y,stepX,stepY);
						}
						HX_STACK_LINE(502)
						hx::AddEq(::com::haxepunk::HXP_obj::rect->x,stepX);
					}
				}
				HX_STACK_LINE(504)
				hx::AddEq(::com::haxepunk::HXP_obj::rect->y,stepY);
			}
		}
		HX_STACK_LINE(506)
		graphics->endFill();
	}
return null();
}


bool Grid_obj::collideGrid( ::com::haxepunk::masks::Grid other){
	HX_STACK_PUSH("Grid::collideGrid","com/haxepunk/masks/Grid.hx",381);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",383);
			{
				HX_STACK_LINE(383)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(383)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(383)
	Float ax1 = (_Function_1_1::Block(this) + this->_x);		HX_STACK_VAR(ax1,"ax1");
	HX_STACK_LINE(384)
	Float ax2 = (ax1 + this->_width);		HX_STACK_VAR(ax2,"ax2");
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Grid &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",385);
			{
				HX_STACK_LINE(385)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(385)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(385)
	Float bx1 = (_Function_1_2::Block(other) + other->_x);		HX_STACK_VAR(bx1,"bx1");
	HX_STACK_LINE(386)
	Float bx2 = (bx1 + other->_width);		HX_STACK_VAR(bx2,"bx2");
	HX_STACK_LINE(387)
	if (((bool((ax2 < bx1)) || bool((ax1 > bx2))))){
		HX_STACK_LINE(387)
		return false;
	}
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",390);
			{
				HX_STACK_LINE(390)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(390)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(390)
	Float ay1 = (_Function_1_3::Block(this) + this->_y);		HX_STACK_VAR(ay1,"ay1");
	HX_STACK_LINE(391)
	Float ay2 = (ay1 + this->_height);		HX_STACK_VAR(ay2,"ay2");
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Grid &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",392);
			{
				HX_STACK_LINE(392)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(392)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(392)
	Float by1 = (_Function_1_4::Block(other) + other->_y);		HX_STACK_VAR(by1,"by1");
	HX_STACK_LINE(393)
	Float by2 = (by1 + other->_height);		HX_STACK_VAR(by2,"by2");
	HX_STACK_LINE(394)
	if (((bool((ay2 < by1)) || bool((ay1 > by2))))){
		HX_STACK_LINE(394)
		return false;
	}
	HX_STACK_LINE(397)
	Float ox1 = (  (((ax1 > bx1))) ? Float(ax1) : Float(bx1) );		HX_STACK_VAR(ox1,"ox1");
	HX_STACK_LINE(398)
	Float oy1 = (  (((ay1 > by1))) ? Float(ay1) : Float(by1) );		HX_STACK_VAR(oy1,"oy1");
	HX_STACK_LINE(399)
	Float ox2 = (  (((ax2 < bx2))) ? Float(ax2) : Float(bx2) );		HX_STACK_VAR(ox2,"ox2");
	HX_STACK_LINE(400)
	Float oy2 = (  (((ay2 < by2))) ? Float(ay2) : Float(by2) );		HX_STACK_VAR(oy2,"oy2");
	HX_STACK_LINE(405)
	Float tw;		HX_STACK_VAR(tw,"tw");
	Float th;		HX_STACK_VAR(th,"th");
	HX_STACK_LINE(406)
	if (((this->_tile->width < other->_tile->width))){
		HX_STACK_LINE(408)
		tw = this->_tile->width;
		struct _Function_2_1{
			inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",409);
				{
					HX_STACK_LINE(409)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(409)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(409)
		hx::SubEq(ox1,(_Function_2_1::Block(this) + this->_x));
		HX_STACK_LINE(410)
		ox1 = (::Std_obj::_int((Float(ox1) / Float(tw))) * tw);
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",411);
				{
					HX_STACK_LINE(411)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(411)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(411)
		hx::AddEq(ox1,(_Function_2_2::Block(this) + this->_x));
	}
	else{
		HX_STACK_LINE(415)
		tw = other->_tile->width;
		struct _Function_2_1{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",416);
				{
					HX_STACK_LINE(416)
					::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(416)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(416)
		hx::SubEq(ox1,(_Function_2_1::Block(other) + other->_x));
		HX_STACK_LINE(417)
		ox1 = (::Std_obj::_int((Float(ox1) / Float(tw))) * tw);
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",418);
				{
					HX_STACK_LINE(418)
					::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(418)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(418)
		hx::AddEq(ox1,(_Function_2_2::Block(other) + other->_x));
	}
	HX_STACK_LINE(420)
	if (((this->_tile->height < other->_tile->height))){
		HX_STACK_LINE(422)
		th = this->_tile->height;
		struct _Function_2_1{
			inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",423);
				{
					HX_STACK_LINE(423)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(423)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(423)
		hx::SubEq(oy1,(_Function_2_1::Block(this) + this->_y));
		HX_STACK_LINE(424)
		oy1 = (::Std_obj::_int((Float(oy1) / Float(th))) * th);
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",425);
				{
					HX_STACK_LINE(425)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(425)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(425)
		hx::AddEq(oy1,(_Function_2_2::Block(this) + this->_y));
	}
	else{
		HX_STACK_LINE(429)
		th = other->_tile->height;
		struct _Function_2_1{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",430);
				{
					HX_STACK_LINE(430)
					::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(430)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(430)
		hx::SubEq(oy1,(_Function_2_1::Block(other) + other->_y));
		HX_STACK_LINE(431)
		oy1 = (::Std_obj::_int((Float(oy1) / Float(th))) * th);
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",432);
				{
					HX_STACK_LINE(432)
					::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(432)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(432)
		hx::AddEq(oy1,(_Function_2_2::Block(other) + other->_y));
	}
	HX_STACK_LINE(436)
	Float y = oy1;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(437)
	Float x = (int)0;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(438)
	while(((y < oy2))){
		struct _Function_2_1{
			inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",440);
				{
					HX_STACK_LINE(440)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(440)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(440)
		int ar1 = ::Std_obj::_int((Float((((y - _Function_2_1::Block(this)) - this->_y))) / Float(this->_tile->height)));		HX_STACK_VAR(ar1,"ar1");
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",441);
				{
					HX_STACK_LINE(441)
					::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(441)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(441)
		int br1 = ::Std_obj::_int((Float((((y - _Function_2_2::Block(other)) - other->_y))) / Float(other->_tile->height)));		HX_STACK_VAR(br1,"br1");
		struct _Function_2_3{
			inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",442);
				{
					HX_STACK_LINE(442)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(442)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(442)
		int ar2 = ::Std_obj::_int((Float(((((y - _Function_2_3::Block(this)) - this->_y) + ((th - (int)1))))) / Float(this->_tile->height)));		HX_STACK_VAR(ar2,"ar2");
		struct _Function_2_4{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",443);
				{
					HX_STACK_LINE(443)
					::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(443)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(443)
		int br2 = ::Std_obj::_int((Float(((((y - _Function_2_4::Block(other)) - other->_y) + ((th - (int)1))))) / Float(other->_tile->height)));		HX_STACK_VAR(br2,"br2");
		HX_STACK_LINE(445)
		x = ox1;
		HX_STACK_LINE(446)
		while(((x < ox2))){
			struct _Function_3_1{
				inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",448);
					{
						HX_STACK_LINE(448)
						::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(448)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(448)
			int ac1 = ::Std_obj::_int((Float((((x - _Function_3_1::Block(this)) - this->_x))) / Float(this->_tile->width)));		HX_STACK_VAR(ac1,"ac1");
			struct _Function_3_2{
				inline static Float Block( ::com::haxepunk::masks::Grid &other){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",449);
					{
						HX_STACK_LINE(449)
						::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(449)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(449)
			int bc1 = ::Std_obj::_int((Float((((x - _Function_3_2::Block(other)) - other->_x))) / Float(other->_tile->width)));		HX_STACK_VAR(bc1,"bc1");
			struct _Function_3_3{
				inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",450);
					{
						HX_STACK_LINE(450)
						::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(450)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(450)
			int ac2 = ::Std_obj::_int((Float(((((x - _Function_3_3::Block(this)) - this->_x) + ((tw - (int)1))))) / Float(this->_tile->width)));		HX_STACK_VAR(ac2,"ac2");
			struct _Function_3_4{
				inline static Float Block( ::com::haxepunk::masks::Grid &other){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",451);
					{
						HX_STACK_LINE(451)
						::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(451)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(451)
			int bc2 = ::Std_obj::_int((Float(((((x - _Function_3_4::Block(other)) - other->_x) + ((tw - (int)1))))) / Float(other->_tile->width)));		HX_STACK_VAR(bc2,"bc2");
			HX_STACK_LINE(454)
			if (((bool((bool((bool((bool(this->getTile(ac1,ar1)) && bool(other->getTile(bc1,br1)))) || bool((bool(this->getTile(ac2,ar1)) && bool(other->getTile(bc2,br1)))))) || bool((bool(this->getTile(ac1,ar2)) && bool(other->getTile(bc1,br2)))))) || bool((bool(this->getTile(ac2,ar2)) && bool(other->getTile(bc2,br2))))))){
				HX_STACK_LINE(458)
				return true;
			}
			HX_STACK_LINE(461)
			hx::AddEq(x,tw);
		}
		HX_STACK_LINE(463)
		hx::AddEq(y,th);
	}
	HX_STACK_LINE(466)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,collideGrid,return )

bool Grid_obj::collidePixelmask( ::com::haxepunk::masks::Pixelmask other){
	HX_STACK_PUSH("Grid::collidePixelmask","com/haxepunk/masks/Grid.hx",332);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(374)
	::haxe::Log_obj::trace(HX_CSTRING("Pixelmasks will not work in targets other than flash due to hittest not being implemented in OpenFL."),hx::SourceInfo(HX_CSTRING("Grid.hx"),374,HX_CSTRING("com.haxepunk.masks.Grid"),HX_CSTRING("collidePixelmask")));
	HX_STACK_LINE(376)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,collidePixelmask,return )

bool Grid_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_PUSH("Grid::collideHitbox","com/haxepunk/masks/Grid.hx",308);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(309)
	int rectX;		HX_STACK_VAR(rectX,"rectX");
	int rectY;		HX_STACK_VAR(rectY,"rectY");
	int pointX;		HX_STACK_VAR(pointX,"pointX");
	int pointY;		HX_STACK_VAR(pointY,"pointY");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",310);
			{
				HX_STACK_LINE(310)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(310)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",310);
			{
				HX_STACK_LINE(310)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(310)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(310)
	this->_rect->x = (((_Function_1_1::Block(other) - other->_x) - _Function_1_2::Block(this)) + this->_x);
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",311);
			{
				HX_STACK_LINE(311)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(311)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",311);
			{
				HX_STACK_LINE(311)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(311)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(311)
	this->_rect->y = (((_Function_1_3::Block(other) - other->_y) - _Function_1_4::Block(this)) + this->_y);
	HX_STACK_LINE(312)
	pointX = (::Std_obj::_int((Float((((this->_rect->x + other->_width) - (int)1))) / Float(this->_tile->width))) + (int)1);
	HX_STACK_LINE(313)
	pointY = (::Std_obj::_int((Float((((this->_rect->y + other->_height) - (int)1))) / Float(this->_tile->height))) + (int)1);
	HX_STACK_LINE(314)
	rectX = ::Std_obj::_int((Float(this->_rect->x) / Float(this->_tile->width)));
	HX_STACK_LINE(315)
	rectY = ::Std_obj::_int((Float(this->_rect->y) / Float(this->_tile->height)));
	HX_STACK_LINE(317)
	{
		HX_STACK_LINE(317)
		int _g = rectY;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(317)
		while(((_g < pointY))){
			HX_STACK_LINE(317)
			int dy = (_g)++;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				int _g1 = rectX;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(319)
				while(((_g1 < pointX))){
					HX_STACK_LINE(319)
					int dx = (_g1)++;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(321)
					if ((this->getTile(dx,dy))){
						HX_STACK_LINE(322)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(327)
	return false;
}


bool Grid_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_PUSH("Grid::collideMask","com/haxepunk/masks/Grid.hx",284);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(285)
	int rectX;		HX_STACK_VAR(rectX,"rectX");
	int rectY;		HX_STACK_VAR(rectY,"rectY");
	int pointX;		HX_STACK_VAR(pointX,"pointX");
	int pointY;		HX_STACK_VAR(pointY,"pointY");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",286);
			{
				HX_STACK_LINE(286)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(286)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",286);
			{
				HX_STACK_LINE(286)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(286)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(286)
	this->_rect->x = (((_Function_1_1::Block(other) - other->parent->originX) - _Function_1_2::Block(this)) + this->parent->originX);
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",287);
			{
				HX_STACK_LINE(287)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(287)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",287);
			{
				HX_STACK_LINE(287)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(287)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(287)
	this->_rect->y = (((_Function_1_3::Block(other) - other->parent->originY) - _Function_1_4::Block(this)) + this->parent->originY);
	HX_STACK_LINE(288)
	pointX = (::Std_obj::_int((Float((((this->_rect->x + other->parent->width) - (int)1))) / Float(this->_tile->width))) + (int)1);
	HX_STACK_LINE(289)
	pointY = (::Std_obj::_int((Float((((this->_rect->y + other->parent->height) - (int)1))) / Float(this->_tile->height))) + (int)1);
	HX_STACK_LINE(290)
	rectX = ::Std_obj::_int((Float(this->_rect->x) / Float(this->_tile->width)));
	HX_STACK_LINE(291)
	rectY = ::Std_obj::_int((Float(this->_rect->y) / Float(this->_tile->height)));
	HX_STACK_LINE(293)
	{
		HX_STACK_LINE(293)
		int _g = rectY;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(293)
		while(((_g < pointY))){
			HX_STACK_LINE(293)
			int dy = (_g)++;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(295)
			{
				HX_STACK_LINE(295)
				int _g1 = rectX;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(295)
				while(((_g1 < pointX))){
					HX_STACK_LINE(295)
					int dx = (_g1)++;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(297)
					if ((this->getTile(dx,dy))){
						HX_STACK_LINE(298)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(303)
	return false;
}


int Grid_obj::get_tileHeight( ){
	HX_STACK_PUSH("Grid::get_tileHeight","com/haxepunk/masks/Grid.hx",265);
	HX_STACK_THIS(this);
	HX_STACK_LINE(265)
	return ::Std_obj::_int(this->_tile->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_tileHeight,return )

int Grid_obj::get_tileWidth( ){
	HX_STACK_PUSH("Grid::get_tileWidth","com/haxepunk/masks/Grid.hx",259);
	HX_STACK_THIS(this);
	HX_STACK_LINE(259)
	return ::Std_obj::_int(this->_tile->width);
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_tileWidth,return )

::com::haxepunk::masks::Grid Grid_obj::clone( ){
	HX_STACK_PUSH("Grid::clone","com/haxepunk/masks/Grid.hx",243);
	HX_STACK_THIS(this);
	HX_STACK_LINE(244)
	::com::haxepunk::masks::Grid cloneGrid = ::com::haxepunk::masks::Grid_obj::__new(this->_width,this->_height,::Std_obj::_int(this->_tile->width),::Std_obj::_int(this->_tile->height),this->_x,this->_y);		HX_STACK_VAR(cloneGrid,"cloneGrid");
	HX_STACK_LINE(245)
	{
		HX_STACK_LINE(245)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->rows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(245)
		while(((_g1 < _g))){
			HX_STACK_LINE(245)
			int y = (_g1)++;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(247)
			{
				HX_STACK_LINE(247)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = this->columns;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(247)
				while(((_g3 < _g2))){
					HX_STACK_LINE(247)
					int x = (_g3)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(249)
					cloneGrid->setTile(x,y,this->getTile(x,y));
				}
			}
		}
	}
	HX_STACK_LINE(252)
	return cloneGrid;
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,clone,return )

::String Grid_obj::saveToString( ::String __o_columnSep,::String __o_rowSep){
::String columnSep = __o_columnSep.Default(HX_CSTRING(","));
::String rowSep = __o_rowSep.Default(HX_CSTRING("\n"));
	HX_STACK_PUSH("Grid::saveToString","com/haxepunk/masks/Grid.hx",222);
	HX_STACK_THIS(this);
	HX_STACK_ARG(columnSep,"columnSep");
	HX_STACK_ARG(rowSep,"rowSep");
{
		HX_STACK_LINE(223)
		::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
		int x;		HX_STACK_VAR(x,"x");
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(225)
			while(((_g1 < _g))){
				HX_STACK_LINE(225)
				int y1 = (_g1)++;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(227)
				{
					HX_STACK_LINE(227)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->columns;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(227)
					while(((_g3 < _g2))){
						HX_STACK_LINE(227)
						int x1 = (_g3)++;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(229)
						hx::AddEq(s,::Std_obj::string(this->getTile(x1,y1)));
						HX_STACK_LINE(230)
						if (((x1 != (this->columns - (int)1)))){
							HX_STACK_LINE(230)
							hx::AddEq(s,columnSep);
						}
					}
				}
				HX_STACK_LINE(232)
				if (((y1 != (this->rows - (int)1)))){
					HX_STACK_LINE(232)
					hx::AddEq(s,rowSep);
				}
			}
		}
		HX_STACK_LINE(234)
		return s;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,saveToString,return )

Void Grid_obj::loadFrom2DArray( Array< ::Dynamic > array){
{
		HX_STACK_PUSH("Grid::loadFrom2DArray","com/haxepunk/masks/Grid.hx",204);
		HX_STACK_THIS(this);
		HX_STACK_ARG(array,"array");
		HX_STACK_LINE(205)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = array->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(205)
		while(((_g1 < _g))){
			HX_STACK_LINE(205)
			int y = (_g1)++;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(207)
			{
				HX_STACK_LINE(207)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = array->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(207)
				while(((_g3 < _g2))){
					HX_STACK_LINE(207)
					int x = (_g3)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(209)
					this->setTile(x,y,(array->__get(y).StaticCast< Array< int > >()->__get(x) > (int)0));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,loadFrom2DArray,(void))

Void Grid_obj::loadFromString( ::String str,::String __o_columnSep,::String __o_rowSep){
::String columnSep = __o_columnSep.Default(HX_CSTRING(","));
::String rowSep = __o_rowSep.Default(HX_CSTRING("\n"));
	HX_STACK_PUSH("Grid::loadFromString","com/haxepunk/masks/Grid.hx",182);
	HX_STACK_THIS(this);
	HX_STACK_ARG(str,"str");
	HX_STACK_ARG(columnSep,"columnSep");
	HX_STACK_ARG(rowSep,"rowSep");
{
		HX_STACK_LINE(183)
		Array< ::String > row = str.split(rowSep);		HX_STACK_VAR(row,"row");
		int rows = row->length;		HX_STACK_VAR(rows,"rows");
		Array< ::String > col;		HX_STACK_VAR(col,"col");
		int cols;		HX_STACK_VAR(cols,"cols");
		int x;		HX_STACK_VAR(x,"x");
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(186)
			while(((_g < rows))){
				HX_STACK_LINE(186)
				int y1 = (_g)++;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(188)
				if (((row->__get(y1) == HX_CSTRING("")))){
					HX_STACK_LINE(188)
					continue;
				}
				HX_STACK_LINE(189)
				col = row->__get(y1).split(columnSep);
				HX_STACK_LINE(190)
				cols = col->length;
				HX_STACK_LINE(191)
				{
					HX_STACK_LINE(191)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(191)
					while(((_g1 < cols))){
						HX_STACK_LINE(191)
						int x1 = (_g1)++;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(193)
						if (((col->__get(x1) == HX_CSTRING("")))){
							HX_STACK_LINE(193)
							continue;
						}
						HX_STACK_LINE(194)
						this->setTile(x1,y1,(::Std_obj::parseInt(col->__get(x1)) > (int)0));
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,loadFromString,(void))

Void Grid_obj::clearRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
	HX_STACK_PUSH("Grid::clearRect","com/haxepunk/masks/Grid.hx",171);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
{
		HX_STACK_LINE(171)
		this->setRect(column,row,width,height,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Grid_obj,clearRect,(void))

Void Grid_obj::setRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< bool >  __o_solid){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
bool solid = __o_solid.Default(true);
	HX_STACK_PUSH("Grid::setRect","com/haxepunk/masks/Grid.hx",145);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(solid,"solid");
{
		HX_STACK_LINE(146)
		if ((this->usePositions)){
			HX_STACK_LINE(148)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(149)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
			HX_STACK_LINE(150)
			width = ::Std_obj::_int((Float(width) / Float(this->_tile->width)));
			HX_STACK_LINE(151)
			height = ::Std_obj::_int((Float(height) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			int _g1 = row;		HX_STACK_VAR(_g1,"_g1");
			int _g = (row + height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(154)
			while(((_g1 < _g))){
				HX_STACK_LINE(154)
				int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
				HX_STACK_LINE(156)
				{
					HX_STACK_LINE(156)
					int _g3 = column;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = (column + width);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(156)
					while(((_g3 < _g2))){
						HX_STACK_LINE(156)
						int xx = (_g3)++;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(158)
						this->setTile(xx,yy,solid);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Grid_obj,setRect,(void))

bool Grid_obj::getTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_PUSH("Grid::getTile","com/haxepunk/masks/Grid.hx",125);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
{
		HX_STACK_LINE(126)
		if ((!(((  (((bool((bool((bool((column < (int)0)) || bool((column > (this->columns - (int)1))))) || bool((row < (int)0)))) || bool((row > (this->rows - (int)1)))))) ? bool(false) : bool(true) ))))){
			HX_STACK_LINE(126)
			return false;
		}
		HX_STACK_LINE(128)
		if ((this->usePositions)){
			HX_STACK_LINE(130)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(131)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(133)
		return this->data->__get(row).StaticCast< Array< bool > >()->__get(column);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,getTile,return )

bool Grid_obj::checkTile( int column,int row){
	HX_STACK_PUSH("Grid::checkTile","com/haxepunk/masks/Grid.hx",105);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_LINE(105)
	if (((bool((bool((bool((column < (int)0)) || bool((column > (this->columns - (int)1))))) || bool((row < (int)0)))) || bool((row > (this->rows - (int)1)))))){
		HX_STACK_LINE(108)
		return false;
	}
	else{
		HX_STACK_LINE(113)
		return true;
	}
	HX_STACK_LINE(105)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,checkTile,return )

Void Grid_obj::clearTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_PUSH("Grid::clearTile","com/haxepunk/masks/Grid.hx",100);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
{
		HX_STACK_LINE(100)
		this->setTile(column,row,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,clearTile,(void))

Void Grid_obj::setTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< bool >  __o_solid){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
bool solid = __o_solid.Default(true);
	HX_STACK_PUSH("Grid::setTile","com/haxepunk/masks/Grid.hx",83);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(solid,"solid");
{
		HX_STACK_LINE(84)
		if ((!(((  (((bool((bool((bool((column < (int)0)) || bool((column > (this->columns - (int)1))))) || bool((row < (int)0)))) || bool((row > (this->rows - (int)1)))))) ? bool(false) : bool(true) ))))){
			HX_STACK_LINE(84)
			return null();
		}
		HX_STACK_LINE(86)
		if ((this->usePositions)){
			HX_STACK_LINE(88)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(89)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(91)
		this->data->__get(row).StaticCast< Array< bool > >()[column] = solid;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,setTile,(void))


Grid_obj::Grid_obj()
{
}

void Grid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Grid);
	HX_MARK_MEMBER_NAME(_point2,"_point2");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_tile,"_tile");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(usePositions,"usePositions");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Grid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_point2,"_point2");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_tile,"_tile");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(usePositions,"usePositions");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Grid_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"_tile") ) { return _tile; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { return _point2; }
		if (HX_FIELD_EQ(inName,"columns") ) { return columns; }
		if (HX_FIELD_EQ(inName,"setRect") ) { return setRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return get_tileWidth(); }
		if (HX_FIELD_EQ(inName,"clearRect") ) { return clearRect_dyn(); }
		if (HX_FIELD_EQ(inName,"checkTile") ) { return checkTile_dyn(); }
		if (HX_FIELD_EQ(inName,"clearTile") ) { return clearTile_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return get_tileHeight(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"saveToString") ) { return saveToString_dyn(); }
		if (HX_FIELD_EQ(inName,"usePositions") ) { return usePositions; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tileWidth") ) { return get_tileWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_tileHeight") ) { return get_tileHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFromString") ) { return loadFromString_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadFrom2DArray") ) { return loadFrom2DArray_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"squareProjection") ) { return squareProjection_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePixelmask") ) { return collidePixelmask_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Grid_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile") ) { _tile=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { _point2=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { usePositions=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_point2"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_tile"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("columns"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("usePositions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_point2"),
	HX_CSTRING("_point"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_tile"),
	HX_CSTRING("squareProjection"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("collideGrid"),
	HX_CSTRING("collidePixelmask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("data"),
	HX_CSTRING("rows"),
	HX_CSTRING("columns"),
	HX_CSTRING("get_tileHeight"),
	HX_CSTRING("get_tileWidth"),
	HX_CSTRING("clone"),
	HX_CSTRING("saveToString"),
	HX_CSTRING("loadFrom2DArray"),
	HX_CSTRING("loadFromString"),
	HX_CSTRING("clearRect"),
	HX_CSTRING("setRect"),
	HX_CSTRING("getTile"),
	HX_CSTRING("checkTile"),
	HX_CSTRING("clearTile"),
	HX_CSTRING("setTile"),
	HX_CSTRING("usePositions"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

Class Grid_obj::__mClass;

void Grid_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Grid"), hx::TCanCast< Grid_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Grid_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
