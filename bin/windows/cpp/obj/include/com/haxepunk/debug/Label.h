#ifndef INCLUDED_com_haxepunk_debug_Label
#define INCLUDED_com_haxepunk_debug_Label

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/text/TextField.h>
HX_DECLARE_CLASS3(com,haxepunk,debug,Label)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,text,TextField)
namespace com{
namespace haxepunk{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Label_obj : public ::flash::text::TextField_obj{
	public:
		typedef ::flash::text::TextField_obj super;
		typedef Label_obj OBJ_;
		Label_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Label_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Label_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Label"); }

		virtual int set_layer( int value);
		Dynamic set_layer_dyn();

		int layer;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace debug

#endif /* INCLUDED_com_haxepunk_debug_Label */ 
