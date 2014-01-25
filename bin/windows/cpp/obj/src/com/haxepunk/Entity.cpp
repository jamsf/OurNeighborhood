#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{

Void Entity_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask)
{
HX_STACK_PUSH("Entity::new","com/haxepunk/Entity.hx",114);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(115)
	super::__construct();
	HX_STACK_LINE(116)
	this->visible = true;
	HX_STACK_LINE(117)
	this->collidable = true;
	HX_STACK_LINE(118)
	this->followCamera = false;
	HX_STACK_LINE(119)
	this->x = x;
	HX_STACK_LINE(120)
	this->y = y;
	HX_STACK_LINE(122)
	this->originX = this->originY = (int)0;
	HX_STACK_LINE(123)
	this->width = this->height = (int)0;
	HX_STACK_LINE(124)
	this->_moveX = this->_moveY = (int)0;
	HX_STACK_LINE(125)
	this->_type = HX_CSTRING("");
	HX_STACK_LINE(126)
	this->_name = HX_CSTRING("");
	HX_STACK_LINE(128)
	this->HITBOX = ::com::haxepunk::Mask_obj::__new();
	HX_STACK_LINE(129)
	this->_point = ::com::haxepunk::HXP_obj::point;
	HX_STACK_LINE(130)
	this->_camera = ::com::haxepunk::HXP_obj::point2;
	HX_STACK_LINE(132)
	this->set_layer((int)10);
	HX_STACK_LINE(134)
	if (((graphic != null()))){
		HX_STACK_LINE(134)
		this->set_graphic(graphic);
	}
	HX_STACK_LINE(135)
	if (((mask != null()))){
		HX_STACK_LINE(135)
		this->set_mask(mask);
	}
	HX_STACK_LINE(136)
	this->HITBOX->assignTo(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(137)
	this->_class = ::Type_obj::getClassName(::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this)));
}
;
	return null();
}

Entity_obj::~Entity_obj() { }

