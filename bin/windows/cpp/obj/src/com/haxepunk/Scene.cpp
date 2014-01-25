#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
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
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Layer
#include <com/haxepunk/graphics/atlas/Layer.h>
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

Void Scene_obj::__construct()
{
HX_STACK_PUSH("Scene::new","com/haxepunk/Scene.hx",30);
{
	HX_STACK_LINE(31)
	super::__construct();
	HX_STACK_LINE(32)
	this->visible = true;
	HX_STACK_LINE(33)
	this->camera = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(34)
	this->_count = (int)0;
	HX_STACK_LINE(36)
	this->_layerList = Array_obj< int >::__new();
	HX_STACK_LINE(37)
	this->_layerCount = Array_obj< int >::__new();
	HX_STACK_LINE(38)
	this->_sprite = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(40)
	this->_add = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(41)
	this->_remove = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(42)
	this->_recycle = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(45)
	this->_layerSprites = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(46)
	this->_renderFirst = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(47)
	this->_renderLast = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(48)
	this->_typeFirst = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(50)
	this->_classCount = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(51)
	this->_typeCount = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(52)
	this->_recycled = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(53)
	this->_entityNames = ::haxe::ds::StringMap_obj::__new();
}
;
	return null();
}

Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new()
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct();
	return result;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct();
	return result;}

