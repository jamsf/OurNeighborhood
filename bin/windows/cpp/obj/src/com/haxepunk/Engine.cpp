#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Draw
#include <com/haxepunk/utils/Draw.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageAlign
#include <flash/display/StageAlign.h>
#endif
#ifndef INCLUDED_flash_display_StageDisplayState
#include <flash/display/StageDisplayState.h>
#endif
#ifndef INCLUDED_flash_display_StageQuality
#include <flash/display/StageQuality.h>
#endif
#ifndef INCLUDED_flash_display_StageScaleMode
#include <flash/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{

Void Engine_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_fixed,::com::haxepunk::RenderMode renderMode)
{
HX_STACK_PUSH("Engine::new","com/haxepunk/Engine.hx",54);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
Float frameRate = __o_frameRate.Default(60);
bool fixed = __o_fixed.Default(false);
{
	HX_STACK_LINE(55)
	super::__construct();
	HX_STACK_LINE(58)
	::com::haxepunk::HXP_obj::bounds = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,width,height);
	HX_STACK_LINE(59)
	::com::haxepunk::HXP_obj::assignedFrameRate = frameRate;
	HX_STACK_LINE(60)
	::com::haxepunk::HXP_obj::fixed = fixed;
	struct _Function_1_1{
		inline static int Block( ){
			HX_STACK_PUSH("*::closure","com/haxepunk/Engine.hx",62);
			{
				HX_STACK_LINE(62)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(62)
				return i;
			}
			return null();
		}
	};
	HX_STACK_LINE(62)
	::com::haxepunk::HXP_obj::renderMode = _Function_1_1::Block();
	HX_STACK_LINE(66)
	if (((renderMode != null()))){
		HX_STACK_LINE(67)
		hx::OrEq(::com::haxepunk::HXP_obj::renderMode,(int((int)1) << int(renderMode->__Index())));
	}
	else{
		HX_STACK_LINE(71)
		hx::OrEq(::com::haxepunk::HXP_obj::renderMode,(int((int)1) << int(::com::haxepunk::RenderMode_obj::HARDWARE->__Index())));
	}
	HX_STACK_LINE(76)
	::com::haxepunk::HXP_obj::engine = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(77)
	::com::haxepunk::HXP_obj::screen = ::com::haxepunk::Screen_obj::__new();
	HX_STACK_LINE(78)
	::com::haxepunk::HXP_obj::width = width;
	HX_STACK_LINE(79)
	::com::haxepunk::HXP_obj::height = height;
	HX_STACK_LINE(85)
	if (((::com::haxepunk::HXP_obj::randomSeed == (int)0))){
		HX_STACK_LINE(85)
		::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(::com::haxepunk::HXP_obj::clamp(::Std_obj::_int(((int)2147483646 * ::Math_obj::random())),1.0,(int)2147483646));
		HX_STACK_LINE(85)
		::com::haxepunk::HXP_obj::randomSeed = ::com::haxepunk::HXP_obj::_seed;
		HX_STACK_LINE(85)
		::com::haxepunk::HXP_obj::_seed;
	}
	HX_STACK_LINE(88)
	::com::haxepunk::HXP_obj::entity = ::com::haxepunk::Entity_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		::com::haxepunk::HXP_obj::_time = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(89)
		::com::haxepunk::HXP_obj::_time;
	}
	HX_STACK_LINE(91)
	this->paused = false;
	HX_STACK_LINE(92)
	this->maxElapsed = 0.0333;
	HX_STACK_LINE(93)
	this->maxFrameSkip = (int)5;
	HX_STACK_LINE(94)
	this->tickRate = (int)4;
	HX_STACK_LINE(95)
	this->_frameList = Array_obj< int >::__new();
	HX_STACK_LINE(96)
	this->_systemTime = this->_delta = this->_frameListSum = (int)0;
	HX_STACK_LINE(97)
	this->_frameLast = (int)0;
	HX_STACK_LINE(104)
	this->addEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->onStage_dyn(),null(),null(),null());
	HX_STACK_LINE(105)
	::flash::Lib_obj::get_current()->addChild(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

Engine_obj::~Engine_obj() { }

Dynamic Engine_obj::__CreateEmpty() { return  new Engine_obj; }
hx::ObjectPtr< Engine_obj > Engine_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_fixed,::com::haxepunk::RenderMode renderMode)
{  hx::ObjectPtr< Engine_obj > result = new Engine_obj();
	result->__construct(__o_width,__o_height,__o_frameRate,__o_fixed,renderMode);
	return result;}

