#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif

Void Lambda_obj::__construct()
{
	return null();
}

Lambda_obj::~Lambda_obj() { }

Dynamic Lambda_obj::__CreateEmpty() { return  new Lambda_obj; }
hx::ObjectPtr< Lambda_obj > Lambda_obj::__new()
{  hx::ObjectPtr< Lambda_obj > result = new Lambda_obj();
	result->__construct();
	return result;}

Dynamic Lambda_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lambda_obj > result = new Lambda_obj();
	result->__construct();
	return result;}

::List Lambda_obj::map( Dynamic it,Dynamic f){
	HX_STACK_PUSH("Lambda::map","C:\\HaxeToolkit\\haxe/std/Lambda.hx",68);
	HX_STACK_ARG(it,"it");
	HX_STACK_ARG(f,"f");
	HX_STACK_LINE(69)
	::List l = ::List_obj::__new();		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(70)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(it->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		Dynamic x = __it->next();
		l->add(f(x));
	}
	HX_STACK_LINE(72)
	return l;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,map,return )

bool Lambda_obj::has( Dynamic it,Dynamic elt){
	HX_STACK_PUSH("Lambda::has","C:\\HaxeToolkit\\haxe/std/Lambda.hx",98);
	HX_STACK_ARG(it,"it");
	HX_STACK_ARG(elt,"elt");
	HX_STACK_LINE(99)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(it->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		Dynamic x = __it->next();
		if (((x == elt))){
			HX_STACK_LINE(101)
			return true;
		}
;
	}
	HX_STACK_LINE(102)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,has,return )

int Lambda_obj::count( Dynamic it,Dynamic pred){
	HX_STACK_PUSH("Lambda::count","C:\\HaxeToolkit\\haxe/std/Lambda.hx",191);
	HX_STACK_ARG(it,"it");
	HX_STACK_ARG(pred,"pred");
	HX_STACK_LINE(192)
	int n = (int)0;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(193)
	if (((pred == null()))){
		HX_STACK_LINE(194)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(it->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic _ = __it->next();
			(n)++;
		}
	}
	else{
		HX_STACK_LINE(197)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(it->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic x = __it->next();
			if ((pred(x).Cast< bool >())){
				HX_STACK_LINE(199)
				(n)++;
			}
;
		}
	}
	HX_STACK_LINE(200)
	return n;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,count,return )

int Lambda_obj::indexOf( Dynamic it,Dynamic v){
	HX_STACK_PUSH("Lambda::indexOf","C:\\HaxeToolkit\\haxe/std/Lambda.hx",217);
	HX_STACK_ARG(it,"it");
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(218)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(219)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(it->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		Dynamic v2 = __it->next();
		{
			HX_STACK_LINE(220)
			if (((v == v2))){
				HX_STACK_LINE(221)
				return i;
			}
			HX_STACK_LINE(222)
			(i)++;
		}
;
	}
	HX_STACK_LINE(224)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,indexOf,return )


Lambda_obj::Lambda_obj()
{
}

void Lambda_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Lambda);
	HX_MARK_END_CLASS();
}

void Lambda_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Lambda_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return count_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Lambda_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Lambda_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("map"),
	HX_CSTRING("has"),
	HX_CSTRING("count"),
	HX_CSTRING("indexOf"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lambda_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lambda_obj::__mClass,"__mClass");
};

Class Lambda_obj::__mClass;

void Lambda_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Lambda"), hx::TCanCast< Lambda_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Lambda_obj::__boot()
{
}

