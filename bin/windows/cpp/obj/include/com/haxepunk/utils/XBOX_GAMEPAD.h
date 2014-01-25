#ifndef INCLUDED_com_haxepunk_utils_XBOX_GAMEPAD
#define INCLUDED_com_haxepunk_utils_XBOX_GAMEPAD

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,utils,XBOX_GAMEPAD)
namespace com{
namespace haxepunk{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  XBOX_GAMEPAD_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef XBOX_GAMEPAD_obj OBJ_;
		XBOX_GAMEPAD_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< XBOX_GAMEPAD_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~XBOX_GAMEPAD_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("XBOX_GAMEPAD"); }

		static int A_BUTTON;
		static int B_BUTTON;
		static int X_BUTTON;
		static int Y_BUTTON;
		static int LB_BUTTON;
		static int RB_BUTTON;
		static int BACK_BUTTON;
		static int START_BUTTON;
		static int LEFT_ANALOGUE_BUTTON;
		static int RIGHT_ANALOGUE_BUTTON;
		static int LEFT_ANALOGUE_X;
		static int LEFT_ANALOGUE_Y;
		static int RIGHT_ANALOGUE_X;
		static int RIGHT_ANALOGUE_Y;
		static int TRIGGER;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_XBOX_GAMEPAD */ 
