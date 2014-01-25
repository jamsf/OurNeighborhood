#ifndef INCLUDED_com_haxepunk_Screen
#define INCLUDED_com_haxepunk_Screen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Screen)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,filters,BitmapFilter)
HX_DECLARE_CLASS2(flash,geom,Matrix)
namespace com{
namespace haxepunk{


class HXCPP_CLASS_ATTRIBUTES  Screen_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Screen_obj OBJ_;
		Screen_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Screen_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Screen_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Screen"); }

		int _color;
		Float _angle;
		::flash::geom::Matrix _matrix;
		int _current;
		Array< ::Dynamic > _bitmap;
		::flash::display::Sprite _sprite;
		virtual ::com::haxepunk::graphics::Image capture( );
		Dynamic capture_dyn();

		virtual int get_mouseY( );
		Dynamic get_mouseY_dyn();

		int mouseY;
		virtual int get_mouseX( );
		Dynamic get_mouseX_dyn();

		int mouseX;
		int height;
		int width;
		virtual bool set_smoothing( bool value);
		Dynamic set_smoothing_dyn();

		virtual bool get_smoothing( );
		Dynamic get_smoothing_dyn();

		virtual Float set_angle( Float value);
		Dynamic set_angle_dyn();

		virtual Float get_angle( );
		Dynamic get_angle_dyn();

		bool needsResize;
		Float fullScaleY;
		Float fullScaleX;
		virtual Float set_scale( Float value);
		Dynamic set_scale_dyn();

		Float scale;
		virtual Float set_scaleY( Float value);
		Dynamic set_scaleY_dyn();

		Float scaleY;
		virtual Float set_scaleX( Float value);
		Dynamic set_scaleX_dyn();

		Float scaleX;
		virtual int set_originY( int value);
		Dynamic set_originY_dyn();

		int originY;
		virtual int set_originX( int value);
		Dynamic set_originX_dyn();

		int originX;
		virtual int set_y( int value);
		Dynamic set_y_dyn();

		int y;
		virtual int set_x( int value);
		Dynamic set_x_dyn();

		int x;
		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void redraw( );
		Dynamic redraw_dyn();

		virtual Void refresh( );
		Dynamic refresh_dyn();

		virtual Void addFilter( Array< ::Dynamic > filter);
		Dynamic addFilter_dyn();

		virtual Void swap( );
		Dynamic swap_dyn();

		virtual Void resize( );
		Dynamic resize_dyn();

		virtual Void disposeBitmap( ::flash::display::Bitmap bd);
		Dynamic disposeBitmap_dyn();

		virtual Void init( );
		Dynamic init_dyn();

};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Screen */ 
