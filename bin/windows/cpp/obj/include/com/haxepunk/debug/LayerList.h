#ifndef INCLUDED_com_haxepunk_debug_LayerList
#define INCLUDED_com_haxepunk_debug_LayerList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS3(com,haxepunk,debug,LayerList)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,text,TextFormat)
namespace com{
namespace haxepunk{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  LayerList_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef LayerList_obj OBJ_;
		LayerList_obj();
		Void __construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height);

	public:
		static hx::ObjectPtr< LayerList_obj > __new(hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LayerList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LayerList"); }

		::flash::text::TextFormat _textFormat;
		Float _velocity;
		Array< ::Dynamic > _removeList;
		virtual Void update( );
		Dynamic update_dyn();

		virtual Void onClick( ::flash::events::MouseEvent e);
		Dynamic onClick_dyn();

		virtual Void set( Array< int > list);
		Dynamic set_dyn();

		static Float DRAG;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace debug

#endif /* INCLUDED_com_haxepunk_debug_LayerList */ 
