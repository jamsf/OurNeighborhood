#ifndef INCLUDED_com_haxepunk_HXP
#define INCLUDED_com_haxepunk_HXP

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(com,haxepunk,Engine)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,HXP)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Screen)
HX_DECLARE_CLASS2(com,haxepunk,Tween)
HX_DECLARE_CLASS2(com,haxepunk,TweenType)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,debug,Console)
HX_DECLARE_CLASS4(com,haxepunk,tweens,misc,Alarm)
HX_DECLARE_CLASS4(com,haxepunk,tweens,misc,MultiVarTween)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,display,Stage)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flash,media,SoundTransform)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace haxepunk{


class HXCPP_CLASS_ATTRIBUTES  HXP_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HXP_obj OBJ_;
		HXP_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< HXP_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~HXP_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("HXP"); }

		static ::String VERSION;
		static int VERSION_MAJOR;
		static int VERSION_MINOR;
		static int VERSION_PATCH;
		static int BASELAYER;
		static Float get_NUMBER_MAX_VALUE( );
		static Dynamic get_NUMBER_MAX_VALUE_dyn();

		static int INT_MAX_VALUE;
		static int blackColor;
		static int width;
		static int height;
		static int windowWidth;
		static int windowHeight;
		static bool fixed;
		static Float frameRate;
		static Float assignedFrameRate;
		static Float elapsed;
		static Float rate;
		static ::com::haxepunk::Screen screen;
		static ::flash::display::BitmapData buffer;
		static ::flash::geom::Rectangle bounds;
		static ::String defaultFont;
		static ::flash::geom::Point camera;
		static ::com::haxepunk::Tweener tweener;
		static bool focused;
		static Float halfWidth;
		static Float halfHeight;
		static int renderMode;
		static Array< int > orientations;
		static Dynamic choose;
		static ::com::haxepunk::Scene get_world( );
		static Dynamic get_world_dyn();

		static ::com::haxepunk::Scene set_world( ::com::haxepunk::Scene value);
		static Dynamic set_world_dyn();

		static ::com::haxepunk::Scene get_scene( );
		static Dynamic get_scene_dyn();

		static ::com::haxepunk::Scene set_scene( ::com::haxepunk::Scene value);
		static Dynamic set_scene_dyn();

		static Void swapScene( );
		static Dynamic swapScene_dyn();

		static Void resize( int width,int height);
		static Dynamic resize_dyn();

		static Void clear( Dynamic array);
		static Dynamic clear_dyn();

		static Void setCamera( hx::Null< Float >  x,hx::Null< Float >  y);
		static Dynamic setCamera_dyn();

		static Void resetCamera( );
		static Dynamic resetCamera_dyn();

		static bool get_fullscreen( );
		static Dynamic get_fullscreen_dyn();

		static bool set_fullscreen( bool value);
		static Dynamic set_fullscreen_dyn();

		static Float get_volume( );
		static Dynamic get_volume_dyn();

		static Float set_volume( Float value);
		static Dynamic set_volume_dyn();

		static Float get_pan( );
		static Dynamic get_pan_dyn();

		static Float set_pan( Float value);
		static Dynamic set_pan_dyn();

		static Dynamic get_choose( );
		static Dynamic get_choose_dyn();

		static Dynamic _choose( Dynamic objs);
		static Dynamic _choose_dyn();

		static int sign( Float value);
		static Dynamic sign_dyn();

		static Float approach( Float value,Float target,Float amount);
		static Dynamic approach_dyn();

		static Float lerp( Float a,Float b,hx::Null< Float >  t);
		static Dynamic lerp_dyn();

		static int colorLerp( int fromColor,int toColor,hx::Null< Float >  t);
		static Dynamic colorLerp_dyn();

		static Void stepTowards( Dynamic object,Float x,Float y,hx::Null< Float >  distance);
		static Dynamic stepTowards_dyn();

		static Void anchorTo( Dynamic object,Dynamic anchor,hx::Null< Float >  distance);
		static Dynamic anchorTo_dyn();

		static Float angle( Float x1,Float y1,Float x2,Float y2);
		static Dynamic angle_dyn();

		static Void angleXY( Dynamic object,Float angle,hx::Null< Float >  length,hx::Null< Float >  x,hx::Null< Float >  y);
		static Dynamic angleXY_dyn();

		static Float angleDifference( Float angle1,Float angle2);
		static Dynamic angleDifference_dyn();

		static Void rotateAround( Dynamic object,Dynamic anchor,hx::Null< Float >  angle,hx::Null< bool >  relative);
		static Dynamic rotateAround_dyn();

		static Float round( Float num,int precision);
		static Dynamic round_dyn();

		static Float distance( Float x1,Float y1,hx::Null< Float >  x2,hx::Null< Float >  y2);
		static Dynamic distance_dyn();

		static Float distanceSquared( Float x1,Float y1,hx::Null< Float >  x2,hx::Null< Float >  y2);
		static Dynamic distanceSquared_dyn();

		static Float distanceRects( Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2);
		static Dynamic distanceRects_dyn();

		static Float distanceRectPoint( Float px,Float py,Float rx,Float ry,Float rw,Float rh);
		static Dynamic distanceRectPoint_dyn();

		static Float clamp( Float value,Float min,Float max);
		static Dynamic clamp_dyn();

		static Void clampInRect( Dynamic object,Float x,Float y,Float width,Float height,hx::Null< Float >  padding);
		static Dynamic clampInRect_dyn();

		static Float scale( Float value,Float min,Float max,Float min2,Float max2);
		static Dynamic scale_dyn();

		static Float scaleClamp( Float value,Float min,Float max,Float min2,Float max2);
		static Dynamic scaleClamp_dyn();

		static int randomSeed;
		static int set_randomSeed( int value);
		static Dynamic set_randomSeed_dyn();

		static Void randomizeSeed( );
		static Dynamic randomizeSeed_dyn();

		static Float random;
		static Float get_random( );
		static Dynamic get_random_dyn();

		static int rand( int amount);
		static Dynamic rand_dyn();

		static int indexOf( Dynamic arr,Dynamic v);
		static Dynamic indexOf_dyn();

		static Dynamic next( Dynamic current,Dynamic options,hx::Null< bool >  loop);
		static Dynamic next_dyn();

		static Dynamic prev( Dynamic current,Dynamic options,hx::Null< bool >  loop);
		static Dynamic prev_dyn();

		static Dynamic swap( Dynamic current,Dynamic a,Dynamic b);
		static Dynamic swap_dyn();

		static int getColorRGB( hx::Null< int >  R,hx::Null< int >  G,hx::Null< int >  B);
		static Dynamic getColorRGB_dyn();

		static int getColorHSV( Float h,Float s,Float v);
		static Dynamic getColorHSV_dyn();

		static Float getColorHue( int color);
		static Dynamic getColorHue_dyn();

		static Float getColorSaturation( int color);
		static Dynamic getColorSaturation_dyn();

		static Float getColorValue( int color);
		static Dynamic getColorValue_dyn();

		static int getRed( int color);
		static Dynamic getRed_dyn();

		static int getGreen( int color);
		static Dynamic getGreen_dyn();

		static int getBlue( int color);
		static Dynamic getBlue_dyn();

		static ::flash::display::BitmapData getBitmap( Dynamic source);
		static Dynamic getBitmap_dyn();

		static bool removeBitmap( Dynamic source);
		static Dynamic removeBitmap_dyn();

		static ::flash::display::BitmapData createBitmap( int width,int height,Dynamic transparent,Dynamic color);
		static Dynamic createBitmap_dyn();

		static Dynamic convertColor( int color);
		static Dynamic convertColor_dyn();

		static Float timeFlag( );
		static Dynamic timeFlag_dyn();

		static ::com::haxepunk::debug::Console get_console( );
		static Dynamic get_console_dyn();

		static bool consoleEnabled( );
		static Dynamic consoleEnabled_dyn();

		static Dynamic log;
		static Dynamic watch;
		static ::com::haxepunk::tweens::misc::MultiVarTween tween( Dynamic object,Dynamic values,Float duration,Dynamic options);
		static Dynamic tween_dyn();

		static ::com::haxepunk::tweens::misc::Alarm alarm( Float delay,Dynamic complete,::com::haxepunk::TweenType type,::com::haxepunk::Tweener tweener);
		static Dynamic alarm_dyn();

		static Array< int > frames( int from,int to,hx::Null< int >  skip);
		static Dynamic frames_dyn();

		static Void shuffle( Dynamic a);
		static Dynamic shuffle_dyn();

		static Void resizeStage( int width,int height);
		static Dynamic resizeStage_dyn();

		static Float time;
		static Float set_time( Float value);
		static Dynamic set_time_dyn();

		static bool gotoIsNull( );
		static Dynamic gotoIsNull_dyn();

		static ::com::haxepunk::Scene _scene;
		static ::com::haxepunk::Scene _goto;
		static ::com::haxepunk::debug::Console _console;
		static Float _time;
		static Float _updateTime;
		static Float _renderTime;
		static Float _gameTime;
		static Float _systemTime;
		static ::haxe::ds::StringMap _bitmap;
		static int _seed;
		static Float _volume;
		static Float _pan;
		static ::flash::media::SoundTransform _soundTransform;
		static Float get_DEG( );
		static Dynamic get_DEG_dyn();

		static Float get_RAD( );
		static Dynamic get_RAD_dyn();

		static ::flash::display::Stage stage;
		static ::com::haxepunk::Engine engine;
		static ::flash::geom::Point point;
		static ::flash::geom::Point point2;
		static ::flash::geom::Point zero;
		static ::flash::geom::Rectangle rect;
		static ::flash::geom::Matrix matrix;
		static ::flash::display::Sprite sprite;
		static ::com::haxepunk::Entity entity;
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_HXP */ 