Dynamic Engine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Engine_obj > result = new Engine_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void Engine_obj::checkScene( ){
{
		HX_STACK_PUSH("Engine::checkScene","com/haxepunk/Engine.hx",381);
		HX_STACK_THIS(this);
		HX_STACK_LINE(382)
		if (((::com::haxepunk::HXP_obj::_goto == null()))){
			HX_STACK_LINE(382)
			return null();
		}
		HX_STACK_LINE(384)
		if (((::com::haxepunk::HXP_obj::_scene != null()))){
			HX_STACK_LINE(386)
			::com::haxepunk::HXP_obj::_scene->end();
			HX_STACK_LINE(387)
			::com::haxepunk::HXP_obj::_scene->updateLists(null());
			HX_STACK_LINE(388)
			if (((bool(::com::haxepunk::HXP_obj::_scene->autoClear) && bool(::com::haxepunk::HXP_obj::_scene->get_hasTween())))){
				HX_STACK_LINE(388)
				::com::haxepunk::HXP_obj::_scene->clearTweens();
			}
			HX_STACK_LINE(389)
			if ((this->contains(::com::haxepunk::HXP_obj::_scene->_sprite))){
				HX_STACK_LINE(389)
				this->removeChild(::com::haxepunk::HXP_obj::_scene->_sprite);
			}
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(390)
				::com::haxepunk::HXP_obj::_scene = ::com::haxepunk::HXP_obj::_goto;
				HX_STACK_LINE(390)
				::com::haxepunk::HXP_obj::_goto = null();
			}
			HX_STACK_LINE(391)
			this->addChild(::com::haxepunk::HXP_obj::_scene->_sprite);
			HX_STACK_LINE(392)
			::com::haxepunk::HXP_obj::camera = ::com::haxepunk::HXP_obj::_scene->camera;
			HX_STACK_LINE(393)
			::com::haxepunk::HXP_obj::_scene->updateLists(null());
			HX_STACK_LINE(394)
			::com::haxepunk::HXP_obj::_scene->begin();
			HX_STACK_LINE(395)
			::com::haxepunk::HXP_obj::_scene->updateLists(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,checkScene,(void))

Void Engine_obj::onTimer( ){
{
		HX_STACK_PUSH("Engine::onTimer","com/haxepunk/Engine.hx",329);
		HX_STACK_THIS(this);
		HX_STACK_LINE(331)
		this->_time = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(332)
		hx::AddEq(this->_delta,(this->_time - this->_last));
		HX_STACK_LINE(333)
		this->_last = this->_time;
		HX_STACK_LINE(336)
		if (((this->_delta < this->_rate))){
			HX_STACK_LINE(336)
			return null();
		}
		HX_STACK_LINE(339)
		this->_gameTime = ::Std_obj::_int(this->_time);
		HX_STACK_LINE(340)
		::com::haxepunk::HXP_obj::_systemTime = (this->_time - this->_systemTime);
		HX_STACK_LINE(343)
		if (((this->_delta > this->_skip))){
			HX_STACK_LINE(343)
			this->_delta = this->_skip;
		}
		HX_STACK_LINE(344)
		while(((this->_delta >= this->_rate))){
			HX_STACK_LINE(346)
			::com::haxepunk::HXP_obj::elapsed = ((this->_rate * ::com::haxepunk::HXP_obj::rate) * 0.001);
			HX_STACK_LINE(349)
			this->_updateTime = this->_time;
			HX_STACK_LINE(350)
			hx::SubEq(this->_delta,this->_rate);
			HX_STACK_LINE(351)
			this->_prev = this->_time;
			HX_STACK_LINE(354)
			if ((!(this->paused))){
				HX_STACK_LINE(354)
				this->update();
			}
			HX_STACK_LINE(357)
			if ((::com::haxepunk::HXP_obj::consoleEnabled())){
				struct _Function_3_1{
					inline static ::com::haxepunk::debug::Console Block( ){
						HX_STACK_PUSH("*::closure","com/haxepunk/Engine.hx",357);
						{
							HX_STACK_LINE(357)
							if (((::com::haxepunk::HXP_obj::_console == null()))){
								HX_STACK_LINE(357)
								::com::haxepunk::HXP_obj::_console = ::com::haxepunk::debug::Console_obj::__new();
							}
							HX_STACK_LINE(357)
							return ::com::haxepunk::HXP_obj::_console;
						}
						return null();
					}
				};
				HX_STACK_LINE(357)
				(_Function_3_1::Block())->update();
			}
			HX_STACK_LINE(360)
			::com::haxepunk::utils::Input_obj::update();
			HX_STACK_LINE(363)
			this->_time = ::flash::Lib_obj::getTimer();
			HX_STACK_LINE(364)
			::com::haxepunk::HXP_obj::_updateTime = (this->_time - this->_updateTime);
		}
		HX_STACK_LINE(368)
		this->_renderTime = this->_time;
		HX_STACK_LINE(371)
		if ((!(this->paused))){
			HX_STACK_LINE(371)
			this->render();
		}
		HX_STACK_LINE(374)
		this->_time = this->_systemTime = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(375)
		::com::haxepunk::HXP_obj::_renderTime = (this->_time - this->_renderTime);
		HX_STACK_LINE(376)
		::com::haxepunk::HXP_obj::_gameTime = (this->_time - this->_gameTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,onTimer,(void))

Void Engine_obj::onEnterFrame( ::flash::events::Event e){
{
		HX_STACK_PUSH("Engine::onEnterFrame","com/haxepunk/Engine.hx",295);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(297)
		this->_time = this->_gameTime = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(298)
		::com::haxepunk::HXP_obj::_systemTime = (this->_time - this->_systemTime);
		HX_STACK_LINE(299)
		this->_updateTime = this->_time;
		HX_STACK_LINE(300)
		::com::haxepunk::HXP_obj::elapsed = (Float(((this->_time - this->_last))) / Float((int)1000));
		HX_STACK_LINE(301)
		if (((::com::haxepunk::HXP_obj::elapsed > this->maxElapsed))){
			HX_STACK_LINE(301)
			::com::haxepunk::HXP_obj::elapsed = this->maxElapsed;
		}
		HX_STACK_LINE(302)
		hx::MultEq(::com::haxepunk::HXP_obj::elapsed,::com::haxepunk::HXP_obj::rate);
		HX_STACK_LINE(303)
		this->_last = this->_time;
		HX_STACK_LINE(306)
		if ((!(this->paused))){
			HX_STACK_LINE(306)
			this->update();
		}
		HX_STACK_LINE(309)
		if ((::com::haxepunk::HXP_obj::consoleEnabled())){
			struct _Function_2_1{
				inline static ::com::haxepunk::debug::Console Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/Engine.hx",309);
					{
						HX_STACK_LINE(309)
						if (((::com::haxepunk::HXP_obj::_console == null()))){
							HX_STACK_LINE(309)
							::com::haxepunk::HXP_obj::_console = ::com::haxepunk::debug::Console_obj::__new();
						}
						HX_STACK_LINE(309)
						return ::com::haxepunk::HXP_obj::_console;
					}
					return null();
				}
			};
			HX_STACK_LINE(309)
			(_Function_2_1::Block())->update();
		}
		HX_STACK_LINE(312)
		::com::haxepunk::utils::Input_obj::update();
		HX_STACK_LINE(315)
		this->_time = this->_renderTime = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(316)
		::com::haxepunk::HXP_obj::_updateTime = (this->_time - this->_updateTime);
		HX_STACK_LINE(319)
		if ((!(this->paused))){
			HX_STACK_LINE(319)
			this->render();
		}
		HX_STACK_LINE(322)
		this->_time = this->_systemTime = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(323)
		::com::haxepunk::HXP_obj::_renderTime = (this->_time - this->_renderTime);
		HX_STACK_LINE(324)
		::com::haxepunk::HXP_obj::_gameTime = (this->_time - this->_gameTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onEnterFrame,(void))

Void Engine_obj::onStage( ::flash::events::Event e){
{
		HX_STACK_PUSH("Engine::onStage","com/haxepunk/Engine.hx",233);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(241)
		this->removeEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->onStage_dyn(),null());
		HX_STACK_LINE(242)
		::com::haxepunk::HXP_obj::stage = this->get_stage();
		HX_STACK_LINE(244)
		this->setStageProperties();
		HX_STACK_LINE(247)
		::com::haxepunk::utils::Input_obj::enable();
		HX_STACK_LINE(250)
		if ((!(((::com::haxepunk::HXP_obj::_goto == null()))))){
			HX_STACK_LINE(250)
			this->checkScene();
		}
		HX_STACK_LINE(253)
		::com::haxepunk::utils::Draw_obj::init();
		HX_STACK_LINE(254)
		this->init();
		HX_STACK_LINE(257)
		this->_rate = (Float((int)1000) / Float(::com::haxepunk::HXP_obj::assignedFrameRate));
		HX_STACK_LINE(258)
		if ((::com::haxepunk::HXP_obj::fixed)){
			HX_STACK_LINE(261)
			this->_skip = (this->_rate * ((this->maxFrameSkip + (int)1)));
			HX_STACK_LINE(262)
			this->_last = this->_prev = ::flash::Lib_obj::getTimer();
			HX_STACK_LINE(263)
			this->_timer = ::haxe::Timer_obj::__new(this->tickRate);
			HX_STACK_LINE(264)
			this->_timer->run = this->onTimer_dyn();
		}
		else{
			HX_STACK_LINE(269)
			this->_last = ::flash::Lib_obj::getTimer();
			HX_STACK_LINE(270)
			this->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(274)
		if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::BUFFER->__Index()))))) != (int)0))){
			struct _Function_2_1{
				inline static ::com::haxepunk::debug::Console Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/Engine.hx",277);
					{
						HX_STACK_LINE(277)
						if (((::com::haxepunk::HXP_obj::_console == null()))){
							HX_STACK_LINE(277)
							::com::haxepunk::HXP_obj::_console = ::com::haxepunk::debug::Console_obj::__new();
						}
						HX_STACK_LINE(277)
						return ::com::haxepunk::HXP_obj::_console;
					}
					return null();
				}
			};
			HX_STACK_LINE(275)
			(_Function_2_1::Block())->log(Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("Warning: Using RenderMode.BUFFER on native target may result in bad performance"))));
		}
		else{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onStage,(void))

