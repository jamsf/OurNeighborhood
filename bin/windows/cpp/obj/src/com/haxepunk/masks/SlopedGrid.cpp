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
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_SlopedGrid
#include <com/haxepunk/masks/SlopedGrid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_TileType
#include <com/haxepunk/masks/TileType.h>
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
namespace com{
namespace haxepunk{
namespace masks{

Void SlopedGrid_obj::__construct(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_PUSH("SlopedGrid::new","com/haxepunk/masks/SlopedGrid.hx",52);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(53)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(56)
	if (((bool((bool((bool((width == (int)0)) || bool((height == (int)0)))) || bool((tileWidth == (int)0)))) || bool((tileHeight == (int)0))))){
		HX_STACK_LINE(57)
		hx::Throw (HX_CSTRING("Illegal Grid, sizes cannot be 0."));
	}
	HX_STACK_LINE(61)
	this->_rect = ::com::haxepunk::HXP_obj::rect;
	HX_STACK_LINE(62)
	this->_point = ::com::haxepunk::HXP_obj::point;
	HX_STACK_LINE(63)
	this->_point2 = ::com::haxepunk::HXP_obj::point2;
	HX_STACK_LINE(66)
	this->columns = ::Std_obj::_int((Float(width) / Float(tileWidth)));
	HX_STACK_LINE(67)
	this->rows = ::Std_obj::_int((Float(height) / Float(tileHeight)));
	HX_STACK_LINE(69)
	this->_tile = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,tileWidth,tileHeight);
	HX_STACK_LINE(70)
	this->_x = x;
	HX_STACK_LINE(71)
	this->_y = y;
	HX_STACK_LINE(72)
	this->_width = width;
	HX_STACK_LINE(73)
	this->_height = height;
	HX_STACK_LINE(74)
	this->usePositions = false;
	HX_STACK_LINE(77)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >()),this->collideMask_dyn());
	HX_STACK_LINE(78)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >()),this->collideHitbox_dyn());
	HX_STACK_LINE(80)
	this->data = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->rows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		while(((_g1 < _g))){
			HX_STACK_LINE(81)
			int x1 = (_g1)++;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(83)
			this->data->__Field(HX_CSTRING("push"),true)(Dynamic( Array_obj<Dynamic>::__new() ));
			HX_STACK_LINE(85)
			{
				HX_STACK_LINE(85)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = this->columns;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(85)
				while(((_g3 < _g2))){
					HX_STACK_LINE(85)
					int y1 = (_g3)++;		HX_STACK_VAR(y1,"y1");
					struct _Function_5_1{
						inline static Dynamic Block( ){
							HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",87);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("type") , ::com::haxepunk::masks::TileType_obj::Empty,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(87)
					hx::IndexRef((this->data->__GetItem(x1)).mPtr,y1) = _Function_5_1::Block();
				}
			}
		}
	}
}
;
	return null();
}

SlopedGrid_obj::~SlopedGrid_obj() { }

Dynamic SlopedGrid_obj::__CreateEmpty() { return  new SlopedGrid_obj; }
hx::ObjectPtr< SlopedGrid_obj > SlopedGrid_obj::__new(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< SlopedGrid_obj > result = new SlopedGrid_obj();
	result->__construct(width,height,tileWidth,tileHeight,__o_x,__o_y);
	return result;}

