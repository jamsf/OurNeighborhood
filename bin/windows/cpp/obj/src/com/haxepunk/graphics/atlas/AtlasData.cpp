#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Layer
#include <com/haxepunk/graphics/atlas/Layer.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{

Void AtlasData_obj::__construct(::flash::display::BitmapData bd)
{
HX_STACK_PUSH("AtlasData::new","com/haxepunk/graphics/atlas/AtlasData.hx",42);
{
	HX_STACK_LINE(403)
	this->_refCount = (int)0;
	HX_STACK_LINE(108)
	this->_layers = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(113)
	this->_tilesheet = ::openfl::display::Tilesheet_obj::__new(bd);
	HX_STACK_LINE(115)
	this->_renderFlags = (int)28;
	HX_STACK_LINE(116)
	this->_flagAlpha = true;
	HX_STACK_LINE(117)
	this->_flagRGB = true;
	HX_STACK_LINE(119)
	this->width = bd->get_width();
	HX_STACK_LINE(120)
	this->height = bd->get_height();
	HX_STACK_LINE(122)
	this->_refCount = (int)0;
	HX_STACK_LINE(123)
	this->_layerIndex = (int)-1;
	HX_STACK_LINE(124)
	::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases->push(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

AtlasData_obj::~AtlasData_obj() { }

Dynamic AtlasData_obj::__CreateEmpty() { return  new AtlasData_obj; }
hx::ObjectPtr< AtlasData_obj > AtlasData_obj::__new(::flash::display::BitmapData bd)
{  hx::ObjectPtr< AtlasData_obj > result = new AtlasData_obj();
	result->__construct(bd);
	return result;}

Dynamic AtlasData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AtlasData_obj > result = new AtlasData_obj();
	result->__construct(inArgs[0]);
	return result;}

int AtlasData_obj::set_blend( int value){
	HX_STACK_PUSH("AtlasData::set_blend","com/haxepunk/graphics/atlas/AtlasData.hx",384);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(385)
	switch( (int)(value)){
		case (int)-1: {
			HX_STACK_LINE(388)
			hx::AndEq(this->_renderFlags,(int)-65537);
			HX_STACK_LINE(389)
			hx::AndEq(this->_renderFlags,(int)-1);
		}
		;break;
		case (int)65536: {
			HX_STACK_LINE(391)
			hx::OrEq(this->_renderFlags,(int)65536);
			HX_STACK_LINE(392)
			hx::AndEq(this->_renderFlags,(int)-1);
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(394)
			hx::AndEq(this->_renderFlags,(int)-65537);
			HX_STACK_LINE(395)
			hx::OrEq(this->_renderFlags,(int)0);
		}
		;break;
	}
	HX_STACK_LINE(397)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,set_blend,return )

int AtlasData_obj::get_blend( ){
	HX_STACK_PUSH("AtlasData::get_blend","com/haxepunk/graphics/atlas/AtlasData.hx",375);
	HX_STACK_THIS(this);
	HX_STACK_LINE(375)
	if (((((int(this->_renderFlags) & int((int)0))) != (int)0))){
		HX_STACK_LINE(377)
		return (int)0;
	}
	else{
		HX_STACK_LINE(378)
		if (((((int(this->_renderFlags) & int((int)65536))) != (int)0))){
			HX_STACK_LINE(379)
			return (int)65536;
		}
		else{
			HX_STACK_LINE(381)
			return (int)-1;
		}
	}
	HX_STACK_LINE(375)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,get_blend,return )

bool AtlasData_obj::set_rgb( bool value){
	HX_STACK_PUSH("AtlasData::set_rgb","com/haxepunk/graphics/atlas/AtlasData.hx",363);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(364)
	if ((value)){
		HX_STACK_LINE(364)
		hx::OrEq(this->_renderFlags,(int)4);
	}
	else{
		HX_STACK_LINE(365)
		hx::AndEq(this->_renderFlags,(int)-5);
	}
	HX_STACK_LINE(366)
	this->_flagRGB = value;
	HX_STACK_LINE(367)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,set_rgb,return )

bool AtlasData_obj::get_rgb( ){
	HX_STACK_PUSH("AtlasData::get_rgb","com/haxepunk/graphics/atlas/AtlasData.hx",361);
	HX_STACK_THIS(this);
	HX_STACK_LINE(361)
	return (((int(this->_renderFlags) & int((int)4))) != (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,get_rgb,return )

bool AtlasData_obj::set_alpha( bool value){
	HX_STACK_PUSH("AtlasData::set_alpha","com/haxepunk/graphics/atlas/AtlasData.hx",349);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(350)
	if ((value)){
		HX_STACK_LINE(350)
		hx::OrEq(this->_renderFlags,(int)8);
	}
	else{
		HX_STACK_LINE(351)
		hx::AndEq(this->_renderFlags,(int)-9);
	}
	HX_STACK_LINE(352)
	this->_flagAlpha = value;
	HX_STACK_LINE(353)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,set_alpha,return )

bool AtlasData_obj::get_alpha( ){
	HX_STACK_PUSH("AtlasData::get_alpha","com/haxepunk/graphics/atlas/AtlasData.hx",347);
	HX_STACK_THIS(this);
	HX_STACK_LINE(347)
	return (((int(this->_renderFlags) & int((int)8))) != (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,get_alpha,return )

Void AtlasData_obj::prepareTile( int tile,Float x,Float y,int layer,Float scaleX,Float scaleY,Float angle,Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_PUSH("AtlasData::prepareTile","com/haxepunk/graphics/atlas/AtlasData.hx",297);
		HX_STACK_THIS(this);
		HX_STACK_ARG(tile,"tile");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(layer,"layer");
		HX_STACK_ARG(scaleX,"scaleX");
		HX_STACK_ARG(scaleY,"scaleY");
		HX_STACK_ARG(angle,"angle");
		HX_STACK_ARG(red,"red");
		HX_STACK_ARG(green,"green");
		HX_STACK_ARG(blue,"blue");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(298)
		if (((this->_layerIndex != layer))){
			HX_STACK_LINE(298)
			if ((this->_layers->exists(layer))){
				HX_STACK_LINE(298)
				this->_layer = this->_layers->get(layer);
			}
			else{
				HX_STACK_LINE(298)
				this->_layer = ::com::haxepunk::graphics::atlas::Layer_obj::__new();
				HX_STACK_LINE(298)
				this->_layers->set(layer,this->_layer);
			}
			HX_STACK_LINE(298)
			this->_layerIndex = layer;
		}
		HX_STACK_LINE(299)
		Array< Float > d = this->_layer->data;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(300)
		this->_layer->dirty = true;
		HX_STACK_LINE(302)
		d[(this->_layer->index)++] = x;
		HX_STACK_LINE(303)
		d[(this->_layer->index)++] = y;
		HX_STACK_LINE(304)
		d[(this->_layer->index)++] = tile;
		HX_STACK_LINE(307)
		if (((angle == (int)0))){
			HX_STACK_LINE(310)
			d[(this->_layer->index)++] = scaleX;
			HX_STACK_LINE(311)
			d[(this->_layer->index)++] = (int)0;
			HX_STACK_LINE(312)
			d[(this->_layer->index)++] = (int)0;
			HX_STACK_LINE(313)
			d[(this->_layer->index)++] = scaleY;
		}
		else{
			HX_STACK_LINE(317)
			Float cos = ::Math_obj::cos((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(318)
			Float sin = ::Math_obj::sin((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(319)
			d[(this->_layer->index)++] = (cos * scaleX);
			HX_STACK_LINE(320)
			d[(this->_layer->index)++] = (-(sin) * scaleY);
			HX_STACK_LINE(321)
			d[(this->_layer->index)++] = (sin * scaleX);
			HX_STACK_LINE(322)
			d[(this->_layer->index)++] = (cos * scaleY);
		}
		HX_STACK_LINE(325)
		if ((this->_flagRGB)){
			HX_STACK_LINE(327)
			d[(this->_layer->index)++] = red;
			HX_STACK_LINE(328)
			d[(this->_layer->index)++] = green;
			HX_STACK_LINE(329)
			d[(this->_layer->index)++] = blue;
		}
		HX_STACK_LINE(331)
		if ((this->_flagAlpha)){
			HX_STACK_LINE(332)
			d[(this->_layer->index)++] = alpha;
		}
		HX_STACK_LINE(336)
		if (((this->_layer->index > ::com::haxepunk::graphics::atlas::Atlas_obj::drawCallThreshold))){
			HX_STACK_LINE(338)
			::com::haxepunk::graphics::atlas::Layer layer1 = this->_layer;		HX_STACK_VAR(layer1,"layer1");
			HX_STACK_LINE(338)
			{
				HX_STACK_LINE(338)
				if (((layer1->index < layer1->data->length))){
					HX_STACK_LINE(338)
					layer1->data->splice(layer1->index,(layer1->data->length - layer1->index));
				}
				HX_STACK_LINE(338)
				layer1->index = (int)0;
				HX_STACK_LINE(338)
				layer1->dirty = false;
			}
			HX_STACK_LINE(338)
			this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layer)->get_graphics(),layer1->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,this->_renderFlags);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(AtlasData_obj,prepareTile,(void))

Void AtlasData_obj::prepareTileMatrix( int tile,int layer,Float tx,Float ty,Float a,Float b,Float c,Float d,Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_PUSH("AtlasData::prepareTileMatrix","com/haxepunk/graphics/atlas/AtlasData.hx",247);
		HX_STACK_THIS(this);
		HX_STACK_ARG(tile,"tile");
		HX_STACK_ARG(layer,"layer");
		HX_STACK_ARG(tx,"tx");
		HX_STACK_ARG(ty,"ty");
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_ARG(c,"c");
		HX_STACK_ARG(d,"d");
		HX_STACK_ARG(red,"red");
		HX_STACK_ARG(green,"green");
		HX_STACK_ARG(blue,"blue");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(248)
		if (((this->_layerIndex != layer))){
			HX_STACK_LINE(248)
			if ((this->_layers->exists(layer))){
				HX_STACK_LINE(248)
				this->_layer = this->_layers->get(layer);
			}
			else{
				HX_STACK_LINE(248)
				this->_layer = ::com::haxepunk::graphics::atlas::Layer_obj::__new();
				HX_STACK_LINE(248)
				this->_layers->set(layer,this->_layer);
			}
			HX_STACK_LINE(248)
			this->_layerIndex = layer;
		}
		HX_STACK_LINE(249)
		Array< Float > data = this->_layer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(250)
		this->_layer->dirty = true;
		HX_STACK_LINE(252)
		data[(this->_layer->index)++] = tx;
		HX_STACK_LINE(253)
		data[(this->_layer->index)++] = ty;
		HX_STACK_LINE(254)
		data[(this->_layer->index)++] = tile;
		HX_STACK_LINE(257)
		data[(this->_layer->index)++] = a;
		HX_STACK_LINE(258)
		data[(this->_layer->index)++] = b;
		HX_STACK_LINE(259)
		data[(this->_layer->index)++] = c;
		HX_STACK_LINE(260)
		data[(this->_layer->index)++] = d;
		HX_STACK_LINE(263)
		if ((this->_flagRGB)){
			HX_STACK_LINE(265)
			data[(this->_layer->index)++] = red;
			HX_STACK_LINE(266)
			data[(this->_layer->index)++] = green;
			HX_STACK_LINE(267)
			data[(this->_layer->index)++] = blue;
		}
		HX_STACK_LINE(269)
		if ((this->_flagAlpha)){
			HX_STACK_LINE(270)
			data[(this->_layer->index)++] = alpha;
		}
		HX_STACK_LINE(274)
		if (((this->_layer->index > ::com::haxepunk::graphics::atlas::Atlas_obj::drawCallThreshold))){
			HX_STACK_LINE(276)
			::com::haxepunk::graphics::atlas::Layer layer1 = this->_layer;		HX_STACK_VAR(layer1,"layer1");
			HX_STACK_LINE(276)
			{
				HX_STACK_LINE(276)
				if (((layer1->index < layer1->data->length))){
					HX_STACK_LINE(276)
					layer1->data->splice(layer1->index,(layer1->data->length - layer1->index));
				}
				HX_STACK_LINE(276)
				layer1->index = (int)0;
				HX_STACK_LINE(276)
				layer1->dirty = false;
			}
			HX_STACK_LINE(276)
			this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layer)->get_graphics(),layer1->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,this->_renderFlags);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC12(AtlasData_obj,prepareTileMatrix,(void))

Void AtlasData_obj::setLayer( int layer){
{
		HX_STACK_PUSH("AtlasData::setLayer","com/haxepunk/graphics/atlas/AtlasData.hx",216);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layer,"layer");
		HX_STACK_LINE(217)
		if ((this->_layers->exists(layer))){
			HX_STACK_LINE(218)
			this->_layer = this->_layers->get(layer);
		}
		else{
			HX_STACK_LINE(223)
			this->_layer = ::com::haxepunk::graphics::atlas::Layer_obj::__new();
			HX_STACK_LINE(224)
			this->_layers->set(layer,this->_layer);
		}
		HX_STACK_LINE(226)
		this->_layerIndex = layer;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,setLayer,(void))

Void AtlasData_obj::renderLayer( ::com::haxepunk::graphics::atlas::Layer layer,int layerIndex){
{
		HX_STACK_PUSH("AtlasData::renderLayer","com/haxepunk/graphics/atlas/AtlasData.hx",210);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layer,"layer");
		HX_STACK_ARG(layerIndex,"layerIndex");
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(211)
			if (((layer->index < layer->data->length))){
				HX_STACK_LINE(211)
				layer->data->splice(layer->index,(layer->data->length - layer->index));
			}
			HX_STACK_LINE(211)
			layer->index = (int)0;
			HX_STACK_LINE(211)
			layer->dirty = false;
		}
		HX_STACK_LINE(212)
		this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layerIndex)->get_graphics(),layer->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,this->_renderFlags);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AtlasData_obj,renderLayer,(void))

::com::haxepunk::graphics::atlas::AtlasRegion AtlasData_obj::createRegion( ::flash::geom::Rectangle rect,::flash::geom::Point center){
	HX_STACK_PUSH("AtlasData::createRegion","com/haxepunk/graphics/atlas/AtlasData.hx",201);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(center,"center");
	HX_STACK_LINE(202)
	::flash::geom::Rectangle r = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(203)
	::flash::geom::Point p = (  (((center != null()))) ? ::flash::geom::Point(::flash::geom::Point_obj::__new(center->x,center->y)) : ::flash::geom::Point(null()) );		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(204)
	r->copyFrom(rect);
	HX_STACK_LINE(205)
	int tileIndex = this->_tilesheet->addTileRect(r,p);		HX_STACK_VAR(tileIndex,"tileIndex");
	HX_STACK_LINE(206)
	return ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(hx::ObjectPtr<OBJ_>(this),tileIndex,rect);
}


HX_DEFINE_DYNAMIC_FUNC2(AtlasData_obj,createRegion,return )

Void AtlasData_obj::destroy( ){
{
		HX_STACK_PUSH("AtlasData::destroy","com/haxepunk/graphics/atlas/AtlasData.hx",172);
		HX_STACK_THIS(this);
		HX_STACK_LINE(173)
		hx::SubEq(this->_refCount,(int)1);
		HX_STACK_LINE(174)
		if (((this->_refCount <= (int)0))){
			HX_STACK_LINE(176)
			::com::haxepunk::HXP_obj::removeBitmap(this->_name);
			HX_STACK_LINE(177)
			::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->remove(this->_name);
			HX_STACK_LINE(178)
			::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,destroy,(void))

Void AtlasData_obj::renderData( ){
{
		HX_STACK_PUSH("AtlasData::renderData","com/haxepunk/graphics/atlas/AtlasData.hx",154);
		HX_STACK_THIS(this);
		HX_STACK_LINE(155)
		::com::haxepunk::graphics::atlas::Layer l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(157)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_layers->keys());  __it->hasNext(); ){
			int layer = __it->next();
			{
				HX_STACK_LINE(159)
				l = this->_layers->get(layer);
				HX_STACK_LINE(161)
				if ((l->dirty)){
					HX_STACK_LINE(163)
					{
						HX_STACK_LINE(163)
						if (((l->index < l->data->length))){
							HX_STACK_LINE(163)
							l->data->splice(l->index,(l->data->length - l->index));
						}
						HX_STACK_LINE(163)
						l->index = (int)0;
						HX_STACK_LINE(163)
						l->dirty = false;
					}
					HX_STACK_LINE(163)
					this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layer)->get_graphics(),l->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,this->_renderFlags);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,renderData,(void))

int AtlasData_obj::BLEND_NONE;

int AtlasData_obj::BLEND_ADD;

int AtlasData_obj::BLEND_NORMAL;

::com::haxepunk::graphics::atlas::AtlasData AtlasData_obj::create( Dynamic source){
	HX_STACK_PUSH("AtlasData::create","com/haxepunk/graphics/atlas/AtlasData.hx",58);
	HX_STACK_ARG(source,"source");
	HX_STACK_LINE(59)
	::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(60)
	if ((::Std_obj::is(source,hx::ClassOf< ::flash::display::BitmapData >()))){
		HX_STACK_LINE(63)
		::com::haxepunk::HXP_obj::log(HX_CSTRING("Atlases using BitmapData will not be managed."));
		HX_STACK_LINE(65)
		data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(source);
	}
	else{
		struct _Function_2_1{
			inline static ::com::haxepunk::graphics::atlas::AtlasData Block( Dynamic &source){
				HX_STACK_PUSH("*::closure","com/haxepunk/graphics/atlas/AtlasData.hx",69);
				{
					HX_STACK_LINE(69)
					::String name = source;		HX_STACK_VAR(name,"name");
					HX_STACK_LINE(69)
					::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(69)
					if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(name))){
						HX_STACK_LINE(69)
						data1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(name);
					}
					else{
						HX_STACK_LINE(69)
						::flash::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(name);		HX_STACK_VAR(bitmap,"bitmap");
						HX_STACK_LINE(69)
						if (((bitmap != null()))){
							HX_STACK_LINE(69)
							data1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap);
							HX_STACK_LINE(69)
							data1->_name = name;
							HX_STACK_LINE(69)
							::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->set(name,data1);
						}
					}
					HX_STACK_LINE(69)
					return data1;
				}
				return null();
			}
		};
		HX_STACK_LINE(68)
		data = _Function_2_1::Block(source);
	}
	HX_STACK_LINE(72)
	if (((data != null()))){
		HX_STACK_LINE(73)
		hx::AddEq(data->_refCount,(int)1);
	}
	HX_STACK_LINE(77)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,create,return )

::com::haxepunk::graphics::atlas::AtlasData AtlasData_obj::getAtlasDataByName( ::String name,hx::Null< bool >  __o_create){
bool create = __o_create.Default(false);
	HX_STACK_PUSH("AtlasData::getAtlasDataByName","com/haxepunk/graphics/atlas/AtlasData.hx",86);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(create,"create");
{
		HX_STACK_LINE(87)
		::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(88)
		if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(name))){
			HX_STACK_LINE(89)
			data = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(name);
		}
		else{
			HX_STACK_LINE(92)
			if ((create)){
				HX_STACK_LINE(94)
				::flash::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(name);		HX_STACK_VAR(bitmap,"bitmap");
				HX_STACK_LINE(95)
				if (((bitmap != null()))){
					HX_STACK_LINE(97)
					data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap);
					HX_STACK_LINE(98)
					data->_name = name;
					HX_STACK_LINE(99)
					::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->set(name,data);
				}
			}
		}
		HX_STACK_LINE(102)
		return data;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AtlasData_obj,getAtlasDataByName,return )

Void AtlasData_obj::setScene( ::com::haxepunk::Scene scene){
{
		HX_STACK_PUSH("AtlasData::setScene","com/haxepunk/graphics/atlas/AtlasData.hx",132);
		HX_STACK_ARG(scene,"scene");
		HX_STACK_LINE(132)
		::com::haxepunk::graphics::atlas::AtlasData_obj::_scene = scene;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,setScene,(void))

Void AtlasData_obj::render( ){
{
		HX_STACK_PUSH("AtlasData::render","com/haxepunk/graphics/atlas/AtlasData.hx",140);
		HX_STACK_LINE(140)
		if (((::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases->length > (int)0))){
			HX_STACK_LINE(143)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(143)
			while(((_g < _g1->length))){
				HX_STACK_LINE(143)
				::com::haxepunk::graphics::atlas::AtlasData atlas = _g1->__get(_g).StaticCast< ::com::haxepunk::graphics::atlas::AtlasData >();		HX_STACK_VAR(atlas,"atlas");
				HX_STACK_LINE(143)
				++(_g);
				HX_STACK_LINE(145)
				{
					HX_STACK_LINE(145)
					::com::haxepunk::graphics::atlas::Layer l;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(145)
					for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(atlas->_layers->keys());  __it->hasNext(); ){
						int layer = __it->next();
						{
							HX_STACK_LINE(145)
							l = atlas->_layers->get(layer);
							HX_STACK_LINE(145)
							if ((l->dirty)){
								HX_STACK_LINE(145)
								{
									HX_STACK_LINE(145)
									if (((l->index < l->data->length))){
										HX_STACK_LINE(145)
										l->data->splice(l->index,(l->data->length - l->index));
									}
									HX_STACK_LINE(145)
									l->index = (int)0;
									HX_STACK_LINE(145)
									l->dirty = false;
								}
								HX_STACK_LINE(145)
								atlas->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layer)->get_graphics(),l->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,atlas->_renderFlags);
							}
						}
;
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,render,(void))

Void AtlasData_obj::destroyAll( ){
{
		HX_STACK_PUSH("AtlasData::destroyAll","com/haxepunk/graphics/atlas/AtlasData.hx",186);
		HX_STACK_LINE(187)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(187)
		while(((_g < _g1->length))){
			HX_STACK_LINE(187)
			::com::haxepunk::graphics::atlas::AtlasData atlas = _g1->__get(_g).StaticCast< ::com::haxepunk::graphics::atlas::AtlasData >();		HX_STACK_VAR(atlas,"atlas");
			HX_STACK_LINE(187)
			++(_g);
			HX_STACK_LINE(189)
			atlas->destroy();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,destroyAll,(void))

::com::haxepunk::Scene AtlasData_obj::_scene;

::haxe::ds::StringMap AtlasData_obj::_dataPool;

Array< ::Dynamic > AtlasData_obj::_atlases;


AtlasData_obj::AtlasData_obj()
{
}

void AtlasData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AtlasData);
	HX_MARK_MEMBER_NAME(_layers,"_layers");
	HX_MARK_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_MARK_MEMBER_NAME(_flagAlpha,"_flagAlpha");
	HX_MARK_MEMBER_NAME(_flagRGB,"_flagRGB");
	HX_MARK_MEMBER_NAME(_renderFlags,"_renderFlags");
	HX_MARK_MEMBER_NAME(_layer,"_layer");
	HX_MARK_MEMBER_NAME(_layerIndex,"_layerIndex");
	HX_MARK_MEMBER_NAME(_refCount,"_refCount");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void AtlasData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_layers,"_layers");
	HX_VISIT_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_VISIT_MEMBER_NAME(_flagAlpha,"_flagAlpha");
	HX_VISIT_MEMBER_NAME(_flagRGB,"_flagRGB");
	HX_VISIT_MEMBER_NAME(_renderFlags,"_renderFlags");
	HX_VISIT_MEMBER_NAME(_layer,"_layer");
	HX_VISIT_MEMBER_NAME(_layerIndex,"_layerIndex");
	HX_VISIT_MEMBER_NAME(_refCount,"_refCount");
	HX_VISIT_MEMBER_NAME(_name,"_name");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
}

Dynamic AtlasData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rgb") ) { return get_rgb(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { return _name; }
		if (HX_FIELD_EQ(inName,"blend") ) { return get_blend(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return get_alpha(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"_layer") ) { return _layer; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_layers") ) { return _layers; }
		if (HX_FIELD_EQ(inName,"set_rgb") ) { return set_rgb_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rgb") ) { return get_rgb_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setScene") ) { return setScene_dyn(); }
		if (HX_FIELD_EQ(inName,"_atlases") ) { return _atlases; }
		if (HX_FIELD_EQ(inName,"_flagRGB") ) { return _flagRGB; }
		if (HX_FIELD_EQ(inName,"setLayer") ) { return setLayer_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dataPool") ) { return _dataPool; }
		if (HX_FIELD_EQ(inName,"_refCount") ) { return _refCount; }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blend") ) { return get_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"destroyAll") ) { return destroyAll_dyn(); }
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { return _tilesheet; }
		if (HX_FIELD_EQ(inName,"_flagAlpha") ) { return _flagAlpha; }
		if (HX_FIELD_EQ(inName,"renderData") ) { return renderData_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layerIndex") ) { return _layerIndex; }
		if (HX_FIELD_EQ(inName,"prepareTile") ) { return prepareTile_dyn(); }
		if (HX_FIELD_EQ(inName,"renderLayer") ) { return renderLayer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_renderFlags") ) { return _renderFlags; }
		if (HX_FIELD_EQ(inName,"createRegion") ) { return createRegion_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"prepareTileMatrix") ) { return prepareTileMatrix_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getAtlasDataByName") ) { return getAtlasDataByName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AtlasData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rgb") ) { return set_rgb(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { return set_blend(inValue); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::haxepunk::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layer") ) { _layer=inValue.Cast< ::com::haxepunk::graphics::atlas::Layer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_layers") ) { _layers=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_atlases") ) { _atlases=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flagRGB") ) { _flagRGB=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dataPool") ) { _dataPool=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_refCount") ) { _refCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { _tilesheet=inValue.Cast< ::openfl::display::Tilesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flagAlpha") ) { _flagAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layerIndex") ) { _layerIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_renderFlags") ) { _renderFlags=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AtlasData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_layers"));
	outFields->push(HX_CSTRING("_tilesheet"));
	outFields->push(HX_CSTRING("_flagAlpha"));
	outFields->push(HX_CSTRING("_flagRGB"));
	outFields->push(HX_CSTRING("_renderFlags"));
	outFields->push(HX_CSTRING("_layer"));
	outFields->push(HX_CSTRING("_layerIndex"));
	outFields->push(HX_CSTRING("_refCount"));
	outFields->push(HX_CSTRING("_name"));
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("rgb"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BLEND_NONE"),
	HX_CSTRING("BLEND_ADD"),
	HX_CSTRING("BLEND_NORMAL"),
	HX_CSTRING("create"),
	HX_CSTRING("getAtlasDataByName"),
	HX_CSTRING("setScene"),
	HX_CSTRING("render"),
	HX_CSTRING("destroyAll"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_dataPool"),
	HX_CSTRING("_atlases"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_layers"),
	HX_CSTRING("_tilesheet"),
	HX_CSTRING("_flagAlpha"),
	HX_CSTRING("_flagRGB"),
	HX_CSTRING("_renderFlags"),
	HX_CSTRING("_layer"),
	HX_CSTRING("_layerIndex"),
	HX_CSTRING("_refCount"),
	HX_CSTRING("_name"),
	HX_CSTRING("set_blend"),
	HX_CSTRING("get_blend"),
	HX_CSTRING("set_rgb"),
	HX_CSTRING("get_rgb"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("prepareTile"),
	HX_CSTRING("prepareTileMatrix"),
	HX_CSTRING("setLayer"),
	HX_CSTRING("renderLayer"),
	HX_CSTRING("createRegion"),
	HX_CSTRING("destroy"),
	HX_CSTRING("renderData"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AtlasData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AtlasData_obj::BLEND_NONE,"BLEND_NONE");
	HX_MARK_MEMBER_NAME(AtlasData_obj::BLEND_ADD,"BLEND_ADD");
	HX_MARK_MEMBER_NAME(AtlasData_obj::BLEND_NORMAL,"BLEND_NORMAL");
	HX_MARK_MEMBER_NAME(AtlasData_obj::_scene,"_scene");
	HX_MARK_MEMBER_NAME(AtlasData_obj::_dataPool,"_dataPool");
	HX_MARK_MEMBER_NAME(AtlasData_obj::_atlases,"_atlases");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AtlasData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::BLEND_NONE,"BLEND_NONE");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::BLEND_ADD,"BLEND_ADD");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::BLEND_NORMAL,"BLEND_NORMAL");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::_scene,"_scene");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::_dataPool,"_dataPool");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::_atlases,"_atlases");
};

Class AtlasData_obj::__mClass;

void AtlasData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.atlas.AtlasData"), hx::TCanCast< AtlasData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AtlasData_obj::__boot()
{
	BLEND_NONE= (int)-1;
	BLEND_ADD= (int)65536;
	BLEND_NORMAL= (int)0;
	_dataPool= ::haxe::ds::StringMap_obj::__new();
	_atlases= Array_obj< ::Dynamic >::__new();
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas
