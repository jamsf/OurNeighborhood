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
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_atlas_TextureAtlas
#include <com/haxepunk/graphics/atlas/TextureAtlas.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
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
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
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

Void Image_obj::__construct(Dynamic source,::flash::geom::Rectangle clipRect,::String __o_name)
{
HX_STACK_PUSH("Image::new","com/haxepunk/graphics/Image.hx",21);
::String name = __o_name.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(473)
	this->smooth = false;
	HX_STACK_LINE(72)
	super::__construct();
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		this->angle = (int)0;
		HX_STACK_LINE(73)
		this->set_scale(this->scaleX = this->scaleY = (int)1);
		HX_STACK_LINE(73)
		this->originX = this->originY = (int)0;
		HX_STACK_LINE(73)
		this->_alpha = (int)1;
		HX_STACK_LINE(73)
		this->_flipped = false;
		HX_STACK_LINE(73)
		this->_color = (int)16777215;
		HX_STACK_LINE(73)
		this->_red = this->_green = this->_blue = (int)1;
		HX_STACK_LINE(73)
		this->_matrix = ::com::haxepunk::HXP_obj::matrix;
	}
	HX_STACK_LINE(76)
	if (((bool((this->_source == null())) && bool((this->_region == null()))))){
		HX_STACK_LINE(78)
		this->_class = name;
		HX_STACK_LINE(79)
		if ((::Std_obj::is(source,hx::ClassOf< ::com::haxepunk::graphics::atlas::TextureAtlas >()))){
			HX_STACK_LINE(81)
			this->_blit = false;
			HX_STACK_LINE(81)
			this->_region = (hx::TCast< com::haxepunk::graphics::atlas::TextureAtlas >::cast(source))->getRegion(name);
			HX_STACK_LINE(81)
			this->_sourceRect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->_region->rect->width,this->_region->rect->height);
		}
		else{
			HX_STACK_LINE(83)
			if ((::Std_obj::is(source,hx::ClassOf< ::com::haxepunk::graphics::atlas::AtlasRegion >()))){
				HX_STACK_LINE(85)
				::com::haxepunk::graphics::atlas::AtlasRegion region = source;		HX_STACK_VAR(region,"region");
				HX_STACK_LINE(85)
				this->_blit = false;
				HX_STACK_LINE(85)
				this->_region = region;
				HX_STACK_LINE(85)
				this->_sourceRect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->_region->rect->width,this->_region->rect->height);
			}
			else{
				HX_STACK_LINE(87)
				if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::HARDWARE->__Index()))))) != (int)0))){
					HX_STACK_LINE(89)
					if ((::Std_obj::is(source,hx::ClassOf< ::String >()))){
						HX_STACK_LINE(90)
						this->_class = source;
					}
					else{
						HX_STACK_LINE(91)
						if (((name == HX_CSTRING("")))){
							HX_STACK_LINE(92)
							this->_class = ::Type_obj::getClassName(::Type_obj::getClass(source));
						}
					}
					HX_STACK_LINE(94)
					{
						HX_STACK_LINE(94)
						this->_blit = false;
						HX_STACK_LINE(94)
						this->_region = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(source);
						HX_STACK_LINE(94)
						this->_sourceRect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->_region->rect->width,this->_region->rect->height);
					}
				}
				else{
					HX_STACK_LINE(96)
					if ((::Std_obj::is(source,hx::ClassOf< ::flash::display::BitmapData >()))){
						HX_STACK_LINE(98)
						::flash::display::BitmapData bitmap = source;		HX_STACK_VAR(bitmap,"bitmap");
						HX_STACK_LINE(98)
						this->_blit = true;
						HX_STACK_LINE(98)
						this->_sourceRect = bitmap->get_rect();
						HX_STACK_LINE(98)
						this->_source = bitmap;
					}
					else{
						HX_STACK_LINE(102)
						if ((::Std_obj::is(source,hx::ClassOf< ::String >()))){
							HX_STACK_LINE(103)
							this->_class = source;
						}
						else{
							HX_STACK_LINE(104)
							if (((name == HX_CSTRING("")))){
								HX_STACK_LINE(105)
								this->_class = ::Type_obj::getClassName(::Type_obj::getClass(source));
							}
						}
						HX_STACK_LINE(107)
						{
							HX_STACK_LINE(107)
							::flash::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(source);		HX_STACK_VAR(bitmap,"bitmap");
							HX_STACK_LINE(107)
							this->_blit = true;
							HX_STACK_LINE(107)
							this->_sourceRect = bitmap->get_rect();
							HX_STACK_LINE(107)
							this->_source = bitmap;
						}
					}
				}
			}
		}
		HX_STACK_LINE(110)
		if (((bool((this->_source == null())) && bool((this->_region == null()))))){
			HX_STACK_LINE(111)
			hx::Throw (HX_CSTRING("Invalid source image."));
		}
	}
	HX_STACK_LINE(114)
	if (((clipRect != null()))){
		HX_STACK_LINE(116)
		if (((clipRect->width == (int)0))){
			HX_STACK_LINE(116)
			clipRect->width = this->_sourceRect->width;
		}
		HX_STACK_LINE(117)
		if (((clipRect->height == (int)0))){
			HX_STACK_LINE(117)
			clipRect->height = this->_sourceRect->height;
		}
		HX_STACK_LINE(118)
		if ((!(this->_blit))){
			HX_STACK_LINE(119)
			this->_region = this->_region->clip(clipRect,null());
		}
		HX_STACK_LINE(122)
		this->_sourceRect = clipRect;
	}
	HX_STACK_LINE(125)
	if ((this->_blit)){
		HX_STACK_LINE(127)
		this->_bitmap = ::flash::display::Bitmap_obj::__new(null(),null(),null());
		HX_STACK_LINE(128)
		this->_colorTransform = ::flash::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(130)
		this->createBuffer();
		HX_STACK_LINE(131)
		this->updateBuffer(null());
	}
}
;
	return null();
}

Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new(Dynamic source,::flash::geom::Rectangle clipRect,::String __o_name)
{  hx::ObjectPtr< Image_obj > result = new Image_obj();
	result->__construct(source,clipRect,__o_name);
	return result;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > result = new Image_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::flash::geom::Rectangle Image_obj::get_clipRect( ){
	HX_STACK_PUSH("Image::get_clipRect","com/haxepunk/graphics/Image.hx",512);
	HX_STACK_THIS(this);
	HX_STACK_LINE(512)
	return this->_sourceRect;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_clipRect,return )

Float Image_obj::set_scaledHeight( Float h){
	HX_STACK_PUSH("Image::set_scaledHeight","com/haxepunk/graphics/Image.hx",503);
	HX_STACK_THIS(this);
	HX_STACK_ARG(h,"h");
	HX_STACK_LINE(504)
	this->scaleY = (Float((Float(h) / Float(this->get_scale()))) / Float(this->get_height()));
	HX_STACK_LINE(505)
	return this->scaleY;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_scaledHeight,return )

Float Image_obj::get_scaledHeight( ){
	HX_STACK_PUSH("Image::get_scaledHeight","com/haxepunk/graphics/Image.hx",502);
	HX_STACK_THIS(this);
	HX_STACK_LINE(502)
	return ((this->get_height() * this->scaleY) * this->get_scale());
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_scaledHeight,return )

Float Image_obj::set_scaledWidth( Float w){
	HX_STACK_PUSH("Image::set_scaledWidth","com/haxepunk/graphics/Image.hx",493);
	HX_STACK_THIS(this);
	HX_STACK_ARG(w,"w");
	HX_STACK_LINE(494)
	this->scaleX = (Float((Float(w) / Float(this->get_scale()))) / Float(this->get_width()));
	HX_STACK_LINE(495)
	return this->scaleX;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_scaledWidth,return )

Float Image_obj::get_scaledWidth( ){
	HX_STACK_PUSH("Image::get_scaledWidth","com/haxepunk/graphics/Image.hx",492);
	HX_STACK_THIS(this);
	HX_STACK_LINE(492)
	return ((this->get_width() * this->scaleX) * this->get_scale());
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_scaledWidth,return )

int Image_obj::get_height( ){
	HX_STACK_PUSH("Image::get_height","com/haxepunk/graphics/Image.hx",486);
	HX_STACK_THIS(this);
	HX_STACK_LINE(486)
	return ::Std_obj::_int((  ((this->_blit)) ? Float(this->_bufferRect->height) : Float((  ((!(this->_region->rotated))) ? Float(this->_region->rect->height) : Float(this->_region->rect->width) )) ));
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_height,return )

int Image_obj::get_width( ){
	HX_STACK_PUSH("Image::get_width","com/haxepunk/graphics/Image.hx",480);
	HX_STACK_THIS(this);
	HX_STACK_LINE(480)
	return ::Std_obj::_int((  ((this->_blit)) ? Float(this->_bufferRect->width) : Float((  ((!(this->_region->rotated))) ? Float(this->_region->rect->width) : Float(this->_region->rect->height) )) ));
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_width,return )

Void Image_obj::centerOO( ){
{
		HX_STACK_PUSH("Image::centerOO","com/haxepunk/graphics/Image.hx",452);
		HX_STACK_THIS(this);
		HX_STACK_LINE(453)
		hx::AddEq(this->x,this->originX);
		HX_STACK_LINE(454)
		hx::AddEq(this->y,this->originY);
		HX_STACK_LINE(455)
		this->centerOrigin();
		HX_STACK_LINE(456)
		hx::SubEq(this->x,this->originX);
		HX_STACK_LINE(457)
		hx::SubEq(this->y,this->originY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,centerOO,(void))

Void Image_obj::centerOrigin( ){
{
		HX_STACK_PUSH("Image::centerOrigin","com/haxepunk/graphics/Image.hx",443);
		HX_STACK_THIS(this);
		HX_STACK_LINE(444)
		this->originX = ::Std_obj::_int((Float(this->get_width()) / Float((int)2)));
		HX_STACK_LINE(445)
		this->originY = ::Std_obj::_int((Float(this->get_height()) / Float((int)2)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,centerOrigin,(void))

bool Image_obj::set_flipped( bool value){
	HX_STACK_PUSH("Image::set_flipped","com/haxepunk/graphics/Image.hx",409);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(410)
	if (((bool((this->_flipped == value)) || bool((this->_class == HX_CSTRING("")))))){
		HX_STACK_LINE(410)
		return value;
	}
	HX_STACK_LINE(412)
	this->_flipped = value;
	HX_STACK_LINE(413)
	if ((this->_blit)){
		HX_STACK_LINE(415)
		::flash::display::BitmapData temp = this->_source;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(416)
		if (((bool(!(value)) || bool((this->_flip != null()))))){
			HX_STACK_LINE(417)
			this->_source = this->_flip;
		}
		else{
			HX_STACK_LINE(420)
			if ((::com::haxepunk::graphics::Image_obj::_flips->exists(this->_class))){
				HX_STACK_LINE(421)
				this->_source = ::com::haxepunk::graphics::Image_obj::_flips->get(this->_class);
			}
			else{
				HX_STACK_LINE(426)
				this->_source = ::com::haxepunk::HXP_obj::createBitmap(this->_source->get_width(),this->_source->get_height(),true,null());
				HX_STACK_LINE(427)
				::com::haxepunk::graphics::Image_obj::_flips->set(this->_class,this->_source);
				HX_STACK_LINE(428)
				::com::haxepunk::HXP_obj::matrix->identity();
				HX_STACK_LINE(429)
				::com::haxepunk::HXP_obj::matrix->a = (int)-1;
				HX_STACK_LINE(430)
				::com::haxepunk::HXP_obj::matrix->tx = this->_source->get_width();
				HX_STACK_LINE(431)
				this->_source->draw(temp,::com::haxepunk::HXP_obj::matrix,null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(433)
		this->_flip = temp;
		HX_STACK_LINE(434)
		this->updateBuffer(null());
	}
	HX_STACK_LINE(436)
	return this->_flipped;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_flipped,return )

bool Image_obj::get_flipped( ){
	HX_STACK_PUSH("Image::get_flipped","com/haxepunk/graphics/Image.hx",407);
	HX_STACK_THIS(this);
	HX_STACK_LINE(407)
	return this->_flipped;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_flipped,return )

int Image_obj::set_color( int value){
	HX_STACK_PUSH("Image::set_color","com/haxepunk/graphics/Image.hx",375);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(376)
	hx::AndEq(value,(int)16777215);
	HX_STACK_LINE(377)
	if (((this->_color == value))){
		HX_STACK_LINE(377)
		return value;
	}
	HX_STACK_LINE(378)
	this->_color = value;
	HX_STACK_LINE(380)
	this->_red = (Float(((int((int(this->_color) >> int((int)16))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(381)
	this->_green = (Float(((int((int(this->_color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(382)
	this->_blue = (Float(((int(this->_color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(383)
	if ((this->_blit)){
		HX_STACK_LINE(385)
		if (((bool((this->_alpha == (int)1)) && bool((this->_color == (int)16777215))))){
			HX_STACK_LINE(386)
			this->_tint = null();
		}
		else{
			HX_STACK_LINE(391)
			this->_tint = this->_colorTransform;
			HX_STACK_LINE(392)
			this->_tint->redMultiplier = this->_red;
			HX_STACK_LINE(393)
			this->_tint->greenMultiplier = this->_green;
			HX_STACK_LINE(394)
			this->_tint->blueMultiplier = this->_blue;
			HX_STACK_LINE(395)
			this->_tint->alphaMultiplier = this->_alpha;
		}
		HX_STACK_LINE(397)
		this->updateBuffer(null());
	}
	HX_STACK_LINE(399)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_color,return )

int Image_obj::get_color( ){
	HX_STACK_PUSH("Image::get_color","com/haxepunk/graphics/Image.hx",373);
	HX_STACK_THIS(this);
	HX_STACK_LINE(373)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_color,return )

Float Image_obj::set_alpha( Float value){
	HX_STACK_PUSH("Image::set_alpha","com/haxepunk/graphics/Image.hx",346);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(347)
	value = (  (((value < (int)0))) ? Float((int)0) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
	HX_STACK_LINE(348)
	if (((this->_alpha == value))){
		HX_STACK_LINE(348)
		return value;
	}
	HX_STACK_LINE(349)
	this->_alpha = value;
	HX_STACK_LINE(350)
	if ((this->_blit)){
		HX_STACK_LINE(352)
		if (((bool((this->_alpha == (int)1)) && bool((this->_color == (int)16777215))))){
			HX_STACK_LINE(353)
			this->_tint = null();
		}
		else{
			HX_STACK_LINE(358)
			this->_tint = this->_colorTransform;
			HX_STACK_LINE(359)
			this->_tint->redMultiplier = this->_red;
			HX_STACK_LINE(360)
			this->_tint->greenMultiplier = this->_green;
			HX_STACK_LINE(361)
			this->_tint->blueMultiplier = this->_blue;
			HX_STACK_LINE(362)
			this->_tint->alphaMultiplier = this->_alpha;
		}
		HX_STACK_LINE(364)
		this->updateBuffer(null());
	}
	HX_STACK_LINE(366)
	return this->_alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_alpha,return )

Float Image_obj::get_alpha( ){
	HX_STACK_PUSH("Image::get_alpha","com/haxepunk/graphics/Image.hx",344);
	HX_STACK_THIS(this);
	HX_STACK_LINE(344)
	return this->_alpha;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_alpha,return )

Void Image_obj::clear( ){
{
		HX_STACK_PUSH("Image::clear","com/haxepunk/graphics/Image.hx",335);
		HX_STACK_THIS(this);
		HX_STACK_LINE(336)
		if (((this->_buffer == null()))){
			HX_STACK_LINE(336)
			return null();
		}
		HX_STACK_LINE(337)
		this->_buffer->fillRect(this->_bufferRect,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,clear,(void))

Void Image_obj::updateBuffer( hx::Null< bool >  __o_clearBefore){
bool clearBefore = __o_clearBefore.Default(false);
	HX_STACK_PUSH("Image::updateBuffer","com/haxepunk/graphics/Image.hx",324);
	HX_STACK_THIS(this);
	HX_STACK_ARG(clearBefore,"clearBefore");
{
		HX_STACK_LINE(325)
		if (((this->_source == null()))){
			HX_STACK_LINE(325)
			return null();
		}
		HX_STACK_LINE(326)
		if ((clearBefore)){
			HX_STACK_LINE(326)
			this->_buffer->fillRect(this->_bufferRect,(int)0);
		}
		HX_STACK_LINE(327)
		this->_buffer->copyPixels(this->_source,this->_sourceRect,::com::haxepunk::HXP_obj::zero,null(),null(),null());
		HX_STACK_LINE(328)
		if (((this->_tint != null()))){
			HX_STACK_LINE(328)
			this->_buffer->colorTransform(this->_bufferRect,this->_tint);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,updateBuffer,(void))

Void Image_obj::render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_PUSH("Image::render","com/haxepunk/graphics/Image.hx",173);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(174)
		Float sx = (this->get_scale() * this->scaleX);		HX_STACK_VAR(sx,"sx");
		Float sy = (this->get_scale() * this->scaleY);		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(178)
		this->_point->x = (((point->x + this->x) - this->originX) - (camera->x * this->scrollX));
		HX_STACK_LINE(179)
		this->_point->y = (((point->y + this->y) - this->originY) - (camera->y * this->scrollY));
		HX_STACK_LINE(181)
		if ((this->_blit)){
			HX_STACK_LINE(182)
			if (((this->_buffer != null()))){
				HX_STACK_LINE(185)
				if (((bool((bool((bool((this->angle == (int)0)) && bool((sx == (int)1)))) && bool((sy == (int)1)))) && bool((this->blend == null()))))){
					HX_STACK_LINE(187)
					target->copyPixels(this->_buffer,this->_bufferRect,this->_point,null(),null(),true);
				}
				else{
					HX_STACK_LINE(194)
					this->_matrix->b = this->_matrix->c = (int)0;
					HX_STACK_LINE(195)
					this->_matrix->a = sx;
					HX_STACK_LINE(196)
					this->_matrix->d = sy;
					HX_STACK_LINE(197)
					this->_matrix->tx = (-(this->originX) * sx);
					HX_STACK_LINE(198)
					this->_matrix->ty = (-(this->originY) * sy);
					HX_STACK_LINE(199)
					if (((this->angle != (int)0))){
						HX_STACK_LINE(199)
						this->_matrix->rotate((this->angle * ((Float(::Math_obj::PI) / Float((int)-180)))));
					}
					HX_STACK_LINE(200)
					hx::AddEq(this->_matrix->tx,(this->originX + this->_point->x));
					HX_STACK_LINE(201)
					hx::AddEq(this->_matrix->ty,(this->originY + this->_point->y));
					HX_STACK_LINE(202)
					target->draw(this->_bitmap,this->_matrix,null(),this->blend,null(),this->_bitmap->smoothing);
				}
			}
		}
		else{
			HX_STACK_LINE(208)
			Float fsx = ::com::haxepunk::HXP_obj::screen->fullScaleX;		HX_STACK_VAR(fsx,"fsx");
			Float fsy = ::com::haxepunk::HXP_obj::screen->fullScaleY;		HX_STACK_VAR(fsy,"fsy");
			HX_STACK_LINE(211)
			if (((this->angle == (int)0))){
				HX_STACK_LINE(214)
				if ((!(((bool((sx == (int)1)) && bool((sy == (int)1))))))){
					HX_STACK_LINE(216)
					this->_point->x = (((point->x + this->x) - (this->originX * sx)) - (camera->x * this->scrollX));
					HX_STACK_LINE(217)
					this->_point->y = (((point->y + this->y) - (this->originY * sy)) - (camera->y * this->scrollY));
				}
				HX_STACK_LINE(220)
				if ((this->_flipped)){
					HX_STACK_LINE(220)
					hx::AddEq(this->_point->x,(this->_sourceRect->width * sx));
				}
				HX_STACK_LINE(222)
				this->_point->x = ::Math_obj::floor((this->_point->x * fsx));
				HX_STACK_LINE(223)
				this->_point->y = ::Math_obj::floor((this->_point->y * fsy));
				HX_STACK_LINE(226)
				{
					HX_STACK_LINE(226)
					::com::haxepunk::graphics::atlas::AtlasRegion _this = this->_region;		HX_STACK_VAR(_this,"_this");
					int layer = this->layer;		HX_STACK_VAR(layer,"layer");
					Float scaleX = ((sx * fsx) * ((  ((this->_flipped)) ? int((int)-1) : int((int)1) )));		HX_STACK_VAR(scaleX,"scaleX");
					Float scaleY = (sy * fsy);		HX_STACK_VAR(scaleY,"scaleY");
					Float angle = this->angle;		HX_STACK_VAR(angle,"angle");
					HX_STACK_LINE(226)
					if ((_this->rotated)){
						HX_STACK_LINE(226)
						angle = (angle + (int)90);
					}
					HX_STACK_LINE(226)
					{
						HX_STACK_LINE(226)
						::com::haxepunk::graphics::atlas::AtlasData _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(226)
						if (((_this1->_layerIndex != layer))){
							HX_STACK_LINE(226)
							if ((_this1->_layers->exists(layer))){
								HX_STACK_LINE(226)
								_this1->_layer = _this1->_layers->get(layer);
							}
							else{
								HX_STACK_LINE(226)
								_this1->_layer = ::com::haxepunk::graphics::atlas::Layer_obj::__new();
								HX_STACK_LINE(226)
								_this1->_layers->set(layer,_this1->_layer);
							}
							HX_STACK_LINE(226)
							_this1->_layerIndex = layer;
						}
						HX_STACK_LINE(226)
						Array< Float > d = _this1->_layer->data;		HX_STACK_VAR(d,"d");
						HX_STACK_LINE(226)
						_this1->_layer->dirty = true;
						HX_STACK_LINE(226)
						d[(_this1->_layer->index)++] = this->_point->x;
						HX_STACK_LINE(226)
						d[(_this1->_layer->index)++] = this->_point->y;
						HX_STACK_LINE(226)
						d[(_this1->_layer->index)++] = _this->tileIndex;
						HX_STACK_LINE(226)
						if (((angle == (int)0))){
							HX_STACK_LINE(226)
							d[(_this1->_layer->index)++] = scaleX;
							HX_STACK_LINE(226)
							d[(_this1->_layer->index)++] = (int)0;
							HX_STACK_LINE(226)
							d[(_this1->_layer->index)++] = (int)0;
							HX_STACK_LINE(226)
							d[(_this1->_layer->index)++] = scaleY;
						}
						else{
							HX_STACK_LINE(226)
							Float cos = ::Math_obj::cos((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(cos,"cos");
							HX_STACK_LINE(226)
							Float sin = ::Math_obj::sin((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(sin,"sin");
							HX_STACK_LINE(226)
							d[(_this1->_layer->index)++] = (cos * scaleX);
							HX_STACK_LINE(226)
							d[(_this1->_layer->index)++] = (-(sin) * scaleY);
							HX_STACK_LINE(226)
							d[(_this1->_layer->index)++] = (sin * scaleX);
							HX_STACK_LINE(226)
							d[(_this1->_layer->index)++] = (cos * scaleY);
						}
						HX_STACK_LINE(226)
						if ((_this1->_flagRGB)){
							HX_STACK_LINE(226)
							d[(_this1->_layer->index)++] = this->_red;
							HX_STACK_LINE(226)
							d[(_this1->_layer->index)++] = this->_green;
							HX_STACK_LINE(226)
							d[(_this1->_layer->index)++] = this->_blue;
						}
						HX_STACK_LINE(226)
						if ((_this1->_flagAlpha)){
							HX_STACK_LINE(226)
							d[(_this1->_layer->index)++] = this->_alpha;
						}
						HX_STACK_LINE(226)
						if (((_this1->_layer->index > ::com::haxepunk::graphics::atlas::Atlas_obj::drawCallThreshold))){
							HX_STACK_LINE(226)
							::com::haxepunk::graphics::atlas::Layer layer1 = _this1->_layer;		HX_STACK_VAR(layer1,"layer1");
							HX_STACK_LINE(226)
							{
								HX_STACK_LINE(226)
								if (((layer1->index < layer1->data->length))){
									HX_STACK_LINE(226)
									layer1->data->splice(layer1->index,(layer1->data->length - layer1->index));
								}
								HX_STACK_LINE(226)
								layer1->index = (int)0;
								HX_STACK_LINE(226)
								layer1->dirty = false;
							}
							HX_STACK_LINE(226)
							_this1->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layer)->get_graphics(),layer1->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this1->_renderFlags);
						}
					}
				}
			}
			else{
				HX_STACK_LINE(232)
				Float theta = (this->angle * ((Float(::Math_obj::PI) / Float((int)-180))));		HX_STACK_VAR(theta,"theta");
				HX_STACK_LINE(233)
				Float cos = ::Math_obj::cos(theta);		HX_STACK_VAR(cos,"cos");
				HX_STACK_LINE(234)
				Float sin = ::Math_obj::sin(theta);		HX_STACK_VAR(sin,"sin");
				HX_STACK_LINE(236)
				if ((this->get_flipped())){
					HX_STACK_LINE(236)
					hx::MultEq(sx,(int)-1);
				}
				HX_STACK_LINE(239)
				Float b = ((sx * fsx) * sin);		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(240)
				Float a = ((sx * fsx) * cos);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(242)
				Float d = ((sy * fsy) * cos);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(243)
				Float c = ((sy * fsy) * -(sin));		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(245)
				Float tx = (-(this->originX) * sx);		HX_STACK_VAR(tx,"tx");
				Float ty = (-(this->originY) * sy);		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(247)
				Float tx1 = ((tx * cos) - (ty * sin));		HX_STACK_VAR(tx1,"tx1");
				HX_STACK_LINE(248)
				ty = ((((((tx * sin) + (ty * cos)) + this->originY) + this->_point->y)) * fsy);
				HX_STACK_LINE(249)
				tx = ((((tx1 + this->originX) + this->_point->x)) * fsx);
				HX_STACK_LINE(251)
				{
					HX_STACK_LINE(251)
					::com::haxepunk::graphics::atlas::AtlasRegion _this = this->_region;		HX_STACK_VAR(_this,"_this");
					Float tx2 = ::Std_obj::_int(tx);		HX_STACK_VAR(tx2,"tx2");
					Float ty1 = ::Std_obj::_int(ty);		HX_STACK_VAR(ty1,"ty1");
					int layer = this->layer;		HX_STACK_VAR(layer,"layer");
					Float red = this->_red;		HX_STACK_VAR(red,"red");
					Float green = this->_green;		HX_STACK_VAR(green,"green");
					Float blue = this->_blue;		HX_STACK_VAR(blue,"blue");
					Float alpha = this->_alpha;		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(251)
					if ((_this->rotated)){
						HX_STACK_LINE(251)
						::flash::geom::Matrix matrix = ::flash::geom::Matrix_obj::__new(a,b,c,d,tx2,ty1);		HX_STACK_VAR(matrix,"matrix");
						HX_STACK_LINE(251)
						matrix->rotate(((int)90 * ((Float(::Math_obj::PI) / Float((int)-180)))));
						HX_STACK_LINE(251)
						{
							HX_STACK_LINE(251)
							::com::haxepunk::graphics::atlas::AtlasData _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(251)
							if (((_this1->_layerIndex != layer))){
								HX_STACK_LINE(251)
								if ((_this1->_layers->exists(layer))){
									HX_STACK_LINE(251)
									_this1->_layer = _this1->_layers->get(layer);
								}
								else{
									HX_STACK_LINE(251)
									_this1->_layer = ::com::haxepunk::graphics::atlas::Layer_obj::__new();
									HX_STACK_LINE(251)
									_this1->_layers->set(layer,_this1->_layer);
								}
								HX_STACK_LINE(251)
								_this1->_layerIndex = layer;
							}
							HX_STACK_LINE(251)
							Array< Float > data = _this1->_layer->data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(251)
							_this1->_layer->dirty = true;
							HX_STACK_LINE(251)
							data[(_this1->_layer->index)++] = matrix->tx;
							HX_STACK_LINE(251)
							data[(_this1->_layer->index)++] = matrix->ty;
							HX_STACK_LINE(251)
							data[(_this1->_layer->index)++] = _this->tileIndex;
							HX_STACK_LINE(251)
							data[(_this1->_layer->index)++] = matrix->a;
							HX_STACK_LINE(251)
							data[(_this1->_layer->index)++] = matrix->b;
							HX_STACK_LINE(251)
							data[(_this1->_layer->index)++] = matrix->c;
							HX_STACK_LINE(251)
							data[(_this1->_layer->index)++] = matrix->d;
							HX_STACK_LINE(251)
							if ((_this1->_flagRGB)){
								HX_STACK_LINE(251)
								data[(_this1->_layer->index)++] = red;
								HX_STACK_LINE(251)
								data[(_this1->_layer->index)++] = green;
								HX_STACK_LINE(251)
								data[(_this1->_layer->index)++] = blue;
							}
							HX_STACK_LINE(251)
							if ((_this1->_flagAlpha)){
								HX_STACK_LINE(251)
								data[(_this1->_layer->index)++] = alpha;
							}
							HX_STACK_LINE(251)
							if (((_this1->_layer->index > ::com::haxepunk::graphics::atlas::Atlas_obj::drawCallThreshold))){
								HX_STACK_LINE(251)
								::com::haxepunk::graphics::atlas::Layer layer1 = _this1->_layer;		HX_STACK_VAR(layer1,"layer1");
								HX_STACK_LINE(251)
								{
									HX_STACK_LINE(251)
									if (((layer1->index < layer1->data->length))){
										HX_STACK_LINE(251)
										layer1->data->splice(layer1->index,(layer1->data->length - layer1->index));
									}
									HX_STACK_LINE(251)
									layer1->index = (int)0;
									HX_STACK_LINE(251)
									layer1->dirty = false;
								}
								HX_STACK_LINE(251)
								_this1->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layer)->get_graphics(),layer1->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this1->_renderFlags);
							}
						}
					}
					else{
						HX_STACK_LINE(251)
						::com::haxepunk::graphics::atlas::AtlasData _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(251)
						if (((_this1->_layerIndex != layer))){
							HX_STACK_LINE(251)
							if ((_this1->_layers->exists(layer))){
								HX_STACK_LINE(251)
								_this1->_layer = _this1->_layers->get(layer);
							}
							else{
								HX_STACK_LINE(251)
								_this1->_layer = ::com::haxepunk::graphics::atlas::Layer_obj::__new();
								HX_STACK_LINE(251)
								_this1->_layers->set(layer,_this1->_layer);
							}
							HX_STACK_LINE(251)
							_this1->_layerIndex = layer;
						}
						HX_STACK_LINE(251)
						Array< Float > data = _this1->_layer->data;		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(251)
						_this1->_layer->dirty = true;
						HX_STACK_LINE(251)
						data[(_this1->_layer->index)++] = tx2;
						HX_STACK_LINE(251)
						data[(_this1->_layer->index)++] = ty1;
						HX_STACK_LINE(251)
						data[(_this1->_layer->index)++] = _this->tileIndex;
						HX_STACK_LINE(251)
						data[(_this1->_layer->index)++] = a;
						HX_STACK_LINE(251)
						data[(_this1->_layer->index)++] = b;
						HX_STACK_LINE(251)
						data[(_this1->_layer->index)++] = c;
						HX_STACK_LINE(251)
						data[(_this1->_layer->index)++] = d;
						HX_STACK_LINE(251)
						if ((_this1->_flagRGB)){
							HX_STACK_LINE(251)
							data[(_this1->_layer->index)++] = red;
							HX_STACK_LINE(251)
							data[(_this1->_layer->index)++] = green;
							HX_STACK_LINE(251)
							data[(_this1->_layer->index)++] = blue;
						}
						HX_STACK_LINE(251)
						if ((_this1->_flagAlpha)){
							HX_STACK_LINE(251)
							data[(_this1->_layer->index)++] = alpha;
						}
						HX_STACK_LINE(251)
						if (((_this1->_layer->index > ::com::haxepunk::graphics::atlas::Atlas_obj::drawCallThreshold))){
							HX_STACK_LINE(251)
							::com::haxepunk::graphics::atlas::Layer layer1 = _this1->_layer;		HX_STACK_VAR(layer1,"layer1");
							HX_STACK_LINE(251)
							{
								HX_STACK_LINE(251)
								if (((layer1->index < layer1->data->length))){
									HX_STACK_LINE(251)
									layer1->data->splice(layer1->index,(layer1->data->length - layer1->index));
								}
								HX_STACK_LINE(251)
								layer1->index = (int)0;
								HX_STACK_LINE(251)
								layer1->dirty = false;
							}
							HX_STACK_LINE(251)
							_this1->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layer)->get_graphics(),layer1->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this1->_renderFlags);
						}
					}
				}
			}
		}
	}
return null();
}


Void Image_obj::createBuffer( ){
{
		HX_STACK_PUSH("Image::createBuffer","com/haxepunk/graphics/Image.hx",165);
		HX_STACK_THIS(this);
		HX_STACK_LINE(166)
		this->_buffer = ::com::haxepunk::HXP_obj::createBitmap(::Std_obj::_int(this->_sourceRect->width),::Std_obj::_int(this->_sourceRect->height),true,null());
		HX_STACK_LINE(167)
		this->_bufferRect = this->_buffer->get_rect();
		HX_STACK_LINE(168)
		this->_bitmap->set_bitmapData(this->_buffer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,createBuffer,(void))

Void Image_obj::init( ){
{
		HX_STACK_PUSH("Image::init","com/haxepunk/graphics/Image.hx",151);
		HX_STACK_THIS(this);
		HX_STACK_LINE(152)
		this->angle = (int)0;
		HX_STACK_LINE(153)
		this->set_scale(this->scaleX = this->scaleY = (int)1);
		HX_STACK_LINE(154)
		this->originX = this->originY = (int)0;
		HX_STACK_LINE(156)
		this->_alpha = (int)1;
		HX_STACK_LINE(157)
		this->_flipped = false;
		HX_STACK_LINE(158)
		this->_color = (int)16777215;
		HX_STACK_LINE(159)
		this->_red = this->_green = this->_blue = (int)1;
		HX_STACK_LINE(160)
		this->_matrix = ::com::haxepunk::HXP_obj::matrix;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,init,(void))

Void Image_obj::setBitmapSource( ::flash::display::BitmapData bitmap){
{
		HX_STACK_PUSH("Image::setBitmapSource","com/haxepunk/graphics/Image.hx",143);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bitmap,"bitmap");
		HX_STACK_LINE(144)
		this->_blit = true;
		HX_STACK_LINE(145)
		this->_sourceRect = bitmap->get_rect();
		HX_STACK_LINE(146)
		this->_source = bitmap;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,setBitmapSource,(void))

Void Image_obj::setAtlasRegion( ::com::haxepunk::graphics::atlas::AtlasRegion region){
{
		HX_STACK_PUSH("Image::setAtlasRegion","com/haxepunk/graphics/Image.hx",136);
		HX_STACK_THIS(this);
		HX_STACK_ARG(region,"region");
		HX_STACK_LINE(137)
		this->_blit = false;
		HX_STACK_LINE(138)
		this->_region = region;
		HX_STACK_LINE(139)
		this->_sourceRect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->_region->rect->width,this->_region->rect->height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,setAtlasRegion,(void))

Float Image_obj::set_scale( Float value){
	HX_STACK_PUSH("Image::set_scale","com/haxepunk/graphics/Image.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(34)
	return this->_scale = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_scale,return )

Float Image_obj::get_scale( ){
	HX_STACK_PUSH("Image::get_scale","com/haxepunk/graphics/Image.hx",33);
	HX_STACK_THIS(this);
	HX_STACK_LINE(33)
	return this->_scale;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_scale,return )

::com::haxepunk::graphics::Image Image_obj::createRect( int width,int height,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
	HX_STACK_PUSH("Image::createRect","com/haxepunk/graphics/Image.hx",265);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(266)
		if (((bool((width == (int)0)) || bool((height == (int)0))))){
			HX_STACK_LINE(267)
			hx::Throw (HX_CSTRING("Illegal rect, sizes cannot be 0."));
		}
		HX_STACK_LINE(269)
		::flash::display::BitmapData source = ::com::haxepunk::HXP_obj::createBitmap(width,height,true,(int)-1);		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(270)
		::com::haxepunk::graphics::Image image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(271)
		if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::HARDWARE->__Index()))))) != (int)0))){
			HX_STACK_LINE(272)
			image = ::com::haxepunk::graphics::Image_obj::__new(::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(source),null(),null());
		}
		else{
			HX_STACK_LINE(276)
			image = ::com::haxepunk::graphics::Image_obj::__new(source,null(),null());
		}
		HX_STACK_LINE(280)
		image->set_color(color);
		HX_STACK_LINE(281)
		image->set_alpha(alpha);
		HX_STACK_LINE(283)
		return image;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Image_obj,createRect,return )

::com::haxepunk::graphics::Image Image_obj::createCircle( int radius,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
	HX_STACK_PUSH("Image::createCircle","com/haxepunk/graphics/Image.hx",294);
	HX_STACK_ARG(radius,"radius");
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(295)
		if (((radius == (int)0))){
			HX_STACK_LINE(296)
			hx::Throw (HX_CSTRING("Illegal circle, radius cannot be 0."));
		}
		HX_STACK_LINE(298)
		::com::haxepunk::HXP_obj::sprite->get_graphics()->clear();
		HX_STACK_LINE(299)
		::com::haxepunk::HXP_obj::sprite->get_graphics()->beginFill((int)16777215,null());
		HX_STACK_LINE(300)
		::com::haxepunk::HXP_obj::sprite->get_graphics()->drawCircle(radius,radius,radius);
		HX_STACK_LINE(301)
		::flash::display::BitmapData data = ::com::haxepunk::HXP_obj::createBitmap((radius * (int)2),(radius * (int)2),true,(int)0);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(302)
		data->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
		HX_STACK_LINE(304)
		::com::haxepunk::graphics::Image image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(305)
		if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::HARDWARE->__Index()))))) != (int)0))){
			HX_STACK_LINE(306)
			image = ::com::haxepunk::graphics::Image_obj::__new(::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(data),null(),null());
		}
		else{
			HX_STACK_LINE(310)
			image = ::com::haxepunk::graphics::Image_obj::__new(data,null(),null());
		}
		HX_STACK_LINE(314)
		image->set_color(color);
		HX_STACK_LINE(315)
		image->set_alpha(alpha);
		HX_STACK_LINE(317)
		return image;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Image_obj,createCircle,return )

::haxe::ds::StringMap Image_obj::_flips;


Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(_scale,"_scale");
	HX_MARK_MEMBER_NAME(_flip,"_flip");
	HX_MARK_MEMBER_NAME(_flipped,"_flipped");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_MEMBER_NAME(_blue,"_blue");
	HX_MARK_MEMBER_NAME(_green,"_green");
	HX_MARK_MEMBER_NAME(_red,"_red");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_MARK_MEMBER_NAME(_tint,"_tint");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_region,"_region");
	HX_MARK_MEMBER_NAME(_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(_bufferRect,"_bufferRect");
	HX_MARK_MEMBER_NAME(_buffer,"_buffer");
	HX_MARK_MEMBER_NAME(_sourceRect,"_sourceRect");
	HX_MARK_MEMBER_NAME(_source,"_source");
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(angle,"angle");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scale,"_scale");
	HX_VISIT_MEMBER_NAME(_flip,"_flip");
	HX_VISIT_MEMBER_NAME(_flipped,"_flipped");
	HX_VISIT_MEMBER_NAME(_class,"_class");
	HX_VISIT_MEMBER_NAME(_blue,"_blue");
	HX_VISIT_MEMBER_NAME(_green,"_green");
	HX_VISIT_MEMBER_NAME(_red,"_red");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_VISIT_MEMBER_NAME(_tint,"_tint");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_region,"_region");
	HX_VISIT_MEMBER_NAME(_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(_bufferRect,"_bufferRect");
	HX_VISIT_MEMBER_NAME(_buffer,"_buffer");
	HX_VISIT_MEMBER_NAME(_sourceRect,"_sourceRect");
	HX_VISIT_MEMBER_NAME(_source,"_source");
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Image_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_flip") ) { return _flip; }
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"_tint") ) { return _tint; }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return get_alpha(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"scale") ) { return get_scale(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_flips") ) { return _flips; }
		if (HX_FIELD_EQ(inName,"_scale") ) { return _scale; }
		if (HX_FIELD_EQ(inName,"_class") ) { return _class; }
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"_region") ) { return _region; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return _bitmap; }
		if (HX_FIELD_EQ(inName,"_buffer") ) { return _buffer; }
		if (HX_FIELD_EQ(inName,"_source") ) { return _source; }
		if (HX_FIELD_EQ(inName,"flipped") ) { return get_flipped(); }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_flipped") ) { return _flipped; }
		if (HX_FIELD_EQ(inName,"clipRect") ) { return inCallProp ? get_clipRect() : clipRect; }
		if (HX_FIELD_EQ(inName,"centerOO") ) { return centerOO_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createRect") ) { return createRect_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bufferRect") ) { return _bufferRect; }
		if (HX_FIELD_EQ(inName,"_sourceRect") ) { return _sourceRect; }
		if (HX_FIELD_EQ(inName,"scaledWidth") ) { return get_scaledWidth(); }
		if (HX_FIELD_EQ(inName,"set_flipped") ) { return set_flipped_dyn(); }
		if (HX_FIELD_EQ(inName,"get_flipped") ) { return get_flipped_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createCircle") ) { return createCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_clipRect") ) { return get_clipRect_dyn(); }
		if (HX_FIELD_EQ(inName,"scaledHeight") ) { return get_scaledHeight(); }
		if (HX_FIELD_EQ(inName,"centerOrigin") ) { return centerOrigin_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBuffer") ) { return updateBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setAtlasRegion") ) { return setAtlasRegion_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return _colorTransform; }
		if (HX_FIELD_EQ(inName,"set_scaledWidth") ) { return set_scaledWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaledWidth") ) { return get_scaledWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"setBitmapSource") ) { return setBitmapSource_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_scaledHeight") ) { return set_scaledHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaledHeight") ) { return get_scaledHeight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_flip") ) { _flip=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tint") ) { _tint=inValue.Cast< ::flash::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::flash::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { return set_scale(inValue); }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_flips") ) { _flips=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scale") ) { _scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_region") ) { _region=inValue.Cast< ::com::haxepunk::graphics::atlas::AtlasRegion >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buffer") ) { _buffer=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_source") ) { _source=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipped") ) { return set_flipped(inValue); }
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_flipped") ) { _flipped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clipRect") ) { clipRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bufferRect") ) { _bufferRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sourceRect") ) { _sourceRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaledWidth") ) { return set_scaledWidth(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scaledHeight") ) { return set_scaledHeight(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast< ::flash::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_scale"));
	outFields->push(HX_CSTRING("_flip"));
	outFields->push(HX_CSTRING("_flipped"));
	outFields->push(HX_CSTRING("_class"));
	outFields->push(HX_CSTRING("_blue"));
	outFields->push(HX_CSTRING("_green"));
	outFields->push(HX_CSTRING("_red"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_colorTransform"));
	outFields->push(HX_CSTRING("_tint"));
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_alpha"));
	outFields->push(HX_CSTRING("_region"));
	outFields->push(HX_CSTRING("_bitmap"));
	outFields->push(HX_CSTRING("_bufferRect"));
	outFields->push(HX_CSTRING("_buffer"));
	outFields->push(HX_CSTRING("_sourceRect"));
	outFields->push(HX_CSTRING("_source"));
	outFields->push(HX_CSTRING("clipRect"));
	outFields->push(HX_CSTRING("scaledHeight"));
	outFields->push(HX_CSTRING("scaledWidth"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("smooth"));
	outFields->push(HX_CSTRING("flipped"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("originY"));
	outFields->push(HX_CSTRING("originX"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("angle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createRect"),
	HX_CSTRING("createCircle"),
	HX_CSTRING("_flips"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_scale"),
	HX_CSTRING("_flip"),
	HX_CSTRING("_flipped"),
	HX_CSTRING("_class"),
	HX_CSTRING("_blue"),
	HX_CSTRING("_green"),
	HX_CSTRING("_red"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_colorTransform"),
	HX_CSTRING("_tint"),
	HX_CSTRING("_color"),
	HX_CSTRING("_alpha"),
	HX_CSTRING("_region"),
	HX_CSTRING("_bitmap"),
	HX_CSTRING("_bufferRect"),
	HX_CSTRING("_buffer"),
	HX_CSTRING("_sourceRect"),
	HX_CSTRING("_source"),
	HX_CSTRING("get_clipRect"),
	HX_CSTRING("clipRect"),
	HX_CSTRING("set_scaledHeight"),
	HX_CSTRING("get_scaledHeight"),
	HX_CSTRING("set_scaledWidth"),
	HX_CSTRING("get_scaledWidth"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("smooth"),
	HX_CSTRING("centerOO"),
	HX_CSTRING("centerOrigin"),
	HX_CSTRING("set_flipped"),
	HX_CSTRING("get_flipped"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_color"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("clear"),
	HX_CSTRING("updateBuffer"),
	HX_CSTRING("render"),
	HX_CSTRING("createBuffer"),
	HX_CSTRING("init"),
	HX_CSTRING("setBitmapSource"),
	HX_CSTRING("setAtlasRegion"),
	HX_CSTRING("blend"),
	HX_CSTRING("originY"),
	HX_CSTRING("originX"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("get_scale"),
	HX_CSTRING("angle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Image_obj::_flips,"_flips");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Image_obj::_flips,"_flips");
};

Class Image_obj::__mClass;

void Image_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Image"), hx::TCanCast< Image_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Image_obj::__boot()
{
	_flips= ::haxe::ds::StringMap_obj::__new();
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