Dynamic Entity_obj::__CreateEmpty() { return  new Entity_obj; }
hx::ObjectPtr< Entity_obj > Entity_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask)
{  hx::ObjectPtr< Entity_obj > result = new Entity_obj();
	result->__construct(__o_x,__o_y,graphic,mask);
	return result;}

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entity_obj > result = new Entity_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Entity_obj::centerGraphicInRect( ){
{
		HX_STACK_PUSH("Entity::centerGraphicInRect","com/haxepunk/Entity.hx",934);
		HX_STACK_THIS(this);
		HX_STACK_LINE(934)
		if (((this->_graphic != null()))){
			HX_STACK_LINE(937)
			this->_graphic->x = (Float(this->width) / Float((int)2));
			HX_STACK_LINE(938)
			this->_graphic->y = (Float(this->height) / Float((int)2));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,centerGraphicInRect,(void))

Void Entity_obj::clampVertical( Float top,Float bottom,hx::Null< Float >  __o_padding){
Float padding = __o_padding.Default(0);
	HX_STACK_PUSH("Entity::clampVertical","com/haxepunk/Entity.hx",925);
	HX_STACK_THIS(this);
	HX_STACK_ARG(top,"top");
	HX_STACK_ARG(bottom,"bottom");
	HX_STACK_ARG(padding,"padding");
{
		HX_STACK_LINE(926)
		if ((((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY) < (top + padding)))){
			HX_STACK_LINE(926)
			this->y = ((top + this->originY) + padding);
		}
		HX_STACK_LINE(927)
		if (((((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY) + this->height) > (bottom - padding)))){
			HX_STACK_LINE(927)
			this->y = (((bottom - this->height) + this->originY) - padding);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,clampVertical,(void))

Void Entity_obj::clampHorizontal( Float left,Float right,hx::Null< Float >  __o_padding){
Float padding = __o_padding.Default(0);
	HX_STACK_PUSH("Entity::clampHorizontal","com/haxepunk/Entity.hx",913);
	HX_STACK_THIS(this);
	HX_STACK_ARG(left,"left");
	HX_STACK_ARG(right,"right");
	HX_STACK_ARG(padding,"padding");
{
		HX_STACK_LINE(914)
		if ((((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX) < (left + padding)))){
			HX_STACK_LINE(914)
			this->x = ((left + this->originX) + padding);
		}
		HX_STACK_LINE(915)
		if (((((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX) + this->width) > (right - padding)))){
			HX_STACK_LINE(915)
			this->x = (((right - this->width) + this->originX) - padding);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,clampHorizontal,(void))

bool Entity_obj::moveCollideY( ::com::haxepunk::Entity e){
	HX_STACK_PUSH("Entity::moveCollideY","com/haxepunk/Entity.hx",902);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(902)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,moveCollideY,return )

bool Entity_obj::moveCollideX( ::com::haxepunk::Entity e){
	HX_STACK_PUSH("Entity::moveCollideX","com/haxepunk/Entity.hx",891);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(891)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,moveCollideX,return )

Void Entity_obj::moveAtAngle( Float angle,Float amount,Dynamic solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_PUSH("Entity::moveAtAngle","com/haxepunk/Entity.hx",879);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(amount,"amount");
	HX_STACK_ARG(solidType,"solidType");
	HX_STACK_ARG(sweep,"sweep");
{
		HX_STACK_LINE(880)
		hx::MultEq(angle,(Float(::Math_obj::PI) / Float((int)-180)));
		HX_STACK_LINE(881)
		this->moveBy((::Math_obj::cos(angle) * amount),(::Math_obj::sin(angle) * amount),solidType,sweep);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,moveAtAngle,(void))

Void Entity_obj::moveTowards( Float x,Float y,Float amount,Dynamic solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_PUSH("Entity::moveTowards","com/haxepunk/Entity.hx",861);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(amount,"amount");
	HX_STACK_ARG(solidType,"solidType");
	HX_STACK_ARG(sweep,"sweep");
{
		HX_STACK_LINE(862)
		this->_point->x = (x - ((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )));
		HX_STACK_LINE(863)
		this->_point->y = (y - ((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )));
		HX_STACK_LINE(864)
		if (((((this->_point->x * this->_point->x) + (this->_point->y * this->_point->y)) > (amount * amount)))){
			HX_STACK_LINE(865)
			this->_point->normalize(amount);
		}
		HX_STACK_LINE(868)
		this->moveBy(this->_point->x,this->_point->y,solidType,sweep);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Entity_obj,moveTowards,(void))

Void Entity_obj::moveTo( Float x,Float y,Dynamic solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_PUSH("Entity::moveTo","com/haxepunk/Entity.hx",848);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(solidType,"solidType");
	HX_STACK_ARG(sweep,"sweep");
{
		HX_STACK_LINE(848)
		this->moveBy((x - ((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ))),(y - ((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ))),solidType,sweep);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,moveTo,(void))

Void Entity_obj::moveBy( Float x,Float y,Dynamic solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_PUSH("Entity::moveBy","com/haxepunk/Entity.hx",780);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(solidType,"solidType");
	HX_STACK_ARG(sweep,"sweep");
{
		HX_STACK_LINE(781)
		hx::AddEq(this->_moveX,x);
		HX_STACK_LINE(782)
		hx::AddEq(this->_moveY,y);
		HX_STACK_LINE(783)
		x = ::Math_obj::round(this->_moveX);
		HX_STACK_LINE(784)
		y = ::Math_obj::round(this->_moveY);
		HX_STACK_LINE(785)
		hx::SubEq(this->_moveX,x);
		HX_STACK_LINE(786)
		hx::SubEq(this->_moveY,y);
		HX_STACK_LINE(787)
		if (((solidType != null()))){
			HX_STACK_LINE(789)
			int sign;		HX_STACK_VAR(sign,"sign");
			::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(790)
			if (((x != (int)0))){
				HX_STACK_LINE(791)
				if (((bool(this->collidable) && bool(((bool(sweep) || bool((this->collideTypes(solidType,(((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) + x),(  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) != null())))))))){
					HX_STACK_LINE(794)
					sign = (  (((x > (int)0))) ? int((int)1) : int((int)-1) );
					HX_STACK_LINE(795)
					while(((x != (int)0))){
						HX_STACK_LINE(797)
						if ((((e = this->collideTypes(solidType,(((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) + sign),(  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ))) != null()))){
							HX_STACK_LINE(798)
							if ((this->moveCollideX(e))){
								HX_STACK_LINE(799)
								break;
							}
							else{
								HX_STACK_LINE(800)
								::com::haxepunk::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(800)
								_g->x = (((  ((_g->followCamera)) ? Float((_g->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g->x) )) + sign);
							}
						}
						else{
							HX_STACK_LINE(804)
							::com::haxepunk::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(804)
							_g->x = (((  ((_g->followCamera)) ? Float((_g->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g->x) )) + sign);
						}
						HX_STACK_LINE(806)
						hx::SubEq(x,sign);
					}
				}
				else{
					HX_STACK_LINE(809)
					::com::haxepunk::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(809)
					_g->x = (((  ((_g->followCamera)) ? Float((_g->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g->x) )) + x);
				}
			}
			HX_STACK_LINE(811)
			if (((y != (int)0))){
				HX_STACK_LINE(812)
				if (((bool(this->collidable) && bool(((bool(sweep) || bool((this->collideTypes(solidType,(  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) + y)) != null())))))))){
					HX_STACK_LINE(815)
					sign = (  (((y > (int)0))) ? int((int)1) : int((int)-1) );
					HX_STACK_LINE(816)
					while(((y != (int)0))){
						HX_STACK_LINE(818)
						if ((((e = this->collideTypes(solidType,(  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) + sign))) != null()))){
							HX_STACK_LINE(819)
							if ((this->moveCollideY(e))){
								HX_STACK_LINE(820)
								break;
							}
							else{
								HX_STACK_LINE(821)
								::com::haxepunk::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(821)
								_g->y = (((  ((_g->followCamera)) ? Float((_g->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g->y) )) + sign);
							}
						}
						else{
							HX_STACK_LINE(825)
							::com::haxepunk::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(825)
							_g->y = (((  ((_g->followCamera)) ? Float((_g->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g->y) )) + sign);
						}
						HX_STACK_LINE(827)
						hx::SubEq(y,sign);
					}
				}
				else{
					HX_STACK_LINE(830)
					::com::haxepunk::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(830)
					_g->y = (((  ((_g->followCamera)) ? Float((_g->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g->y) )) + y);
				}
			}
		}
		else{
			HX_STACK_LINE(835)
			{
				HX_STACK_LINE(835)
				::com::haxepunk::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(835)
				_g->x = (((  ((_g->followCamera)) ? Float((_g->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g->x) )) + x);
			}
			HX_STACK_LINE(836)
			{
				HX_STACK_LINE(836)
				::com::haxepunk::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(836)
				_g->y = (((  ((_g->followCamera)) ? Float((_g->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g->y) )) + y);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,moveBy,(void))

::String Entity_obj::toString( ){
	HX_STACK_PUSH("Entity::toString","com/haxepunk/Entity.hx",768);
	HX_STACK_THIS(this);
	HX_STACK_LINE(768)
	return this->_class;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,toString,return )

Float Entity_obj::distanceToRect( Float rx,Float ry,Float rwidth,Float rheight){
	HX_STACK_PUSH("Entity::distanceToRect","com/haxepunk/Entity.hx",759);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rx,"rx");
	HX_STACK_ARG(ry,"ry");
	HX_STACK_ARG(rwidth,"rwidth");
	HX_STACK_ARG(rheight,"rheight");
	HX_STACK_LINE(759)
	return ::com::haxepunk::HXP_obj::distanceRects(rx,ry,rwidth,rheight,(((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX),(((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY),this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,distanceToRect,return )

Float Entity_obj::distanceToPoint( Float px,Float py,hx::Null< bool >  __o_useHitbox){
bool useHitbox = __o_useHitbox.Default(false);
	HX_STACK_PUSH("Entity::distanceToPoint","com/haxepunk/Entity.hx",745);
	HX_STACK_THIS(this);
	HX_STACK_ARG(px,"px");
	HX_STACK_ARG(py,"py");
	HX_STACK_ARG(useHitbox,"useHitbox");
{
		HX_STACK_LINE(745)
		if ((!(useHitbox))){
			HX_STACK_LINE(746)
			return ::Math_obj::sqrt(((((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - px)) * ((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - px))) + (((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - py)) * ((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - py)))));
		}
		else{
			HX_STACK_LINE(747)
			return ::com::haxepunk::HXP_obj::distanceRectPoint(px,py,(((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX),(((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY),this->width,this->height);
		}
		HX_STACK_LINE(745)
		return 0.;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,distanceToPoint,return )

Float Entity_obj::distanceFrom( ::com::haxepunk::Entity e,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_PUSH("Entity::distanceFrom","com/haxepunk/Entity.hx",732);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(useHitboxes,"useHitboxes");
{
		HX_STACK_LINE(732)
		if ((!(useHitboxes))){
			HX_STACK_LINE(733)
			return ::Math_obj::sqrt(((((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - ((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )))) * ((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - ((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) ))))) + (((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - ((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )))) * ((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - ((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )))))));
		}
		else{
			HX_STACK_LINE(734)
			return ::com::haxepunk::HXP_obj::distanceRects((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX),(((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY),this->width,this->height,(((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX),(((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY),e->width,e->height);
		}
		HX_STACK_LINE(732)
		return 0.;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,distanceFrom,return )

Void Entity_obj::centerOrigin( ){
{
		HX_STACK_PUSH("Entity::centerOrigin","com/haxepunk/Entity.hx",720);
		HX_STACK_THIS(this);
		HX_STACK_LINE(721)
		this->originX = ::Std_obj::_int((Float(this->width) / Float((int)2)));
		HX_STACK_LINE(722)
		this->originY = ::Std_obj::_int((Float(this->height) / Float((int)2)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,centerOrigin,(void))

Void Entity_obj::setOrigin( hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_PUSH("Entity::setOrigin","com/haxepunk/Entity.hx",711);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		HX_STACK_LINE(712)
		this->originX = x;
		HX_STACK_LINE(713)
		this->originY = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,setOrigin,(void))

Void Entity_obj::setHitboxTo( Dynamic o){
{
		HX_STACK_PUSH("Entity::setHitboxTo","com/haxepunk/Entity.hx",686);
		HX_STACK_THIS(this);
		HX_STACK_ARG(o,"o");
		HX_STACK_LINE(687)
		this->width = (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(HX_CSTRING("width"),true)) );
		HX_STACK_LINE(688)
		this->height = (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(HX_CSTRING("height"),true)) );
		HX_STACK_LINE(690)
		if (((bool(::Reflect_obj::hasField(o,HX_CSTRING("originX"))) && bool(::Reflect_obj::hasField(o,HX_CSTRING("originY")))))){
			HX_STACK_LINE(692)
			this->originX = (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(HX_CSTRING("originX"),true)) );
			HX_STACK_LINE(693)
			this->originY = (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(HX_CSTRING("originY"),true)) );
		}
		else{
			HX_STACK_LINE(697)
			this->originX = (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(HX_CSTRING("x"),true)) );
			HX_STACK_LINE(698)
			this->originY = (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(HX_CSTRING("y"),true)) );
			HX_STACK_LINE(700)
			this->originX = -(this->originX);
			HX_STACK_LINE(701)
			this->originY = -(this->originY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,setHitboxTo,(void))

Void Entity_obj::setHitbox( hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_originX,hx::Null< int >  __o_originY){
int width = __o_width.Default(0);
int height = __o_height.Default(0);
int originX = __o_originX.Default(0);
int originY = __o_originY.Default(0);
	HX_STACK_PUSH("Entity::setHitbox","com/haxepunk/Entity.hx",674);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(originX,"originX");
	HX_STACK_ARG(originY,"originY");
{
		HX_STACK_LINE(675)
		this->width = width;
		HX_STACK_LINE(676)
		this->height = height;
		HX_STACK_LINE(677)
		this->originX = originX;
		HX_STACK_LINE(678)
		this->originY = originY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,setHitbox,(void))

::com::haxepunk::Graphic Entity_obj::addGraphic( ::com::haxepunk::Graphic g){
	HX_STACK_PUSH("Entity::addGraphic","com/haxepunk/Entity.hx",645);
	HX_STACK_THIS(this);
	HX_STACK_ARG(g,"g");
	HX_STACK_LINE(646)
	g->set_layer(this->_layer);
	HX_STACK_LINE(647)
	if (((this->_graphic == null()))){
		HX_STACK_LINE(648)
		this->set_graphic(g);
	}
	else{
		HX_STACK_LINE(651)
		if ((::Std_obj::is(this->_graphic,hx::ClassOf< ::com::haxepunk::graphics::Graphiclist >()))){
			HX_STACK_LINE(652)
			(hx::TCast< com::haxepunk::graphics::Graphiclist >::cast(this->_graphic))->add(g);
		}
		else{
			HX_STACK_LINE(657)
			::com::haxepunk::graphics::Graphiclist list = ::com::haxepunk::graphics::Graphiclist_obj::__new(null());		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(658)
			if (((this->_graphic != null()))){
				HX_STACK_LINE(658)
				list->add(this->_graphic);
			}
			HX_STACK_LINE(659)
			list->add(g);
			HX_STACK_LINE(660)
			this->set_graphic(list);
			HX_STACK_LINE(661)
			list->setEntity(hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(663)
	return g;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,addGraphic,return )

::String Entity_obj::set_name( ::String value){
	HX_STACK_PUSH("Entity::set_name","com/haxepunk/Entity.hx",625);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(626)
	if (((this->_name == value))){
		HX_STACK_LINE(626)
		return this->_name;
	}
	HX_STACK_LINE(627)
	if (((this->_scene == null()))){
		HX_STACK_LINE(629)
		this->_name = value;
		HX_STACK_LINE(630)
		return this->_name;
	}
	HX_STACK_LINE(632)
	if (((this->_name != HX_CSTRING("")))){
		HX_STACK_LINE(632)
		this->_scene->unregisterName(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(633)
	this->_name = value;
	HX_STACK_LINE(634)
	if (((value != HX_CSTRING("")))){
		HX_STACK_LINE(634)
		this->_scene->registerName(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(635)
	return this->_name;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_name,return )

::String Entity_obj::get_name( ){
	HX_STACK_PUSH("Entity::get_name","com/haxepunk/Entity.hx",623);
	HX_STACK_THIS(this);
	HX_STACK_LINE(623)
	return this->_name;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_name,return )

::com::haxepunk::Graphic Entity_obj::set_graphic( ::com::haxepunk::Graphic value){
	HX_STACK_PUSH("Entity::set_graphic","com/haxepunk/Entity.hx",606);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(607)
	if (((this->_graphic == value))){
		HX_STACK_LINE(607)
		return value;
	}
	HX_STACK_LINE(608)
	if (((this->_graphic != null()))){
		HX_STACK_LINE(610)
		this->_graphic->setEntity(null());
		HX_STACK_LINE(611)
		this->_graphic->destroy();
	}
	HX_STACK_LINE(613)
	if (((value != null()))){
		HX_STACK_LINE(615)
		value->set_layer(this->_layer);
		HX_STACK_LINE(616)
		value->setEntity(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(618)
	this->_graphic = value;
	HX_STACK_LINE(619)
	return this->_graphic;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_graphic,return )

::com::haxepunk::Graphic Entity_obj::get_graphic( ){
	HX_STACK_PUSH("Entity::get_graphic","com/haxepunk/Entity.hx",604);
	HX_STACK_THIS(this);
	HX_STACK_LINE(604)
	return this->_graphic;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_graphic,return )

::com::haxepunk::Mask Entity_obj::set_mask( ::com::haxepunk::Mask value){
	HX_STACK_PUSH("Entity::set_mask","com/haxepunk/Entity.hx",592);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(593)
	if (((this->_mask == value))){
		HX_STACK_LINE(593)
		return value;
	}
	HX_STACK_LINE(594)
	if (((this->_mask != null()))){
		HX_STACK_LINE(594)
		this->_mask->assignTo(null());
	}
	HX_STACK_LINE(595)
	this->_mask = value;
	HX_STACK_LINE(596)
	if (((value != null()))){
		HX_STACK_LINE(596)
		this->_mask->assignTo(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(597)
	return this->_mask;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_mask,return )

::com::haxepunk::Mask Entity_obj::get_mask( ){
	HX_STACK_PUSH("Entity::get_mask","com/haxepunk/Entity.hx",590);
	HX_STACK_THIS(this);
	HX_STACK_LINE(590)
	return this->_mask;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_mask,return )

::String Entity_obj::set_type( ::String value){
	HX_STACK_PUSH("Entity::set_type","com/haxepunk/Entity.hx",572);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(573)
	if (((this->_type == value))){
		HX_STACK_LINE(573)
		return this->_type;
	}
	HX_STACK_LINE(574)
	if (((this->_scene == null()))){
		HX_STACK_LINE(576)
		this->_type = value;
		HX_STACK_LINE(577)
		return this->_type;
	}
	HX_STACK_LINE(579)
	if (((this->_type != HX_CSTRING("")))){
		HX_STACK_LINE(579)
		this->_scene->removeType(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(580)
	this->_type = value;
	HX_STACK_LINE(581)
	if (((value != HX_CSTRING("")))){
		HX_STACK_LINE(581)
		this->_scene->addType(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(582)
	return this->_type;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_type,return )

::String Entity_obj::get_type( ){
	HX_STACK_PUSH("Entity::get_type","com/haxepunk/Entity.hx",570);
	HX_STACK_THIS(this);
	HX_STACK_LINE(570)
	return this->_type;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_type,return )

int Entity_obj::set_layer( int value){
	HX_STACK_PUSH("Entity::set_layer","com/haxepunk/Entity.hx",543);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(544)
	if (((this->_layer == value))){
		HX_STACK_LINE(544)
		return this->_layer;
	}
	HX_STACK_LINE(546)
	if (((value < (int)0))){
		HX_STACK_LINE(547)
		::haxe::Log_obj::trace(HX_CSTRING("Negative layers may not work properly if you aren't using flash"),hx::SourceInfo(HX_CSTRING("Entity.hx"),548,HX_CSTRING("com.haxepunk.Entity"),HX_CSTRING("set_layer")));
	}
	HX_STACK_LINE(551)
	if (((this->_graphic != null()))){
		HX_STACK_LINE(552)
		this->_graphic->set_layer(value);
	}
	HX_STACK_LINE(555)
	if (((this->_scene == null()))){
		HX_STACK_LINE(557)
		this->_layer = value;
		HX_STACK_LINE(558)
		return this->_layer;
	}
	HX_STACK_LINE(560)
	this->_scene->removeRender(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(561)
	this->_layer = value;
	HX_STACK_LINE(562)
	this->_scene->addRender(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(563)
	return this->_layer;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_layer,return )

int Entity_obj::get_layer( ){
	HX_STACK_PUSH("Entity::get_layer","com/haxepunk/Entity.hx",541);
	HX_STACK_THIS(this);
	HX_STACK_LINE(541)
	return this->_layer;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_layer,return )

Float Entity_obj::get_bottom( ){
	HX_STACK_PUSH("Entity::get_bottom","com/haxepunk/Entity.hx",535);
	HX_STACK_THIS(this);
	HX_STACK_LINE(535)
	return ((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY) + this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_bottom,return )

Float Entity_obj::get_top( ){
	HX_STACK_PUSH("Entity::get_top","com/haxepunk/Entity.hx",529);
	HX_STACK_THIS(this);
	HX_STACK_LINE(529)
	return (((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY);
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_top,return )

Float Entity_obj::get_right( ){
	HX_STACK_PUSH("Entity::get_right","com/haxepunk/Entity.hx",523);
	HX_STACK_THIS(this);
	HX_STACK_LINE(523)
	return ((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX) + this->width);
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_right,return )

Float Entity_obj::get_left( ){
	HX_STACK_PUSH("Entity::get_left","com/haxepunk/Entity.hx",517);
	HX_STACK_THIS(this);
	HX_STACK_LINE(517)
	return (((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX);
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_left,return )

Float Entity_obj::get_centerY( ){
	HX_STACK_PUSH("Entity::get_centerY","com/haxepunk/Entity.hx",511);
	HX_STACK_THIS(this);
	HX_STACK_LINE(511)
	return ((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - this->originY) + (Float(this->height) / Float((int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_centerY,return )

Float Entity_obj::get_centerX( ){
	HX_STACK_PUSH("Entity::get_centerX","com/haxepunk/Entity.hx",505);
	HX_STACK_THIS(this);
	HX_STACK_LINE(505)
	return ((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - this->originX) + (Float(this->width) / Float((int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_centerX,return )

Float Entity_obj::get_halfHeight( ){
	HX_STACK_PUSH("Entity::get_halfHeight","com/haxepunk/Entity.hx",499);
	HX_STACK_THIS(this);
	HX_STACK_LINE(499)
	return (Float(this->height) / Float((int)2));
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_halfHeight,return )

Float Entity_obj::get_halfWidth( ){
	HX_STACK_PUSH("Entity::get_halfWidth","com/haxepunk/Entity.hx",493);
	HX_STACK_THIS(this);
	HX_STACK_LINE(493)
	return (Float(this->width) / Float((int)2));
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_halfWidth,return )

::com::haxepunk::Scene Entity_obj::get_scene( ){
	HX_STACK_PUSH("Entity::get_scene","com/haxepunk/Entity.hx",485);
	HX_STACK_THIS(this);
	HX_STACK_LINE(485)
	return this->_scene;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_scene,return )

::com::haxepunk::Scene Entity_obj::get_world( ){
	HX_STACK_PUSH("Entity::get_world","com/haxepunk/Entity.hx",475);
	HX_STACK_THIS(this);
	HX_STACK_LINE(476)
	::com::haxepunk::HXP_obj::log(HX_CSTRING("Entity.world is deprecated, please use scene instead"));
	HX_STACK_LINE(477)
	return this->_scene;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_world,return )

bool Entity_obj::get_onCamera( ){
	HX_STACK_PUSH("Entity::get_onCamera","com/haxepunk/Entity.hx",459);
	HX_STACK_THIS(this);
	HX_STACK_LINE(459)
	if (((this->_scene == null()))){
		HX_STACK_LINE(461)
		return false;
	}
	else{
		HX_STACK_LINE(465)
		return this->collideRect((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ),this->_scene->camera->x,this->_scene->camera->y,::com::haxepunk::HXP_obj::width,::com::haxepunk::HXP_obj::height);
	}
	HX_STACK_LINE(459)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_onCamera,return )

Void Entity_obj::collideTypesInto( Array< ::String > types,Float x,Float y,Dynamic array){
{
		HX_STACK_PUSH("Entity::collideTypesInto","com/haxepunk/Entity.hx",449);
		HX_STACK_THIS(this);
		HX_STACK_ARG(types,"types");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(array,"array");
		HX_STACK_LINE(450)
		if (((this->_scene == null()))){
			HX_STACK_LINE(450)
			return null();
		}
		HX_STACK_LINE(451)
		{
			HX_STACK_LINE(451)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(451)
			while(((_g < types->length))){
				HX_STACK_LINE(451)
				::String type = types->__get(_g);		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(451)
				++(_g);
				HX_STACK_LINE(451)
				this->collideInto(type,x,y,array);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,collideTypesInto,(void))

Void Entity_obj::collideInto( ::String type,Float x,Float y,Dynamic array){
{
		HX_STACK_PUSH("Entity::collideInto","com/haxepunk/Entity.hx",393);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(array,"array");
		HX_STACK_LINE(394)
		if (((this->_scene == null()))){
			HX_STACK_LINE(394)
			return null();
		}
		HX_STACK_LINE(396)
		Dynamic e;		HX_STACK_VAR(e,"e");
		Dynamic fe = this->_scene->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(398)
		if (((bool(!(this->collidable)) || bool((fe == null()))))){
			HX_STACK_LINE(398)
			return null();
		}
		HX_STACK_LINE(400)
		this->_x = (  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) );
		HX_STACK_LINE(400)
		this->_y = (  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) );
		HX_STACK_LINE(401)
		this->x = x;
		HX_STACK_LINE(401)
		this->y = y;
		HX_STACK_LINE(402)
		int n = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(404)
		if (((this->_mask == null()))){
			HX_STACK_LINE(406)
			while(((fe != null()))){
				HX_STACK_LINE(408)
				e = fe;
				HX_STACK_LINE(409)
				if (((bool((bool((bool((bool((bool(e->__Field(HX_CSTRING("collidable"),true)) && bool((e != hx::ObjectPtr<OBJ_>(this))))) && bool((((x - this->originX) + this->width) > (((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->__Field(HX_CSTRING("x"),true)) )) - e->__Field(HX_CSTRING("originX"),true)))))) && bool((((y - this->originY) + this->height) > (((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->__Field(HX_CSTRING("y"),true)) )) - e->__Field(HX_CSTRING("originY"),true)))))) && bool(((x - this->originX) < ((((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->__Field(HX_CSTRING("x"),true)) )) - e->__Field(HX_CSTRING("originX"),true)) + e->__Field(HX_CSTRING("width"),true)))))) && bool(((y - this->originY) < ((((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->__Field(HX_CSTRING("y"),true)) )) - e->__Field(HX_CSTRING("originY"),true)) + e->__Field(HX_CSTRING("height"),true))))))){
					HX_STACK_LINE(414)
					if (((bool((e->__Field(HX_CSTRING("_mask"),true) == null())) || bool(e->__Field(HX_CSTRING("_mask"),true)->__Field(HX_CSTRING("collide"),true)(this->HITBOX))))){
						HX_STACK_LINE(415)
						hx::IndexRef((array).mPtr,(n)++) = e;
					}
				}
				HX_STACK_LINE(417)
				fe = fe->__Field(HX_CSTRING("_typeNext"),true);
			}
			HX_STACK_LINE(419)
			this->x = this->_x;
			HX_STACK_LINE(419)
			this->y = this->_y;
			HX_STACK_LINE(420)
			return null();
		}
		HX_STACK_LINE(423)
		while(((fe != null()))){
			HX_STACK_LINE(425)
			e = fe;
			HX_STACK_LINE(426)
			if (((bool((bool((bool((bool((bool(e->__Field(HX_CSTRING("collidable"),true)) && bool((e != hx::ObjectPtr<OBJ_>(this))))) && bool((((x - this->originX) + this->width) > (((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->__Field(HX_CSTRING("x"),true)) )) - e->__Field(HX_CSTRING("originX"),true)))))) && bool((((y - this->originY) + this->height) > (((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->__Field(HX_CSTRING("y"),true)) )) - e->__Field(HX_CSTRING("originY"),true)))))) && bool(((x - this->originX) < ((((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->__Field(HX_CSTRING("x"),true)) )) - e->__Field(HX_CSTRING("originX"),true)) + e->__Field(HX_CSTRING("width"),true)))))) && bool(((y - this->originY) < ((((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->__Field(HX_CSTRING("y"),true)) )) - e->__Field(HX_CSTRING("originY"),true)) + e->__Field(HX_CSTRING("height"),true))))))){
				HX_STACK_LINE(431)
				if ((this->_mask->collide((  (((e->__Field(HX_CSTRING("_mask"),true) != null()))) ? ::com::haxepunk::Mask(e->__Field(HX_CSTRING("_mask"),true)) : ::com::haxepunk::Mask(e->__Field(HX_CSTRING("HITBOX"),true)) )))){
					HX_STACK_LINE(432)
					hx::IndexRef((array).mPtr,(n)++) = e;
				}
			}
			HX_STACK_LINE(434)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
		HX_STACK_LINE(436)
		this->x = this->_x;
		HX_STACK_LINE(436)
		this->y = this->_y;
		HX_STACK_LINE(437)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,collideInto,(void))

bool Entity_obj::collidePoint( Float x,Float y,Float pX,Float pY){
	HX_STACK_PUSH("Entity::collidePoint","com/haxepunk/Entity.hx",360);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(pX,"pX");
	HX_STACK_ARG(pY,"pY");
	HX_STACK_LINE(361)
	if (((bool((bool((bool((pX >= (x - this->originX))) && bool((pY >= (y - this->originY))))) && bool((pX < ((x - this->originX) + this->width))))) && bool((pY < ((y - this->originY) + this->height)))))){
		HX_STACK_LINE(366)
		if (((this->_mask == null()))){
			HX_STACK_LINE(366)
			return true;
		}
		HX_STACK_LINE(367)
		this->_x = (  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) );
		HX_STACK_LINE(367)
		this->_y = (  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) );
		HX_STACK_LINE(368)
		this->x = x;
		HX_STACK_LINE(368)
		this->y = y;
		HX_STACK_LINE(369)
		::com::haxepunk::HXP_obj::entity->x = pX;
		HX_STACK_LINE(370)
		::com::haxepunk::HXP_obj::entity->y = pY;
		HX_STACK_LINE(371)
		::com::haxepunk::HXP_obj::entity->width = (int)1;
		HX_STACK_LINE(372)
		::com::haxepunk::HXP_obj::entity->height = (int)1;
		HX_STACK_LINE(373)
		if ((this->_mask->collide(::com::haxepunk::HXP_obj::entity->HITBOX))){
			HX_STACK_LINE(375)
			this->x = this->_x;
			HX_STACK_LINE(375)
			this->y = this->_y;
			HX_STACK_LINE(376)
			return true;
		}
		HX_STACK_LINE(378)
		this->x = this->_x;
		HX_STACK_LINE(378)
		this->y = this->_y;
		HX_STACK_LINE(379)
		return false;
	}
	HX_STACK_LINE(381)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,collidePoint,return )

bool Entity_obj::collideRect( Float x,Float y,Float rX,Float rY,Float rWidth,Float rHeight){
	HX_STACK_PUSH("Entity::collideRect","com/haxepunk/Entity.hx",327);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(rX,"rX");
	HX_STACK_ARG(rY,"rY");
	HX_STACK_ARG(rWidth,"rWidth");
	HX_STACK_ARG(rHeight,"rHeight");
	HX_STACK_LINE(328)
	if (((bool((bool((bool((((x - this->originX) + this->width) >= rX)) && bool((((y - this->originY) + this->height) >= rY)))) && bool(((x - this->originX) <= (rX + rWidth))))) && bool(((y - this->originY) <= (rY + rHeight)))))){
		HX_STACK_LINE(333)
		if (((this->_mask == null()))){
			HX_STACK_LINE(333)
			return true;
		}
		HX_STACK_LINE(334)
		this->_x = (  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) );
		HX_STACK_LINE(334)
		this->_y = (  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) );
		HX_STACK_LINE(335)
		this->x = x;
		HX_STACK_LINE(335)
		this->y = y;
		HX_STACK_LINE(336)
		::com::haxepunk::HXP_obj::entity->x = rX;
		HX_STACK_LINE(337)
		::com::haxepunk::HXP_obj::entity->y = rY;
		HX_STACK_LINE(338)
		::com::haxepunk::HXP_obj::entity->width = ::Std_obj::_int(rWidth);
		HX_STACK_LINE(339)
		::com::haxepunk::HXP_obj::entity->height = ::Std_obj::_int(rHeight);
		HX_STACK_LINE(340)
		if ((this->_mask->collide(::com::haxepunk::HXP_obj::entity->HITBOX))){
			HX_STACK_LINE(342)
			this->x = this->_x;
			HX_STACK_LINE(342)
			this->y = this->_y;
			HX_STACK_LINE(343)
			return true;
		}
		HX_STACK_LINE(345)
		this->x = this->_x;
		HX_STACK_LINE(345)
		this->y = this->_y;
		HX_STACK_LINE(346)
		return false;
	}
	HX_STACK_LINE(348)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC6(Entity_obj,collideRect,return )

Dynamic Entity_obj::collideWith( Dynamic e,Float x,Float y){
	HX_STACK_PUSH("Entity::collideWith","com/haxepunk/Entity.hx",286);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(287)
	this->_x = (  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) );
	HX_STACK_LINE(287)
	this->_y = (  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) );
	HX_STACK_LINE(288)
	this->x = x;
	HX_STACK_LINE(288)
	this->y = y;
	HX_STACK_LINE(290)
	if (((bool((bool((bool((bool((bool(this->collidable) && bool(e->__Field(HX_CSTRING("collidable"),true)))) && bool((((x - this->originX) + this->width) > (((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->__Field(HX_CSTRING("x"),true)) )) - e->__Field(HX_CSTRING("originX"),true)))))) && bool((((y - this->originY) + this->height) > (((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->__Field(HX_CSTRING("y"),true)) )) - e->__Field(HX_CSTRING("originY"),true)))))) && bool(((x - this->originX) < ((((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->__Field(HX_CSTRING("x"),true)) )) - e->__Field(HX_CSTRING("originX"),true)) + e->__Field(HX_CSTRING("width"),true)))))) && bool(((y - this->originY) < ((((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->__Field(HX_CSTRING("y"),true)) )) - e->__Field(HX_CSTRING("originY"),true)) + e->__Field(HX_CSTRING("height"),true))))))){
		HX_STACK_LINE(296)
		if (((this->_mask == null()))){
			HX_STACK_LINE(298)
			if (((bool((e->__Field(HX_CSTRING("_mask"),true) == null())) || bool(e->__Field(HX_CSTRING("_mask"),true)->__Field(HX_CSTRING("collide"),true)(this->HITBOX))))){
				HX_STACK_LINE(300)
				this->x = this->_x;
				HX_STACK_LINE(300)
				this->y = this->_y;
				HX_STACK_LINE(301)
				return e;
			}
			HX_STACK_LINE(303)
			this->x = this->_x;
			HX_STACK_LINE(303)
			this->y = this->_y;
			HX_STACK_LINE(304)
			return null();
		}
		HX_STACK_LINE(306)
		if ((this->_mask->collide((  (((e->__Field(HX_CSTRING("_mask"),true) != null()))) ? ::com::haxepunk::Mask(e->__Field(HX_CSTRING("_mask"),true)) : ::com::haxepunk::Mask(e->__Field(HX_CSTRING("HITBOX"),true)) )))){
			HX_STACK_LINE(308)
			this->x = this->_x;
			HX_STACK_LINE(308)
			this->y = this->_y;
			HX_STACK_LINE(309)
			return e;
		}
	}
	HX_STACK_LINE(312)
	this->x = this->_x;
	HX_STACK_LINE(312)
	this->y = this->_y;
	HX_STACK_LINE(313)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,collideWith,return )

::com::haxepunk::Entity Entity_obj::collideTypes( Dynamic types,Float x,Float y){
	HX_STACK_PUSH("Entity::collideTypes","com/haxepunk/Entity.hx",254);
	HX_STACK_THIS(this);
	HX_STACK_ARG(types,"types");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(255)
	if (((this->_scene == null()))){
		HX_STACK_LINE(255)
		return null();
	}
	HX_STACK_LINE(257)
	if ((::Std_obj::is(types,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(258)
		return this->collide(types,x,y);
	}
	else{
		HX_STACK_LINE(263)
		Array< ::String > a = types;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(264)
		if (((a != null()))){
			HX_STACK_LINE(266)
			::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(267)
			{
				HX_STACK_LINE(267)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(267)
				while(((_g < a->length))){
					HX_STACK_LINE(267)
					::String type = a->__get(_g);		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(267)
					++(_g);
					HX_STACK_LINE(269)
					e = this->collide(type,x,y);
					HX_STACK_LINE(270)
					if (((e != null()))){
						HX_STACK_LINE(270)
						return e;
					}
				}
			}
		}
	}
	HX_STACK_LINE(275)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,collideTypes,return )

::com::haxepunk::Entity Entity_obj::collide( ::String type,Float x,Float y){
	HX_STACK_PUSH("Entity::collide","com/haxepunk/Entity.hx",192);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(193)
	if (((this->_scene == null()))){
		HX_STACK_LINE(193)
		return null();
	}
	HX_STACK_LINE(195)
	::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
	Dynamic fe = this->_scene->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(197)
	if (((bool(!(this->collidable)) || bool((fe == null()))))){
		HX_STACK_LINE(197)
		return null();
	}
	HX_STACK_LINE(199)
	this->_x = (  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) );
	HX_STACK_LINE(199)
	this->_y = (  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) );
	HX_STACK_LINE(200)
	this->x = x;
	HX_STACK_LINE(200)
	this->y = y;
	HX_STACK_LINE(202)
	if (((this->_mask == null()))){
		HX_STACK_LINE(204)
		while(((fe != null()))){
			HX_STACK_LINE(206)
			e = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(207)
			if (((bool((bool((bool((bool((bool(e->collidable) && bool((e != hx::ObjectPtr<OBJ_>(this))))) && bool((((x - this->originX) + this->width) > (((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX))))) && bool((((y - this->originY) + this->height) > (((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY))))) && bool(((x - this->originX) < ((((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX) + e->width))))) && bool(((y - this->originY) < ((((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY) + e->height)))))){
				HX_STACK_LINE(212)
				if (((bool((e->_mask == null())) || bool(e->_mask->collide(this->HITBOX))))){
					HX_STACK_LINE(215)
					this->x = this->_x;
					HX_STACK_LINE(215)
					this->y = this->_y;
					HX_STACK_LINE(216)
					return e;
				}
			}
			HX_STACK_LINE(219)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
		HX_STACK_LINE(221)
		this->x = this->_x;
		HX_STACK_LINE(221)
		this->y = this->_y;
		HX_STACK_LINE(222)
		return null();
	}
	HX_STACK_LINE(225)
	while(((fe != null()))){
		HX_STACK_LINE(227)
		e = hx::TCast< com::haxepunk::Entity >::cast(fe);
		HX_STACK_LINE(228)
		if (((bool((bool((bool((bool((bool(e->collidable) && bool((e != hx::ObjectPtr<OBJ_>(this))))) && bool((((x - this->originX) + this->width) > (((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX))))) && bool((((y - this->originY) + this->height) > (((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY))))) && bool(((x - this->originX) < ((((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX) + e->width))))) && bool(((y - this->originY) < ((((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY) + e->height)))))){
			HX_STACK_LINE(233)
			if ((this->_mask->collide((  (((e->_mask != null()))) ? ::com::haxepunk::Mask(e->_mask) : ::com::haxepunk::Mask(e->HITBOX) )))){
				HX_STACK_LINE(236)
				this->x = this->_x;
				HX_STACK_LINE(236)
				this->y = this->_y;
				HX_STACK_LINE(237)
				return e;
			}
		}
		HX_STACK_LINE(240)
		fe = fe->__Field(HX_CSTRING("_typeNext"),true);
	}
	HX_STACK_LINE(242)
	this->x = this->_x;
	HX_STACK_LINE(242)
	this->y = this->_y;
	HX_STACK_LINE(243)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,collide,return )

Void Entity_obj::render( ){
{
		HX_STACK_PUSH("Entity::render","com/haxepunk/Entity.hx",169);
		HX_STACK_THIS(this);
		HX_STACK_LINE(169)
		if (((bool((this->_graphic != null())) && bool(this->_graphic->get_visible())))){
			HX_STACK_LINE(172)
			if ((this->_graphic->relative)){
				HX_STACK_LINE(174)
				this->_point->x = (  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) );
				HX_STACK_LINE(175)
				this->_point->y = (  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) );
			}
			else{
				HX_STACK_LINE(177)
				this->_point->x = this->_point->y = (int)0;
			}
			HX_STACK_LINE(178)
			this->_camera->x = (  (((this->_scene == null()))) ? Float(::com::haxepunk::HXP_obj::camera->x) : Float(this->_scene->camera->x) );
			HX_STACK_LINE(179)
			this->_camera->y = (  (((this->_scene == null()))) ? Float(::com::haxepunk::HXP_obj::camera->y) : Float(this->_scene->camera->y) );
			HX_STACK_LINE(180)
			this->_graphic->render((  (((this->renderTarget != null()))) ? ::flash::display::BitmapData(this->renderTarget) : ::flash::display::BitmapData(::com::haxepunk::HXP_obj::buffer) ),this->_point,this->_camera);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,render,(void))

Void Entity_obj::update( ){
{
		HX_STACK_PUSH("Entity::update","com/haxepunk/Entity.hx",160);
		HX_STACK_THIS(this);
	}
return null();
}


Void Entity_obj::removed( ){
{
		HX_STACK_PUSH("Entity::removed","com/haxepunk/Entity.hx",152);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,removed,(void))

Void Entity_obj::added( ){
{
		HX_STACK_PUSH("Entity::added","com/haxepunk/Entity.hx",144);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,added,(void))

Float Entity_obj::set_y( Float v){
	HX_STACK_PUSH("Entity::set_y","com/haxepunk/Entity.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(72)
	return this->y = v;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_y,return )

Float Entity_obj::get_y( ){
	HX_STACK_PUSH("Entity::get_y","com/haxepunk/Entity.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_LINE(65)
	if ((this->followCamera)){
		HX_STACK_LINE(67)
		return (this->y + ::com::haxepunk::HXP_obj::camera->y);
	}
	else{
		HX_STACK_LINE(69)
		return this->y;
	}
	HX_STACK_LINE(65)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_y,return )

Float Entity_obj::set_x( Float v){
	HX_STACK_PUSH("Entity::set_x","com/haxepunk/Entity.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(56)
	return this->x = v;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_x,return )

Float Entity_obj::get_x( ){
	HX_STACK_PUSH("Entity::get_x","com/haxepunk/Entity.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_LINE(49)
	if ((this->followCamera)){
		HX_STACK_LINE(51)
		return (this->x + ::com::haxepunk::HXP_obj::camera->x);
	}
	else{
		HX_STACK_LINE(53)
		return this->x;
	}
	HX_STACK_LINE(49)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_x,return )


Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_graphic,"_graphic");
	HX_MARK_MEMBER_NAME(_moveY,"_moveY");
	HX_MARK_MEMBER_NAME(_moveX,"_moveX");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_mask,"_mask");
	HX_MARK_MEMBER_NAME(HITBOX,"HITBOX");
	HX_MARK_MEMBER_NAME(_recycleNext,"_recycleNext");
	HX_MARK_MEMBER_NAME(_typeNext,"_typeNext");
	HX_MARK_MEMBER_NAME(_typePrev,"_typePrev");
	HX_MARK_MEMBER_NAME(_renderNext,"_renderNext");
	HX_MARK_MEMBER_NAME(_renderPrev,"_renderPrev");
	HX_MARK_MEMBER_NAME(_updateNext,"_updateNext");
	HX_MARK_MEMBER_NAME(_updatePrev,"_updatePrev");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_MEMBER_NAME(_layer,"_layer");
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_MEMBER_NAME(bottom,"bottom");
	HX_MARK_MEMBER_NAME(top,"top");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(centerY,"centerY");
	HX_MARK_MEMBER_NAME(centerX,"centerX");
	HX_MARK_MEMBER_NAME(halfHeight,"halfHeight");
	HX_MARK_MEMBER_NAME(halfWidth,"halfWidth");
	HX_MARK_MEMBER_NAME(onCamera,"onCamera");
	HX_MARK_MEMBER_NAME(renderTarget,"renderTarget");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(followCamera,"followCamera");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(collidable,"collidable");
	HX_MARK_MEMBER_NAME(visible,"visible");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_graphic,"_graphic");
	HX_VISIT_MEMBER_NAME(_moveY,"_moveY");
	HX_VISIT_MEMBER_NAME(_moveX,"_moveX");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_mask,"_mask");
	HX_VISIT_MEMBER_NAME(HITBOX,"HITBOX");
	HX_VISIT_MEMBER_NAME(_recycleNext,"_recycleNext");
	HX_VISIT_MEMBER_NAME(_typeNext,"_typeNext");
	HX_VISIT_MEMBER_NAME(_typePrev,"_typePrev");
	HX_VISIT_MEMBER_NAME(_renderNext,"_renderNext");
	HX_VISIT_MEMBER_NAME(_renderPrev,"_renderPrev");
	HX_VISIT_MEMBER_NAME(_updateNext,"_updateNext");
	HX_VISIT_MEMBER_NAME(_updatePrev,"_updatePrev");
	HX_VISIT_MEMBER_NAME(_name,"_name");
	HX_VISIT_MEMBER_NAME(_layer,"_layer");
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_class,"_class");
	HX_VISIT_MEMBER_NAME(bottom,"bottom");
	HX_VISIT_MEMBER_NAME(top,"top");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(centerY,"centerY");
	HX_VISIT_MEMBER_NAME(centerX,"centerX");
	HX_VISIT_MEMBER_NAME(halfHeight,"halfHeight");
	HX_VISIT_MEMBER_NAME(halfWidth,"halfWidth");
	HX_VISIT_MEMBER_NAME(onCamera,"onCamera");
	HX_VISIT_MEMBER_NAME(renderTarget,"renderTarget");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(followCamera,"followCamera");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(collidable,"collidable");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Entity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return inCallProp ? get_y() : y; }
		if (HX_FIELD_EQ(inName,"x") ) { return inCallProp ? get_x() : x; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return inCallProp ? get_top() : top; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return get_name(); }
		if (HX_FIELD_EQ(inName,"mask") ) { return get_mask(); }
		if (HX_FIELD_EQ(inName,"type") ) { return get_type(); }
		if (HX_FIELD_EQ(inName,"left") ) { return inCallProp ? get_left() : left; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mask") ) { return _mask; }
		if (HX_FIELD_EQ(inName,"_name") ) { return _name; }
		if (HX_FIELD_EQ(inName,"_type") ) { return _type; }
		if (HX_FIELD_EQ(inName,"layer") ) { return get_layer(); }
		if (HX_FIELD_EQ(inName,"right") ) { return inCallProp ? get_right() : right; }
		if (HX_FIELD_EQ(inName,"scene") ) { return get_scene(); }
		if (HX_FIELD_EQ(inName,"world") ) { return get_world(); }
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { return _moveY; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { return _moveX; }
		if (HX_FIELD_EQ(inName,"HITBOX") ) { return HITBOX; }
		if (HX_FIELD_EQ(inName,"_layer") ) { return _layer; }
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"_class") ) { return _class; }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveBy") ) { return moveBy_dyn(); }
		if (HX_FIELD_EQ(inName,"bottom") ) { return inCallProp ? get_bottom() : bottom; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		if (HX_FIELD_EQ(inName,"graphic") ) { return get_graphic(); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"centerY") ) { return inCallProp ? get_centerY() : centerY; }
		if (HX_FIELD_EQ(inName,"centerX") ) { return inCallProp ? get_centerX() : centerX; }
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		if (HX_FIELD_EQ(inName,"removed") ) { return removed_dyn(); }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_graphic") ) { return _graphic; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mask") ) { return set_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mask") ) { return get_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"onCamera") ) { return inCallProp ? get_onCamera() : onCamera; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_typeNext") ) { return _typeNext; }
		if (HX_FIELD_EQ(inName,"_typePrev") ) { return _typePrev; }
		if (HX_FIELD_EQ(inName,"setOrigin") ) { return setOrigin_dyn(); }
		if (HX_FIELD_EQ(inName,"setHitbox") ) { return setHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"set_layer") ) { return set_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_layer") ) { return get_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"halfWidth") ) { return inCallProp ? get_halfWidth() : halfWidth; }
		if (HX_FIELD_EQ(inName,"get_scene") ) { return get_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"get_world") ) { return get_world_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addGraphic") ) { return addGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"halfHeight") ) { return inCallProp ? get_halfHeight() : halfHeight; }
		if (HX_FIELD_EQ(inName,"collidable") ) { return collidable; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_renderNext") ) { return _renderNext; }
		if (HX_FIELD_EQ(inName,"_renderPrev") ) { return _renderPrev; }
		if (HX_FIELD_EQ(inName,"_updateNext") ) { return _updateNext; }
		if (HX_FIELD_EQ(inName,"_updatePrev") ) { return _updatePrev; }
		if (HX_FIELD_EQ(inName,"moveAtAngle") ) { return moveAtAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTowards") ) { return moveTowards_dyn(); }
		if (HX_FIELD_EQ(inName,"setHitboxTo") ) { return setHitboxTo_dyn(); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return set_graphic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_graphic") ) { return get_graphic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_centerY") ) { return get_centerY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_centerX") ) { return get_centerX_dyn(); }
		if (HX_FIELD_EQ(inName,"collideInto") ) { return collideInto_dyn(); }
		if (HX_FIELD_EQ(inName,"collideRect") ) { return collideRect_dyn(); }
		if (HX_FIELD_EQ(inName,"collideWith") ) { return collideWith_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_recycleNext") ) { return _recycleNext; }
		if (HX_FIELD_EQ(inName,"moveCollideY") ) { return moveCollideY_dyn(); }
		if (HX_FIELD_EQ(inName,"moveCollideX") ) { return moveCollideX_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceFrom") ) { return distanceFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"centerOrigin") ) { return centerOrigin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onCamera") ) { return get_onCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePoint") ) { return collidePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"collideTypes") ) { return collideTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"renderTarget") ) { return renderTarget; }
		if (HX_FIELD_EQ(inName,"followCamera") ) { return followCamera; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clampVertical") ) { return clampVertical_dyn(); }
		if (HX_FIELD_EQ(inName,"get_halfWidth") ) { return get_halfWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"distanceToRect") ) { return distanceToRect_dyn(); }
		if (HX_FIELD_EQ(inName,"get_halfHeight") ) { return get_halfHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clampHorizontal") ) { return clampHorizontal_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToPoint") ) { return distanceToPoint_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collideTypesInto") ) { return collideTypesInto_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"centerGraphicInRect") ) { return centerGraphicInRect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Entity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return set_name(inValue); }
		if (HX_FIELD_EQ(inName,"mask") ) { return set_mask(inValue); }
		if (HX_FIELD_EQ(inName,"type") ) { return set_type(inValue); }
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mask") ) { _mask=inValue.Cast< ::com::haxepunk::Mask >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layer") ) { return set_layer(inValue); }
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { _moveY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { _moveX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HITBOX") ) { HITBOX=inValue.Cast< ::com::haxepunk::Mask >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layer") ) { _layer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::haxepunk::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { bottom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphic") ) { return set_graphic(inValue); }
		if (HX_FIELD_EQ(inName,"centerY") ) { centerY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centerX") ) { centerX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_graphic") ) { _graphic=inValue.Cast< ::com::haxepunk::Graphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onCamera") ) { onCamera=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_typeNext") ) { _typeNext=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_typePrev") ) { _typePrev=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"halfWidth") ) { halfWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"halfHeight") ) { halfHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collidable") ) { collidable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_renderNext") ) { _renderNext=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderPrev") ) { _renderPrev=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateNext") ) { _updateNext=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updatePrev") ) { _updatePrev=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_recycleNext") ) { _recycleNext=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderTarget") ) { renderTarget=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followCamera") ) { followCamera=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_camera"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_graphic"));
	outFields->push(HX_CSTRING("_moveY"));
	outFields->push(HX_CSTRING("_moveX"));
	outFields->push(HX_CSTRING("_y"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("_mask"));
	outFields->push(HX_CSTRING("HITBOX"));
	outFields->push(HX_CSTRING("_recycleNext"));
	outFields->push(HX_CSTRING("_typeNext"));
	outFields->push(HX_CSTRING("_typePrev"));
	outFields->push(HX_CSTRING("_renderNext"));
	outFields->push(HX_CSTRING("_renderPrev"));
	outFields->push(HX_CSTRING("_updateNext"));
	outFields->push(HX_CSTRING("_updatePrev"));
	outFields->push(HX_CSTRING("_name"));
	outFields->push(HX_CSTRING("_layer"));
	outFields->push(HX_CSTRING("_type"));
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("_class"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("graphic"));
	outFields->push(HX_CSTRING("mask"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("layer"));
	outFields->push(HX_CSTRING("bottom"));
	outFields->push(HX_CSTRING("top"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("centerY"));
	outFields->push(HX_CSTRING("centerX"));
	outFields->push(HX_CSTRING("halfHeight"));
	outFields->push(HX_CSTRING("halfWidth"));
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("world"));
	outFields->push(HX_CSTRING("onCamera"));
	outFields->push(HX_CSTRING("renderTarget"));
	outFields->push(HX_CSTRING("originY"));
	outFields->push(HX_CSTRING("originX"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("followCamera"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("collidable"));
	outFields->push(HX_CSTRING("visible"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_camera"),
	HX_CSTRING("_point"),
	HX_CSTRING("_graphic"),
	HX_CSTRING("_moveY"),
	HX_CSTRING("_moveX"),
	HX_CSTRING("_y"),
	HX_CSTRING("_x"),
	HX_CSTRING("_mask"),
	HX_CSTRING("HITBOX"),
	HX_CSTRING("_recycleNext"),
	HX_CSTRING("_typeNext"),
	HX_CSTRING("_typePrev"),
	HX_CSTRING("_renderNext"),
	HX_CSTRING("_renderPrev"),
	HX_CSTRING("_updateNext"),
	HX_CSTRING("_updatePrev"),
	HX_CSTRING("_name"),
	HX_CSTRING("_layer"),
	HX_CSTRING("_type"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_class"),
	HX_CSTRING("centerGraphicInRect"),
	HX_CSTRING("clampVertical"),
	HX_CSTRING("clampHorizontal"),
	HX_CSTRING("moveCollideY"),
	HX_CSTRING("moveCollideX"),
	HX_CSTRING("moveAtAngle"),
	HX_CSTRING("moveTowards"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("moveBy"),
	HX_CSTRING("toString"),
	HX_CSTRING("distanceToRect"),
	HX_CSTRING("distanceToPoint"),
	HX_CSTRING("distanceFrom"),
	HX_CSTRING("centerOrigin"),
	HX_CSTRING("setOrigin"),
	HX_CSTRING("setHitboxTo"),
	HX_CSTRING("setHitbox"),
	HX_CSTRING("addGraphic"),
	HX_CSTRING("set_name"),
	HX_CSTRING("get_name"),
	HX_CSTRING("set_graphic"),
	HX_CSTRING("get_graphic"),
	HX_CSTRING("set_mask"),
	HX_CSTRING("get_mask"),
	HX_CSTRING("set_type"),
	HX_CSTRING("get_type"),
	HX_CSTRING("set_layer"),
	HX_CSTRING("get_layer"),
	HX_CSTRING("get_bottom"),
	HX_CSTRING("bottom"),
	HX_CSTRING("get_top"),
	HX_CSTRING("top"),
	HX_CSTRING("get_right"),
	HX_CSTRING("right"),
	HX_CSTRING("get_left"),
	HX_CSTRING("left"),
	HX_CSTRING("get_centerY"),
	HX_CSTRING("centerY"),
	HX_CSTRING("get_centerX"),
	HX_CSTRING("centerX"),
	HX_CSTRING("get_halfHeight"),
	HX_CSTRING("halfHeight"),
	HX_CSTRING("get_halfWidth"),
	HX_CSTRING("halfWidth"),
	HX_CSTRING("get_scene"),
	HX_CSTRING("get_world"),
	HX_CSTRING("get_onCamera"),
	HX_CSTRING("onCamera"),
	HX_CSTRING("collideTypesInto"),
	HX_CSTRING("collideInto"),
	HX_CSTRING("collidePoint"),
	HX_CSTRING("collideRect"),
	HX_CSTRING("collideWith"),
	HX_CSTRING("collideTypes"),
	HX_CSTRING("collide"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	HX_CSTRING("removed"),
	HX_CSTRING("added"),
	HX_CSTRING("renderTarget"),
	HX_CSTRING("originY"),
	HX_CSTRING("originX"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("followCamera"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_y"),
	HX_CSTRING("y"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_x"),
	HX_CSTRING("x"),
	HX_CSTRING("collidable"),
	HX_CSTRING("visible"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Entity"), hx::TCanCast< Entity_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Entity_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
