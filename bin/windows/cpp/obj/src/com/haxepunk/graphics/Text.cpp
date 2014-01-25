#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_Text
#include <com/haxepunk/graphics/Text.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
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
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void Text_obj::__construct(::String text,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic options)
{
HX_STACK_PUSH("Text::new","com/haxepunk/graphics/Text.hx",38);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
{
	HX_STACK_LINE(45)
	this->autoHeight = false;
	HX_STACK_LINE(44)
	this->autoWidth = false;
	HX_STACK_LINE(58)
	if (((options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/haxepunk/graphics/Text.hx",60);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(60)
		options = _Function_2_1::Block();
		HX_STACK_LINE(61)
		options->__FieldRef(HX_CSTRING("color")) = (int)16777215;
	}
	HX_STACK_LINE(64)
	if (((options->__Field(HX_CSTRING("font"),true) == null()))){
		HX_STACK_LINE(64)
		options->__FieldRef(HX_CSTRING("font")) = ::com::haxepunk::HXP_obj::defaultFont;
	}
	HX_STACK_LINE(65)
	if (((options->__Field(HX_CSTRING("size"),true) == (int)0))){
		HX_STACK_LINE(65)
		options->__FieldRef(HX_CSTRING("size")) = (int)16;
	}
	HX_STACK_LINE(66)
	if (((options->__Field(HX_CSTRING("align"),true) == null()))){
		HX_STACK_LINE(66)
		options->__FieldRef(HX_CSTRING("align")) = ::flash::text::TextFormatAlign_obj::LEFT;
	}
	HX_STACK_LINE(68)
	::flash::text::Font fontObj = ::openfl::Assets_obj::getFont(options->__Field(HX_CSTRING("font"),true),null());		HX_STACK_VAR(fontObj,"fontObj");
	HX_STACK_LINE(69)
	this->_format = ::flash::text::TextFormat_obj::__new(fontObj->fontName,options->__Field(HX_CSTRING("size"),true),(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(70)
	this->_format->align = options->__Field(HX_CSTRING("align"),true);
	HX_STACK_LINE(71)
	this->_format->leading = options->__Field(HX_CSTRING("leading"),true);
	HX_STACK_LINE(73)
	this->_field = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(77)
	this->_field->set_wordWrap(options->__Field(HX_CSTRING("wordWrap"),true));
	HX_STACK_LINE(78)
	this->_field->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(79)
	this->_field->set_text(text);
	HX_STACK_LINE(80)
	this->_field->set_selectable(false);
	HX_STACK_LINE(82)
	this->resizable = options->__Field(HX_CSTRING("resizable"),true);
	HX_STACK_LINE(84)
	if (((width == (int)0))){
		HX_STACK_LINE(86)
		width = ::Std_obj::_int((this->_field->get_textWidth() + (int)4));
		HX_STACK_LINE(87)
		this->autoWidth = true;
	}
	HX_STACK_LINE(89)
	if (((height == (int)0))){
		HX_STACK_LINE(91)
		height = ::Std_obj::_int((this->_field->get_textHeight() + (int)4));
		HX_STACK_LINE(92)
		this->autoHeight = true;
	}
	HX_STACK_LINE(95)
	Dynamic source;		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(96)
	if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::HARDWARE->__Index()))))) != (int)0))){
		HX_STACK_LINE(98)
		::com::haxepunk::HXP_obj::rect->x = ::com::haxepunk::HXP_obj::rect->y = (int)0;
		HX_STACK_LINE(99)
		this->_field->set_width(::com::haxepunk::HXP_obj::rect->width = this->textWidth = width);
		HX_STACK_LINE(100)
		this->_field->set_height(::com::haxepunk::HXP_obj::rect->height = this->textHeight = height);
		HX_STACK_LINE(101)
		source = ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(null(),(int)0,::com::haxepunk::HXP_obj::rect);
		HX_STACK_LINE(102)
		this->_blit = false;
	}
	else{
		HX_STACK_LINE(106)
		source = ::com::haxepunk::HXP_obj::createBitmap(width,height,true,null());
		HX_STACK_LINE(107)
		this->_blit = true;
	}
	HX_STACK_LINE(109)
	super::__construct(source,null(),null());
	HX_STACK_LINE(111)
	this->set_text(text);
	HX_STACK_LINE(112)
	this->set_color(options->__Field(HX_CSTRING("color"),true));
	HX_STACK_LINE(113)
	this->x = x;
	HX_STACK_LINE(114)
	this->y = y;
}
;
	return null();
}

