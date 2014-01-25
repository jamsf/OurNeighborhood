#ifndef INCLUDED_com_haxepunk_Engine
#define INCLUDED_com_haxepunk_Engine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS2(com,haxepunk,Engine)
HX_DECLARE_CLASS2(com,haxepunk,RenderMode)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(haxe,Timer)
namespace com{
namespace haxepunk{


class HXCPP_CLASS_ATTRIBUTES  Engine_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef Engine_obj OBJ_;
		Engine_obj();
		Void __construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_fixed,::com::haxepunk::RenderMode renderMode);

	public:
		static hx::ObjectPtr< Engine_obj > __new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_fixed,::com::haxepunk::RenderMode renderMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Engine_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Engine"); }

		Array< int > _frameList;
		int _frameListSum;
		Float _frameLast;
		Float _systemTime;
		Float _gameTime;
		Float _renderTime;
		Float _updateTime;
		Float _prev;
		Float _skip;
		Float _rate;
		::haxe::Timer _timer;
		Float _last;
		Float _time;
		Float _delta;
		virtual Void checkScene( );
		Dynamic checkScene_dyn();

		virtual Void onTimer( );
		Dynamic onTimer_dyn();

		virtual Void onEnterFrame( ::flash::events::Event e);
		Dynamic onEnterFrame_dyn();

		virtual Void onStage( ::flash::events::Event e);
		Dynamic onStage_dyn();

		virtual Void resize( );
		Dynamic resize_dyn();

		virtual Void setStageProperties( );
		Dynamic setStageProperties_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void focusLost( );
		Dynamic focusLost_dyn();

		virtual Void focusGained( );
		Dynamic focusGained_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		int tickRate;
		int maxFrameSkip;
		Float maxElapsed;
		bool paused;
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Engine */ 
