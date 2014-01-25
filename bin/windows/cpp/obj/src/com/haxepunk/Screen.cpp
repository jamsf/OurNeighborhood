#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
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
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
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
#ifndef INCLUDED_flash_filters_BitmapFilter
#include <flash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_geom_Transform
#include <flash/geom/Transform.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{

Void Screen_obj::__construct()
{
HX_STACK_PUSH("Screen::new","com/haxepunk/Screen.hx",16);
{
	HX_STACK_LINE(252)
	this->needsResize = false;
	HX_STACK_LINE(247)
	this->fullScaleY = (int)1;
	HX_STACK_LINE(242)
	this->fullScaleX = (int)1;
	HX_STACK_LINE(227)
	this->scale = (int)1;
	HX_STACK_LINE(212)
	this->scaleY = (int)1;
	HX_STACK_LINE(198)
	this->scaleX = (int)1;
	HX_STACK_LINE(23)
	this->init();
	HX_STACK_LINE(26)
	if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::BUFFER->__Index()))))) != (int)0))){
		HX_STACK_LINE(27)
		::com::haxepunk::HXP_obj::engine->addChild(this->_sprite);
	}
}
;
	return null();
}

Screen_obj::~Screen_obj() { }

Dynamic Screen_obj::__CreateEmpty() { return  new Screen_obj; }
hx::ObjectPtr< Screen_obj > Screen_obj::__new()
{  hx::ObjectPtr< Screen_obj > result = new Screen_obj();
	result->__construct();
	return result;}

Dynamic Screen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Screen_obj > result = new Screen_obj();
	result->__construct();
	return result;}