Void Engine_obj::resize( ){
{
		HX_STACK_PUSH("Engine::resize","com/haxepunk/Engine.hx",220);
		HX_STACK_THIS(this);
		HX_STACK_LINE(221)
		if (((::com::haxepunk::HXP_obj::width == (int)0))){
			HX_STACK_LINE(221)
			::com::haxepunk::HXP_obj::width = ::com::haxepunk::HXP_obj::stage->get_stageWidth();
		}
		HX_STACK_LINE(222)
		if (((::com::haxepunk::HXP_obj::height == (int)0))){
			HX_STACK_LINE(222)
			::com::haxepunk::HXP_obj::height = ::com::haxepunk::HXP_obj::stage->get_stageHeight();
		}
		HX_STACK_LINE(224)
		::com::haxepunk::HXP_obj::windowWidth = ::com::haxepunk::HXP_obj::stage->get_stageWidth();
		HX_STACK_LINE(225)
		::com::haxepunk::HXP_obj::windowHeight = ::com::haxepunk::HXP_obj::stage->get_stageHeight();
		HX_STACK_LINE(226)
		::com::haxepunk::HXP_obj::screen->set_scaleX((Float(::com::haxepunk::HXP_obj::stage->get_stageWidth()) / Float(::com::haxepunk::HXP_obj::width)));
		HX_STACK_LINE(227)
		::com::haxepunk::HXP_obj::screen->set_scaleY((Float(::com::haxepunk::HXP_obj::stage->get_stageHeight()) / Float(::com::haxepunk::HXP_obj::height)));
		HX_STACK_LINE(228)
		::com::haxepunk::HXP_obj::resize(::com::haxepunk::HXP_obj::stage->get_stageWidth(),::com::haxepunk::HXP_obj::stage->get_stageHeight());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,resize,(void))

Void Engine_obj::setStageProperties( ){
{
		HX_STACK_PUSH("Engine::setStageProperties","com/haxepunk/Engine.hx",178);
		HX_STACK_THIS(this);
		HX_STACK_LINE(177)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(179)
		::com::haxepunk::HXP_obj::stage->set_frameRate(::com::haxepunk::HXP_obj::assignedFrameRate);
		HX_STACK_LINE(180)
		::com::haxepunk::HXP_obj::stage->set_align(::flash::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(181)
		::com::haxepunk::HXP_obj::stage->set_quality(::flash::display::StageQuality_obj::HIGH);
		HX_STACK_LINE(182)
		::com::haxepunk::HXP_obj::stage->set_scaleMode(::flash::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(183)
		::com::haxepunk::HXP_obj::stage->set_displayState(::flash::display::StageDisplayState_obj::NORMAL);
		HX_STACK_LINE(184)
		::com::haxepunk::HXP_obj::windowWidth = ::com::haxepunk::HXP_obj::stage->get_stageWidth();
		HX_STACK_LINE(185)
		::com::haxepunk::HXP_obj::windowHeight = ::com::haxepunk::HXP_obj::stage->get_stageHeight();
		HX_STACK_LINE(187)
		this->resize();

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::flash::events::Event e){
			HX_STACK_PUSH("*::_Function_1_1","com/haxepunk/Engine.hx",190);
			HX_STACK_ARG(e,"e");
			{
				HX_STACK_LINE(190)
				_g->__get((int)0).StaticCast< ::com::haxepunk::Engine >()->resize();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(190)
		::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::Event_obj::RESIZE, Dynamic(new _Function_1_1(_g)),null(),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
		Void run(::flash::events::Event e){
			HX_STACK_PUSH("*::_Function_1_2","com/haxepunk/Engine.hx",194);
			HX_STACK_ARG(e,"e");
			{
				HX_STACK_LINE(195)
				::com::haxepunk::HXP_obj::focused = true;
				HX_STACK_LINE(196)
				_g->__get((int)0).StaticCast< ::com::haxepunk::Engine >()->focusGained();
				HX_STACK_LINE(197)
				::com::haxepunk::HXP_obj::_scene->focusGained();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(194)
		::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::Event_obj::ACTIVATE, Dynamic(new _Function_1_2(_g)),null(),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,Array< ::Dynamic >,_g)
		Void run(::flash::events::Event e){
			HX_STACK_PUSH("*::_Function_1_3","com/haxepunk/Engine.hx",200);
			HX_STACK_ARG(e,"e");
			{
				HX_STACK_LINE(201)
				::com::haxepunk::HXP_obj::focused = false;
				HX_STACK_LINE(202)
				_g->__get((int)0).StaticCast< ::com::haxepunk::Engine >()->focusLost();
				HX_STACK_LINE(203)
				::com::haxepunk::HXP_obj::_scene->focusLost();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(200)
		::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::Event_obj::DEACTIVATE, Dynamic(new _Function_1_3(_g)),null(),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_4,Array< ::Dynamic >,_g)
		bool run(int orientation){
			HX_STACK_PUSH("*::_Function_1_4","com/haxepunk/Engine.hx",207);
			HX_STACK_ARG(orientation,"orientation");
			{
				HX_STACK_LINE(208)
				if (((::Lambda_obj::indexOf(::com::haxepunk::HXP_obj::orientations,orientation) == (int)-1))){
					HX_STACK_LINE(208)
					return false;
				}
				HX_STACK_LINE(209)
				int tmp = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(210)
				::com::haxepunk::HXP_obj::height = ::com::haxepunk::HXP_obj::width;
				HX_STACK_LINE(211)
				::com::haxepunk::HXP_obj::width = tmp;
				HX_STACK_LINE(212)
				_g->__get((int)0).StaticCast< ::com::haxepunk::Engine >()->resize();
				HX_STACK_LINE(213)
				return true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(207)
		::flash::display::Stage_obj::shouldRotateInterface =  Dynamic(new _Function_1_4(_g));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,setStageProperties,(void))

Void Engine_obj::render( ){
{
		HX_STACK_PUSH("Engine::render","com/haxepunk/Engine.hx",144);
		HX_STACK_THIS(this);
		HX_STACK_LINE(145)
		if ((::com::haxepunk::HXP_obj::screen->needsResize)){
			HX_STACK_LINE(145)
			::com::haxepunk::HXP_obj::resize(::com::haxepunk::HXP_obj::windowWidth,::com::haxepunk::HXP_obj::windowHeight);
		}
		HX_STACK_LINE(148)
		Float t = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(149)
		if (((this->_frameLast == (int)0))){
			HX_STACK_LINE(149)
			this->_frameLast = ::Std_obj::_int(t);
		}
		HX_STACK_LINE(152)
		if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::BUFFER->__Index()))))) != (int)0))){
			HX_STACK_LINE(154)
			::com::haxepunk::HXP_obj::screen->swap();
			HX_STACK_LINE(155)
			::com::haxepunk::HXP_obj::screen->refresh();
		}
		HX_STACK_LINE(157)
		::com::haxepunk::utils::Draw_obj::resetTarget();
		HX_STACK_LINE(159)
		if ((::com::haxepunk::HXP_obj::_scene->visible)){
			HX_STACK_LINE(159)
			::com::haxepunk::HXP_obj::_scene->render();
		}
		HX_STACK_LINE(161)
		if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::BUFFER->__Index()))))) != (int)0))){
			HX_STACK_LINE(162)
			::com::haxepunk::HXP_obj::screen->redraw();
		}
		HX_STACK_LINE(167)
		t = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(168)
		hx::AddEq(this->_frameListSum,this->_frameList[this->_frameList->length] = ::Std_obj::_int((t - this->_frameLast)));
		HX_STACK_LINE(169)
		if (((this->_frameList->length > (int)10))){
			HX_STACK_LINE(169)
			hx::SubEq(this->_frameListSum,this->_frameList->shift());
		}
		HX_STACK_LINE(170)
		::com::haxepunk::HXP_obj::frameRate = (Float((int)1000) / Float(((Float(this->_frameListSum) / Float(this->_frameList->length)))));
		HX_STACK_LINE(171)
		this->_frameLast = t;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,render,(void))