Void Scene_obj::unregisterName( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Scene::unregisterName","com/haxepunk/Scene.hx",1304);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(1305)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1306)
		this->_entityNames->remove(fe->__Field(HX_CSTRING("_name"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,unregisterName,(void))

Void Scene_obj::registerName( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Scene::registerName","com/haxepunk/Scene.hx",1297);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(1298)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1299)
		this->_entityNames->set(fe->__Field(HX_CSTRING("_name"),true),e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,registerName,(void))

Void Scene_obj::removeType( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Scene::removeType","com/haxepunk/Scene.hx",1285);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(1286)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1288)
		if (((this->_typeFirst->get(fe->__Field(HX_CSTRING("_type"),true)) == e))){
			HX_STACK_LINE(1288)
			this->_typeFirst->set(fe->__Field(HX_CSTRING("_type"),true),fe->__Field(HX_CSTRING("_typeNext"),true));
		}
		HX_STACK_LINE(1289)
		if (((fe->__Field(HX_CSTRING("_typeNext"),true) != null()))){
			HX_STACK_LINE(1289)
			fe->__Field(HX_CSTRING("_typeNext"),true)->__FieldRef(HX_CSTRING("_typePrev")) = fe->__Field(HX_CSTRING("_typePrev"),true);
		}
		HX_STACK_LINE(1290)
		if (((fe->__Field(HX_CSTRING("_typePrev"),true) != null()))){
			HX_STACK_LINE(1290)
			fe->__Field(HX_CSTRING("_typePrev"),true)->__FieldRef(HX_CSTRING("_typeNext")) = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
		HX_STACK_LINE(1291)
		fe->__FieldRef(HX_CSTRING("_typeNext")) = fe->__FieldRef(HX_CSTRING("_typePrev")) = null();
		HX_STACK_LINE(1292)
		this->_typeCount->set(fe->__Field(HX_CSTRING("_type"),true),(this->_typeCount->get(fe->__Field(HX_CSTRING("_type"),true)) - (int)1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeType,(void))

Void Scene_obj::addType( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Scene::addType","com/haxepunk/Scene.hx",1265);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(1266)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1268)
		if (((this->_typeFirst->get(fe->__Field(HX_CSTRING("_type"),true)) != null()))){
			HX_STACK_LINE(1270)
			this->_typeFirst->get(fe->__Field(HX_CSTRING("_type"),true))->__FieldRef(HX_CSTRING("_typePrev")) = e;
			HX_STACK_LINE(1271)
			fe->__FieldRef(HX_CSTRING("_typeNext")) = this->_typeFirst->get(fe->__Field(HX_CSTRING("_type"),true));
			HX_STACK_LINE(1272)
			this->_typeCount->set(fe->__Field(HX_CSTRING("_type"),true),(this->_typeCount->get(fe->__Field(HX_CSTRING("_type"),true)) + (int)1));
		}
		else{
			HX_STACK_LINE(1276)
			fe->__FieldRef(HX_CSTRING("_typeNext")) = null();
			HX_STACK_LINE(1277)
			this->_typeCount->set(fe->__Field(HX_CSTRING("_type"),true),(int)1);
		}
		HX_STACK_LINE(1279)
		fe->__FieldRef(HX_CSTRING("_typePrev")) = null();
		HX_STACK_LINE(1280)
		this->_typeFirst->set(fe->__Field(HX_CSTRING("_type"),true),e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addType,(void))

Void Scene_obj::removeRender( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Scene::removeRender","com/haxepunk/Scene.hx",1238);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(1239)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1240)
		if (((fe->__Field(HX_CSTRING("_renderNext"),true) != null()))){
			HX_STACK_LINE(1240)
			fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
		}
		else{
			HX_STACK_LINE(1241)
			this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderPrev"),true));
		}
		HX_STACK_LINE(1242)
		if (((fe->__Field(HX_CSTRING("_renderPrev"),true) != null()))){
			HX_STACK_LINE(1242)
			fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true);
		}
		else{
			HX_STACK_LINE(1246)
			this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderNext"),true));
			HX_STACK_LINE(1247)
			if (((fe->__Field(HX_CSTRING("_renderNext"),true) == null()))){
				HX_STACK_LINE(1250)
				if (((this->_layerList->length > (int)1))){
					HX_STACK_LINE(1252)
					this->_layerList[::Lambda_obj::indexOf(this->_layerList,fe->__Field(HX_CSTRING("_layer"),true))] = this->_layerList->__get((this->_layerList->length - (int)1));
					HX_STACK_LINE(1253)
					this->_layerSort = true;
				}
				HX_STACK_LINE(1255)
				this->_layerList->pop();
			}
		}
		HX_STACK_LINE(1258)
		if (((e->_graphic != null()))){
			HX_STACK_LINE(1258)
			e->_graphic->destroy();
		}
		HX_STACK_LINE(1259)
		(this->_layerCount[fe->__Field(HX_CSTRING("_layer"),true)])--;
		HX_STACK_LINE(1260)
		fe->__FieldRef(HX_CSTRING("_renderNext")) = fe->__FieldRef(HX_CSTRING("_renderPrev")) = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeRender,(void))

Void Scene_obj::addRender( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Scene::addRender","com/haxepunk/Scene.hx",1213);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(1214)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1215)
		Dynamic f = this->_renderFirst->get(fe->__Field(HX_CSTRING("_layer"),true));		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(1216)
		if (((f != null()))){
			HX_STACK_LINE(1219)
			fe->__FieldRef(HX_CSTRING("_renderNext")) = f;
			HX_STACK_LINE(1220)
			f->__FieldRef(HX_CSTRING("_renderPrev")) = e;
			HX_STACK_LINE(1221)
			(this->_layerCount[fe->__Field(HX_CSTRING("_layer"),true)])++;
		}
		else{
			HX_STACK_LINE(1226)
			this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),e);
			HX_STACK_LINE(1227)
			this->_layerList[this->_layerList->length] = fe->__Field(HX_CSTRING("_layer"),true);
			HX_STACK_LINE(1228)
			this->_layerSort = true;
			HX_STACK_LINE(1229)
			fe->__FieldRef(HX_CSTRING("_renderNext")) = null();
			HX_STACK_LINE(1230)
			this->_layerCount[fe->__Field(HX_CSTRING("_layer"),true)] = (int)1;
		}
		HX_STACK_LINE(1232)
		this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),e);
		HX_STACK_LINE(1233)
		fe->__FieldRef(HX_CSTRING("_renderPrev")) = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addRender,(void))

Void Scene_obj::removeUpdate( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Scene::removeUpdate","com/haxepunk/Scene.hx",1199);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(1200)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1203)
		if (((this->_updateFirst == e))){
			HX_STACK_LINE(1203)
			this->_updateFirst = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
		HX_STACK_LINE(1204)
		if (((fe->__Field(HX_CSTRING("_updateNext"),true) != null()))){
			HX_STACK_LINE(1204)
			fe->__Field(HX_CSTRING("_updateNext"),true)->__FieldRef(HX_CSTRING("_updatePrev")) = fe->__Field(HX_CSTRING("_updatePrev"),true);
		}
		HX_STACK_LINE(1205)
		if (((fe->__Field(HX_CSTRING("_updatePrev"),true) != null()))){
			HX_STACK_LINE(1205)
			fe->__Field(HX_CSTRING("_updatePrev"),true)->__FieldRef(HX_CSTRING("_updateNext")) = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
		HX_STACK_LINE(1206)
		fe->__FieldRef(HX_CSTRING("_updateNext")) = fe->__FieldRef(HX_CSTRING("_updatePrev")) = null();
		HX_STACK_LINE(1207)
		(this->_count)--;
		HX_STACK_LINE(1208)
		this->_classCount->set(fe->__Field(HX_CSTRING("_class"),true),(this->_classCount->get(fe->__Field(HX_CSTRING("_class"),true)) - (int)1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeUpdate,(void))

Void Scene_obj::addUpdate( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Scene::addUpdate","com/haxepunk/Scene.hx",1180);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(1181)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1184)
		if (((this->_updateFirst != null()))){
			HX_STACK_LINE(1186)
			this->_updateFirst->__FieldRef(HX_CSTRING("_updatePrev")) = e;
			HX_STACK_LINE(1187)
			fe->__FieldRef(HX_CSTRING("_updateNext")) = this->_updateFirst;
		}
		else{
			HX_STACK_LINE(1189)
			fe->__FieldRef(HX_CSTRING("_updateNext")) = null();
		}
		HX_STACK_LINE(1190)
		fe->__FieldRef(HX_CSTRING("_updatePrev")) = null();
		HX_STACK_LINE(1191)
		this->_updateFirst = e;
		HX_STACK_LINE(1192)
		(this->_count)++;
		HX_STACK_LINE(1193)
		if (((this->_classCount->get(fe->__Field(HX_CSTRING("_class"),true)) != (int)0))){
			HX_STACK_LINE(1193)
			this->_classCount->set(fe->__Field(HX_CSTRING("_class"),true),(int)0);
		}
		HX_STACK_LINE(1194)
		this->_classCount->set(fe->__Field(HX_CSTRING("_class"),true),(this->_classCount->get(fe->__Field(HX_CSTRING("_class"),true)) + (int)1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addUpdate,(void))

Void Scene_obj::clearSprites( ){
{
		HX_STACK_PUSH("Scene::clearSprites","com/haxepunk/Scene.hx",1171);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1171)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_layerSprites->keys());  __it->hasNext(); ){
			int sprite = __it->next();
			this->_layerSprites->get(sprite)->__Field(HX_CSTRING("get_graphics"),true)()->__Field(HX_CSTRING("clear"),true)();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,clearSprites,(void))

int Scene_obj::layerSort( int a,int b){
	HX_STACK_PUSH("Scene::layerSort","com/haxepunk/Scene.hx",1161);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(1162)
	if (((a > b))){
		HX_STACK_LINE(1163)
		return (int)1;
	}
	else{
		HX_STACK_LINE(1164)
		if (((a < b))){
			HX_STACK_LINE(1165)
			return (int)-1;
		}
	}
	HX_STACK_LINE(1167)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,layerSort,return )

Void Scene_obj::updateLists( hx::Null< bool >  __o_shouldAdd){
bool shouldAdd = __o_shouldAdd.Default(true);
	HX_STACK_PUSH("Scene::updateLists","com/haxepunk/Scene.hx",1098);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shouldAdd,"shouldAdd");
{
		HX_STACK_LINE(1099)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(1100)
		Dynamic fe;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1103)
		if (((this->_remove->length > (int)0))){
			HX_STACK_LINE(1105)
			{
				HX_STACK_LINE(1105)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = this->_remove;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1105)
				while(((_g < _g1->length))){
					HX_STACK_LINE(1105)
					::com::haxepunk::Entity e1 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(1105)
					++(_g);
					HX_STACK_LINE(1107)
					fe = e1;
					HX_STACK_LINE(1108)
					if (((fe->__Field(HX_CSTRING("_scene"),true) == null()))){
						HX_STACK_LINE(1110)
						int idx = ::Lambda_obj::indexOf(this->_add,e1);		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(1111)
						if (((idx >= (int)0))){
							HX_STACK_LINE(1111)
							this->_add->splice(idx,(int)1);
						}
						HX_STACK_LINE(1112)
						continue;
					}
					HX_STACK_LINE(1114)
					if (((fe->__Field(HX_CSTRING("_scene"),true) != hx::ObjectPtr<OBJ_>(this)))){
						HX_STACK_LINE(1115)
						continue;
					}
					HX_STACK_LINE(1116)
					e1->removed();
					HX_STACK_LINE(1117)
					fe->__FieldRef(HX_CSTRING("_scene")) = null();
					HX_STACK_LINE(1118)
					this->removeUpdate(e1);
					HX_STACK_LINE(1119)
					this->removeRender(e1);
					HX_STACK_LINE(1120)
					if (((fe->__Field(HX_CSTRING("_type"),true) != HX_CSTRING("")))){
						HX_STACK_LINE(1120)
						this->removeType(e1);
					}
					HX_STACK_LINE(1121)
					if (((fe->__Field(HX_CSTRING("_name"),true) != HX_CSTRING("")))){
						HX_STACK_LINE(1121)
						this->unregisterName(e1);
					}
					HX_STACK_LINE(1122)
					if (((bool(e1->autoClear) && bool(e1->get_hasTween())))){
						HX_STACK_LINE(1122)
						e1->clearTweens();
					}
				}
			}
			HX_STACK_LINE(1124)
			{
				HX_STACK_LINE(1124)
				Dynamic array = this->_remove;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(1124)
				array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
			}
		}
		HX_STACK_LINE(1128)
		if (((bool(shouldAdd) && bool((this->_add->length > (int)0))))){
			HX_STACK_LINE(1130)
			{
				HX_STACK_LINE(1130)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = this->_add;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1130)
				while(((_g < _g1->length))){
					HX_STACK_LINE(1130)
					::com::haxepunk::Entity e1 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(1130)
					++(_g);
					HX_STACK_LINE(1132)
					fe = e1;
					HX_STACK_LINE(1133)
					if (((fe->__Field(HX_CSTRING("_scene"),true) != null()))){
						HX_STACK_LINE(1133)
						continue;
					}
					HX_STACK_LINE(1134)
					fe->__FieldRef(HX_CSTRING("_scene")) = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(1135)
					this->addUpdate(e1);
					HX_STACK_LINE(1136)
					this->addRender(e1);
					HX_STACK_LINE(1137)
					if (((fe->__Field(HX_CSTRING("_type"),true) != HX_CSTRING("")))){
						HX_STACK_LINE(1137)
						this->addType(e1);
					}
					HX_STACK_LINE(1138)
					if (((fe->__Field(HX_CSTRING("_name"),true) != HX_CSTRING("")))){
						HX_STACK_LINE(1138)
						this->registerName(e1);
					}
					HX_STACK_LINE(1139)
					e1->added();
				}
			}
			HX_STACK_LINE(1141)
			{
				HX_STACK_LINE(1141)
				Dynamic array = this->_add;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(1141)
				array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
			}
		}
		HX_STACK_LINE(1145)
		if (((this->_recycle->length > (int)0))){
			HX_STACK_LINE(1147)
			{
				HX_STACK_LINE(1147)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = this->_recycle;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1147)
				while(((_g < _g1->length))){
					HX_STACK_LINE(1147)
					::com::haxepunk::Entity e1 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(1147)
					++(_g);
					HX_STACK_LINE(1149)
					fe = e1;
					HX_STACK_LINE(1150)
					if (((bool((fe->__Field(HX_CSTRING("_scene"),true) != null())) || bool((fe->__Field(HX_CSTRING("_recycleNext"),true) != null()))))){
						HX_STACK_LINE(1151)
						continue;
					}
					HX_STACK_LINE(1153)
					fe->__FieldRef(HX_CSTRING("_recycleNext")) = this->_recycled->get(fe->__Field(HX_CSTRING("_class"),true));
					HX_STACK_LINE(1154)
					this->_recycled->set(fe->__Field(HX_CSTRING("_class"),true),e1);
				}
			}
			HX_STACK_LINE(1156)
			{
				HX_STACK_LINE(1156)
				Dynamic array = this->_recycle;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(1156)
				array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,updateLists,(void))

::com::haxepunk::Entity Scene_obj::getInstance( ::String name){
	HX_STACK_PUSH("Scene::getInstance","com/haxepunk/Scene.hx",1089);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(1089)
	return this->_entityNames->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getInstance,return )

Void Scene_obj::getAll( Dynamic into){
{
		HX_STACK_PUSH("Scene::getAll","com/haxepunk/Scene.hx",1071);
		HX_STACK_THIS(this);
		HX_STACK_ARG(into,"into");
		HX_STACK_LINE(1072)
		Dynamic e;		HX_STACK_VAR(e,"e");
		Dynamic fe = this->_updateFirst;		HX_STACK_VAR(fe,"fe");
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(1075)
		while(((fe != null()))){
			HX_STACK_LINE(1077)
			e = fe;
			HX_STACK_LINE(1078)
			hx::IndexRef((into).mPtr,(n)++) = e;
			HX_STACK_LINE(1079)
			fe = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getAll,(void))

Void Scene_obj::getLayer( int layer,Dynamic into){
{
		HX_STACK_PUSH("Scene::getLayer","com/haxepunk/Scene.hx",1053);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layer,"layer");
		HX_STACK_ARG(into,"into");
		HX_STACK_LINE(1054)
		Dynamic e;		HX_STACK_VAR(e,"e");
		Dynamic fe = this->_renderLast->get(layer);		HX_STACK_VAR(fe,"fe");
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(1057)
		while(((fe != null()))){
			HX_STACK_LINE(1059)
			e = fe;
			HX_STACK_LINE(1060)
			hx::IndexRef((into).mPtr,(n)++) = e;
			HX_STACK_LINE(1061)
			fe = fe->__Field(HX_CSTRING("_updatePrev"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getLayer,(void))

Void Scene_obj::getClass( ::Class c,Dynamic into){
{
		HX_STACK_PUSH("Scene::getClass","com/haxepunk/Scene.hx",1035);
		HX_STACK_THIS(this);
		HX_STACK_ARG(c,"c");
		HX_STACK_ARG(into,"into");
		HX_STACK_LINE(1036)
		Dynamic fe = this->_updateFirst;		HX_STACK_VAR(fe,"fe");
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(1038)
		while(((fe != null()))){
			HX_STACK_LINE(1040)
			if ((::Std_obj::is(fe,c))){
				HX_STACK_LINE(1041)
				hx::IndexRef((into).mPtr,(n)++) = fe;
			}
			HX_STACK_LINE(1042)
			fe = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getClass,(void))

Void Scene_obj::getType( ::String type,Dynamic into){
{
		HX_STACK_PUSH("Scene::getType","com/haxepunk/Scene.hx",1018);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(into,"into");
		HX_STACK_LINE(1019)
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(1021)
		while(((fe != null()))){
			HX_STACK_LINE(1023)
			hx::IndexRef((into).mPtr,(n)++) = fe;
			HX_STACK_LINE(1024)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getType,(void))

int Scene_obj::get_uniqueTypes( ){
	HX_STACK_PUSH("Scene::get_uniqueTypes","com/haxepunk/Scene.hx",1005);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1006)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::haxepunk::Scene_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/Scene.hx",1007);
			{
				HX_STACK_LINE(1007)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_typeCount);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","com/haxepunk/Scene.hx",1007);
					{
						HX_STACK_LINE(1007)
						return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(1007)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(1007)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		int type = __it->next();
		(i)++;
	}
	HX_STACK_LINE(1008)
	return i;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_uniqueTypes,return )

int Scene_obj::get_layerNearest( ){
	HX_STACK_PUSH("Scene::get_layerNearest","com/haxepunk/Scene.hx",995);
	HX_STACK_THIS(this);
	HX_STACK_LINE(996)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(996)
		return (int)0;
	}
	HX_STACK_LINE(997)
	return this->_layerList->__get((int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_layerNearest,return )

int Scene_obj::get_layerFarthest( ){
	HX_STACK_PUSH("Scene::get_layerFarthest","com/haxepunk/Scene.hx",985);
	HX_STACK_THIS(this);
	HX_STACK_LINE(986)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(986)
		return (int)0;
	}
	HX_STACK_LINE(987)
	return this->_layerList->__get((this->_layerList->length - (int)1));
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_layerFarthest,return )

::com::haxepunk::Entity Scene_obj::get_nearest( ){
	HX_STACK_PUSH("Scene::get_nearest","com/haxepunk/Scene.hx",975);
	HX_STACK_THIS(this);
	HX_STACK_LINE(976)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(976)
		return null();
	}
	HX_STACK_LINE(977)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_renderFirst->get(this->_layerList->__get((int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_nearest,return )

::com::haxepunk::Entity Scene_obj::get_farthest( ){
	HX_STACK_PUSH("Scene::get_farthest","com/haxepunk/Scene.hx",965);
	HX_STACK_THIS(this);
	HX_STACK_LINE(966)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(966)
		return null();
	}
	HX_STACK_LINE(967)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_renderLast->get(this->_layerList->__get((this->_layerList->length - (int)1))));
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_farthest,return )

::flash::display::Sprite Scene_obj::getSpriteByLayer( int layer){
	HX_STACK_PUSH("Scene::getSpriteByLayer","com/haxepunk/Scene.hx",935);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layer,"layer");
	HX_STACK_LINE(935)
	if ((this->_layerSprites->exists(layer))){
		HX_STACK_LINE(937)
		return this->_layerSprites->get(layer);
	}
	else{
		HX_STACK_LINE(942)
		::flash::display::Sprite sprite = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(943)
		int idx = (int)0;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(945)
		Array< int > layers = Array_obj< int >::__new();		HX_STACK_VAR(layers,"layers");
		HX_STACK_LINE(946)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_layerSprites->keys());  __it->hasNext(); ){
			int l = __it->next();
			layers->push(l);
		}

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
		int run(int a,int b){
			HX_STACK_PUSH("*::_Function_2_1","com/haxepunk/Scene.hx",947);
			HX_STACK_ARG(a,"a");
			HX_STACK_ARG(b,"b");
			{
				HX_STACK_LINE(947)
				return (b - a);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(947)
		layers->sort( Dynamic(new _Function_2_1()));
		HX_STACK_LINE(949)
		{
			HX_STACK_LINE(949)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(949)
			while(((_g < layers->length))){
				HX_STACK_LINE(949)
				int l = layers->__get(_g);		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(949)
				++(_g);
				HX_STACK_LINE(951)
				if (((layer > l))){
					HX_STACK_LINE(951)
					break;
				}
				HX_STACK_LINE(952)
				hx::AddEq(idx,(int)1);
			}
		}
		HX_STACK_LINE(954)
		this->_layerSprites->set(layer,sprite);
		HX_STACK_LINE(955)
		this->_sprite->addChildAt(sprite,idx);
		HX_STACK_LINE(956)
		return sprite;
	}
	HX_STACK_LINE(935)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getSpriteByLayer,return )

::com::haxepunk::Entity Scene_obj::layerLast( int layer){
	HX_STACK_PUSH("Scene::layerLast","com/haxepunk/Scene.hx",924);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layer,"layer");
	HX_STACK_LINE(925)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(925)
		return null();
	}
	HX_STACK_LINE(926)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_renderLast->get(layer));
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerLast,return )

::com::haxepunk::Entity Scene_obj::layerFirst( int layer){
	HX_STACK_PUSH("Scene::layerFirst","com/haxepunk/Scene.hx",913);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layer,"layer");
	HX_STACK_LINE(914)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(914)
		return null();
	}
	HX_STACK_LINE(915)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_renderFirst->get(layer));
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerFirst,return )

Dynamic Scene_obj::classFirst( ::Class c){
	HX_STACK_PUSH("Scene::classFirst","com/haxepunk/Scene.hx",896);
	HX_STACK_THIS(this);
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(897)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(897)
		return null();
	}
	HX_STACK_LINE(898)
	Dynamic fe = this->_updateFirst;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(899)
	while(((fe != null()))){
		HX_STACK_LINE(901)
		if ((::Std_obj::is(fe,c))){
			HX_STACK_LINE(901)
			return fe;
		}
		HX_STACK_LINE(902)
		fe = fe->__Field(HX_CSTRING("_updateNext"),true);
	}
	HX_STACK_LINE(904)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,classFirst,return )

::com::haxepunk::Entity Scene_obj::typeFirst( ::String type){
	HX_STACK_PUSH("Scene::typeFirst","com/haxepunk/Scene.hx",885);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(886)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(886)
		return null();
	}
	HX_STACK_LINE(887)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_typeFirst->get(type));
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,typeFirst,return )

int Scene_obj::get_layers( ){
	HX_STACK_PUSH("Scene::get_layers","com/haxepunk/Scene.hx",877);
	HX_STACK_THIS(this);
	HX_STACK_LINE(877)
	return this->_layerList->length;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_layers,return )

::com::haxepunk::Entity Scene_obj::get_first( ){
	HX_STACK_PUSH("Scene::get_first","com/haxepunk/Scene.hx",871);
	HX_STACK_THIS(this);
	HX_STACK_LINE(871)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_updateFirst);
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_first,return )

int Scene_obj::layerCount( int layer){
	HX_STACK_PUSH("Scene::layerCount","com/haxepunk/Scene.hx",863);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layer,"layer");
	HX_STACK_LINE(863)
	return this->_layerCount->__get(layer);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerCount,return )

int Scene_obj::classCount( ::String c){
	HX_STACK_PUSH("Scene::classCount","com/haxepunk/Scene.hx",853);
	HX_STACK_THIS(this);
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(853)
	return this->_classCount->get(c);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,classCount,return )

int Scene_obj::typeCount( ::String type){
	HX_STACK_PUSH("Scene::typeCount","com/haxepunk/Scene.hx",843);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(843)
	return this->_typeCount->get(type);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,typeCount,return )

int Scene_obj::get_count( ){
	HX_STACK_PUSH("Scene::get_count","com/haxepunk/Scene.hx",835);
	HX_STACK_THIS(this);
	HX_STACK_LINE(835)
	return this->_count;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_count,return )

::com::haxepunk::Entity Scene_obj::nearestToPoint( ::String type,Float x,Float y,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_PUSH("Scene::nearestToPoint","com/haxepunk/Scene.hx",796);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(useHitboxes,"useHitboxes");
{
		HX_STACK_LINE(797)
		::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		Float nearDist = ((int)179 * ::Math_obj::pow((int)10,(int)306));		HX_STACK_VAR(nearDist,"nearDist");
		::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
		Float dist;		HX_STACK_VAR(dist,"dist");
		HX_STACK_LINE(802)
		if ((useHitboxes)){
			HX_STACK_LINE(804)
			while(((fe != null()))){
				HX_STACK_LINE(806)
				n = hx::TCast< com::haxepunk::Entity >::cast(fe);
				HX_STACK_LINE(807)
				dist = ::com::haxepunk::Scene_obj::squarePointRect(x,y,(((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) )) - n->originX),(((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) )) - n->originY),n->width,n->height);
				HX_STACK_LINE(808)
				if (((dist < nearDist))){
					HX_STACK_LINE(810)
					nearDist = dist;
					HX_STACK_LINE(811)
					near = n;
				}
				HX_STACK_LINE(813)
				fe = fe->__Field(HX_CSTRING("_typeNext"),true);
			}
			HX_STACK_LINE(815)
			return near;
		}
		HX_STACK_LINE(817)
		while(((fe != null()))){
			HX_STACK_LINE(819)
			n = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(820)
			dist = ((((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) )))) * ((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) ))))) + (((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) )))) * ((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) ))))));
			HX_STACK_LINE(821)
			if (((dist < nearDist))){
				HX_STACK_LINE(823)
				nearDist = dist;
				HX_STACK_LINE(824)
				near = n;
			}
			HX_STACK_LINE(826)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
		HX_STACK_LINE(828)
		return near;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,nearestToPoint,return )