::com::haxepunk::graphics::Image Screen_obj::capture( ){
	HX_STACK_PUSH("Screen::capture","com/haxepunk/Screen.hx",308);
	HX_STACK_THIS(this);
	HX_STACK_LINE(308)
	return ::com::haxepunk::graphics::Image_obj::__new(this->_bitmap->__get(this->_current).StaticCast< ::flash::display::Bitmap >()->bitmapData->clone(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,capture,return )

int Screen_obj::get_mouseY( ){
	HX_STACK_PUSH("Screen::get_mouseY","com/haxepunk/Screen.hx",301);
	HX_STACK_THIS(this);
	HX_STACK_LINE(301)
	return ::Std_obj::_int(this->_sprite->get_mouseY());
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_mouseY,return )

int Screen_obj::get_mouseX( ){
	HX_STACK_PUSH("Screen::get_mouseX","com/haxepunk/Screen.hx",295);
	HX_STACK_THIS(this);
	HX_STACK_LINE(295)
	return ::Std_obj::_int(this->_sprite->get_mouseX());
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_mouseX,return )

bool Screen_obj::set_smoothing( bool value){
	HX_STACK_PUSH("Screen::set_smoothing","com/haxepunk/Screen.hx",276);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(277)
	::com::haxepunk::graphics::atlas::Atlas_obj::smooth = this->_bitmap->__get((int)0).StaticCast< ::flash::display::Bitmap >()->set_smoothing(this->_bitmap->__get((int)1).StaticCast< ::flash::display::Bitmap >()->set_smoothing(value));
	HX_STACK_LINE(278)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_smoothing,return )

bool Screen_obj::get_smoothing( ){
	HX_STACK_PUSH("Screen::get_smoothing","com/haxepunk/Screen.hx",272);
	HX_STACK_THIS(this);
	HX_STACK_LINE(272)
	return this->_bitmap->__get((int)0).StaticCast< ::flash::display::Bitmap >()->smoothing;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_smoothing,return )

Float Screen_obj::set_angle( Float value){
	HX_STACK_PUSH("Screen::set_angle","com/haxepunk/Screen.hx",260);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(261)
	if (((this->_angle == (value * ((Float(::Math_obj::PI) / Float((int)-180))))))){
		HX_STACK_LINE(261)
		return value;
	}
	HX_STACK_LINE(262)
	this->_angle = (value * ((Float(::Math_obj::PI) / Float((int)-180))));
	HX_STACK_LINE(263)
	this->update();
	HX_STACK_LINE(264)
	return this->_angle;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_angle,return )

Float Screen_obj::get_angle( ){
	HX_STACK_PUSH("Screen::get_angle","com/haxepunk/Screen.hx",258);
	HX_STACK_THIS(this);
	HX_STACK_LINE(258)
	return (this->_angle * ((Float((int)-180) / Float(::Math_obj::PI))));
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_angle,return )

Float Screen_obj::set_scale( Float value){
	HX_STACK_PUSH("Screen::set_scale","com/haxepunk/Screen.hx",229);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(230)
	if (((this->scale == value))){
		HX_STACK_LINE(230)
		return value;
	}
	HX_STACK_LINE(231)
	this->scale = value;
	HX_STACK_LINE(232)
	this->fullScaleX = (this->scaleX * this->scale);
	HX_STACK_LINE(233)
	this->fullScaleY = (this->scaleY * this->scale);
	HX_STACK_LINE(234)
	this->update();
	HX_STACK_LINE(235)
	this->needsResize = true;
	HX_STACK_LINE(236)
	return this->scale;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_scale,return )

Float Screen_obj::set_scaleY( Float value){
	HX_STACK_PUSH("Screen::set_scaleY","com/haxepunk/Screen.hx",214);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(215)
	if (((this->scaleY == value))){
		HX_STACK_LINE(215)
		return value;
	}
	HX_STACK_LINE(216)
	this->scaleY = value;
	HX_STACK_LINE(217)
	this->fullScaleY = (this->scaleY * this->scale);
	HX_STACK_LINE(218)
	this->update();
	HX_STACK_LINE(219)
	this->needsResize = true;
	HX_STACK_LINE(220)
	return this->scaleY;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_scaleY,return )

Float Screen_obj::set_scaleX( Float value){
	HX_STACK_PUSH("Screen::set_scaleX","com/haxepunk/Screen.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(201)
	if (((this->scaleX == value))){
		HX_STACK_LINE(201)
		return value;
	}
	HX_STACK_LINE(202)
	this->scaleX = value;
	HX_STACK_LINE(203)
	this->fullScaleX = (this->scaleX * this->scale);
	HX_STACK_LINE(204)
	this->update();
	HX_STACK_LINE(205)
	this->needsResize = true;
	HX_STACK_LINE(206)
	return this->scaleX;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_scaleX,return )

int Screen_obj::set_originY( int value){
	HX_STACK_PUSH("Screen::set_originY","com/haxepunk/Screen.hx",188);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(189)
	if (((this->originY == value))){
		HX_STACK_LINE(189)
		return value;
	}
	HX_STACK_LINE(190)
	this->originY = value;
	HX_STACK_LINE(191)
	this->update();
	HX_STACK_LINE(192)
	return this->originY;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_originY,return )

int Screen_obj::set_originX( int value){
	HX_STACK_PUSH("Screen::set_originX","com/haxepunk/Screen.hx",176);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(177)
	if (((this->originX == value))){
		HX_STACK_LINE(177)
		return value;
	}
	HX_STACK_LINE(178)
	this->originX = value;
	HX_STACK_LINE(179)
	this->update();
	HX_STACK_LINE(180)
	return this->originX;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_originX,return )

int Screen_obj::set_y( int value){
	HX_STACK_PUSH("Screen::set_y","com/haxepunk/Screen.hx",164);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(165)
	if (((this->y == value))){
		HX_STACK_LINE(165)
		return value;
	}
	HX_STACK_LINE(166)
	this->y = value;
	HX_STACK_LINE(167)
	this->update();
	HX_STACK_LINE(168)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_y,return )

int Screen_obj::set_x( int value){
	HX_STACK_PUSH("Screen::set_x","com/haxepunk/Screen.hx",152);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(153)
	if (((this->x == value))){
		HX_STACK_LINE(153)
		return value;
	}
	HX_STACK_LINE(154)
	this->x = value;
	HX_STACK_LINE(155)
	this->update();
	HX_STACK_LINE(156)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_x,return )

int Screen_obj::set_color( int value){
	HX_STACK_PUSH("Screen::set_color","com/haxepunk/Screen.hx",138);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(142)
	::com::haxepunk::HXP_obj::log(HX_CSTRING("screen.color should only be set in flash and html5"));
	HX_STACK_LINE(144)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_color,return )

int Screen_obj::get_color( ){
	HX_STACK_PUSH("Screen::get_color","com/haxepunk/Screen.hx",136);
	HX_STACK_THIS(this);
	HX_STACK_LINE(136)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_color,return )

Void Screen_obj::update( ){
{
		HX_STACK_PUSH("Screen::update","com/haxepunk/Screen.hx",119);
		HX_STACK_THIS(this);
		HX_STACK_LINE(120)
		if (((this->_matrix == null()))){
			HX_STACK_LINE(120)
			return null();
		}
		HX_STACK_LINE(121)
		this->_matrix->b = this->_matrix->c = (int)0;
		HX_STACK_LINE(122)
		this->_matrix->a = this->fullScaleX;
		HX_STACK_LINE(123)
		this->_matrix->d = this->fullScaleY;
		HX_STACK_LINE(124)
		this->_matrix->tx = (-(this->originX) * this->_matrix->a);
		HX_STACK_LINE(125)
		this->_matrix->ty = (-(this->originY) * this->_matrix->d);
		HX_STACK_LINE(126)
		if (((this->_angle != (int)0))){
			HX_STACK_LINE(126)
			this->_matrix->rotate(this->_angle);
		}
		HX_STACK_LINE(127)
		hx::AddEq(this->_matrix->tx,((this->originX * this->fullScaleX) + this->x));
		HX_STACK_LINE(128)
		hx::AddEq(this->_matrix->ty,((this->originY * this->fullScaleY) + this->y));
		HX_STACK_LINE(129)
		this->_sprite->get_transform()->set_matrix(this->_matrix);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,update,(void))

Void Screen_obj::redraw( ){
{
		HX_STACK_PUSH("Screen::redraw","com/haxepunk/Screen.hx",111);
		HX_STACK_THIS(this);
		HX_STACK_LINE(113)
		this->_bitmap->__get(this->_current).StaticCast< ::flash::display::Bitmap >()->set_visible(true);
		HX_STACK_LINE(114)
		this->_bitmap->__get(((int)1 - this->_current)).StaticCast< ::flash::display::Bitmap >()->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,redraw,(void))

Void Screen_obj::refresh( ){
{
		HX_STACK_PUSH("Screen::refresh","com/haxepunk/Screen.hx",98);
		HX_STACK_THIS(this);
		HX_STACK_LINE(98)
		::com::haxepunk::HXP_obj::buffer->fillRect(::com::haxepunk::HXP_obj::bounds,this->_color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,refresh,(void))

Void Screen_obj::addFilter( Array< ::Dynamic > filter){
{
		HX_STACK_PUSH("Screen::addFilter","com/haxepunk/Screen.hx",90);
		HX_STACK_THIS(this);
		HX_STACK_ARG(filter,"filter");
		HX_STACK_LINE(90)
		this->_sprite->set_filters(filter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,addFilter,(void))

Void Screen_obj::swap( ){
{
		HX_STACK_PUSH("Screen::swap","com/haxepunk/Screen.hx",79);
		HX_STACK_THIS(this);
		HX_STACK_LINE(80)
		this->_current = ((int)1 - this->_current);
		HX_STACK_LINE(81)
		::com::haxepunk::HXP_obj::buffer = this->_bitmap->__get(this->_current).StaticCast< ::flash::display::Bitmap >()->bitmapData;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,swap,(void))

Void Screen_obj::resize( ){
{
		HX_STACK_PUSH("Screen::resize","com/haxepunk/Screen.hx",57);
		HX_STACK_THIS(this);
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::flash::display::Bitmap bd = this->_bitmap->__get((int)0).StaticCast< ::flash::display::Bitmap >();		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(58)
			if (((bd != null()))){
				HX_STACK_LINE(58)
				this->_sprite->removeChild(bd);
				HX_STACK_LINE(58)
				bd->bitmapData->dispose();
			}
		}
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			::flash::display::Bitmap bd = this->_bitmap->__get((int)1).StaticCast< ::flash::display::Bitmap >();		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(59)
			if (((bd != null()))){
				HX_STACK_LINE(59)
				this->_sprite->removeChild(bd);
				HX_STACK_LINE(59)
				bd->bitmapData->dispose();
			}
		}
		HX_STACK_LINE(61)
		this->width = ::com::haxepunk::HXP_obj::width;
		HX_STACK_LINE(62)
		this->height = ::com::haxepunk::HXP_obj::height;
		HX_STACK_LINE(64)
		this->_bitmap[(int)0] = ::flash::display::Bitmap_obj::__new(::com::haxepunk::HXP_obj::createBitmap(this->width,this->height,true,null()),::flash::display::PixelSnapping_obj::NEVER,null());
		HX_STACK_LINE(65)
		this->_bitmap[(int)1] = ::flash::display::Bitmap_obj::__new(::com::haxepunk::HXP_obj::createBitmap(this->width,this->height,true,null()),::flash::display::PixelSnapping_obj::NEVER,null());
		HX_STACK_LINE(67)
		this->_sprite->addChild(this->_bitmap->__get((int)0).StaticCast< ::flash::display::Bitmap >())->set_visible(true);
		HX_STACK_LINE(68)
		this->_sprite->addChild(this->_bitmap->__get((int)1).StaticCast< ::flash::display::Bitmap >())->set_visible(false);
		HX_STACK_LINE(69)
		::com::haxepunk::HXP_obj::buffer = this->_bitmap->__get((int)0).StaticCast< ::flash::display::Bitmap >()->bitmapData;
		HX_STACK_LINE(71)
		this->_current = (int)0;
		HX_STACK_LINE(72)
		this->needsResize = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,resize,(void))

Void Screen_obj::disposeBitmap( ::flash::display::Bitmap bd){
{
		HX_STACK_PUSH("Screen::disposeBitmap","com/haxepunk/Screen.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bd,"bd");
		HX_STACK_LINE(45)
		if (((bd != null()))){
			HX_STACK_LINE(48)
			this->_sprite->removeChild(bd);
			HX_STACK_LINE(49)
			bd->bitmapData->dispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,disposeBitmap,(void))

Void Screen_obj::init( ){
{
		HX_STACK_PUSH("Screen::init","com/haxepunk/Screen.hx",33);
		HX_STACK_THIS(this);
		HX_STACK_LINE(34)
		this->_sprite = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(35)
		this->_bitmap = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(36)
		this->set_x(this->set_y(this->set_originX(this->set_originY((int)0))));
		HX_STACK_LINE(37)
		this->_angle = this->_current = (int)0;
		HX_STACK_LINE(38)
		this->set_scale(this->set_scaleX(this->set_scaleY((int)1)));
		HX_STACK_LINE(39)
		this->_color = (int)0;
		HX_STACK_LINE(40)
		this->_matrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(41)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,init,(void))


Screen_obj::Screen_obj()
{
}

void Screen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Screen);
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_angle,"_angle");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_current,"_current");
	HX_MARK_MEMBER_NAME(_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(needsResize,"needsResize");
	HX_MARK_MEMBER_NAME(fullScaleY,"fullScaleY");
	HX_MARK_MEMBER_NAME(fullScaleX,"fullScaleX");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void Screen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_angle,"_angle");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_current,"_current");
	HX_VISIT_MEMBER_NAME(_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(needsResize,"needsResize");
	HX_VISIT_MEMBER_NAME(fullScaleY,"fullScaleY");
	HX_VISIT_MEMBER_NAME(fullScaleX,"fullScaleX");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic Screen_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"angle") ) { return get_angle(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"_angle") ) { return _angle; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"redraw") ) { return redraw_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return _bitmap; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"capture") ) { return capture_dyn(); }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { return _current; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return get_smoothing(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"addFilter") ) { return addFilter_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"fullScaleY") ) { return fullScaleY; }
		if (HX_FIELD_EQ(inName,"fullScaleX") ) { return fullScaleX; }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"needsResize") ) { return needsResize; }
		if (HX_FIELD_EQ(inName,"set_originY") ) { return set_originY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_originX") ) { return set_originX_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_smoothing") ) { return set_smoothing_dyn(); }
		if (HX_FIELD_EQ(inName,"get_smoothing") ) { return get_smoothing_dyn(); }
		if (HX_FIELD_EQ(inName,"disposeBitmap") ) { return disposeBitmap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Screen_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { return set_angle(inValue); }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp) return set_scale(inValue);scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp) return set_scaleY(inValue);scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp) return set_scaleX(inValue);scaleX=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { if (inCallProp) return set_originY(inValue);originY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originX") ) { if (inCallProp) return set_originX(inValue);originX=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { _current=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return set_smoothing(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullScaleY") ) { fullScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullScaleX") ) { fullScaleX=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"needsResize") ) { needsResize=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Screen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_angle"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_current"));
	outFields->push(HX_CSTRING("_bitmap"));
	outFields->push(HX_CSTRING("_sprite"));
	outFields->push(HX_CSTRING("mouseY"));
	outFields->push(HX_CSTRING("mouseX"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("smoothing"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("needsResize"));
	outFields->push(HX_CSTRING("fullScaleY"));
	outFields->push(HX_CSTRING("fullScaleX"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("originY"));
	outFields->push(HX_CSTRING("originX"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("color"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_color"),
	HX_CSTRING("_angle"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_current"),
	HX_CSTRING("_bitmap"),
	HX_CSTRING("_sprite"),
	HX_CSTRING("capture"),
	HX_CSTRING("get_mouseY"),
	HX_CSTRING("mouseY"),
	HX_CSTRING("get_mouseX"),
	HX_CSTRING("mouseX"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("set_smoothing"),
	HX_CSTRING("get_smoothing"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("get_angle"),
	HX_CSTRING("needsResize"),
	HX_CSTRING("fullScaleY"),
	HX_CSTRING("fullScaleX"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("scale"),
	HX_CSTRING("set_scaleY"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("set_scaleX"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("set_originY"),
	HX_CSTRING("originY"),
	HX_CSTRING("set_originX"),
	HX_CSTRING("originX"),
	HX_CSTRING("set_y"),
	HX_CSTRING("y"),
	HX_CSTRING("set_x"),
	HX_CSTRING("x"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_color"),
	HX_CSTRING("update"),
	HX_CSTRING("redraw"),
	HX_CSTRING("refresh"),
	HX_CSTRING("addFilter"),
	HX_CSTRING("swap"),
	HX_CSTRING("resize"),
	HX_CSTRING("disposeBitmap"),
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

Class Screen_obj::__mClass;

void Screen_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Screen"), hx::TCanCast< Screen_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Screen_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
