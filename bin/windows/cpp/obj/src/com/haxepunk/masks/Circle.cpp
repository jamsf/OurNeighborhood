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
#ifndef INCLUDED_com_haxepunk_masks_SlopedGrid
#include <com/haxepunk/masks/SlopedGrid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_TileType
#include <com/haxepunk/masks/TileType.h>
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

Void Circle_obj::__construct(hx::Null< int >  __o_radius,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_PUSH("Circle::new","com/haxepunk/masks/Circle.hx",25);
int radius = __o_radius.Default(1);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(26)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(27)
	this->set_radius(radius);
	HX_STACK_LINE(28)
	this->_x = (x + radius);
	HX_STACK_LINE(29)
	this->_y = (y + radius);
	HX_STACK_LINE(31)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >()),this->collideMask_dyn());
	HX_STACK_LINE(32)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Circle >()),this->collideCircle_dyn());
	HX_STACK_LINE(33)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >()),this->collideHitbox_dyn());
	HX_STACK_LINE(34)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >()),this->collideGrid_dyn());
	HX_STACK_LINE(35)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::SlopedGrid >()),this->collideSlopedGrid_dyn());
}
;
	return null();
}

Circle_obj::~Circle_obj() { }

Dynamic Circle_obj::__CreateEmpty() { return  new Circle_obj; }
hx::ObjectPtr< Circle_obj > Circle_obj::__new(hx::Null< int >  __o_radius,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Circle_obj > result = new Circle_obj();
	result->__construct(__o_radius,__o_x,__o_y);
	return result;}

Dynamic Circle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Circle_obj > result = new Circle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Circle_obj::update( ){
{
		HX_STACK_PUSH("Circle::update","com/haxepunk/masks/Circle.hx",243);
		HX_STACK_THIS(this);
		HX_STACK_LINE(243)
		if (((this->parent != null()))){
			HX_STACK_LINE(247)
			this->parent->originX = (-(this->_x) + this->_radius);
			HX_STACK_LINE(248)
			this->parent->originY = (-(this->_y) + this->_radius);
			HX_STACK_LINE(249)
			this->parent->height = this->parent->width = (this->_radius + this->_radius);
			HX_STACK_LINE(252)
			if (((this->list != null()))){
				HX_STACK_LINE(253)
				this->list->update();
			}
		}
	}
return null();
}


int Circle_obj::set_radius( int value){
	HX_STACK_PUSH("Circle::set_radius","com/haxepunk/masks/Circle.hx",231);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(232)
	if (((this->_radius == value))){
		HX_STACK_LINE(232)
		return value;
	}
	HX_STACK_LINE(233)
	this->_radius = value;
	HX_STACK_LINE(234)
	this->_squaredRadius = (value * value);
	HX_STACK_LINE(235)
	this->set_height(this->set_width((this->_radius + this->_radius)));
	HX_STACK_LINE(236)
	if (((this->list != null()))){
		HX_STACK_LINE(236)
		this->list->update();
	}
	else{
		HX_STACK_LINE(237)
		if (((this->parent != null()))){
			HX_STACK_LINE(237)
			this->update();
		}
	}
	HX_STACK_LINE(238)
	return this->_radius;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,set_radius,return )

int Circle_obj::get_radius( ){
	HX_STACK_PUSH("Circle::get_radius","com/haxepunk/masks/Circle.hx",229);
	HX_STACK_THIS(this);
	HX_STACK_LINE(229)
	return this->_radius;
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,get_radius,return )

int Circle_obj::get_y( ){
	HX_STACK_PUSH("Circle::get_y","com/haxepunk/masks/Circle.hx",223);
	HX_STACK_THIS(this);
	HX_STACK_LINE(223)
	return (this->_y - this->_radius);
}


int Circle_obj::get_x( ){
	HX_STACK_PUSH("Circle::get_x","com/haxepunk/masks/Circle.hx",222);
	HX_STACK_THIS(this);
	HX_STACK_LINE(222)
	return (this->_x - this->_radius);
}