::com::haxepunk::Entity Scene_obj::nearestToClass( ::String type,::com::haxepunk::Entity e,Dynamic classType,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_PUSH("Scene::nearestToClass","com/haxepunk/Scene.hx",764);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(classType,"classType");
	HX_STACK_ARG(useHitboxes,"useHitboxes");
{
		HX_STACK_LINE(765)
		if ((useHitboxes)){
			HX_STACK_LINE(765)
			return this->nearestToRect(type,(((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX),(((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY),e->width,e->height);
		}
		HX_STACK_LINE(766)
		::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		Float nearDist = ((int)179 * ::Math_obj::pow((int)10,(int)306));		HX_STACK_VAR(nearDist,"nearDist");
		::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
		Float dist;		HX_STACK_VAR(dist,"dist");
		Float x = (((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX);		HX_STACK_VAR(x,"x");
		Float y = (((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(773)
		while(((fe != null()))){
			HX_STACK_LINE(775)
			n = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(776)
			dist = ((((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) )))) * ((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) ))))) + (((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) )))) * ((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) ))))));
			HX_STACK_LINE(777)
			if (((bool((dist < nearDist)) && bool(::Std_obj::is(e,classType))))){
				HX_STACK_LINE(779)
				nearDist = dist;
				HX_STACK_LINE(780)
				near = n;
			}
			HX_STACK_LINE(782)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
		HX_STACK_LINE(784)
		return near;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,nearestToClass,return )

::com::haxepunk::Entity Scene_obj::nearestToEntity( ::String type,::com::haxepunk::Entity e,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_PUSH("Scene::nearestToEntity","com/haxepunk/Scene.hx",731);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(useHitboxes,"useHitboxes");
{
		HX_STACK_LINE(732)
		if ((useHitboxes)){
			HX_STACK_LINE(732)
			return this->nearestToRect(type,(((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX),(((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY),e->width,e->height);
		}
		HX_STACK_LINE(733)
		::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		Float nearDist = ((int)179 * ::Math_obj::pow((int)10,(int)306));		HX_STACK_VAR(nearDist,"nearDist");
		::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
		Float dist;		HX_STACK_VAR(dist,"dist");
		Float x = (((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX);		HX_STACK_VAR(x,"x");
		Float y = (((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(740)
		while(((fe != null()))){
			HX_STACK_LINE(742)
			n = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(743)
			dist = ((((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) )))) * ((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) ))))) + (((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) )))) * ((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) ))))));
			HX_STACK_LINE(744)
			if (((dist < nearDist))){
				HX_STACK_LINE(746)
				nearDist = dist;
				HX_STACK_LINE(747)
				near = n;
			}
			HX_STACK_LINE(749)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
		HX_STACK_LINE(751)
		return near;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,nearestToEntity,return )

