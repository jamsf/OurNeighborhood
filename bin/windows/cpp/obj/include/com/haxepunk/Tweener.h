#ifndef INCLUDED_com_haxepunk_Tweener
#define INCLUDED_com_haxepunk_Tweener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Tween)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace com{
namespace haxepunk{


class HXCPP_CLASS_ATTRIBUTES  Tweener_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tweener_obj OBJ_;
		Tweener_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Tweener_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Tweener_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tweener"); }

		::com::haxepunk::Tween _tween;
		virtual bool get_hasTween( );
		Dynamic get_hasTween_dyn();

		virtual Void updateTweens( );
		Dynamic updateTweens_dyn();

		virtual Void clearTweens( );
		Dynamic clearTweens_dyn();

		virtual ::com::haxepunk::Tween removeTween( ::com::haxepunk::Tween t);
		Dynamic removeTween_dyn();

		virtual ::com::haxepunk::Tween addTween( ::com::haxepunk::Tween t,hx::Null< bool >  start);
		Dynamic addTween_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		bool autoClear;
		bool active;
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Tweener */ 