Void Circle_obj::debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_PUSH("Circle::debugDraw","com/haxepunk/masks/Circle.hx",218);
		HX_STACK_THIS(this);
		HX_STACK_ARG(graphics,"graphics");
		HX_STACK_ARG(scaleX,"scaleX");
		HX_STACK_ARG(scaleY,"scaleY");
		struct _Function_1_1{
			inline static Float Block( ::com::haxepunk::masks::Circle_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",219);
				{
					HX_STACK_LINE(219)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(219)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Float Block( ::com::haxepunk::masks::Circle_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",219);
				{
					HX_STACK_LINE(219)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(219)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(218)
		graphics->drawCircle(((((_Function_1_1::Block(this) + this->_x) - ::com::haxepunk::HXP_obj::camera->x)) * scaleX),((((_Function_1_2::Block(this) + this->_y) - ::com::haxepunk::HXP_obj::camera->y)) * scaleY),(this->_radius * scaleX));
	}
return null();
}


Void Circle_obj::project( ::com::haxepunk::math::Vector axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_PUSH("Circle::project","com/haxepunk/masks/Circle.hx",212);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(projection,"projection");
		HX_STACK_LINE(213)
		projection->min = -(this->_radius);
		HX_STACK_LINE(214)
		projection->max = this->_radius;
	}
return null();
}


bool Circle_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_PUSH("Circle::collideHitbox","com/haxepunk/masks/Circle.hx",195);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Circle_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",196);
			{
				HX_STACK_LINE(196)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(196)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",196);
			{
				HX_STACK_LINE(196)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(196)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Circle_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",197);
			{
				HX_STACK_LINE(197)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(197)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",197);
			{
				HX_STACK_LINE(197)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(197)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(196)
	Float dx = ::Math_obj::abs((((_Function_1_1::Block(this) + this->_x) - _Function_1_2::Block(other)) + other->get_x()));		HX_STACK_VAR(dx,"dx");
	Float dy = ::Math_obj::abs((((_Function_1_3::Block(this) + this->_y) - _Function_1_4::Block(other)) + other->get_y()));		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(199)
	if (((bool((dx <= other->get_width())) || bool((dy <= other->get_height()))))){
		HX_STACK_LINE(200)
		return true;
	}
	HX_STACK_LINE(203)
	if (((bool((dx > (other->get_width() + this->_radius))) || bool((dy > (other->get_height() + this->_radius)))))){
		HX_STACK_LINE(204)
		return false;
	}
	HX_STACK_LINE(208)
	return (((dx * dx) + (dy * dy)) <= this->_squaredRadius);
}


bool Circle_obj::collideSlopedGrid( ::com::haxepunk::masks::SlopedGrid other){
	HX_STACK_PUSH("Circle::collideSlopedGrid","com/haxepunk/masks/Circle.hx",124);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Circle_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",125);
			{
				HX_STACK_LINE(125)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(125)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Circle_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",126);
			{
				HX_STACK_LINE(126)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(126)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::SlopedGrid &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",127);
			{
				HX_STACK_LINE(127)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(127)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::SlopedGrid &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",128);
			{
				HX_STACK_LINE(128)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(128)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(125)
	Float thisX = (_Function_1_1::Block(this) + this->_x);		HX_STACK_VAR(thisX,"thisX");
	Float thisY = (_Function_1_2::Block(this) + this->_y);		HX_STACK_VAR(thisY,"thisY");
	Float otherX = (_Function_1_3::Block(other) + other->get_x());		HX_STACK_VAR(otherX,"otherX");
	Float otherY = (_Function_1_4::Block(other) + other->get_y());		HX_STACK_VAR(otherY,"otherY");
	Float entityDistX = (thisX - otherX);		HX_STACK_VAR(entityDistX,"entityDistX");
	Float entityDistY = (thisY - otherY);		HX_STACK_VAR(entityDistY,"entityDistY");
	HX_STACK_LINE(132)
	int minx = ::Math_obj::floor((Float(((entityDistX - this->_radius))) / Float(::Std_obj::_int(other->_tile->width))));		HX_STACK_VAR(minx,"minx");
	int miny = ::Math_obj::floor((Float(((entityDistY - this->_radius))) / Float(::Std_obj::_int(other->_tile->height))));		HX_STACK_VAR(miny,"miny");
	int maxx = ::Math_obj::ceil((Float(((entityDistX + this->_radius))) / Float(::Std_obj::_int(other->_tile->width))));		HX_STACK_VAR(maxx,"maxx");
	int maxy = ::Math_obj::ceil((Float(((entityDistY + this->_radius))) / Float(::Std_obj::_int(other->_tile->height))));		HX_STACK_VAR(maxy,"maxy");
	HX_STACK_LINE(137)
	if (((minx < (int)0))){
		HX_STACK_LINE(137)
		minx = (int)0;
	}
	HX_STACK_LINE(138)
	if (((miny < (int)0))){
		HX_STACK_LINE(138)
		miny = (int)0;
	}
	HX_STACK_LINE(139)
	if (((maxx > other->columns))){
		HX_STACK_LINE(139)
		maxx = other->columns;
	}
	HX_STACK_LINE(140)
	if (((maxy > other->rows))){
		HX_STACK_LINE(140)
		maxy = other->rows;
	}
	HX_STACK_LINE(142)
	Float hTileWidth = (::Std_obj::_int(other->_tile->width) * 0.5);		HX_STACK_VAR(hTileWidth,"hTileWidth");
	Float hTileHeight = (::Std_obj::_int(other->_tile->height) * 0.5);		HX_STACK_VAR(hTileHeight,"hTileHeight");
	Float dx;		HX_STACK_VAR(dx,"dx");
	Float dy;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(146)
	{
		HX_STACK_LINE(146)
		int _g = minx;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(146)
		while(((_g < maxx))){
			HX_STACK_LINE(146)
			int xx = (_g)++;		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				int _g1 = miny;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(148)
				while(((_g1 < maxy))){
					HX_STACK_LINE(148)
					int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
					struct _Function_5_1{
						inline static Dynamic Block( int &yy,int &xx,::com::haxepunk::masks::SlopedGrid &other){
							HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",150);
							{
								HX_STACK_LINE(150)
								int column = xx;		HX_STACK_VAR(column,"column");
								int row = yy;		HX_STACK_VAR(row,"row");
								struct _Function_6_1{
									inline static Dynamic Block( ){
										HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",150);
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("type") , ::com::haxepunk::masks::TileType_obj::Empty,false);
											return __result;
										}
										return null();
									}
								};
								struct _Function_6_2{
									inline static Dynamic Block( int &row,::com::haxepunk::masks::SlopedGrid &other,int &column){
										HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",150);
										{
											HX_STACK_LINE(150)
											if ((other->usePositions)){
												HX_STACK_LINE(150)
												column = ::Std_obj::_int((Float(column) / Float(other->_tile->width)));
												HX_STACK_LINE(150)
												row = ::Std_obj::_int((Float(row) / Float(other->_tile->height)));
											}
											HX_STACK_LINE(150)
											return other->data->__GetItem(row)->__GetItem(column);
										}
										return null();
									}
								};
								HX_STACK_LINE(150)
								return (  ((!(((bool((bool((bool((column >= (int)0)) && bool((column < other->columns)))) && bool((row >= (int)0)))) && bool((row < other->rows))))))) ? Dynamic(_Function_6_1::Block()) : Dynamic(_Function_6_2::Block(row,other,column)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(150)
					Dynamic tile = _Function_5_1::Block(yy,xx,other);		HX_STACK_VAR(tile,"tile");
					HX_STACK_LINE(151)
					if (((bool((tile == null())) || bool((tile->__Field(HX_CSTRING("type"),true) == null()))))){
						HX_STACK_LINE(151)
						continue;
					}
					HX_STACK_LINE(152)
					if (((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::Solid))){
						HX_STACK_LINE(154)
						Float mx = ((otherX + (xx * ::Std_obj::_int(other->_tile->width))) + hTileWidth);		HX_STACK_VAR(mx,"mx");
						Float my = ((otherY + (yy * ::Std_obj::_int(other->_tile->height))) + hTileHeight);		HX_STACK_VAR(my,"my");
						HX_STACK_LINE(157)
						Float dx1 = ::Math_obj::abs((thisX - mx));		HX_STACK_VAR(dx1,"dx1");
						HX_STACK_LINE(159)
						if (((dx1 > (hTileWidth + this->_radius)))){
							HX_STACK_LINE(160)
							continue;
						}
						HX_STACK_LINE(162)
						Float dy1 = ::Math_obj::abs((thisY - my));		HX_STACK_VAR(dy1,"dy1");
						HX_STACK_LINE(164)
						if (((dy1 > (hTileHeight + this->_radius)))){
							HX_STACK_LINE(165)
							continue;
						}
						HX_STACK_LINE(167)
						if (((bool((dx1 <= hTileWidth)) || bool((dy1 <= hTileHeight))))){
							HX_STACK_LINE(168)
							return true;
						}
						HX_STACK_LINE(170)
						Float xCornerDist = (dx1 - hTileWidth);		HX_STACK_VAR(xCornerDist,"xCornerDist");
						HX_STACK_LINE(171)
						Float yCornerDist = (dy1 - hTileHeight);		HX_STACK_VAR(yCornerDist,"yCornerDist");
						HX_STACK_LINE(173)
						if (((((xCornerDist * xCornerDist) + (yCornerDist * yCornerDist)) <= this->_squaredRadius))){
							HX_STACK_LINE(174)
							return true;
						}
					}
					else{
						HX_STACK_LINE(176)
						if (((bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::AboveSlope)) || bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::BelowSlope))))){
							HX_STACK_LINE(178)
							Float normal = (Float((int)-1) / Float(tile->__Field(HX_CSTRING("slope"),true)));		HX_STACK_VAR(normal,"normal");
							HX_STACK_LINE(179)
							Float dx1 = -((((otherX + (xx * ::Std_obj::_int(other->_tile->width))) - thisX)));		HX_STACK_VAR(dx1,"dx1");
							HX_STACK_LINE(180)
							Float dy1 = -((((otherY + (yy * ::Std_obj::_int(other->_tile->height))) - thisY)));		HX_STACK_VAR(dy1,"dy1");
							HX_STACK_LINE(181)
							Float b = -((((normal * dx1) - dy1)));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(182)
							Float x = ::Math_obj::abs((Float(((b - tile->__Field(HX_CSTRING("yOffset"),true)))) / Float(((normal - tile->__Field(HX_CSTRING("slope"),true))))));		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(183)
							Float y = ((x * normal) + b);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(185)
							Float dist = ::Math_obj::sqrt(((((x - dx1)) * ((x - dx1))) + (((y - dy1)) * ((y - dy1)))));		HX_STACK_VAR(dist,"dist");
							HX_STACK_LINE(186)
							if (((dist <= this->_radius))){
								HX_STACK_LINE(186)
								return true;
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(190)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,collideSlopedGrid,return )

bool Circle_obj::collideGrid( ::com::haxepunk::masks::Grid other){
	HX_STACK_PUSH("Circle::collideGrid","com/haxepunk/masks/Circle.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Circle_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",68);
			{
				HX_STACK_LINE(68)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(68)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Circle_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",69);
			{
				HX_STACK_LINE(69)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(69)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Grid &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",70);
			{
				HX_STACK_LINE(70)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(70)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Grid &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",71);
			{
				HX_STACK_LINE(71)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(71)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(68)
	Float thisX = (_Function_1_1::Block(this) + this->_x);		HX_STACK_VAR(thisX,"thisX");
	Float thisY = (_Function_1_2::Block(this) + this->_y);		HX_STACK_VAR(thisY,"thisY");
	Float otherX = (_Function_1_3::Block(other) + other->get_x());		HX_STACK_VAR(otherX,"otherX");
	Float otherY = (_Function_1_4::Block(other) + other->get_y());		HX_STACK_VAR(otherY,"otherY");
	Float entityDistX = (thisX - otherX);		HX_STACK_VAR(entityDistX,"entityDistX");
	Float entityDistY = (thisY - otherY);		HX_STACK_VAR(entityDistY,"entityDistY");
	HX_STACK_LINE(75)
	int minx = ::Math_obj::floor((Float(((entityDistX - this->_radius))) / Float(::Std_obj::_int(other->_tile->width))));		HX_STACK_VAR(minx,"minx");
	int miny = ::Math_obj::floor((Float(((entityDistY - this->_radius))) / Float(::Std_obj::_int(other->_tile->height))));		HX_STACK_VAR(miny,"miny");
	int maxx = ::Math_obj::ceil((Float(((entityDistX + this->_radius))) / Float(::Std_obj::_int(other->_tile->width))));		HX_STACK_VAR(maxx,"maxx");
	int maxy = ::Math_obj::ceil((Float(((entityDistY + this->_radius))) / Float(::Std_obj::_int(other->_tile->height))));		HX_STACK_VAR(maxy,"maxy");
	HX_STACK_LINE(80)
	if (((minx < (int)0))){
		HX_STACK_LINE(80)
		minx = (int)0;
	}
	HX_STACK_LINE(81)
	if (((miny < (int)0))){
		HX_STACK_LINE(81)
		miny = (int)0;
	}
	HX_STACK_LINE(82)
	if (((maxx > other->columns))){
		HX_STACK_LINE(82)
		maxx = other->columns;
	}
	HX_STACK_LINE(83)
	if (((maxy > other->rows))){
		HX_STACK_LINE(83)
		maxy = other->rows;
	}
	HX_STACK_LINE(85)
	Float hTileWidth = (::Std_obj::_int(other->_tile->width) * 0.5);		HX_STACK_VAR(hTileWidth,"hTileWidth");
	Float hTileHeight = (::Std_obj::_int(other->_tile->height) * 0.5);		HX_STACK_VAR(hTileHeight,"hTileHeight");
	Float dx;		HX_STACK_VAR(dx,"dx");
	Float dy;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		int _g = minx;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		while(((_g < maxx))){
			HX_STACK_LINE(89)
			int xx = (_g)++;		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				int _g1 = miny;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(91)
				while(((_g1 < maxy))){
					HX_STACK_LINE(91)
					int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(93)
					if ((other->getTile(xx,yy))){
						HX_STACK_LINE(95)
						Float mx = ((otherX + (xx * ::Std_obj::_int(other->_tile->width))) + hTileWidth);		HX_STACK_VAR(mx,"mx");
						Float my = ((otherY + (yy * ::Std_obj::_int(other->_tile->height))) + hTileHeight);		HX_STACK_VAR(my,"my");
						HX_STACK_LINE(98)
						Float dx1 = ::Math_obj::abs((thisX - mx));		HX_STACK_VAR(dx1,"dx1");
						HX_STACK_LINE(100)
						if (((dx1 > (hTileWidth + this->_radius)))){
							HX_STACK_LINE(101)
							continue;
						}
						HX_STACK_LINE(103)
						Float dy1 = ::Math_obj::abs((thisY - my));		HX_STACK_VAR(dy1,"dy1");
						HX_STACK_LINE(105)
						if (((dy1 > (hTileHeight + this->_radius)))){
							HX_STACK_LINE(106)
							continue;
						}
						HX_STACK_LINE(108)
						if (((bool((dx1 <= hTileWidth)) || bool((dy1 <= hTileHeight))))){
							HX_STACK_LINE(109)
							return true;
						}
						HX_STACK_LINE(111)
						Float xCornerDist = (dx1 - hTileWidth);		HX_STACK_VAR(xCornerDist,"xCornerDist");
						HX_STACK_LINE(112)
						Float yCornerDist = (dy1 - hTileHeight);		HX_STACK_VAR(yCornerDist,"yCornerDist");
						HX_STACK_LINE(114)
						if (((((xCornerDist * xCornerDist) + (yCornerDist * yCornerDist)) <= this->_squaredRadius))){
							HX_STACK_LINE(115)
							return true;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(120)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,collideGrid,return )

bool Circle_obj::collideCircle( ::com::haxepunk::masks::Circle other){
	HX_STACK_PUSH("Circle::collideCircle","com/haxepunk/masks/Circle.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Circle_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",61);
			{
				HX_STACK_LINE(61)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(61)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Circle &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",61);
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
	Float dx = ((_Function_1_1::Block(this) + this->_x) - ((_Function_1_2::Block(other) + other->_x)));		HX_STACK_VAR(dx,"dx");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Circle_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",62);
			{
				HX_STACK_LINE(62)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(62)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Circle &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",62);
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
	Float dy = ((_Function_1_3::Block(this) + this->_y) - ((_Function_1_4::Block(other) + other->_y)));		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(63)
	return (((dx * dx) + (dy * dy)) < ::Math_obj::pow((this->_radius + other->_radius),(int)2));
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,collideCircle,return )

bool Circle_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_PUSH("Circle::collideMask","com/haxepunk/masks/Circle.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Circle_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",41);
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
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",41);
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
		inline static Float Block( ::com::haxepunk::masks::Circle_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",42);
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
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Circle.hx",42);
			{
				HX_STACK_LINE(42)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(42)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(41)
	Float distanceX = ::Math_obj::abs((((_Function_1_1::Block(this) + this->_x) - _Function_1_2::Block(other)) - (other->parent->width * 0.5)));		HX_STACK_VAR(distanceX,"distanceX");
	Float distanceY = ::Math_obj::abs((((_Function_1_3::Block(this) + this->_y) - _Function_1_4::Block(other)) - (other->parent->height * 0.5)));		HX_STACK_VAR(distanceY,"distanceY");
	HX_STACK_LINE(44)
	if (((bool((distanceX > ((other->parent->width * 0.5) + this->_radius))) || bool((distanceY > ((other->parent->height * 0.5) + this->_radius)))))){
		HX_STACK_LINE(46)
		return false;
	}
	HX_STACK_LINE(49)
	if (((bool((distanceX <= (other->parent->width * 0.5))) || bool((distanceY <= (other->parent->height * 0.5)))))){
		HX_STACK_LINE(50)
		return true;
	}
	HX_STACK_LINE(53)
	Float distanceToCorner = ((((distanceX - (other->parent->width * 0.5))) * ((distanceX - (other->parent->width * 0.5)))) + (((distanceY - (other->parent->height * 0.5))) * ((distanceY - (other->parent->height * 0.5)))));		HX_STACK_VAR(distanceToCorner,"distanceToCorner");
	HX_STACK_LINE(56)
	return (distanceToCorner <= this->_squaredRadius);
}



Circle_obj::Circle_obj()
{
}

void Circle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Circle);
	HX_MARK_MEMBER_NAME(_squaredRadius,"_squaredRadius");
	HX_MARK_MEMBER_NAME(_radius,"_radius");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Circle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_squaredRadius,"_squaredRadius");
	HX_VISIT_MEMBER_NAME(_radius,"_radius");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Circle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"radius") ) { return get_radius(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_radius") ) { return set_radius_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radius") ) { return get_radius_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"collideCircle") ) { return collideCircle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_squaredRadius") ) { return _squaredRadius; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"collideSlopedGrid") ) { return collideSlopedGrid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Circle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return set_radius(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_squaredRadius") ) { _squaredRadius=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Circle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_squaredRadius"));
	outFields->push(HX_CSTRING("_radius"));
	outFields->push(HX_CSTRING("radius"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_squaredRadius"),
	HX_CSTRING("_radius"),
	HX_CSTRING("update"),
	HX_CSTRING("set_radius"),
	HX_CSTRING("get_radius"),
	HX_CSTRING("get_y"),
	HX_CSTRING("get_x"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("project"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideSlopedGrid"),
	HX_CSTRING("collideGrid"),
	HX_CSTRING("collideCircle"),
	HX_CSTRING("collideMask"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

Class Circle_obj::__mClass;

void Circle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Circle"), hx::TCanCast< Circle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Circle_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