::com::haxepunk::Entity Scene_obj::nearestToRect( ::String type,Float x,Float y,Float width,Float height){
	HX_STACK_PUSH("Scene::nearestToRect","com/haxepunk/Scene.hx",704);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_LINE(705)
	::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
	Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
	Float nearDist = ((int)179 * ::Math_obj::pow((int)10,(int)306));		HX_STACK_VAR(nearDist,"nearDist");
	::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
	Float dist;		HX_STACK_VAR(dist,"dist");
	HX_STACK_LINE(709)
	while(((fe != null()))){
		HX_STACK_LINE(711)
		n = hx::TCast< com::haxepunk::Entity >::cast(fe);
		HX_STACK_LINE(712)
		dist = ::com::haxepunk::Scene_obj::squareRects(x,y,width,height,(((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) )) - n->originX),(((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) )) - n->originY),n->width,n->height);
		HX_STACK_LINE(713)
		if (((dist < nearDist))){
			HX_STACK_LINE(715)
			nearDist = dist;
			HX_STACK_LINE(716)
			near = n;
		}
		HX_STACK_LINE(718)
		fe = fe->__Field(HX_CSTRING("_typeNext"),true);
	}
	HX_STACK_LINE(720)
	return near;
}


HX_DEFINE_DYNAMIC_FUNC5(Scene_obj,nearestToRect,return )

Void Scene_obj::collidePointInto( ::String type,Float pX,Float pY,Dynamic into){
{
		HX_STACK_PUSH("Scene::collidePointInto","com/haxepunk/Scene.hx",682);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(pX,"pX");
		HX_STACK_ARG(pY,"pY");
		HX_STACK_ARG(into,"into");
		HX_STACK_LINE(683)
		Dynamic e;		HX_STACK_VAR(e,"e");
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(686)
		while(((fe != null()))){
			HX_STACK_LINE(688)
			e = fe;
			HX_STACK_LINE(689)
			if (((bool(e->__Field(HX_CSTRING("collidable"),true)) && bool(e->__Field(HX_CSTRING("collidePoint"),true)((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->__Field(HX_CSTRING("x"),true)) ),(  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->__Field(HX_CSTRING("y"),true)) ),pX,pY))))){
				HX_STACK_LINE(689)
				hx::IndexRef((into).mPtr,(n)++) = e;
			}
			HX_STACK_LINE(690)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,collidePointInto,(void))

Void Scene_obj::collideCircleInto( ::String type,Float circleX,Float circleY,Float radius,Dynamic into){
{
		HX_STACK_PUSH("Scene::collideCircleInto","com/haxepunk/Scene.hx",659);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(circleX,"circleX");
		HX_STACK_ARG(circleY,"circleY");
		HX_STACK_ARG(radius,"radius");
		HX_STACK_ARG(into,"into");
		HX_STACK_LINE(660)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(664)
		hx::MultEq(radius,radius);
		HX_STACK_LINE(665)
		while(((fe != null()))){
			HX_STACK_LINE(667)
			e = fe;
			struct _Function_2_1{
				inline static Float Block( ::com::haxepunk::Entity &e,Float &circleX,Float &circleY){
					HX_STACK_PUSH("*::closure","com/haxepunk/Scene.hx",668);
					{
						HX_STACK_LINE(668)
						Float x2 = (  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) );		HX_STACK_VAR(x2,"x2");
						Float y2 = (  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) );		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(668)
						return ((((x2 - circleX)) * ((x2 - circleX))) + (((y2 - circleY)) * ((y2 - circleY))));
					}
					return null();
				}
			};
			HX_STACK_LINE(668)
			if (((_Function_2_1::Block(e,circleX,circleY) < radius))){
				HX_STACK_LINE(668)
				hx::IndexRef((into).mPtr,(n)++) = e;
			}
			HX_STACK_LINE(669)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Scene_obj,collideCircleInto,(void))

Void Scene_obj::collideRectInto( ::String type,Float rX,Float rY,Float rWidth,Float rHeight,Dynamic into){
{
		HX_STACK_PUSH("Scene::collideRectInto","com/haxepunk/Scene.hx",637);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(rX,"rX");
		HX_STACK_ARG(rY,"rY");
		HX_STACK_ARG(rWidth,"rWidth");
		HX_STACK_ARG(rHeight,"rHeight");
		HX_STACK_ARG(into,"into");
		HX_STACK_LINE(638)
		Dynamic e;		HX_STACK_VAR(e,"e");
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(641)
		while(((fe != null()))){
			HX_STACK_LINE(643)
			e = fe;
			HX_STACK_LINE(644)
			if (((bool(e->__Field(HX_CSTRING("collidable"),true)) && bool(e->__Field(HX_CSTRING("collideRect"),true)((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->__Field(HX_CSTRING("x"),true)) ),(  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->__Field(HX_CSTRING("y"),true)) ),rX,rY,rWidth,rHeight))))){
				HX_STACK_LINE(644)
				hx::IndexRef((into).mPtr,(n)++) = e;
			}
			HX_STACK_LINE(645)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Scene_obj,collideRectInto,(void))

::com::haxepunk::Entity Scene_obj::collideLine( ::String type,int fromX,int fromY,int toX,int toY,hx::Null< int >  __o_precision,::flash::geom::Point p){
int precision = __o_precision.Default(1);
	HX_STACK_PUSH("Scene::collideLine","com/haxepunk/Scene.hx",508);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(fromX,"fromX");
	HX_STACK_ARG(fromY,"fromY");
	HX_STACK_ARG(toX,"toX");
	HX_STACK_ARG(toY,"toY");
	HX_STACK_ARG(precision,"precision");
	HX_STACK_ARG(p,"p");
{
		HX_STACK_LINE(510)
		if (((precision < (int)1))){
			HX_STACK_LINE(510)
			precision = (int)1;
		}
		HX_STACK_LINE(511)
		if (((::Math_obj::sqrt(((((toX - fromX)) * ((toX - fromX))) + (((toY - fromY)) * ((toY - fromY))))) < precision))){
			HX_STACK_LINE(512)
			if (((p != null()))){
				HX_STACK_LINE(515)
				if (((bool((fromX == toX)) && bool((fromY == toY))))){
					HX_STACK_LINE(517)
					p->x = toX;
					HX_STACK_LINE(517)
					p->y = toY;
					HX_STACK_LINE(518)
					return this->collidePoint(type,toX,toY);
				}
				HX_STACK_LINE(520)
				return this->collideLine(type,fromX,fromY,toX,toY,(int)1,p);
			}
			else{
				HX_STACK_LINE(522)
				return this->collidePoint(type,fromX,toY);
			}
		}
		HX_STACK_LINE(526)
		int xDelta = ::Std_obj::_int(::Math_obj::abs((toX - fromX)));		HX_STACK_VAR(xDelta,"xDelta");
		int yDelta = ::Std_obj::_int(::Math_obj::abs((toY - fromY)));		HX_STACK_VAR(yDelta,"yDelta");
		Float xSign = (  (((toX > fromX))) ? Float(precision) : Float(-(precision)) );		HX_STACK_VAR(xSign,"xSign");
		Float ySign = (  (((toY > fromY))) ? Float(precision) : Float(-(precision)) );		HX_STACK_VAR(ySign,"ySign");
		Float x = fromX;		HX_STACK_VAR(x,"x");
		Float y = fromY;		HX_STACK_VAR(y,"y");
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(533)
		if (((xDelta > yDelta))){
			HX_STACK_LINE(535)
			hx::MultEq(ySign,(Float(yDelta) / Float(xDelta)));
			HX_STACK_LINE(536)
			if (((xSign > (int)0))){
				HX_STACK_LINE(537)
				while(((x < toX))){
					HX_STACK_LINE(540)
					if ((((e = this->collidePoint(type,x,y)) != null()))){
						HX_STACK_LINE(542)
						if (((p == null()))){
							HX_STACK_LINE(542)
							return e;
						}
						HX_STACK_LINE(543)
						if (((precision < (int)2))){
							HX_STACK_LINE(545)
							p->x = (x - xSign);
							HX_STACK_LINE(545)
							p->y = (y - ySign);
							HX_STACK_LINE(546)
							return e;
						}
						HX_STACK_LINE(548)
						return this->collideLine(type,::Std_obj::_int((x - xSign)),::Std_obj::_int((y - ySign)),toX,toY,(int)1,p);
					}
					HX_STACK_LINE(550)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(550)
					hx::AddEq(y,ySign);
				}
			}
			else{
				HX_STACK_LINE(554)
				while(((x > toX))){
					HX_STACK_LINE(557)
					if ((((e = this->collidePoint(type,x,y)) != null()))){
						HX_STACK_LINE(559)
						if (((p == null()))){
							HX_STACK_LINE(559)
							return e;
						}
						HX_STACK_LINE(560)
						if (((precision < (int)2))){
							HX_STACK_LINE(562)
							p->x = (x - xSign);
							HX_STACK_LINE(562)
							p->y = (y - ySign);
							HX_STACK_LINE(563)
							return e;
						}
						HX_STACK_LINE(565)
						return this->collideLine(type,::Std_obj::_int((x - xSign)),::Std_obj::_int((y - ySign)),toX,toY,(int)1,p);
					}
					HX_STACK_LINE(567)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(567)
					hx::AddEq(y,ySign);
				}
			}
		}
		else{
			HX_STACK_LINE(573)
			hx::MultEq(xSign,(Float(xDelta) / Float(yDelta)));
			HX_STACK_LINE(574)
			if (((ySign > (int)0))){
				HX_STACK_LINE(575)
				while(((y < toY))){
					HX_STACK_LINE(578)
					if ((((e = this->collidePoint(type,x,y)) != null()))){
						HX_STACK_LINE(580)
						if (((p == null()))){
							HX_STACK_LINE(580)
							return e;
						}
						HX_STACK_LINE(581)
						if (((precision < (int)2))){
							HX_STACK_LINE(583)
							p->x = (x - xSign);
							HX_STACK_LINE(583)
							p->y = (y - ySign);
							HX_STACK_LINE(584)
							return e;
						}
						HX_STACK_LINE(586)
						return this->collideLine(type,::Std_obj::_int((x - xSign)),::Std_obj::_int((y - ySign)),toX,toY,(int)1,p);
					}
					HX_STACK_LINE(588)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(588)
					hx::AddEq(y,ySign);
				}
			}
			else{
				HX_STACK_LINE(592)
				while(((y > toY))){
					HX_STACK_LINE(595)
					if ((((e = this->collidePoint(type,x,y)) != null()))){
						HX_STACK_LINE(597)
						if (((p == null()))){
							HX_STACK_LINE(597)
							return e;
						}
						HX_STACK_LINE(598)
						if (((precision < (int)2))){
							HX_STACK_LINE(600)
							p->x = (x - xSign);
							HX_STACK_LINE(600)
							p->y = (y - ySign);
							HX_STACK_LINE(601)
							return e;
						}
						HX_STACK_LINE(603)
						return this->collideLine(type,::Std_obj::_int((x - xSign)),::Std_obj::_int((y - ySign)),toX,toY,(int)1,p);
					}
					HX_STACK_LINE(605)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(605)
					hx::AddEq(y,ySign);
				}
			}
		}
		HX_STACK_LINE(611)
		if (((precision > (int)1))){
			HX_STACK_LINE(613)
			if (((p == null()))){
				HX_STACK_LINE(613)
				return this->collidePoint(type,toX,toY);
			}
			HX_STACK_LINE(614)
			if (((this->collidePoint(type,toX,toY) != null()))){
				HX_STACK_LINE(614)
				return this->collideLine(type,::Std_obj::_int((x - xSign)),::Std_obj::_int((y - ySign)),toX,toY,(int)1,p);
			}
		}
		HX_STACK_LINE(618)
		if (((p != null()))){
			HX_STACK_LINE(620)
			p->x = toX;
			HX_STACK_LINE(621)
			p->y = toY;
		}
		HX_STACK_LINE(623)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC7(Scene_obj,collideLine,return )

::com::haxepunk::Entity Scene_obj::collidePoint( ::String type,Float pX,Float pY){
	HX_STACK_PUSH("Scene::collidePoint","com/haxepunk/Scene.hx",474);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(pX,"pX");
	HX_STACK_ARG(pY,"pY");
	HX_STACK_LINE(475)
	::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
	Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
	::com::haxepunk::Entity result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(478)
	while(((fe != null()))){
		HX_STACK_LINE(480)
		e = hx::TCast< com::haxepunk::Entity >::cast(fe);
		HX_STACK_LINE(482)
		if (((bool(e->collidable) && bool(e->collidePoint((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) ),(  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) ),pX,pY))))){
			HX_STACK_LINE(482)
			if (((result == null()))){
				HX_STACK_LINE(484)
				result = e;
			}
			else{
				HX_STACK_LINE(487)
				if (((e->_layer < result->_layer))){
					HX_STACK_LINE(487)
					result = e;
				}
			}
		}
		HX_STACK_LINE(491)
		fe = fe->__Field(HX_CSTRING("_typeNext"),true);
	}
	HX_STACK_LINE(493)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,collidePoint,return )

