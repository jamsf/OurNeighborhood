#ifndef INCLUDED_com_haxepunk_utils_Touch
#define INCLUDED_com_haxepunk_utils_Touch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,utils,Touch)
namespace com{
namespace haxepunk{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Touch_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Touch_obj OBJ_;
		Touch_obj();
		Void __construct(Float x,Float y,int id);

	public:
		static hx::ObjectPtr< Touch_obj > __new(Float x,Float y,int id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Touch_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Touch"); }

		virtual Void update( );
		Dynamic update_dyn();

		virtual bool get_pressed( );
		Dynamic get_pressed_dyn();

		virtual Float get_sceneY( );
		Dynamic get_sceneY_dyn();

		virtual Float get_sceneX( );
		Dynamic get_sceneX_dyn();

		Float time;
		Float y;
		Float x;
		int id;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_Touch */ 
