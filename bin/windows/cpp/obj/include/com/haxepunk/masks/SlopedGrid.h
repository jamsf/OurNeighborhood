#ifndef INCLUDED_com_haxepunk_masks_SlopedGrid
#define INCLUDED_com_haxepunk_masks_SlopedGrid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/masks/Hitbox.h>
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(com,haxepunk,masks,SlopedGrid)
HX_DECLARE_CLASS3(com,haxepunk,masks,TileType)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace masks{


class HXCPP_CLASS_ATTRIBUTES  SlopedGrid_obj : public ::com::haxepunk::masks::Hitbox_obj{
	public:
		typedef ::com::haxepunk::masks::Hitbox_obj super;
		typedef SlopedGrid_obj OBJ_;
		SlopedGrid_obj();
		Void __construct(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y);

	public:
		static hx::ObjectPtr< SlopedGrid_obj > __new(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SlopedGrid_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SlopedGrid"); }

		::flash::geom::Point _point2;
		::flash::geom::Point _point;
		::flash::geom::Rectangle _rect;
		::flash::geom::Rectangle _tile;
		virtual Void squareProjection( ::flash::geom::Point axis,::flash::geom::Point point);
		Dynamic squareProjection_dyn();

		virtual Void debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY);

		virtual bool collideHitbox( ::com::haxepunk::masks::Hitbox other);

		virtual bool collideMask( ::com::haxepunk::Mask other);

		virtual bool collideBox( Float opx,Float opy,Float opw,Float oph,Float px,Float py);
		Dynamic collideBox_dyn();

		Dynamic data;
		int rows;
		int columns;
		virtual int get_tileHeight( );
		Dynamic get_tileHeight_dyn();

		virtual int get_tileWidth( );
		Dynamic get_tileWidth_dyn();

		virtual Void clearRect( hx::Null< int >  column,hx::Null< int >  row,hx::Null< int >  width,hx::Null< int >  height);
		Dynamic clearRect_dyn();

		virtual Void setRect( hx::Null< int >  column,hx::Null< int >  row,hx::Null< int >  width,hx::Null< int >  height,::com::haxepunk::masks::TileType type,hx::Null< Float >  slope,hx::Null< Float >  yOffset);
		Dynamic setRect_dyn();

		virtual Dynamic getTile( hx::Null< int >  column,hx::Null< int >  row);
		Dynamic getTile_dyn();

		virtual bool checkTile( int column,int row);
		Dynamic checkTile_dyn();

		virtual Void clearTile( hx::Null< int >  column,hx::Null< int >  row);
		Dynamic clearTile_dyn();

		virtual Void setTile( hx::Null< int >  column,hx::Null< int >  row,::com::haxepunk::masks::TileType type,hx::Null< Float >  slope,hx::Null< Float >  yOffset);
		Dynamic setTile_dyn();

		bool usePositions;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace masks

#endif /* INCLUDED_com_haxepunk_masks_SlopedGrid */ 
