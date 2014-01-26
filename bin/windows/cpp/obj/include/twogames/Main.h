#ifndef INCLUDED_twogames_Main
#define INCLUDED_twogames_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Engine.h>
HX_DECLARE_CLASS2(com,haxepunk,Engine)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(twogames,Main)
namespace twogames{


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::com::haxepunk::Engine_obj{
	public:
		typedef ::com::haxepunk::Engine_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		virtual Void update( );

		virtual Void init( );

		static int kClearColor;
		static ::String kProjectName;
		static Void main( );
		static Dynamic main_dyn();

};

} // end namespace twogames

#endif /* INCLUDED_twogames_Main */ 
