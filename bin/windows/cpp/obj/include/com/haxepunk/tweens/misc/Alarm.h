#ifndef INCLUDED_com_haxepunk_tweens_misc_Alarm
#define INCLUDED_com_haxepunk_tweens_misc_Alarm

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Tween.h>
HX_DECLARE_CLASS2(com,haxepunk,Tween)
HX_DECLARE_CLASS2(com,haxepunk,TweenType)
HX_DECLARE_CLASS4(com,haxepunk,tweens,misc,Alarm)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace com{
namespace haxepunk{
namespace tweens{
namespace misc{


class HXCPP_CLASS_ATTRIBUTES  Alarm_obj : public ::com::haxepunk::Tween_obj{
	public:
		typedef ::com::haxepunk::Tween_obj super;
		typedef Alarm_obj OBJ_;
		Alarm_obj();
		Void __construct(Float duration,Dynamic complete,::com::haxepunk::TweenType type);

	public:
		static hx::ObjectPtr< Alarm_obj > __new(Float duration,Dynamic complete,::com::haxepunk::TweenType type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Alarm_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Alarm"); }

		virtual Float get_remaining( );
		Dynamic get_remaining_dyn();

		virtual Float get_duration( );
		Dynamic get_duration_dyn();

		virtual Float get_elapsed( );
		Dynamic get_elapsed_dyn();

		virtual Void reset( Float duration);
		Dynamic reset_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace tweens
} // end namespace misc

#endif /* INCLUDED_com_haxepunk_tweens_misc_Alarm */ 