Dynamic SlopedGrid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SlopedGrid_obj > result = new SlopedGrid_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void SlopedGrid_obj::squareProjection( ::flash::geom::Point axis,::flash::geom::Point point){
{
		HX_STACK_PUSH("SlopedGrid::squareProjection","com/haxepunk/masks/SlopedGrid.hx",389);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(389)
		if (((axis->x < axis->y))){
			HX_STACK_LINE(392)
			point->x = axis->x;
			HX_STACK_LINE(393)
			point->y = axis->y;
		}
		else{
			HX_STACK_LINE(397)
			point->y = axis->x;
			HX_STACK_LINE(398)
			point->x = axis->y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SlopedGrid_obj,squareProjection,(void))

Void SlopedGrid_obj::debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_PUSH("SlopedGrid::debugDraw","com/haxepunk/masks/SlopedGrid.hx",339);
		HX_STACK_THIS(this);
		HX_STACK_ARG(graphics,"graphics");
		HX_STACK_ARG(scaleX,"scaleX");
		HX_STACK_ARG(scaleY,"scaleY");
		struct _Function_1_1{
			inline static Float Block( ::com::haxepunk::masks::SlopedGrid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",340);
				{
					HX_STACK_LINE(340)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(340)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(340)
		::com::haxepunk::HXP_obj::point->x = ((((this->_x + _Function_1_1::Block(this)) - ::com::haxepunk::HXP_obj::camera->x)) * ::com::haxepunk::HXP_obj::screen->fullScaleX);
		struct _Function_1_2{
			inline static Float Block( ::com::haxepunk::masks::SlopedGrid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",341);
				{
					HX_STACK_LINE(341)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(341)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(341)
		::com::haxepunk::HXP_obj::point->y = ((((this->_y + _Function_1_2::Block(this)) - ::com::haxepunk::HXP_obj::camera->y)) * ::com::haxepunk::HXP_obj::screen->fullScaleY);
		HX_STACK_LINE(343)
		graphics->beginFill((int)255,0.3);
		HX_STACK_LINE(344)
		Float stepX = (::Std_obj::_int(this->_tile->width) * ::com::haxepunk::HXP_obj::screen->fullScaleX);		HX_STACK_VAR(stepX,"stepX");
		Float stepY = (::Std_obj::_int(this->_tile->height) * ::com::haxepunk::HXP_obj::screen->fullScaleY);		HX_STACK_VAR(stepY,"stepY");
		Float pos = (::com::haxepunk::HXP_obj::point->x + stepX);		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(348)
		{
			HX_STACK_LINE(348)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->columns;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(348)
			while(((_g1 < _g))){
				HX_STACK_LINE(348)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(350)
				graphics->drawRect(pos,::com::haxepunk::HXP_obj::point->y,(int)1,(this->_height * ::com::haxepunk::HXP_obj::screen->fullScaleX));
				HX_STACK_LINE(351)
				hx::AddEq(pos,stepX);
			}
		}
		HX_STACK_LINE(354)
		pos = (::com::haxepunk::HXP_obj::point->y + stepY);
		HX_STACK_LINE(355)
		{
			HX_STACK_LINE(355)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(355)
			while(((_g1 < _g))){
				HX_STACK_LINE(355)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(357)
				graphics->drawRect(::com::haxepunk::HXP_obj::point->x,pos,(this->_width * ::com::haxepunk::HXP_obj::screen->fullScaleY),(int)1);
				HX_STACK_LINE(358)
				hx::AddEq(pos,stepY);
			}
		}
		HX_STACK_LINE(361)
		Float ry = ::com::haxepunk::HXP_obj::point->y;		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(362)
		{
			HX_STACK_LINE(362)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(362)
			while(((_g1 < _g))){
				HX_STACK_LINE(362)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(364)
				Float rx = ::com::haxepunk::HXP_obj::point->x;		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->columns;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(365)
					while(((_g3 < _g2))){
						HX_STACK_LINE(365)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(367)
						Dynamic tile = this->data->__GetItem(y)->__GetItem(x);		HX_STACK_VAR(tile,"tile");
						HX_STACK_LINE(368)
						if (((bool((tile == null())) || bool((tile->__Field(HX_CSTRING("type"),true) == null()))))){
						}
						else{
							HX_STACK_LINE(371)
							if (((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::Solid))){
								HX_STACK_LINE(372)
								graphics->drawRect(rx,ry,stepX,stepY);
							}
							else{
								HX_STACK_LINE(375)
								if (((bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::BelowSlope)) || bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::AboveSlope))))){
									HX_STACK_LINE(377)
									Float ypos = (ry + (tile->__Field(HX_CSTRING("yOffset"),true) * ::com::haxepunk::HXP_obj::screen->fullScaleY));		HX_STACK_VAR(ypos,"ypos");
									HX_STACK_LINE(378)
									graphics->moveTo(rx,ypos);
									HX_STACK_LINE(379)
									graphics->lineTo((rx + stepX),(ypos + (tile->__Field(HX_CSTRING("slope"),true) * stepX)));
								}
							}
						}
						HX_STACK_LINE(381)
						hx::AddEq(rx,stepX);
					}
				}
				HX_STACK_LINE(383)
				hx::AddEq(ry,stepY);
			}
		}
		HX_STACK_LINE(385)
		graphics->endFill();
	}
return null();
}


bool SlopedGrid_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_PUSH("SlopedGrid::collideHitbox","com/haxepunk/masks/SlopedGrid.hx",331);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",332);
			{
				HX_STACK_LINE(332)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(332)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",333);
			{
				HX_STACK_LINE(333)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(333)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::SlopedGrid_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",335);
			{
				HX_STACK_LINE(335)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(335)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::SlopedGrid_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",335);
			{
				HX_STACK_LINE(335)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(335)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(331)
	return this->collideBox((_Function_1_1::Block(other) - other->_x),(_Function_1_2::Block(other) - other->_y),other->_width,other->_height,(_Function_1_3::Block(this) + this->_x),(_Function_1_4::Block(this) + this->_y));
}


bool SlopedGrid_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_PUSH("SlopedGrid::collideMask","com/haxepunk/masks/SlopedGrid.hx",322);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",323);
			{
				HX_STACK_LINE(323)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(323)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",324);
			{
				HX_STACK_LINE(324)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(324)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::SlopedGrid_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",326);
			{
				HX_STACK_LINE(326)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(326)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::SlopedGrid_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",326);
			{
				HX_STACK_LINE(326)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(326)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(322)
	return this->collideBox((_Function_1_1::Block(other) - other->parent->originX),(_Function_1_2::Block(other) - other->parent->originY),other->parent->width,other->parent->height,(_Function_1_3::Block(this) + this->parent->originX),(_Function_1_4::Block(this) + this->parent->originY));
}


bool SlopedGrid_obj::collideBox( Float opx,Float opy,Float opw,Float oph,Float px,Float py){
	HX_STACK_PUSH("SlopedGrid::collideBox","com/haxepunk/masks/SlopedGrid.hx",260);
	HX_STACK_THIS(this);
	HX_STACK_ARG(opx,"opx");
	HX_STACK_ARG(opy,"opy");
	HX_STACK_ARG(opw,"opw");
	HX_STACK_ARG(oph,"oph");
	HX_STACK_ARG(px,"px");
	HX_STACK_ARG(py,"py");
	HX_STACK_LINE(261)
	int rectX;		HX_STACK_VAR(rectX,"rectX");
	int rectY;		HX_STACK_VAR(rectY,"rectY");
	int pointX;		HX_STACK_VAR(pointX,"pointX");
	int pointY;		HX_STACK_VAR(pointY,"pointY");
	HX_STACK_LINE(262)
	this->_rect->x = (opx - px);
	HX_STACK_LINE(263)
	this->_rect->y = (opy - py);
	HX_STACK_LINE(264)
	pointX = (::Std_obj::_int((Float((((this->_rect->x + opw) - (int)1))) / Float(this->_tile->width))) + (int)1);
	HX_STACK_LINE(265)
	pointY = (::Std_obj::_int((Float((((this->_rect->y + oph) - (int)1))) / Float(this->_tile->height))) + (int)1);
	HX_STACK_LINE(266)
	rectX = ::Std_obj::_int((Float(this->_rect->x) / Float(this->_tile->width)));
	HX_STACK_LINE(267)
	rectY = ::Std_obj::_int((Float(this->_rect->y) / Float(this->_tile->height)));
	HX_STACK_LINE(269)
	bool collide = false;		HX_STACK_VAR(collide,"collide");
	HX_STACK_LINE(270)
	{
		HX_STACK_LINE(270)
		int _g = rectY;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(270)
		while(((_g < pointY))){
			HX_STACK_LINE(270)
			int dy = (_g)++;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(272)
			{
				HX_STACK_LINE(272)
				int _g1 = rectX;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(272)
				while(((_g1 < pointX))){
					HX_STACK_LINE(272)
					int dx = (_g1)++;		HX_STACK_VAR(dx,"dx");
					struct _Function_5_1{
						inline static Dynamic Block( int &dy,::com::haxepunk::masks::SlopedGrid_obj *__this,int &dx){
							HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",274);
							{
								HX_STACK_LINE(274)
								int column = dx;		HX_STACK_VAR(column,"column");
								int row = dy;		HX_STACK_VAR(row,"row");
								struct _Function_6_1{
									inline static Dynamic Block( ){
										HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",274);
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("type") , ::com::haxepunk::masks::TileType_obj::Empty,false);
											return __result;
										}
										return null();
									}
								};
								struct _Function_6_2{
									inline static Dynamic Block( ::com::haxepunk::masks::SlopedGrid_obj *__this,int &row,int &column){
										HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",274);
										{
											HX_STACK_LINE(274)
											if ((__this->usePositions)){
												HX_STACK_LINE(274)
												column = ::Std_obj::_int((Float(column) / Float(__this->_tile->width)));
												HX_STACK_LINE(274)
												row = ::Std_obj::_int((Float(row) / Float(__this->_tile->height)));
											}
											HX_STACK_LINE(274)
											return __this->data->__GetItem(row)->__GetItem(column);
										}
										return null();
									}
								};
								HX_STACK_LINE(274)
								return (  ((!(((bool((bool((bool((column >= (int)0)) && bool((column < __this->columns)))) && bool((row >= (int)0)))) && bool((row < __this->rows))))))) ? Dynamic(_Function_6_1::Block()) : Dynamic(_Function_6_2::Block(__this,row,column)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(274)
					Dynamic tile = _Function_5_1::Block(dy,this,dx);		HX_STACK_VAR(tile,"tile");
					HX_STACK_LINE(275)
					if (((bool((tile == null())) || bool((tile->__Field(HX_CSTRING("type"),true) == null()))))){
						HX_STACK_LINE(275)
						continue;
					}
					HX_STACK_LINE(276)
					{
						::com::haxepunk::masks::TileType _switch_1 = (tile->__Field(HX_CSTRING("type"),true));
						switch((_switch_1)->GetIndex()){
							case 1: {
								HX_STACK_LINE(278)
								collide = true;
							}
							;break;
							case 3: {
								HX_STACK_LINE(281)
								Float y = ((this->_rect->y - tile->__Field(HX_CSTRING("yOffset"),true)) - (dy * ::Std_obj::_int(this->_tile->height)));		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(282)
								Float x = (this->_rect->x - (dx * ::Std_obj::_int(this->_tile->width)));		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(283)
								Float end = (x + opw);		HX_STACK_VAR(end,"end");
								HX_STACK_LINE(284)
								while(((x < end))){
									HX_STACK_LINE(286)
									Float mx = (tile->__Field(HX_CSTRING("slope"),true) * x);		HX_STACK_VAR(mx,"mx");
									HX_STACK_LINE(287)
									if (((bool((y > mx)) || bool(((y + oph) > mx))))){
										HX_STACK_LINE(289)
										collide = true;
										HX_STACK_LINE(290)
										break;
									}
									HX_STACK_LINE(292)
									hx::AddEq(x,(int)1);
								}
							}
							;break;
							case 2: {
								HX_STACK_LINE(295)
								Float y = ((this->_rect->y - tile->__Field(HX_CSTRING("yOffset"),true)) - (dy * ::Std_obj::_int(this->_tile->height)));		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(296)
								Float x = (this->_rect->x - (dx * ::Std_obj::_int(this->_tile->width)));		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(297)
								Float end = (x + opw);		HX_STACK_VAR(end,"end");
								HX_STACK_LINE(298)
								while(((x < end))){
									HX_STACK_LINE(300)
									Float mx = (tile->__Field(HX_CSTRING("slope"),true) * x);		HX_STACK_VAR(mx,"mx");
									HX_STACK_LINE(301)
									if (((bool((y < mx)) || bool(((y + oph) < mx))))){
										HX_STACK_LINE(303)
										collide = true;
										HX_STACK_LINE(304)
										break;
									}
									HX_STACK_LINE(306)
									hx::AddEq(x,(int)1);
								}
							}
							;break;
							default: {
							}
						}
					}
					HX_STACK_LINE(311)
					if ((collide)){
						HX_STACK_LINE(312)
						break;
					}
				}
			}
		}
	}
	HX_STACK_LINE(317)
	return collide;
}


HX_DEFINE_DYNAMIC_FUNC6(SlopedGrid_obj,collideBox,return )

int SlopedGrid_obj::get_tileHeight( ){
	HX_STACK_PUSH("SlopedGrid::get_tileHeight","com/haxepunk/masks/SlopedGrid.hx",242);
	HX_STACK_THIS(this);
	HX_STACK_LINE(242)
	return ::Std_obj::_int(this->_tile->height);
}


HX_DEFINE_DYNAMIC_FUNC0(SlopedGrid_obj,get_tileHeight,return )

int SlopedGrid_obj::get_tileWidth( ){
	HX_STACK_PUSH("SlopedGrid::get_tileWidth","com/haxepunk/masks/SlopedGrid.hx",236);
	HX_STACK_THIS(this);
	HX_STACK_LINE(236)
	return ::Std_obj::_int(this->_tile->width);
}


HX_DEFINE_DYNAMIC_FUNC0(SlopedGrid_obj,get_tileWidth,return )

Void SlopedGrid_obj::clearRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
	HX_STACK_PUSH("SlopedGrid::clearRect","com/haxepunk/masks/SlopedGrid.hx",228);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
{
		HX_STACK_LINE(228)
		this->setRect(column,row,width,height,::com::haxepunk::masks::TileType_obj::Empty,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(SlopedGrid_obj,clearRect,(void))

Void SlopedGrid_obj::setRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height,::com::haxepunk::masks::TileType type,hx::Null< Float >  __o_slope,hx::Null< Float >  __o_yOffset){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
Float slope = __o_slope.Default(0);
Float yOffset = __o_yOffset.Default(0);
	HX_STACK_PUSH("SlopedGrid::setRect","com/haxepunk/masks/SlopedGrid.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(slope,"slope");
	HX_STACK_ARG(yOffset,"yOffset");
{
		HX_STACK_LINE(201)
		if (((type == null()))){
			HX_STACK_LINE(201)
			type = ::com::haxepunk::masks::TileType_obj::Solid;
		}
		HX_STACK_LINE(203)
		if ((this->usePositions)){
			HX_STACK_LINE(205)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(206)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
			HX_STACK_LINE(207)
			width = ::Std_obj::_int((Float(width) / Float(this->_tile->width)));
			HX_STACK_LINE(208)
			height = ::Std_obj::_int((Float(height) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(211)
			int _g1 = row;		HX_STACK_VAR(_g1,"_g1");
			int _g = (row + height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(211)
			while(((_g1 < _g))){
				HX_STACK_LINE(211)
				int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					int _g3 = column;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = (column + width);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(213)
					while(((_g3 < _g2))){
						HX_STACK_LINE(213)
						int xx = (_g3)++;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(215)
						this->setTile(xx,yy,type,slope,yOffset);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(SlopedGrid_obj,setRect,(void))

Dynamic SlopedGrid_obj::getTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_PUSH("SlopedGrid::getTile","com/haxepunk/masks/SlopedGrid.hx",173);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
{
		HX_STACK_LINE(173)
		if ((!(((bool((bool((bool((column >= (int)0)) && bool((column < this->columns)))) && bool((row >= (int)0)))) && bool((row < this->rows))))))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",176);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("type") , ::com::haxepunk::masks::TileType_obj::Empty,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(175)
			return _Function_2_1::Block();
		}
		else{
			HX_STACK_LINE(180)
			if ((this->usePositions)){
				HX_STACK_LINE(182)
				column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
				HX_STACK_LINE(183)
				row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
			}
			HX_STACK_LINE(185)
			return this->data->__GetItem(row)->__GetItem(column);
		}
		HX_STACK_LINE(173)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(SlopedGrid_obj,getTile,return )

bool SlopedGrid_obj::checkTile( int column,int row){
	HX_STACK_PUSH("SlopedGrid::checkTile","com/haxepunk/masks/SlopedGrid.hx",161);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_LINE(161)
	return (bool((bool((bool((column >= (int)0)) && bool((column < this->columns)))) && bool((row >= (int)0)))) && bool((row < this->rows)));
}


HX_DEFINE_DYNAMIC_FUNC2(SlopedGrid_obj,checkTile,return )

Void SlopedGrid_obj::clearTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_PUSH("SlopedGrid::clearTile","com/haxepunk/masks/SlopedGrid.hx",156);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
{
		HX_STACK_LINE(156)
		this->setTile(column,row,::com::haxepunk::masks::TileType_obj::Empty,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SlopedGrid_obj,clearTile,(void))

Void SlopedGrid_obj::setTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row,::com::haxepunk::masks::TileType type,hx::Null< Float >  __o_slope,hx::Null< Float >  __o_yOffset){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
Float slope = __o_slope.Default(0);
Float yOffset = __o_yOffset.Default(0);
	HX_STACK_PUSH("SlopedGrid::setTile","com/haxepunk/masks/SlopedGrid.hx",102);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(slope,"slope");
	HX_STACK_ARG(yOffset,"yOffset");
{
		HX_STACK_LINE(103)
		if ((!(((bool((bool((bool((column >= (int)0)) && bool((column < this->columns)))) && bool((row >= (int)0)))) && bool((row < this->rows))))))){
			HX_STACK_LINE(103)
			return null();
		}
		HX_STACK_LINE(105)
		if (((type == null()))){
			HX_STACK_LINE(105)
			type = ::com::haxepunk::masks::TileType_obj::Solid;
		}
		HX_STACK_LINE(108)
		if ((this->usePositions)){
			HX_STACK_LINE(110)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(111)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(114)
		{
			::com::haxepunk::masks::TileType _switch_2 = (type);
			switch((_switch_2)->GetIndex()){
				case 4: {
					struct _Function_2_1{
						inline static Dynamic Block( ::com::haxepunk::masks::SlopedGrid_obj *__this){
							HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",117);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("type") , ::com::haxepunk::masks::TileType_obj::AboveSlope,false);
								__result->Add(HX_CSTRING("slope") , (int)-1,false);
								__result->Add(HX_CSTRING("yOffset") , __this->_tile->height,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(116)
					hx::IndexRef((this->data->__GetItem(row)).mPtr,column) = _Function_2_1::Block(this);
				}
				;break;
				case 5: {
					struct _Function_2_1{
						inline static Dynamic Block( ){
							HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",123);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("type") , ::com::haxepunk::masks::TileType_obj::AboveSlope,false);
								__result->Add(HX_CSTRING("slope") , (int)1,false);
								__result->Add(HX_CSTRING("yOffset") , (int)0,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(122)
					hx::IndexRef((this->data->__GetItem(row)).mPtr,column) = _Function_2_1::Block();
				}
				;break;
				case 6: {
					struct _Function_2_1{
						inline static Dynamic Block( ){
							HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",129);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("type") , ::com::haxepunk::masks::TileType_obj::BelowSlope,false);
								__result->Add(HX_CSTRING("slope") , (int)1,false);
								__result->Add(HX_CSTRING("yOffset") , (int)0,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(128)
					hx::IndexRef((this->data->__GetItem(row)).mPtr,column) = _Function_2_1::Block();
				}
				;break;
				case 7: {
					struct _Function_2_1{
						inline static Dynamic Block( ::com::haxepunk::masks::SlopedGrid_obj *__this){
							HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",135);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("type") , ::com::haxepunk::masks::TileType_obj::BelowSlope,false);
								__result->Add(HX_CSTRING("slope") , (int)-1,false);
								__result->Add(HX_CSTRING("yOffset") , __this->_tile->height,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(134)
					hx::IndexRef((this->data->__GetItem(row)).mPtr,column) = _Function_2_1::Block(this);
				}
				;break;
				default: {
					struct _Function_2_1{
						inline static Dynamic Block( Float &yOffset,::com::haxepunk::masks::SlopedGrid_obj *__this,Float &slope,::com::haxepunk::masks::TileType &type){
							HX_STACK_PUSH("*::closure","com/haxepunk/masks/SlopedGrid.hx",141);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("type") , type,false);
								__result->Add(HX_CSTRING("slope") , slope,false);
								__result->Add(HX_CSTRING("yOffset") , (yOffset * __this->_tile->height),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(140)
					hx::IndexRef((this->data->__GetItem(row)).mPtr,column) = _Function_2_1::Block(yOffset,this,slope,type);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(SlopedGrid_obj,setTile,(void))


SlopedGrid_obj::SlopedGrid_obj()
{
}

void SlopedGrid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SlopedGrid);
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

void SlopedGrid_obj::__Visit(HX_VISIT_PARAMS)
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

Dynamic SlopedGrid_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"_tile") ) { return _tile; }
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
		if (HX_FIELD_EQ(inName,"collideBox") ) { return collideBox_dyn(); }
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return get_tileHeight(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { return usePositions; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tileWidth") ) { return get_tileWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_tileHeight") ) { return get_tileHeight_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"squareProjection") ) { return squareProjection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SlopedGrid_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
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

void SlopedGrid_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("collideBox"),
	HX_CSTRING("data"),
	HX_CSTRING("rows"),
	HX_CSTRING("columns"),
	HX_CSTRING("get_tileHeight"),
	HX_CSTRING("get_tileWidth"),
	HX_CSTRING("clearRect"),
	HX_CSTRING("setRect"),
	HX_CSTRING("getTile"),
	HX_CSTRING("checkTile"),
	HX_CSTRING("clearTile"),
	HX_CSTRING("setTile"),
	HX_CSTRING("usePositions"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SlopedGrid_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SlopedGrid_obj::__mClass,"__mClass");
};

Class SlopedGrid_obj::__mClass;

void SlopedGrid_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.SlopedGrid"), hx::TCanCast< SlopedGrid_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SlopedGrid_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
