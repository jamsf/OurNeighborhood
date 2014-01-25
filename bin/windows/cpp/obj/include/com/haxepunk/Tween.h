#ifndef INCLUDED_com_haxepunk_Tween
#define INCLUDED_com_haxepunk_Tween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/EventDispatcher.h>
HX_DECLARE_CLASS2(com,haxepunk,Tween)
HX_DECLARE_CLASS2(com,haxepunk,TweenType)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace com{
namespace haxepunk{


class HXCPP_CLASS_ATTRIBUTES  Tween_obj : public ::flash::events::EventDispatcher_obj{
	public:
		typedef ::flash::events::EventDispatcher_obj super;
		typedef Tween_obj OBJ_;
		Tween_obj();
		Void __construct(Float duration,::com::haxepunk::TweenType type,Dynamic complete,Dynamic ease);

	public:
		static hx::ObjectPtr< Tween_obj > __new(Float duration,::com::haxepunk::TweenType type,Dynamic complete,Dynamic ease);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Tween_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tween"); }

		Dynamic _next;
		Dynamic _prev;
		::com::haxepunk::Tweener _parent;
		bool _finish;
		Float _target;
		Float _time;
		Float _t;
		Dynamic _ease;
		Dynamic &_ease_dyn() { return _ease;}
		::com::haxepunk::TweenType _type;
		virtual Float get_scale( );
		Dynamic get_scale_dyn();

		Float scale;
		virtual Float set_percent( Float value);
		Dynamic set_percent_dyn();

		virtual Float get_percent( );
		Dynamic get_percent_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual Void finish( );
		Dynamic finish_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		bool active;
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Tween */ 
