#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_masks_TileType
#include <com/haxepunk/masks/TileType.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

::com::haxepunk::masks::TileType TileType_obj::AboveSlope;

::com::haxepunk::masks::TileType TileType_obj::BelowSlope;

::com::haxepunk::masks::TileType TileType_obj::BottomLeft;

::com::haxepunk::masks::TileType TileType_obj::BottomRight;

::com::haxepunk::masks::TileType TileType_obj::Empty;

::com::haxepunk::masks::TileType TileType_obj::Solid;

::com::haxepunk::masks::TileType TileType_obj::TopLeft;

::com::haxepunk::masks::TileType TileType_obj::TopRight;

HX_DEFINE_CREATE_ENUM(TileType_obj)

int TileType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("AboveSlope")) return 2;
	if (inName==HX_CSTRING("BelowSlope")) return 3;
	if (inName==HX_CSTRING("BottomLeft")) return 6;
	if (inName==HX_CSTRING("BottomRight")) return 7;
	if (inName==HX_CSTRING("Empty")) return 0;
	if (inName==HX_CSTRING("Solid")) return 1;
	if (inName==HX_CSTRING("TopLeft")) return 4;
	if (inName==HX_CSTRING("TopRight")) return 5;
	return super::__FindIndex(inName);
}

int TileType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("AboveSlope")) return 0;
	if (inName==HX_CSTRING("BelowSlope")) return 0;
	if (inName==HX_CSTRING("BottomLeft")) return 0;
	if (inName==HX_CSTRING("BottomRight")) return 0;
	if (inName==HX_CSTRING("Empty")) return 0;
	if (inName==HX_CSTRING("Solid")) return 0;
	if (inName==HX_CSTRING("TopLeft")) return 0;
	if (inName==HX_CSTRING("TopRight")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TileType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("AboveSlope")) return AboveSlope;
	if (inName==HX_CSTRING("BelowSlope")) return BelowSlope;
	if (inName==HX_CSTRING("BottomLeft")) return BottomLeft;
	if (inName==HX_CSTRING("BottomRight")) return BottomRight;
	if (inName==HX_CSTRING("Empty")) return Empty;
	if (inName==HX_CSTRING("Solid")) return Solid;
	if (inName==HX_CSTRING("TopLeft")) return TopLeft;
	if (inName==HX_CSTRING("TopRight")) return TopRight;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Empty"),
	HX_CSTRING("Solid"),
	HX_CSTRING("AboveSlope"),
	HX_CSTRING("BelowSlope"),
	HX_CSTRING("TopLeft"),
	HX_CSTRING("TopRight"),
	HX_CSTRING("BottomLeft"),
	HX_CSTRING("BottomRight"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileType_obj::AboveSlope,"AboveSlope");
	HX_MARK_MEMBER_NAME(TileType_obj::BelowSlope,"BelowSlope");
	HX_MARK_MEMBER_NAME(TileType_obj::BottomLeft,"BottomLeft");
	HX_MARK_MEMBER_NAME(TileType_obj::BottomRight,"BottomRight");
	HX_MARK_MEMBER_NAME(TileType_obj::Empty,"Empty");
	HX_MARK_MEMBER_NAME(TileType_obj::Solid,"Solid");
	HX_MARK_MEMBER_NAME(TileType_obj::TopLeft,"TopLeft");
	HX_MARK_MEMBER_NAME(TileType_obj::TopRight,"TopRight");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TileType_obj::AboveSlope,"AboveSlope");
	HX_VISIT_MEMBER_NAME(TileType_obj::BelowSlope,"BelowSlope");
	HX_VISIT_MEMBER_NAME(TileType_obj::BottomLeft,"BottomLeft");
	HX_VISIT_MEMBER_NAME(TileType_obj::BottomRight,"BottomRight");
	HX_VISIT_MEMBER_NAME(TileType_obj::Empty,"Empty");
	HX_VISIT_MEMBER_NAME(TileType_obj::Solid,"Solid");
	HX_VISIT_MEMBER_NAME(TileType_obj::TopLeft,"TopLeft");
	HX_VISIT_MEMBER_NAME(TileType_obj::TopRight,"TopRight");
};

static ::String sMemberFields[] = { ::String(null()) };
Class TileType_obj::__mClass;

Dynamic __Create_TileType_obj() { return new TileType_obj; }

void TileType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.TileType"), hx::TCanCast< TileType_obj >,sStaticFields,sMemberFields,
	&__Create_TileType_obj, &__Create,
	&super::__SGetClass(), &CreateTileType_obj, sMarkStatics, sVisitStatic);
}

void TileType_obj::__boot()
{
hx::Static(AboveSlope) = hx::CreateEnum< TileType_obj >(HX_CSTRING("AboveSlope"),2);
hx::Static(BelowSlope) = hx::CreateEnum< TileType_obj >(HX_CSTRING("BelowSlope"),3);
hx::Static(BottomLeft) = hx::CreateEnum< TileType_obj >(HX_CSTRING("BottomLeft"),6);
hx::Static(BottomRight) = hx::CreateEnum< TileType_obj >(HX_CSTRING("BottomRight"),7);
hx::Static(Empty) = hx::CreateEnum< TileType_obj >(HX_CSTRING("Empty"),0);
hx::Static(Solid) = hx::CreateEnum< TileType_obj >(HX_CSTRING("Solid"),1);
hx::Static(TopLeft) = hx::CreateEnum< TileType_obj >(HX_CSTRING("TopLeft"),4);
hx::Static(TopRight) = hx::CreateEnum< TileType_obj >(HX_CSTRING("TopRight"),5);
}


} // end namespace com
} // end namespace haxepunk
} // end namespace masks
