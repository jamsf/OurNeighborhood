#ifndef INCLUDED_com_haxepunk_Graphic
#define INCLUDED_com_haxepunk_Graphic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Point)
namespace com{
namespace haxepunk{


class HXCPP_CLASS_ATTRIBUTES  Graphic_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Graphic_obj OBJ_;
		Graphic_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Graphic_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Graphic_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Graphic"); }

		bool _visible;
		bool _blit;
		::com::haxepunk::Entity _entity;
		::flash::geom::Point _point;
		bool _scroll;
		virtual int set_layer( int value);
		Dynamic set_layer_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void setEntity( ::com::haxepunk::Entity entity);
		Dynamic setEntity_dyn();

		virtual Void render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera);
		Dynamic render_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		int layer;
		bool relative;
		Float scrollY;
		Float scrollX;
		Float y;
		Float x;
		virtual bool set_visible( bool value);
		Dynamic set_visible_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		bool active;
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Graphic */ 
