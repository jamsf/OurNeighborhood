#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Label
#include <com/haxepunk/debug/Label.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_LayerList
#include <com/haxepunk/debug/LayerList.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
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
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace haxepunk{
namespace debug{

Void LayerList_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{
HX_STACK_PUSH("LayerList::new","com/haxepunk/debug/LayerList.hx",37);
int width = __o_width.Default(250);
int height = __o_height.Default(400);
{
	HX_STACK_LINE(38)
	super::__construct();
	HX_STACK_LINE(39)
	this->_velocity = (int)0;
	HX_STACK_LINE(41)
	::flash::display::Sprite mask = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(mask,"mask");
	HX_STACK_LINE(42)
	mask->get_graphics()->beginFill((int)0,null());
	HX_STACK_LINE(43)
	mask->get_graphics()->drawRect((int)0,(int)0,width,height);
	HX_STACK_LINE(44)
	mask->get_graphics()->endFill();
	HX_STACK_LINE(45)
	this->addChild(mask);
	HX_STACK_LINE(46)
	this->set_mask(mask);
	HX_STACK_LINE(48)
	this->addEventListener(HX_CSTRING("click"),this->onClick_dyn(),true,null(),null());
	HX_STACK_LINE(50)
	this->get_graphics()->beginFill((int)0,.15);
	HX_STACK_LINE(51)
	this->get_graphics()->drawRect((int)0,(int)0,width,height);
	HX_STACK_LINE(52)
	this->get_graphics()->endFill();
	HX_STACK_LINE(54)
	::flash::text::Font font = ::openfl::Assets_obj::getFont(HX_CSTRING("font/04B_03__.ttf"),null());		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(55)
	if (((font == null()))){
		HX_STACK_LINE(56)
		font = ::openfl::Assets_obj::getFont(::com::haxepunk::HXP_obj::defaultFont,null());
	}
	HX_STACK_LINE(59)
	this->_textFormat = ::flash::text::TextFormat_obj::__new(font->fontName,(int)16,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(61)
	this->_removeList = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

LayerList_obj::~LayerList_obj() { }

Dynamic LayerList_obj::__CreateEmpty() { return  new LayerList_obj; }
hx::ObjectPtr< LayerList_obj > LayerList_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{  hx::ObjectPtr< LayerList_obj > result = new LayerList_obj();
	result->__construct(__o_width,__o_height);
	return result;}

Dynamic LayerList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LayerList_obj > result = new LayerList_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void LayerList_obj::update( ){
{
		HX_STACK_PUSH("LayerList::update","com/haxepunk/debug/LayerList.hx",125);
		HX_STACK_THIS(this);
		HX_STACK_LINE(126)
		hx::AddEq(this->_velocity,::com::haxepunk::utils::Input_obj::get_mouseWheelDelta());
		HX_STACK_LINE(132)
		if (((this->_velocity < (int)0))){
			HX_STACK_LINE(134)
			hx::AddEq(this->_velocity,0.8);
			HX_STACK_LINE(135)
			if (((this->_velocity > (int)0))){
				HX_STACK_LINE(136)
				this->_velocity = (int)0;
			}
		}
		else{
			HX_STACK_LINE(140)
			if (((this->_velocity > (int)0))){
				HX_STACK_LINE(142)
				hx::SubEq(this->_velocity,0.8);
				HX_STACK_LINE(143)
				if (((this->_velocity < (int)0))){
					HX_STACK_LINE(144)
					this->_velocity = (int)0;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LayerList_obj,update,(void))

Void LayerList_obj::onClick( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("LayerList::onClick","com/haxepunk/debug/LayerList.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(115)
		::com::haxepunk::debug::Label label = hx::TCast< com::haxepunk::debug::Label >::cast(e->get_target());		HX_STACK_VAR(label,"label");
		HX_STACK_LINE(116)
		bool visible = ::com::haxepunk::graphics::atlas::Atlas_obj::toggleLayerVisibility(label->layer);		HX_STACK_VAR(visible,"visible");
		HX_STACK_LINE(117)
		if ((visible)){
			HX_STACK_LINE(117)
			label->set_alpha((int)1);
		}
		else{
			HX_STACK_LINE(119)
			label->set_alpha(0.4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LayerList_obj,onClick,(void))

Void LayerList_obj::set( Array< int > list){
{
		HX_STACK_PUSH("LayerList::set","com/haxepunk/debug/LayerList.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_ARG(list,"list");
		HX_STACK_LINE(66)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		::flash::display::DisplayObject child;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(69)
		if (((this->get_numChildren() > (int)0))){
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(71)
				while(((_g1 < _g))){
					HX_STACK_LINE(71)
					int ci = (_g1)++;		HX_STACK_VAR(ci,"ci");
					HX_STACK_LINE(73)
					child = this->getChildAt(ci);
					HX_STACK_LINE(74)
					if ((::Std_obj::is(child,hx::ClassOf< ::com::haxepunk::debug::Label >()))){
						HX_STACK_LINE(76)
						::com::haxepunk::debug::Label label = hx::TCast< com::haxepunk::debug::Label >::cast(child);		HX_STACK_VAR(label,"label");
						HX_STACK_LINE(77)
						if (((i < list->length))){
							HX_STACK_LINE(79)
							label->set_layer(list->__get(i));
							HX_STACK_LINE(80)
							hx::AddEq(i,(int)1);
						}
						else{
							HX_STACK_LINE(83)
							this->_removeList->push(child);
						}
					}
				}
			}
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = this->_removeList;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(89)
				while(((_g < _g1->length))){
					HX_STACK_LINE(89)
					::flash::display::DisplayObject child1 = _g1->__get(_g).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(child1,"child1");
					HX_STACK_LINE(89)
					++(_g);
					HX_STACK_LINE(91)
					this->removeChild(child1);
					HX_STACK_LINE(92)
					this->_removeList->remove(child1);
				}
			}
		}
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			int _g1 = i;		HX_STACK_VAR(_g1,"_g1");
			int _g = list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(96)
			while(((_g1 < _g))){
				HX_STACK_LINE(96)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(98)
				::com::haxepunk::debug::Label tf = ::com::haxepunk::debug::Label_obj::__new();		HX_STACK_VAR(tf,"tf");
				HX_STACK_LINE(99)
				this->addChild(tf);
				HX_STACK_LINE(100)
				tf->set_defaultTextFormat(this->_textFormat);
				HX_STACK_LINE(101)
				tf->set_selectable(false);
				HX_STACK_LINE(102)
				tf->set_width(this->get_width());
				HX_STACK_LINE(103)
				tf->set_height((int)20);
				HX_STACK_LINE(104)
				tf->set_x((int)6);
				HX_STACK_LINE(105)
				tf->set_y(((i1 * (int)25) + (int)5));
				HX_STACK_LINE(109)
				tf->set_layer(list->__get(i1));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LayerList_obj,set,(void))

Float LayerList_obj::DRAG;


LayerList_obj::LayerList_obj()
{
}

void LayerList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LayerList);
	HX_MARK_MEMBER_NAME(_textFormat,"_textFormat");
	HX_MARK_MEMBER_NAME(_velocity,"_velocity");
	HX_MARK_MEMBER_NAME(_removeList,"_removeList");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LayerList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textFormat,"_textFormat");
	HX_VISIT_MEMBER_NAME(_velocity,"_velocity");
	HX_VISIT_MEMBER_NAME(_removeList,"_removeList");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LayerList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_velocity") ) { return _velocity; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textFormat") ) { return _textFormat; }
		if (HX_FIELD_EQ(inName,"_removeList") ) { return _removeList; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LayerList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_velocity") ) { _velocity=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textFormat") ) { _textFormat=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_removeList") ) { _removeList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LayerList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_textFormat"));
	outFields->push(HX_CSTRING("_velocity"));
	outFields->push(HX_CSTRING("_removeList"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DRAG"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_textFormat"),
	HX_CSTRING("_velocity"),
	HX_CSTRING("_removeList"),
	HX_CSTRING("update"),
	HX_CSTRING("onClick"),
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LayerList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LayerList_obj::DRAG,"DRAG");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LayerList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LayerList_obj::DRAG,"DRAG");
};

Class LayerList_obj::__mClass;

void LayerList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.debug.LayerList"), hx::TCanCast< LayerList_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LayerList_obj::__boot()
{
	DRAG= 0.8;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace debug