Void Engine_obj::update( ){
{
		HX_STACK_PUSH("Engine::update","com/haxepunk/Engine.hx",128);
		HX_STACK_THIS(this);
		HX_STACK_LINE(129)
		::com::haxepunk::HXP_obj::_scene->updateLists(null());
		HX_STACK_LINE(130)
		if ((!(((::com::haxepunk::HXP_obj::_goto == null()))))){
			HX_STACK_LINE(130)
			this->checkScene();
		}
		HX_STACK_LINE(131)
		if (((bool(::com::haxepunk::HXP_obj::tweener->active) && bool(::com::haxepunk::HXP_obj::tweener->get_hasTween())))){
			HX_STACK_LINE(131)
			::com::haxepunk::HXP_obj::tweener->updateTweens();
		}
		HX_STACK_LINE(132)
		if ((::com::haxepunk::HXP_obj::_scene->active)){
			HX_STACK_LINE(134)
			if ((::com::haxepunk::HXP_obj::_scene->get_hasTween())){
				HX_STACK_LINE(134)
				::com::haxepunk::HXP_obj::_scene->updateTweens();
			}
			HX_STACK_LINE(135)
			::com::haxepunk::HXP_obj::_scene->update();
		}
		HX_STACK_LINE(137)
		::com::haxepunk::HXP_obj::_scene->updateLists(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,update,(void))

Void Engine_obj::focusLost( ){
{
		HX_STACK_PUSH("Engine::focusLost","com/haxepunk/Engine.hx",122);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,focusLost,(void))

Void Engine_obj::focusGained( ){
{
		HX_STACK_PUSH("Engine::focusGained","com/haxepunk/Engine.hx",117);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,focusGained,(void))

Void Engine_obj::init( ){
{
		HX_STACK_PUSH("Engine::init","com/haxepunk/Engine.hx",112);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,init,(void))


Engine_obj::Engine_obj()
{
}

void Engine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Engine);
	HX_MARK_MEMBER_NAME(_frameList,"_frameList");
	HX_MARK_MEMBER_NAME(_frameListSum,"_frameListSum");
	HX_MARK_MEMBER_NAME(_frameLast,"_frameLast");
	HX_MARK_MEMBER_NAME(_systemTime,"_systemTime");
	HX_MARK_MEMBER_NAME(_gameTime,"_gameTime");
	HX_MARK_MEMBER_NAME(_renderTime,"_renderTime");
	HX_MARK_MEMBER_NAME(_updateTime,"_updateTime");
	HX_MARK_MEMBER_NAME(_prev,"_prev");
	HX_MARK_MEMBER_NAME(_skip,"_skip");
	HX_MARK_MEMBER_NAME(_rate,"_rate");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_delta,"_delta");
	HX_MARK_MEMBER_NAME(tickRate,"tickRate");
	HX_MARK_MEMBER_NAME(maxFrameSkip,"maxFrameSkip");
	HX_MARK_MEMBER_NAME(maxElapsed,"maxElapsed");
	HX_MARK_MEMBER_NAME(paused,"paused");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Engine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_frameList,"_frameList");
	HX_VISIT_MEMBER_NAME(_frameListSum,"_frameListSum");
	HX_VISIT_MEMBER_NAME(_frameLast,"_frameLast");
	HX_VISIT_MEMBER_NAME(_systemTime,"_systemTime");
	HX_VISIT_MEMBER_NAME(_gameTime,"_gameTime");
	HX_VISIT_MEMBER_NAME(_renderTime,"_renderTime");
	HX_VISIT_MEMBER_NAME(_updateTime,"_updateTime");
	HX_VISIT_MEMBER_NAME(_prev,"_prev");
	HX_VISIT_MEMBER_NAME(_skip,"_skip");
	HX_VISIT_MEMBER_NAME(_rate,"_rate");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_delta,"_delta");
	HX_VISIT_MEMBER_NAME(tickRate,"tickRate");
	HX_VISIT_MEMBER_NAME(maxFrameSkip,"maxFrameSkip");
	HX_VISIT_MEMBER_NAME(maxElapsed,"maxElapsed");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Engine_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_prev") ) { return _prev; }
		if (HX_FIELD_EQ(inName,"_skip") ) { return _skip; }
		if (HX_FIELD_EQ(inName,"_rate") ) { return _rate; }
		if (HX_FIELD_EQ(inName,"_last") ) { return _last; }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_delta") ) { return _delta; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onTimer") ) { return onTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"onStage") ) { return onStage_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tickRate") ) { return tickRate; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gameTime") ) { return _gameTime; }
		if (HX_FIELD_EQ(inName,"focusLost") ) { return focusLost_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_frameList") ) { return _frameList; }
		if (HX_FIELD_EQ(inName,"_frameLast") ) { return _frameLast; }
		if (HX_FIELD_EQ(inName,"checkScene") ) { return checkScene_dyn(); }
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { return maxElapsed; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_systemTime") ) { return _systemTime; }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { return _renderTime; }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { return _updateTime; }
		if (HX_FIELD_EQ(inName,"focusGained") ) { return focusGained_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"maxFrameSkip") ) { return maxFrameSkip; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameListSum") ) { return _frameListSum; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setStageProperties") ) { return setStageProperties_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Engine_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_prev") ) { _prev=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_skip") ) { _skip=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rate") ) { _rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_delta") ) { _delta=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tickRate") ) { tickRate=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gameTime") ) { _gameTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_frameList") ) { _frameList=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frameLast") ) { _frameLast=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { maxElapsed=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_systemTime") ) { _systemTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { _renderTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { _updateTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"maxFrameSkip") ) { maxFrameSkip=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameListSum") ) { _frameListSum=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Engine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_frameList"));
	outFields->push(HX_CSTRING("_frameListSum"));
	outFields->push(HX_CSTRING("_frameLast"));
	outFields->push(HX_CSTRING("_systemTime"));
	outFields->push(HX_CSTRING("_gameTime"));
	outFields->push(HX_CSTRING("_renderTime"));
	outFields->push(HX_CSTRING("_updateTime"));
	outFields->push(HX_CSTRING("_prev"));
	outFields->push(HX_CSTRING("_skip"));
	outFields->push(HX_CSTRING("_rate"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_last"));
	outFields->push(HX_CSTRING("_time"));
	outFields->push(HX_CSTRING("_delta"));
	outFields->push(HX_CSTRING("tickRate"));
	outFields->push(HX_CSTRING("maxFrameSkip"));
	outFields->push(HX_CSTRING("maxElapsed"));
	outFields->push(HX_CSTRING("paused"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_frameList"),
	HX_CSTRING("_frameListSum"),
	HX_CSTRING("_frameLast"),
	HX_CSTRING("_systemTime"),
	HX_CSTRING("_gameTime"),
	HX_CSTRING("_renderTime"),
	HX_CSTRING("_updateTime"),
	HX_CSTRING("_prev"),
	HX_CSTRING("_skip"),
	HX_CSTRING("_rate"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_last"),
	HX_CSTRING("_time"),
	HX_CSTRING("_delta"),
	HX_CSTRING("checkScene"),
	HX_CSTRING("onTimer"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("onStage"),
	HX_CSTRING("resize"),
	HX_CSTRING("setStageProperties"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	HX_CSTRING("focusLost"),
	HX_CSTRING("focusGained"),
	HX_CSTRING("init"),
	HX_CSTRING("tickRate"),
	HX_CSTRING("maxFrameSkip"),
	HX_CSTRING("maxElapsed"),
	HX_CSTRING("paused"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
};

Class Engine_obj::__mClass;

void Engine_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Engine"), hx::TCanCast< Engine_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Engine_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
