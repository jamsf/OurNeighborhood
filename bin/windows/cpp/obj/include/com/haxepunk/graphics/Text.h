#ifndef INCLUDED_com_haxepunk_graphics_Text
#define INCLUDED_com_haxepunk_graphics_Text

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/graphics/Image.h>
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Text)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS2(flash,text,TextFormat)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Text_obj : public ::com::haxepunk::graphics::Image_obj{
	public:
		typedef ::com::haxepunk::graphics::Image_obj super;
		typedef Text_obj OBJ_;
		Text_obj();
		Void __construct(::String text,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic options);

	public:
		static hx::ObjectPtr< Text_obj > __new(::String text,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Text_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Text"); }

		::flash::display::Sprite _parent;
		::flash::text::TextFormat _format;
		::flash::text::TextField _field;
		virtual Float set_scale( Float value);

		virtual Float get_scale( );

		virtual bool set_visible( bool value);

		virtual bool get_visible( );

		virtual Float set_alpha( Float value);

		virtual Float get_alpha( );

		virtual Void findParentSprite( );
		Dynamic findParentSprite_dyn();

		virtual int set_size( int value);
		Dynamic set_size_dyn();

		int size;
		virtual int get_height( );

		virtual int get_width( );

		virtual int set_color( int value);

		virtual ::String set_font( ::String value);
		Dynamic set_font_dyn();

		::String font;
		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		::String text;
		virtual int set_layer( int value);

		virtual Void destroy( );

		virtual Void render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera);

		virtual Void updateBuffer( hx::Null< bool >  clearBefore);

		bool autoHeight;
		bool autoWidth;
		int textHeight;
		int textWidth;
		bool resizable;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Text */ 
