#ifndef INCLUDED_com_haxepunk_masks_TileType
#define INCLUDED_com_haxepunk_masks_TileType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,masks,TileType)
namespace com{
namespace haxepunk{
namespace masks{


class TileType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TileType_obj OBJ_;

	public:
		TileType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("com.haxepunk.masks.TileType"); }
		::String __ToString() const { return HX_CSTRING("TileType.") + tag; }

		static ::com::haxepunk::masks::TileType AboveSlope;
		static inline ::com::haxepunk::masks::TileType AboveSlope_dyn() { return AboveSlope; }
		static ::com::haxepunk::masks::TileType BelowSlope;
		static inline ::com::haxepunk::masks::TileType BelowSlope_dyn() { return BelowSlope; }
		static ::com::haxepunk::masks::TileType BottomLeft;
		static inline ::com::haxepunk::masks::TileType BottomLeft_dyn() { return BottomLeft; }
		static ::com::haxepunk::masks::TileType BottomRight;
		static inline ::com::haxepunk::masks::TileType BottomRight_dyn() { return BottomRight; }
		static ::com::haxepunk::masks::TileType Empty;
		static inline ::com::haxepunk::masks::TileType Empty_dyn() { return Empty; }
		static ::com::haxepunk::masks::TileType Solid;
		static inline ::com::haxepunk::masks::TileType Solid_dyn() { return Solid; }
		static ::com::haxepunk::masks::TileType TopLeft;
		static inline ::com::haxepunk::masks::TileType TopLeft_dyn() { return TopLeft; }
		static ::com::haxepunk::masks::TileType TopRight;
		static inline ::com::haxepunk::masks::TileType TopRight_dyn() { return TopRight; }
};

} // end namespace com
} // end namespace haxepunk
} // end namespace masks

#endif /* INCLUDED_com_haxepunk_masks_TileType */ 
