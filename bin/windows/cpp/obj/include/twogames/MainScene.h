#ifndef INCLUDED_twogames_MainScene
#define INCLUDED_twogames_MainScene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Scene.h>
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(twogames,MainScene)
namespace twogames{


class HXCPP_CLASS_ATTRIBUTES  MainScene_obj : public ::com::haxepunk::Scene_obj{
	public:
		typedef ::com::haxepunk::Scene_obj super;
		typedef MainScene_obj OBJ_;
		MainScene_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MainScene_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MainScene_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MainScene"); }

};

} // end namespace twogames

#endif /* INCLUDED_twogames_MainScene */ 