Text_obj::~Text_obj() { }

Dynamic Text_obj::__CreateEmpty() { return  new Text_obj; }
hx::ObjectPtr< Text_obj > Text_obj::__new(::String text,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic options)
{  hx::ObjectPtr< Text_obj > result = new Text_obj();
	result->__construct(text,__o_x,__o_y,__o_width,__o_height,options);
	return result;}

Dynamic Text_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Text_obj > result = new Text_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Float Text_obj::set_scale( Float value){
	HX_STACK_PUSH("Text::set_scale","com/haxepunk/graphics/Text.hx",333);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(333)
	if ((this->_blit)){
		HX_STACK_LINE(335)
		return this->super::set_scale(value);
	}
	else{
		HX_STACK_LINE(337)
		return this->_field->set_scaleY(this->_field->set_scaleX(value));
	}
	HX_STACK_LINE(333)
	return 0.;
}


Float Text_obj::get_scale( ){
	HX_STACK_PUSH("Text::get_scale","com/haxepunk/graphics/Text.hx",326);
	HX_STACK_THIS(this);
	HX_STACK_LINE(326)
	if ((this->_blit)){
		HX_STACK_LINE(328)
		return this->super::get_scale();
	}
	else{
		HX_STACK_LINE(330)
		return this->_field->get_scaleX();
	}
	HX_STACK_LINE(326)
	return 0.;
}


bool Text_obj::set_visible( bool value){
	HX_STACK_PUSH("Text::set_visible","com/haxepunk/graphics/Text.hx",315);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(315)
	if ((this->_blit)){
		HX_STACK_LINE(317)
		return this->super::set_visible(value);
	}
	else{
		HX_STACK_LINE(319)
		return this->_field->set_visible(value);
	}
	HX_STACK_LINE(315)
	return false;
}


bool Text_obj::get_visible( ){
	HX_STACK_PUSH("Text::get_visible","com/haxepunk/graphics/Text.hx",308);
	HX_STACK_THIS(this);
	HX_STACK_LINE(308)
	if ((this->_blit)){
		HX_STACK_LINE(310)
		return this->super::get_visible();
	}
	else{
		HX_STACK_LINE(312)
		return this->_field->get_visible();
	}
	HX_STACK_LINE(308)
	return false;
}


Float Text_obj::set_alpha( Float value){
	HX_STACK_PUSH("Text::set_alpha","com/haxepunk/graphics/Text.hx",297);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(297)
	if ((this->_blit)){
		HX_STACK_LINE(299)
		return this->super::set_alpha(value);
	}
	else{
		HX_STACK_LINE(301)
		return this->_field->set_alpha(value);
	}
	HX_STACK_LINE(297)
	return 0.;
}


Float Text_obj::get_alpha( ){
	HX_STACK_PUSH("Text::get_alpha","com/haxepunk/graphics/Text.hx",290);
	HX_STACK_THIS(this);
	HX_STACK_LINE(290)
	if ((this->_blit)){
		HX_STACK_LINE(292)
		return this->super::get_alpha();
	}
	else{
		HX_STACK_LINE(294)
		return this->_field->get_alpha();
	}
	HX_STACK_LINE(290)
	return 0.;
}


