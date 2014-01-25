#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#define INCLUDED_com_haxepunk_graphics_atlas_Atlas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,Atlas)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasData)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasRegion)
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  Atlas_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Atlas_obj OBJ_;
		Atlas_obj();
		Void __construct(Dynamic source);

	public:
		static hx::ObjectPtr< Atlas_obj > __new(Dynamic source);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Atlas_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Atlas"); }

		::com::haxepunk::graphics::atlas::AtlasData _data;
		virtual Void prepareTile( int tile,Float x,Float y,int layer,Float scaleX,Float scaleY,Float angle,Float red,Float green,Float blue,Float alpha);
		Dynamic prepareTile_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		static int drawCallThreshold;
		static bool smooth;
		static ::com::haxepunk::graphics::atlas::AtlasRegion loadImageAsRegion( Dynamic source);
		static Dynamic loadImageAsRegion_dyn();

		static bool toggleLayerVisibility( int layer);
		static Dynamic toggleLayerVisibility_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas

#endif /* INCLUDED_com_haxepunk_graphics_atlas_Atlas */ 
