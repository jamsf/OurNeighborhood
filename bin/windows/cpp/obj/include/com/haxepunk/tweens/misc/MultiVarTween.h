#ifndef INCLUDED_com_haxepunk_tweens_misc_MultiVarTween
#define INCLUDED_com_haxepunk_tweens_misc_MultiVarTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Tween.h>
HX_DECLARE_CLASS2(com,haxepunk,Tween)
HX_DECLARE_CLASS2(com,haxepunk,TweenType)
HX_DECLARE_CLASS4(com,haxepunk,tweens,misc,MultiVarTween)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace com{
namespace haxepunk{
namespace tweens{
namespace misc{


class HXCPP_CLASS_ATTRIBUTES  MultiVarTween_obj : public ::com::haxepunk::Tween_obj{
	public:
		typedef ::com::haxepunk::Tween_obj super;
		typedef MultiVarTween_obj OBJ_;
		MultiVarTween_obj();
		Void __construct(Dynamic complete,::com::haxepunk::TweenType type);

	public:
		static hx::ObjectPtr< MultiVarTween_obj > __new(Dynamic complete,::com::haxepunk::TweenType type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MultiVarTween_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MultiVarTween"); }

		Array< Float > _range;
		Array< Float > _start;
		Array< ::String > _vars;
		Dynamic _object;
		virtual Void update( );

		virtual Void tween( Dynamic object,Dynamic properties,Float duration,Dynamic ease);
		Dynamic tween_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace tweens
} // end namespace misc

#endif /* INCLUDED_com_haxepunk_tweens_misc_MultiVarTween */ 