Void Text_obj::findParentSprite( ){
{
		HX_STACK_PUSH("Text::findParentSprite","com/haxepunk/graphics/Text.hx",279);
		HX_STACK_THIS(this);
		HX_STACK_LINE(280)
		if (((bool((this->_entity == null())) || bool((this->_entity->_scene == null()))))){
			HX_STACK_LINE(280)
			return null();
		}
		HX_STACK_LINE(281)
		if (((this->_parent != null()))){
			HX_STACK_LINE(281)
			this->_parent->removeChild(this->_field);
		}
		HX_STACK_LINE(282)
		this->_parent = this->_entity->_scene->getSpriteByLayer(this->layer);
		HX_STACK_LINE(283)
		this->_parent->addChild(this->_field);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,findParentSprite,(void))

int Text_obj::set_size( int value){
	HX_STACK_PUSH("Text::set_size","com/haxepunk/graphics/Text.hx",271);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(272)
	if (((this->size == value))){
		HX_STACK_LINE(272)
		return value;
	}
	HX_STACK_LINE(273)
	this->_format->size = this->size = value;
	HX_STACK_LINE(274)
	this->updateBuffer(null());
	HX_STACK_LINE(275)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_size,return )

int Text_obj::get_height( ){
	HX_STACK_PUSH("Text::get_height","com/haxepunk/graphics/Text.hx",262);
	HX_STACK_THIS(this);
	HX_STACK_LINE(262)
	return (  ((this->_blit)) ? int(this->super::get_height()) : int(::Std_obj::_int((Float(this->_field->get_height()) / Float(::com::haxepunk::HXP_obj::screen->fullScaleY)))) );
}


int Text_obj::get_width( ){
	HX_STACK_PUSH("Text::get_width","com/haxepunk/graphics/Text.hx",254);
	HX_STACK_THIS(this);
	HX_STACK_LINE(254)
	return (  ((this->_blit)) ? int(this->super::get_width()) : int(::Std_obj::_int((Float(this->_field->get_width()) / Float(::com::haxepunk::HXP_obj::screen->fullScaleX)))) );
}


int Text_obj::set_color( int value){
	HX_STACK_PUSH("Text::set_color","com/haxepunk/graphics/Text.hx",234);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(234)
	if ((this->_blit)){
		HX_STACK_LINE(236)
		return this->super::set_color(value);
	}
	else{
		HX_STACK_LINE(241)
		if (((this->_format->color != value))){
			HX_STACK_LINE(243)
			this->_format->color = value;
			HX_STACK_LINE(244)
			this->updateBuffer(null());
		}
		HX_STACK_LINE(246)
		return value;
	}
	HX_STACK_LINE(234)
	return (int)0;
}


::String Text_obj::set_font( ::String value){
	HX_STACK_PUSH("Text::set_font","com/haxepunk/graphics/Text.hx",222);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(223)
	if (((this->font == value))){
		HX_STACK_LINE(223)
		return value;
	}
	HX_STACK_LINE(224)
	value = ::openfl::Assets_obj::getFont(value,null())->fontName;
	HX_STACK_LINE(225)
	this->_format->font = this->font = value;
	HX_STACK_LINE(226)
	this->updateBuffer(null());
	HX_STACK_LINE(227)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_font,return )

::String Text_obj::set_text( ::String value){
	HX_STACK_PUSH("Text::set_text","com/haxepunk/graphics/Text.hx",210);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(211)
	if (((this->text == value))){
		HX_STACK_LINE(211)
		return value;
	}
	HX_STACK_LINE(212)
	this->_field->set_text(this->text = value);
	HX_STACK_LINE(213)
	this->updateBuffer(null());
	HX_STACK_LINE(214)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_text,return )

int Text_obj::set_layer( int value){
	HX_STACK_PUSH("Text::set_layer","com/haxepunk/graphics/Text.hx",193);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(197)
	if (((value == this->layer))){
		HX_STACK_LINE(197)
		return value;
	}
	HX_STACK_LINE(198)
	if (((this->_blit == false))){
		HX_STACK_LINE(199)
		this->findParentSprite();
	}
	HX_STACK_LINE(202)
	return this->super::set_layer(value);
}


Void Text_obj::destroy( ){
{
		HX_STACK_PUSH("Text::destroy","com/haxepunk/graphics/Text.hx",181);
		HX_STACK_THIS(this);
		HX_STACK_LINE(181)
		if (((this->_parent != null()))){
			HX_STACK_LINE(184)
			this->_parent->removeChild(this->_field);
			HX_STACK_LINE(185)
			this->_parent = null();
		}
	}
return null();
}


Void Text_obj::render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_PUSH("Text::render","com/haxepunk/graphics/Text.hx",164);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(164)
		if ((this->_blit)){
			HX_STACK_LINE(166)
			this->super::render(target,point,camera);
		}
		else{
			HX_STACK_LINE(171)
			if (((this->_parent == null()))){
				HX_STACK_LINE(172)
				this->findParentSprite();
			}
			HX_STACK_LINE(174)
			this->_field->set_x((((((point->x + this->x) - this->originX) - (camera->x * this->scrollX))) * ::com::haxepunk::HXP_obj::screen->fullScaleX));
			HX_STACK_LINE(175)
			this->_field->set_y((((((point->y + this->y) - this->originY) - (camera->y * this->scrollY))) * ::com::haxepunk::HXP_obj::screen->fullScaleY));
		}
	}
return null();
}