::com::haxepunk::Entity Scene_obj::collideRect( ::String type,Float rX,Float rY,Float rWidth,Float rHeight){
	HX_STACK_PUSH("Scene::collideRect","com/haxepunk/Scene.hx",454);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(rX,"rX");
	HX_STACK_ARG(rY,"rY");
	HX_STACK_ARG(rWidth,"rWidth");
	HX_STACK_ARG(rHeight,"rHeight");
	HX_STACK_LINE(455)
	::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
	Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(457)
	while(((fe != null()))){
		HX_STACK_LINE(459)
		e = hx::TCast< com::haxepunk::Entity >::cast(fe);
		HX_STACK_LINE(460)
		if (((bool(e->collidable) && bool(e->collideRect((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) ),(  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) ),rX,rY,rWidth,rHeight))))){
			HX_STACK_LINE(460)
			return e;
		}
		HX_STACK_LINE(461)
		fe = fe->__Field(HX_CSTRING("_typeNext"),true);
	}
	HX_STACK_LINE(463)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Scene_obj,collideRect,return )

bool Scene_obj::isAtBack( ::com::haxepunk::Entity e){
	HX_STACK_PUSH("Scene::isAtBack","com/haxepunk/Scene.hx",439);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(440)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(441)
	return (fe->__Field(HX_CSTRING("_renderNext"),true) == null());
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,isAtBack,return )

bool Scene_obj::isAtFront( ::com::haxepunk::Entity e){
	HX_STACK_PUSH("Scene::isAtFront","com/haxepunk/Scene.hx",428);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(429)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(430)
	return (fe->__Field(HX_CSTRING("_renderPrev"),true) == null());
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,isAtFront,return )

bool Scene_obj::sendBackward( ::com::haxepunk::Entity e){
	HX_STACK_PUSH("Scene::sendBackward","com/haxepunk/Scene.hx",406);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(407)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(408)
	if (((bool((fe->__Field(HX_CSTRING("_scene"),true) != hx::ObjectPtr<OBJ_>(this))) || bool((fe->__Field(HX_CSTRING("_renderNext"),true) == null()))))){
		HX_STACK_LINE(408)
		return false;
	}
	HX_STACK_LINE(410)
	fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
	HX_STACK_LINE(411)
	if (((fe->__Field(HX_CSTRING("_renderPrev"),true) != null()))){
		HX_STACK_LINE(411)
		fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true);
	}
	else{
		HX_STACK_LINE(412)
		this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderNext"),true));
	}
	HX_STACK_LINE(414)
	fe->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderNext"),true);
	HX_STACK_LINE(415)
	fe->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true)->__Field(HX_CSTRING("_renderNext"),true);
	HX_STACK_LINE(416)
	fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = e;
	HX_STACK_LINE(417)
	if (((fe->__Field(HX_CSTRING("_renderNext"),true) != null()))){
		HX_STACK_LINE(417)
		fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = e;
	}
	else{
		HX_STACK_LINE(418)
		this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),e);
	}
	HX_STACK_LINE(419)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,sendBackward,return )

bool Scene_obj::bringForward( ::com::haxepunk::Entity e){
	HX_STACK_PUSH("Scene::bringForward","com/haxepunk/Scene.hx",384);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(385)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(386)
	if (((bool((fe->__Field(HX_CSTRING("_scene"),true) != hx::ObjectPtr<OBJ_>(this))) || bool((fe->__Field(HX_CSTRING("_renderPrev"),true) == null()))))){
		HX_STACK_LINE(386)
		return false;
	}
	HX_STACK_LINE(388)
	fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true);
	HX_STACK_LINE(389)
	if (((fe->__Field(HX_CSTRING("_renderNext"),true) != null()))){
		HX_STACK_LINE(389)
		fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
	}
	else{
		HX_STACK_LINE(390)
		this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderPrev"),true));
	}
	HX_STACK_LINE(392)
	fe->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
	HX_STACK_LINE(393)
	fe->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true)->__Field(HX_CSTRING("_renderPrev"),true);
	HX_STACK_LINE(394)
	fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = e;
	HX_STACK_LINE(395)
	if (((fe->__Field(HX_CSTRING("_renderPrev"),true) != null()))){
		HX_STACK_LINE(395)
		fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = e;
	}
	else{
		HX_STACK_LINE(396)
		this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),e);
	}
	HX_STACK_LINE(397)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,bringForward,return )

bool Scene_obj::sendToBack( ::com::haxepunk::Entity e){
	HX_STACK_PUSH("Scene::sendToBack","com/haxepunk/Scene.hx",363);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(364)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(365)
	if (((bool((fe->__Field(HX_CSTRING("_scene"),true) != hx::ObjectPtr<OBJ_>(this))) || bool((fe->__Field(HX_CSTRING("_renderNext"),true) == null()))))){
		HX_STACK_LINE(365)
		return false;
	}
	HX_STACK_LINE(367)
	fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
	HX_STACK_LINE(368)
	if (((fe->__Field(HX_CSTRING("_renderPrev"),true) != null()))){
		HX_STACK_LINE(368)
		fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true);
	}
	else{
		HX_STACK_LINE(369)
		this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderNext"),true));
	}
	HX_STACK_LINE(371)
	fe->__FieldRef(HX_CSTRING("_renderPrev")) = this->_renderLast->get(fe->__Field(HX_CSTRING("_layer"),true));
	HX_STACK_LINE(372)
	fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = e;
	HX_STACK_LINE(373)
	this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),e);
	HX_STACK_LINE(374)
	fe->__FieldRef(HX_CSTRING("_renderNext")) = null();
	HX_STACK_LINE(375)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,sendToBack,return )

bool Scene_obj::bringToFront( ::com::haxepunk::Entity e){
	HX_STACK_PUSH("Scene::bringToFront","com/haxepunk/Scene.hx",342);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(343)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(344)
	if (((bool((fe->__Field(HX_CSTRING("_scene"),true) != hx::ObjectPtr<OBJ_>(this))) || bool((fe->__Field(HX_CSTRING("_renderPrev"),true) == null()))))){
		HX_STACK_LINE(344)
		return false;
	}
	HX_STACK_LINE(346)
	fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true);
	HX_STACK_LINE(347)
	if (((fe->__Field(HX_CSTRING("_renderNext"),true) != null()))){
		HX_STACK_LINE(347)
		fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
	}
	else{
		HX_STACK_LINE(348)
		this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderPrev"),true));
	}
	HX_STACK_LINE(350)
	fe->__FieldRef(HX_CSTRING("_renderNext")) = this->_renderFirst->get(fe->__Field(HX_CSTRING("_layer"),true));
	HX_STACK_LINE(351)
	fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = e;
	HX_STACK_LINE(352)
	this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),e);
	HX_STACK_LINE(353)
	fe->__FieldRef(HX_CSTRING("_renderPrev")) = null();
	HX_STACK_LINE(354)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,bringToFront,return )

