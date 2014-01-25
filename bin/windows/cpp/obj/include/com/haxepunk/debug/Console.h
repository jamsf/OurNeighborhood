#ifndef INCLUDED_com_haxepunk_debug_Console
#define INCLUDED_com_haxepunk_debug_Console

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,debug,Console)
HX_DECLARE_CLASS3(com,haxepunk,debug,LayerList)
HX_DECLARE_CLASS3(com,haxepunk,debug,TraceCapture)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS2(flash,text,TextFormat)
namespace com{
namespace haxepunk{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Console_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Console_obj OBJ_;
		Console_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Console_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Console_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Console"); }

		Array< ::String > WATCH_LIST;
		Array< ::Dynamic > SELECT_LIST;
		Array< ::Dynamic > SCREEN_LIST;
		Array< ::Dynamic > ENTITY_LIST;
		Array< int > LAYER_LIST;
		Array< ::String > LOG;
		int _logLines;
		::flash::geom::Rectangle _entRect;
		::flash::display::Sprite _entSelect;
		::flash::display::Sprite _entScreen;
		::flash::display::Bitmap _bmpLogo;
		::flash::display::Bitmap _butStep;
		::flash::display::Bitmap _butPause;
		::flash::display::Bitmap _butPlay;
		::flash::display::Bitmap _butOutput;
		::flash::display::Bitmap _butDebug;
		::flash::display::Sprite _butRead;
		::flash::text::TextField _debReadText1;
		::flash::text::TextField _debReadText0;
		::flash::display::Sprite _debRead;
		::flash::text::TextField _entReadText;
		::flash::display::Sprite _entRead;
		Float _logScroll;
		::flash::geom::Rectangle _logBarGlobal;
		::flash::geom::Rectangle _logBar;
		int _logHeight;
		::flash::text::TextField _logReadText1;
		::flash::text::TextField _logReadText0;
		::flash::display::Sprite _logRead;
		::com::haxepunk::debug::LayerList _layerList;
		::flash::text::TextField _memReadText;
		::flash::text::TextField _fpsInfoText1;
		::flash::text::TextField _fpsInfoText0;
		::flash::display::Sprite _fpsInfo;
		::flash::text::TextField _fpsReadText;
		::flash::display::Sprite _fpsRead;
		::flash::display::Bitmap _back;
		::flash::text::TextFormat _format;
		::flash::display::Sprite _sprite;
		bool _panning;
		bool _dragging;
		bool _selecting;
		bool _scrolling;
		bool _debug;
		bool _paused;
		bool _visible;
		bool _enabled;
		virtual int get_height( );
		Dynamic get_height_dyn();

		int height;
		virtual int get_width( );
		Dynamic get_width_dyn();

		int width;
		virtual ::flash::text::TextFormat format( hx::Null< int >  size,hx::Null< int >  color,::String align);
		Dynamic format_dyn();

		virtual Void updateButtons( );
		Dynamic updateButtons_dyn();

		virtual Void updateEntityCount( );
		Dynamic updateEntityCount_dyn();

		virtual Void updateDebugRead( );
		Dynamic updateDebugRead_dyn();

		virtual Void updateFPSRead( );
		Dynamic updateFPSRead_dyn();

		virtual Void updateLog( );
		Dynamic updateLog_dyn();

		virtual Void renderEntities( );
		Dynamic renderEntities_dyn();

		virtual Void updateEntityLists( hx::Null< bool >  fetchList);
		Dynamic updateEntityLists_dyn();

		virtual Void updateKeyPanning( );
		Dynamic updateKeyPanning_dyn();

		virtual Void updateKeyMoving( );
		Dynamic updateKeyMoving_dyn();

		virtual Void updateScrolling( );
		Dynamic updateScrolling_dyn();

		virtual Void startScrolling( );
		Dynamic startScrolling_dyn();

		virtual Void selectAll( );
		Dynamic selectAll_dyn();

		virtual Void selectEntities( ::flash::geom::Rectangle rect);
		Dynamic selectEntities_dyn();

		virtual Void updateSelection( );
		Dynamic updateSelection_dyn();

		virtual Void startSelection( );
		Dynamic startSelection_dyn();

		virtual Void setCamera( int x,int y);
		Dynamic setCamera_dyn();

		virtual Void panCamera( int xDelta,int yDelta);
		Dynamic panCamera_dyn();

		virtual Void updatePanning( );
		Dynamic updatePanning_dyn();

		virtual Void startPanning( );
		Dynamic startPanning_dyn();

		virtual Void moveSelected( int xDelta,int yDelta);
		Dynamic moveSelected_dyn();

		virtual Void updateDragging( );
		Dynamic updateDragging_dyn();

		virtual Void startDragging( );
		Dynamic startDragging_dyn();

		virtual Void stepFrame( );
		Dynamic stepFrame_dyn();

		virtual bool set_debug( bool value);
		Dynamic set_debug_dyn();

		virtual bool get_debug( );
		Dynamic get_debug_dyn();

		virtual bool set_paused( bool value);
		Dynamic set_paused_dyn();

		virtual bool get_paused( );
		Dynamic get_paused_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual bool set_visible( bool value);
		Dynamic set_visible_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual Void onResize( ::flash::events::Event e);
		Dynamic onResize_dyn();

		virtual Void enable( ::com::haxepunk::debug::TraceCapture trace_capture,hx::Null< int >  toggleKey);
		Dynamic enable_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual Void show( );
		Dynamic show_dyn();

		virtual Void watch( Dynamic properties);
		Dynamic watch_dyn();

		virtual Void log( Dynamic data);
		Dynamic log_dyn();

		virtual Void traceLog( Dynamic v,Dynamic infos);
		Dynamic traceLog_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		int toggleKey;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace debug

#endif /* INCLUDED_com_haxepunk_debug_Console */ 