Void Text_obj::updateBuffer( hx::Null< bool >  __o_clearBefore){
bool clearBefore = __o_clearBefore.Default(false);
	HX_STACK_PUSH("Text::updateBuffer","com/haxepunk/graphics/Text.hx",119);
	HX_STACK_THIS(this);
	HX_STACK_ARG(clearBefore,"clearBefore");
{
		HX_STACK_LINE(120)
		this->_field->setTextFormat(this->_format,null(),null());
		HX_STACK_LINE(122)
		if ((this->_blit)){
			HX_STACK_LINE(122)
			this->_field->set_width(this->_bufferRect->width);
		}
		HX_STACK_LINE(124)
		if ((this->autoWidth)){
			HX_STACK_LINE(125)
			this->_field->set_width(this->textWidth = ::Math_obj::ceil((this->_field->get_textWidth() + (int)4)));
		}
		HX_STACK_LINE(126)
		if ((this->autoHeight)){
			HX_STACK_LINE(127)
			this->_field->set_height(this->textHeight = ::Math_obj::ceil((this->_field->get_textHeight() + (int)4)));
		}
		HX_STACK_LINE(129)
		if ((this->_blit)){
			HX_STACK_LINE(131)
			if ((this->resizable)){
				HX_STACK_LINE(133)
				this->_bufferRect->width = this->textWidth;
				HX_STACK_LINE(134)
				this->_bufferRect->height = this->textHeight;
			}
			HX_STACK_LINE(137)
			if (((bool((this->textWidth > this->_source->get_width())) || bool((this->textHeight > this->_source->get_height()))))){
				HX_STACK_LINE(139)
				this->_source = ::com::haxepunk::HXP_obj::createBitmap(::Std_obj::_int(::Math_obj::max(this->textWidth,this->_source->get_width())),::Std_obj::_int(::Math_obj::max(this->textHeight,this->_source->get_height())),true,null());
				HX_STACK_LINE(144)
				this->_sourceRect = this->_source->get_rect();
				HX_STACK_LINE(145)
				this->createBuffer();
			}
			else{
				HX_STACK_LINE(148)
				this->_source->fillRect(this->_sourceRect,(int)0);
			}
			HX_STACK_LINE(152)
			if ((this->resizable)){
				HX_STACK_LINE(154)
				this->_field->set_width(this->textWidth);
				HX_STACK_LINE(155)
				this->_field->set_height(this->textHeight);
			}
			HX_STACK_LINE(158)
			this->_source->draw(this->_field,null(),null(),null(),null(),null());
			HX_STACK_LINE(159)
			this->super::updateBuffer(clearBefore);
		}
	}
return null();
}



Text_obj::Text_obj()
{
}

void Text_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Text);
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_field,"_field");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(autoHeight,"autoHeight");
	HX_MARK_MEMBER_NAME(autoWidth,"autoWidth");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(resizable,"resizable");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Text_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_field,"_field");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(autoHeight,"autoHeight");
	HX_VISIT_MEMBER_NAME(autoWidth,"autoWidth");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(resizable,"resizable");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Text_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_field") ) { return _field; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_layer") ) { return set_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"autoWidth") ) { return autoWidth; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return textWidth; }
		if (HX_FIELD_EQ(inName,"resizable") ) { return resizable; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"autoHeight") ) { return autoHeight; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return textHeight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBuffer") ) { return updateBuffer_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findParentSprite") ) { return findParentSprite_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Text_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp) return set_size(inValue);size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp) return set_font(inValue);font=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_field") ) { _field=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoWidth") ) { autoWidth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resizable") ) { resizable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoHeight") ) { autoHeight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Text_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_parent"));
	outFields->push(HX_CSTRING("_format"));
	outFields->push(HX_CSTRING("_field"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("autoHeight"));
	outFields->push(HX_CSTRING("autoWidth"));
	outFields->push(HX_CSTRING("textHeight"));
	outFields->push(HX_CSTRING("textWidth"));
	outFields->push(HX_CSTRING("resizable"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_parent"),
	HX_CSTRING("_format"),
	HX_CSTRING("_field"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("get_scale"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("findParentSprite"),
	HX_CSTRING("set_size"),
	HX_CSTRING("size"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_font"),
	HX_CSTRING("font"),
	HX_CSTRING("set_text"),
	HX_CSTRING("text"),
	HX_CSTRING("set_layer"),
	HX_CSTRING("destroy"),
	HX_CSTRING("render"),
	HX_CSTRING("updateBuffer"),
	HX_CSTRING("autoHeight"),
	HX_CSTRING("autoWidth"),
	HX_CSTRING("textHeight"),
	HX_CSTRING("textWidth"),
	HX_CSTRING("resizable"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

Class Text_obj::__mClass;

void Text_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Text"), hx::TCanCast< Text_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Text_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
