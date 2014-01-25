#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_debug_TraceCapture
#include <com/haxepunk/debug/TraceCapture.h>
#endif
namespace com{
namespace haxepunk{
namespace debug{

::com::haxepunk::debug::TraceCapture TraceCapture_obj::No;

::com::haxepunk::debug::TraceCapture TraceCapture_obj::Yes;

HX_DEFINE_CREATE_ENUM(TraceCapture_obj)

int TraceCapture_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("No")) return 0;
	if (inName==HX_CSTRING("Yes")) return 1;
	return super::__FindIndex(inName);
}

int TraceCapture_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("No")) return 0;
	if (inName==HX_CSTRING("Yes")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TraceCapture_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("No")) return No;
	if (inName==HX_CSTRING("Yes")) return Yes;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("No"),
	HX_CSTRING("Yes"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TraceCapture_obj::No,"No");
	HX_MARK_MEMBER_NAME(TraceCapture_obj::Yes,"Yes");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TraceCapture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TraceCapture_obj::No,"No");
	HX_VISIT_MEMBER_NAME(TraceCapture_obj::Yes,"Yes");
};

static ::String sMemberFields[] = { ::String(null()) };
Class TraceCapture_obj::__mClass;

Dynamic __Create_TraceCapture_obj() { return new TraceCapture_obj; }

void TraceCapture_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.debug.TraceCapture"), hx::TCanCast< TraceCapture_obj >,sStaticFields,sMemberFields,
	&__Create_TraceCapture_obj, &__Create,
	&super::__SGetClass(), &CreateTraceCapture_obj, sMarkStatics, sVisitStatic);
}

void TraceCapture_obj::__boot()
{
hx::Static(No) = hx::CreateEnum< TraceCapture_obj >(HX_CSTRING("No"),0);
hx::Static(Yes) = hx::CreateEnum< TraceCapture_obj >(HX_CSTRING("Yes"),1);
}


} // end namespace com
} // end namespace haxepunk
} // end namespace debug