Void Scene_obj::clearRecycledAll( ){
{
		HX_STACK_PUSH("Scene::clearRecycledAll","com/haxepunk/Scene.hx",326);
		HX_STACK_THIS(this);
		HX_STACK_LINE(327)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		Dynamic fe;		HX_STACK_VAR(fe,"fe");
		struct _Function_1_1{
			inline static Dynamic Block( ::com::haxepunk::Scene_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/Scene.hx",329);
				{
					HX_STACK_LINE(329)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_recycled);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/haxepunk/Scene.hx",329);
						{
							HX_STACK_LINE(329)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(329)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(329)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::haxepunk::Entity e1 = __it->next();
			{
				HX_STACK_LINE(331)
				fe = e1;
				HX_STACK_LINE(332)
				this->clearRecycled(fe->__Field(HX_CSTRING("_class"),true));
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,clearRecycledAll,(void))

Void Scene_obj::clearRecycled( ::String classType){
{
		HX_STACK_PUSH("Scene::clearRecycled","com/haxepunk/Scene.hx",308);
		HX_STACK_THIS(this);
		HX_STACK_ARG(classType,"classType");
		HX_STACK_LINE(309)
		::com::haxepunk::Entity e = this->_recycled->get(classType);		HX_STACK_VAR(e,"e");
		Dynamic fe;		HX_STACK_VAR(fe,"fe");
		::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(312)
		while(((e != null()))){
			HX_STACK_LINE(314)
			fe = e;
			HX_STACK_LINE(315)
			n = fe->__Field(HX_CSTRING("_recycleNext"),true);
			HX_STACK_LINE(316)
			fe->__FieldRef(HX_CSTRING("_recycleNext")) = null();
			HX_STACK_LINE(317)
			e = n;
		}
		HX_STACK_LINE(319)
		this->_recycled->set(classType,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,clearRecycled,(void))

Dynamic Scene_obj::recycle( Dynamic e){
	HX_STACK_PUSH("Scene::recycle","com/haxepunk/Scene.hx",298);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(299)
	this->_recycle[this->_recycle->length] = e;
	HX_STACK_LINE(300)
	return this->remove(e);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,recycle,return )

Dynamic Scene_obj::create( ::Class classType,hx::Null< bool >  __o_addToScene,Dynamic constructorsArgs){
bool addToScene = __o_addToScene.Default(true);
	HX_STACK_PUSH("Scene::create","com/haxepunk/Scene.hx",268);
	HX_STACK_THIS(this);
	HX_STACK_ARG(classType,"classType");
	HX_STACK_ARG(addToScene,"addToScene");
	HX_STACK_ARG(constructorsArgs,"constructorsArgs");
{
		HX_STACK_LINE(269)
		::String className = ::Type_obj::getClassName(classType);		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(270)
		Dynamic fe = this->_recycled->get(className);		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(271)
		if (((fe != null()))){
			HX_STACK_LINE(273)
			this->_recycled->set(className,fe->__Field(HX_CSTRING("_recycleNext"),true));
			HX_STACK_LINE(274)
			fe->__FieldRef(HX_CSTRING("_recycleNext")) = null();
		}
		else{
			HX_STACK_LINE(277)
			if (((constructorsArgs != null()))){
				HX_STACK_LINE(279)
				fe = ::Type_obj::createInstance(classType,constructorsArgs);
			}
			else{
				HX_STACK_LINE(281)
				fe = ::Type_obj::createInstance(classType,Dynamic( Array_obj<Dynamic>::__new()));
			}
		}
		HX_STACK_LINE(283)
		Dynamic e = fe;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(285)
		if ((addToScene)){
			HX_STACK_LINE(286)
			return this->add(e);
		}
		HX_STACK_LINE(288)
		return e;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,create,return )

::com::haxepunk::Entity Scene_obj::addMask( ::com::haxepunk::Mask mask,::String type,hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_PUSH("Scene::addMask","com/haxepunk/Scene.hx",253);
	HX_STACK_THIS(this);
	HX_STACK_ARG(mask,"mask");
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		HX_STACK_LINE(254)
		::com::haxepunk::Entity e = ::com::haxepunk::Entity_obj::__new(x,y,null(),mask);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(255)
		if (((type != HX_CSTRING("")))){
			HX_STACK_LINE(255)
			e->set_type(type);
		}
		HX_STACK_LINE(256)
		e->active = e->visible = false;
		HX_STACK_LINE(257)
		return this->add(e);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,addMask,return )

::com::haxepunk::Entity Scene_obj::addGraphic( ::com::haxepunk::Graphic graphic,hx::Null< int >  __o_layer,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
int layer = __o_layer.Default(10);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_PUSH("Scene::addGraphic","com/haxepunk/Scene.hx",237);
	HX_STACK_THIS(this);
	HX_STACK_ARG(graphic,"graphic");
	HX_STACK_ARG(layer,"layer");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		HX_STACK_LINE(238)
		::com::haxepunk::Entity e = ::com::haxepunk::Entity_obj::__new(x,y,graphic,null());		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(239)
		if (((layer != (int)10))){
			HX_STACK_LINE(239)
			e->set_layer(layer);
		}
		HX_STACK_LINE(240)
		e->active = false;
		HX_STACK_LINE(241)
		return this->add(e);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,addGraphic,return )

Void Scene_obj::removeList( Dynamic list){
{
		HX_STACK_PUSH("Scene::removeList","com/haxepunk/Scene.hx",224);
		HX_STACK_THIS(this);
		HX_STACK_ARG(list,"list");
		HX_STACK_LINE(224)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(list->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic e = __it->next();
			this->remove(e);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeList,(void))

Void Scene_obj::addList( Dynamic list){
{
		HX_STACK_PUSH("Scene::addList","com/haxepunk/Scene.hx",215);
		HX_STACK_THIS(this);
		HX_STACK_ARG(list,"list");
		HX_STACK_LINE(215)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(list->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic e = __it->next();
			this->add(e);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addList,(void))

Void Scene_obj::removeAll( ){
{
		HX_STACK_PUSH("Scene::removeAll","com/haxepunk/Scene.hx",201);
		HX_STACK_THIS(this);
		HX_STACK_LINE(202)
		Dynamic fe = this->_updateFirst;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(203)
		while(((fe != null()))){
			HX_STACK_LINE(205)
			this->_remove[this->_remove->length] = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(206)
			fe = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,removeAll,(void))

Dynamic Scene_obj::remove( Dynamic e){
	HX_STACK_PUSH("Scene::remove","com/haxepunk/Scene.hx",192);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(193)
	this->_remove[this->_remove->length] = e;
	HX_STACK_LINE(194)
	return e;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,remove,return )

Dynamic Scene_obj::add( Dynamic e){
	HX_STACK_PUSH("Scene::add","com/haxepunk/Scene.hx",181);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(182)
	this->_add[this->_add->length] = e;
	HX_STACK_LINE(183)
	return e;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,add,return )

::flash::display::Sprite Scene_obj::get_sprite( ){
	HX_STACK_PUSH("Scene::get_sprite","com/haxepunk/Scene.hx",171);
	HX_STACK_THIS(this);
	HX_STACK_LINE(171)
	return this->_sprite;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_sprite,return )

int Scene_obj::get_mouseY( ){
	HX_STACK_PUSH("Scene::get_mouseY","com/haxepunk/Scene.hx",162);
	HX_STACK_THIS(this);
	HX_STACK_LINE(162)
	return ::Std_obj::_int((::com::haxepunk::HXP_obj::screen->get_mouseY() + this->camera->y));
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_mouseY,return )

int Scene_obj::get_mouseX( ){
	HX_STACK_PUSH("Scene::get_mouseX","com/haxepunk/Scene.hx",153);
	HX_STACK_THIS(this);
	HX_STACK_LINE(153)
	return ::Std_obj::_int((::com::haxepunk::HXP_obj::screen->get_mouseX() + this->camera->x));
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_mouseX,return )

Void Scene_obj::render( ){
{
		HX_STACK_PUSH("Scene::render","com/haxepunk/Scene.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_LINE(118)
		if ((this->_layerSort)){
			HX_STACK_LINE(120)
			if (((this->_layerList->length > (int)1))){
				HX_STACK_LINE(120)
				this->_layerList->sort(this->layerSort_dyn());
			}
			HX_STACK_LINE(121)
			this->_layerSort = false;
		}
		HX_STACK_LINE(124)
		if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::HARDWARE->__Index()))))) != (int)0))){
			HX_STACK_LINE(126)
			this->clearSprites();
			HX_STACK_LINE(127)
			::com::haxepunk::graphics::atlas::AtlasData_obj::_scene = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(131)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		Dynamic fe;		HX_STACK_VAR(fe,"fe");
		int i = this->_layerList->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(134)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(136)
			fe = this->_renderLast->get(this->_layerList->__get(i));
			HX_STACK_LINE(137)
			while(((fe != null()))){
				HX_STACK_LINE(139)
				e = hx::TCast< com::haxepunk::Entity >::cast(fe);
				HX_STACK_LINE(140)
				if ((e->visible)){
					HX_STACK_LINE(140)
					e->render();
				}
				HX_STACK_LINE(141)
				fe = fe->__Field(HX_CSTRING("_renderPrev"),true);
			}
		}
		HX_STACK_LINE(145)
		if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::HARDWARE->__Index()))))) != (int)0))){
			HX_STACK_LINE(145)
			if (((::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases->length > (int)0))){
				HX_STACK_LINE(145)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(145)
				while(((_g < _g1->length))){
					HX_STACK_LINE(145)
					::com::haxepunk::graphics::atlas::AtlasData atlas = _g1->__get(_g).StaticCast< ::com::haxepunk::graphics::atlas::AtlasData >();		HX_STACK_VAR(atlas,"atlas");
					HX_STACK_LINE(145)
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
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,render,(void))

Void Scene_obj::update( ){
{
		HX_STACK_PUSH("Scene::update","com/haxepunk/Scene.hx",93);
		HX_STACK_THIS(this);
		HX_STACK_LINE(95)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		Dynamic fe = this->_updateFirst;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(97)
		while(((fe != null()))){
			HX_STACK_LINE(99)
			e = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(100)
			if ((e->active)){
				HX_STACK_LINE(102)
				if ((e->get_hasTween())){
					HX_STACK_LINE(102)
					e->updateTweens();
				}
				HX_STACK_LINE(103)
				e->update();
			}
			HX_STACK_LINE(105)
			if (((bool((e->_graphic != null())) && bool(e->_graphic->active)))){
				HX_STACK_LINE(105)
				e->_graphic->update();
			}
			HX_STACK_LINE(106)
			fe = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
	}
return null();
}


Void Scene_obj::focusLost( ){
{
		HX_STACK_PUSH("Scene::focusLost","com/haxepunk/Scene.hx",85);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,focusLost,(void))

Void Scene_obj::focusGained( ){
{
		HX_STACK_PUSH("Scene::focusGained","com/haxepunk/Scene.hx",80);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,focusGained,(void))

Void Scene_obj::end( ){
{
		HX_STACK_PUSH("Scene::end","com/haxepunk/Scene.hx",75);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,end,(void))

Void Scene_obj::begin( ){
{
		HX_STACK_PUSH("Scene::begin","com/haxepunk/Scene.hx",70);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,begin,(void))

Float Scene_obj::squareRects( Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2){
	HX_STACK_PUSH("Scene::squareRects","com/haxepunk/Scene.hx",1311);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(w1,"w1");
	HX_STACK_ARG(h1,"h1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
	HX_STACK_ARG(w2,"w2");
	HX_STACK_ARG(h2,"h2");
	HX_STACK_LINE(1312)
	if (((bool((x1 < (x2 + w2))) && bool((x2 < (x1 + w1)))))){
		HX_STACK_LINE(1314)
		if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
			HX_STACK_LINE(1314)
			return (int)0;
		}
		HX_STACK_LINE(1315)
		if (((y1 > y2))){
			HX_STACK_LINE(1315)
			return (((y1 - ((y2 + h2)))) * ((y1 - ((y2 + h2)))));
		}
		HX_STACK_LINE(1316)
		return (((y2 - ((y1 + h1)))) * ((y2 - ((y1 + h1)))));
	}
	HX_STACK_LINE(1318)
	if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
		HX_STACK_LINE(1320)
		if (((x1 > x2))){
			HX_STACK_LINE(1320)
			return (((x1 - ((x2 + w2)))) * ((x1 - ((x2 + w2)))));
		}
		HX_STACK_LINE(1321)
		return (((x2 - ((x1 + w1)))) * ((x2 - ((x1 + w1)))));
	}
	HX_STACK_LINE(1323)
	if (((x1 > x2))){
		HX_STACK_LINE(1325)
		if (((y1 > y2))){
			HX_STACK_LINE(1325)
			return ::com::haxepunk::Scene_obj::squarePoints(x1,y1,(x2 + w2),(y2 + h2));
		}
		HX_STACK_LINE(1326)
		return ::com::haxepunk::Scene_obj::squarePoints(x1,(y1 + h1),(x2 + w2),y2);
	}
	HX_STACK_LINE(1328)
	if (((y1 > y2))){
		HX_STACK_LINE(1328)
		return ::com::haxepunk::Scene_obj::squarePoints((x1 + w1),y1,x2,(y2 + h2));
	}
	HX_STACK_LINE(1329)
	return ::com::haxepunk::Scene_obj::squarePoints((x1 + w1),(y1 + h1),x2,y2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Scene_obj,squareRects,return )

Float Scene_obj::squarePoints( Float x1,Float y1,Float x2,Float y2){
	HX_STACK_PUSH("Scene::squarePoints","com/haxepunk/Scene.hx",1334);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
	HX_STACK_LINE(1334)
	return ((((x1 - x2)) * ((x1 - x2))) + (((y1 - y2)) * ((y1 - y2))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,squarePoints,return )

Float Scene_obj::squarePointRect( Float px,Float py,Float rx,Float ry,Float rw,Float rh){
	HX_STACK_PUSH("Scene::squarePointRect","com/haxepunk/Scene.hx",1340);
	HX_STACK_ARG(px,"px");
	HX_STACK_ARG(py,"py");
	HX_STACK_ARG(rx,"rx");
	HX_STACK_ARG(ry,"ry");
	HX_STACK_ARG(rw,"rw");
	HX_STACK_ARG(rh,"rh");
	HX_STACK_LINE(1341)
	if (((bool((px >= rx)) && bool((px <= (rx + rw)))))){
		HX_STACK_LINE(1343)
		if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
			HX_STACK_LINE(1343)
			return (int)0;
		}
		HX_STACK_LINE(1344)
		if (((py > ry))){
			HX_STACK_LINE(1344)
			return (((py - ((ry + rh)))) * ((py - ((ry + rh)))));
		}
		HX_STACK_LINE(1345)
		return (((ry - py)) * ((ry - py)));
	}
	HX_STACK_LINE(1347)
	if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
		HX_STACK_LINE(1349)
		if (((px > rx))){
			HX_STACK_LINE(1349)
			return (((px - ((rx + rw)))) * ((px - ((rx + rw)))));
		}
		HX_STACK_LINE(1350)
		return (((rx - px)) * ((rx - px)));
	}
	HX_STACK_LINE(1352)
	if (((px > rx))){
		HX_STACK_LINE(1354)
		if (((py > ry))){
			HX_STACK_LINE(1354)
			return ::com::haxepunk::Scene_obj::squarePoints(px,py,(rx + rw),(ry + rh));
		}
		HX_STACK_LINE(1355)
		return ::com::haxepunk::Scene_obj::squarePoints(px,py,(rx + rw),ry);
	}
	HX_STACK_LINE(1357)
	if (((py > ry))){
		HX_STACK_LINE(1357)
		return ::com::haxepunk::Scene_obj::squarePoints(px,py,rx,(ry + rh));
	}
	HX_STACK_LINE(1358)
	return ::com::haxepunk::Scene_obj::squarePoints(px,py,rx,ry);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Scene_obj,squarePointRect,return )


Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(_entityNames,"_entityNames");
	HX_MARK_MEMBER_NAME(_recycled,"_recycled");
	HX_MARK_MEMBER_NAME(_typeCount,"_typeCount");
	HX_MARK_MEMBER_NAME(_typeFirst,"_typeFirst");
	HX_MARK_MEMBER_NAME(_classCount,"_classCount");
	HX_MARK_MEMBER_NAME(_renderLast,"_renderLast");
	HX_MARK_MEMBER_NAME(_renderFirst,"_renderFirst");
	HX_MARK_MEMBER_NAME(_layerSprites,"_layerSprites");
	HX_MARK_MEMBER_NAME(_layerCount,"_layerCount");
	HX_MARK_MEMBER_NAME(_layerList,"_layerList");
	HX_MARK_MEMBER_NAME(_layerSort,"_layerSort");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_MEMBER_NAME(_updateFirst,"_updateFirst");
	HX_MARK_MEMBER_NAME(_recycle,"_recycle");
	HX_MARK_MEMBER_NAME(_remove,"_remove");
	HX_MARK_MEMBER_NAME(_add,"_add");
	HX_MARK_MEMBER_NAME(uniqueTypes,"uniqueTypes");
	HX_MARK_MEMBER_NAME(layerNearest,"layerNearest");
	HX_MARK_MEMBER_NAME(layerFarthest,"layerFarthest");
	HX_MARK_MEMBER_NAME(nearest,"nearest");
	HX_MARK_MEMBER_NAME(farthest,"farthest");
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(first,"first");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(visible,"visible");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_entityNames,"_entityNames");
	HX_VISIT_MEMBER_NAME(_recycled,"_recycled");
	HX_VISIT_MEMBER_NAME(_typeCount,"_typeCount");
	HX_VISIT_MEMBER_NAME(_typeFirst,"_typeFirst");
	HX_VISIT_MEMBER_NAME(_classCount,"_classCount");
	HX_VISIT_MEMBER_NAME(_renderLast,"_renderLast");
	HX_VISIT_MEMBER_NAME(_renderFirst,"_renderFirst");
	HX_VISIT_MEMBER_NAME(_layerSprites,"_layerSprites");
	HX_VISIT_MEMBER_NAME(_layerCount,"_layerCount");
	HX_VISIT_MEMBER_NAME(_layerList,"_layerList");
	HX_VISIT_MEMBER_NAME(_layerSort,"_layerSort");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_count,"_count");
	HX_VISIT_MEMBER_NAME(_updateFirst,"_updateFirst");
	HX_VISIT_MEMBER_NAME(_recycle,"_recycle");
	HX_VISIT_MEMBER_NAME(_remove,"_remove");
	HX_VISIT_MEMBER_NAME(_add,"_add");
	HX_VISIT_MEMBER_NAME(uniqueTypes,"uniqueTypes");
	HX_VISIT_MEMBER_NAME(layerNearest,"layerNearest");
	HX_VISIT_MEMBER_NAME(layerFarthest,"layerFarthest");
	HX_VISIT_MEMBER_NAME(nearest,"nearest");
	HX_VISIT_MEMBER_NAME(farthest,"farthest");
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(first,"first");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Scene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_add") ) { return _add; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return inCallProp ? get_first() : first; }
		if (HX_FIELD_EQ(inName,"count") ) { return get_count(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		if (HX_FIELD_EQ(inName,"getAll") ) { return getAll_dyn(); }
		if (HX_FIELD_EQ(inName,"layers") ) { return inCallProp ? get_layers() : layers; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"sprite") ) { return inCallProp ? get_sprite() : sprite; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"_remove") ) { return _remove; }
		if (HX_FIELD_EQ(inName,"addType") ) { return addType_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"nearest") ) { return inCallProp ? get_nearest() : nearest; }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"addMask") ) { return addMask_dyn(); }
		if (HX_FIELD_EQ(inName,"addList") ) { return addList_dyn(); }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_recycle") ) { return _recycle; }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return getLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getClass") ) { return getClass_dyn(); }
		if (HX_FIELD_EQ(inName,"farthest") ) { return inCallProp ? get_farthest() : farthest; }
		if (HX_FIELD_EQ(inName,"isAtBack") ) { return isAtBack_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_recycled") ) { return _recycled; }
		if (HX_FIELD_EQ(inName,"addRender") ) { return addRender_dyn(); }
		if (HX_FIELD_EQ(inName,"addUpdate") ) { return addUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"layerSort") ) { return layerSort_dyn(); }
		if (HX_FIELD_EQ(inName,"layerLast") ) { return layerLast_dyn(); }
		if (HX_FIELD_EQ(inName,"typeFirst") ) { return typeFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"get_first") ) { return get_first_dyn(); }
		if (HX_FIELD_EQ(inName,"typeCount") ) { return typeCount_dyn(); }
		if (HX_FIELD_EQ(inName,"get_count") ) { return get_count_dyn(); }
		if (HX_FIELD_EQ(inName,"isAtFront") ) { return isAtFront_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"focusLost") ) { return focusLost_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_typeCount") ) { return _typeCount; }
		if (HX_FIELD_EQ(inName,"_typeFirst") ) { return _typeFirst; }
		if (HX_FIELD_EQ(inName,"_layerList") ) { return _layerList; }
		if (HX_FIELD_EQ(inName,"_layerSort") ) { return _layerSort; }
		if (HX_FIELD_EQ(inName,"removeType") ) { return removeType_dyn(); }
		if (HX_FIELD_EQ(inName,"layerFirst") ) { return layerFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"classFirst") ) { return classFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"get_layers") ) { return get_layers_dyn(); }
		if (HX_FIELD_EQ(inName,"layerCount") ) { return layerCount_dyn(); }
		if (HX_FIELD_EQ(inName,"classCount") ) { return classCount_dyn(); }
		if (HX_FIELD_EQ(inName,"sendToBack") ) { return sendToBack_dyn(); }
		if (HX_FIELD_EQ(inName,"addGraphic") ) { return addGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"removeList") ) { return removeList_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sprite") ) { return get_sprite_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"squareRects") ) { return squareRects_dyn(); }
		if (HX_FIELD_EQ(inName,"_classCount") ) { return _classCount; }
		if (HX_FIELD_EQ(inName,"_renderLast") ) { return _renderLast; }
		if (HX_FIELD_EQ(inName,"_layerCount") ) { return _layerCount; }
		if (HX_FIELD_EQ(inName,"updateLists") ) { return updateLists_dyn(); }
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"uniqueTypes") ) { return inCallProp ? get_uniqueTypes() : uniqueTypes; }
		if (HX_FIELD_EQ(inName,"get_nearest") ) { return get_nearest_dyn(); }
		if (HX_FIELD_EQ(inName,"collideLine") ) { return collideLine_dyn(); }
		if (HX_FIELD_EQ(inName,"collideRect") ) { return collideRect_dyn(); }
		if (HX_FIELD_EQ(inName,"focusGained") ) { return focusGained_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"squarePoints") ) { return squarePoints_dyn(); }
		if (HX_FIELD_EQ(inName,"_entityNames") ) { return _entityNames; }
		if (HX_FIELD_EQ(inName,"_renderFirst") ) { return _renderFirst; }
		if (HX_FIELD_EQ(inName,"_updateFirst") ) { return _updateFirst; }
		if (HX_FIELD_EQ(inName,"registerName") ) { return registerName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRender") ) { return removeRender_dyn(); }
		if (HX_FIELD_EQ(inName,"removeUpdate") ) { return removeUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"clearSprites") ) { return clearSprites_dyn(); }
		if (HX_FIELD_EQ(inName,"layerNearest") ) { return inCallProp ? get_layerNearest() : layerNearest; }
		if (HX_FIELD_EQ(inName,"get_farthest") ) { return get_farthest_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePoint") ) { return collidePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"sendBackward") ) { return sendBackward_dyn(); }
		if (HX_FIELD_EQ(inName,"bringForward") ) { return bringForward_dyn(); }
		if (HX_FIELD_EQ(inName,"bringToFront") ) { return bringToFront_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_layerSprites") ) { return _layerSprites; }
		if (HX_FIELD_EQ(inName,"layerFarthest") ) { return inCallProp ? get_layerFarthest() : layerFarthest; }
		if (HX_FIELD_EQ(inName,"nearestToRect") ) { return nearestToRect_dyn(); }
		if (HX_FIELD_EQ(inName,"clearRecycled") ) { return clearRecycled_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unregisterName") ) { return unregisterName_dyn(); }
		if (HX_FIELD_EQ(inName,"nearestToPoint") ) { return nearestToPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"nearestToClass") ) { return nearestToClass_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"squarePointRect") ) { return squarePointRect_dyn(); }
		if (HX_FIELD_EQ(inName,"get_uniqueTypes") ) { return get_uniqueTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"nearestToEntity") ) { return nearestToEntity_dyn(); }
		if (HX_FIELD_EQ(inName,"collideRectInto") ) { return collideRectInto_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_layerNearest") ) { return get_layerNearest_dyn(); }
		if (HX_FIELD_EQ(inName,"getSpriteByLayer") ) { return getSpriteByLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePointInto") ) { return collidePointInto_dyn(); }
		if (HX_FIELD_EQ(inName,"clearRecycledAll") ) { return clearRecycledAll_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_layerFarthest") ) { return get_layerFarthest_dyn(); }
		if (HX_FIELD_EQ(inName,"collideCircleInto") ) { return collideCircleInto_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_add") ) { _add=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { first=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_remove") ) { _remove=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nearest") ) { nearest=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_recycle") ) { _recycle=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"farthest") ) { farthest=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_recycled") ) { _recycled=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_typeCount") ) { _typeCount=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_typeFirst") ) { _typeFirst=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layerList") ) { _layerList=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layerSort") ) { _layerSort=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_classCount") ) { _classCount=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderLast") ) { _renderLast=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layerCount") ) { _layerCount=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uniqueTypes") ) { uniqueTypes=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_entityNames") ) { _entityNames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderFirst") ) { _renderFirst=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateFirst") ) { _updateFirst=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layerNearest") ) { layerNearest=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_layerSprites") ) { _layerSprites=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layerFarthest") ) { layerFarthest=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_entityNames"));
	outFields->push(HX_CSTRING("_recycled"));
	outFields->push(HX_CSTRING("_typeCount"));
	outFields->push(HX_CSTRING("_typeFirst"));
	outFields->push(HX_CSTRING("_classCount"));
	outFields->push(HX_CSTRING("_renderLast"));
	outFields->push(HX_CSTRING("_renderFirst"));
	outFields->push(HX_CSTRING("_layerSprites"));
	outFields->push(HX_CSTRING("_layerCount"));
	outFields->push(HX_CSTRING("_layerList"));
	outFields->push(HX_CSTRING("_layerSort"));
	outFields->push(HX_CSTRING("_sprite"));
	outFields->push(HX_CSTRING("_count"));
	outFields->push(HX_CSTRING("_updateFirst"));
	outFields->push(HX_CSTRING("_recycle"));
	outFields->push(HX_CSTRING("_remove"));
	outFields->push(HX_CSTRING("_add"));
	outFields->push(HX_CSTRING("uniqueTypes"));
	outFields->push(HX_CSTRING("layerNearest"));
	outFields->push(HX_CSTRING("layerFarthest"));
	outFields->push(HX_CSTRING("nearest"));
	outFields->push(HX_CSTRING("farthest"));
	outFields->push(HX_CSTRING("layers"));
	outFields->push(HX_CSTRING("first"));
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("mouseY"));
	outFields->push(HX_CSTRING("mouseX"));
	outFields->push(HX_CSTRING("camera"));
	outFields->push(HX_CSTRING("visible"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("squareRects"),
	HX_CSTRING("squarePoints"),
	HX_CSTRING("squarePointRect"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_entityNames"),
	HX_CSTRING("_recycled"),
	HX_CSTRING("_typeCount"),
	HX_CSTRING("_typeFirst"),
	HX_CSTRING("_classCount"),
	HX_CSTRING("_renderLast"),
	HX_CSTRING("_renderFirst"),
	HX_CSTRING("_layerSprites"),
	HX_CSTRING("_layerCount"),
	HX_CSTRING("_layerList"),
	HX_CSTRING("_layerSort"),
	HX_CSTRING("_sprite"),
	HX_CSTRING("_count"),
	HX_CSTRING("_updateFirst"),
	HX_CSTRING("_recycle"),
	HX_CSTRING("_remove"),
	HX_CSTRING("_add"),
	HX_CSTRING("unregisterName"),
	HX_CSTRING("registerName"),
	HX_CSTRING("removeType"),
	HX_CSTRING("addType"),
	HX_CSTRING("removeRender"),
	HX_CSTRING("addRender"),
	HX_CSTRING("removeUpdate"),
	HX_CSTRING("addUpdate"),
	HX_CSTRING("clearSprites"),
	HX_CSTRING("layerSort"),
	HX_CSTRING("updateLists"),
	HX_CSTRING("getInstance"),
	HX_CSTRING("getAll"),
	HX_CSTRING("getLayer"),
	HX_CSTRING("getClass"),
	HX_CSTRING("getType"),
	HX_CSTRING("get_uniqueTypes"),
	HX_CSTRING("uniqueTypes"),
	HX_CSTRING("get_layerNearest"),
	HX_CSTRING("layerNearest"),
	HX_CSTRING("get_layerFarthest"),
	HX_CSTRING("layerFarthest"),
	HX_CSTRING("get_nearest"),
	HX_CSTRING("nearest"),
	HX_CSTRING("get_farthest"),
	HX_CSTRING("farthest"),
	HX_CSTRING("getSpriteByLayer"),
	HX_CSTRING("layerLast"),
	HX_CSTRING("layerFirst"),
	HX_CSTRING("classFirst"),
	HX_CSTRING("typeFirst"),
	HX_CSTRING("get_layers"),
	HX_CSTRING("layers"),
	HX_CSTRING("get_first"),
	HX_CSTRING("first"),
	HX_CSTRING("layerCount"),
	HX_CSTRING("classCount"),
	HX_CSTRING("typeCount"),
	HX_CSTRING("get_count"),
	HX_CSTRING("nearestToPoint"),
	HX_CSTRING("nearestToClass"),
	HX_CSTRING("nearestToEntity"),
	HX_CSTRING("nearestToRect"),
	HX_CSTRING("collidePointInto"),
	HX_CSTRING("collideCircleInto"),
	HX_CSTRING("collideRectInto"),
	HX_CSTRING("collideLine"),
	HX_CSTRING("collidePoint"),
	HX_CSTRING("collideRect"),
	HX_CSTRING("isAtBack"),
	HX_CSTRING("isAtFront"),
	HX_CSTRING("sendBackward"),
	HX_CSTRING("bringForward"),
	HX_CSTRING("sendToBack"),
	HX_CSTRING("bringToFront"),
	HX_CSTRING("clearRecycledAll"),
	HX_CSTRING("clearRecycled"),
	HX_CSTRING("recycle"),
	HX_CSTRING("create"),
	HX_CSTRING("addMask"),
	HX_CSTRING("addGraphic"),
	HX_CSTRING("removeList"),
	HX_CSTRING("addList"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("get_sprite"),
	HX_CSTRING("sprite"),
	HX_CSTRING("get_mouseY"),
	HX_CSTRING("mouseY"),
	HX_CSTRING("get_mouseX"),
	HX_CSTRING("mouseX"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	HX_CSTRING("focusLost"),
	HX_CSTRING("focusGained"),
	HX_CSTRING("end"),
	HX_CSTRING("begin"),
	HX_CSTRING("camera"),
	HX_CSTRING("visible"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Scene"), hx::TCanCast< Scene_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Scene_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
