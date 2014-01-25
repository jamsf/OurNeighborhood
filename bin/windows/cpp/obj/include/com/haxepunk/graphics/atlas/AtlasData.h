#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#define INCLUDED_com_haxepunk_graphics_atlas_AtlasData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasData)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasRegion)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,Layer)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  AtlasData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AtlasData_obj OBJ_;
		AtlasData_obj();
		Void __construct(::flash::display::BitmapData bd);

	public:
		static hx::ObjectPtr< AtlasData_obj > __new(::flash::display::BitmapData bd);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AtlasData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AtlasData"); }

		::haxe::ds::IntMap _layers;
		::openfl::display::Tilesheet _tilesheet;
		bool _flagAlpha;
		bool _flagRGB;
		int _renderFlags;
		::com::haxepunk::graphics::atlas::Layer _layer;
		int _layerIndex;
		int _refCount;
		::String _name;
		virtual int set_blend( int value);
		Dynamic set_blend_dyn();

		virtual int get_blend( );
		Dynamic get_blend_dyn();

		virtual bool set_rgb( bool value);
		Dynamic set_rgb_dyn();

		virtual bool get_rgb( );
		Dynamic get_rgb_dyn();

		virtual bool set_alpha( bool value);
		Dynamic set_alpha_dyn();

		virtual bool get_alpha( );
		Dynamic get_alpha_dyn();

		virtual Void prepareTile( int tile,Float x,Float y,int layer,Float scaleX,Float scaleY,Float angle,Float red,Float green,Float blue,Float alpha);
		Dynamic prepareTile_dyn();

		virtual Void prepareTileMatrix( int tile,int layer,Float tx,Float ty,Float a,Float b,Float c,Float d,Float red,Float green,Float blue,Float alpha);
		Dynamic prepareTileMatrix_dyn();

		virtual Void setLayer( int layer);
		Dynamic setLayer_dyn();

		virtual Void renderLayer( ::com::haxepunk::graphics::atlas::Layer layer,int layerIndex);
		Dynamic renderLayer_dyn();

		virtual ::com::haxepunk::graphics::atlas::AtlasRegion createRegion( ::flash::geom::Rectangle rect,::flash::geom::Point center);
		Dynamic createRegion_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void renderData( );
		Dynamic renderData_dyn();

		int height;
		int width;
		static int BLEND_NONE;
		static int BLEND_ADD;
		static int BLEND_NORMAL;
		static ::com::haxepunk::graphics::atlas::AtlasData create( Dynamic source);
		static Dynamic create_dyn();

		static ::com::haxepunk::graphics::atlas::AtlasData getAtlasDataByName( ::String name,hx::Null< bool >  create);
		static Dynamic getAtlasDataByName_dyn();

		static Void setScene( ::com::haxepunk::Scene scene);
		static Dynamic setScene_dyn();

		static Void render( );
		static Dynamic render_dyn();

		static Void destroyAll( );
		static Dynamic destroyAll_dyn();

		static ::com::haxepunk::Scene _scene;
		static ::haxe::ds::StringMap _dataPool;
		static Array< ::Dynamic > _atlases;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas

#endif /* INCLUDED_com_haxepunk_graphics_atlas_AtlasData */ 
