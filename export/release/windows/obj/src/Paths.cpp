// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_ImageCache
#include <ImageCache.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_10_image,"Paths","image",0xc392f1fb,"Paths.image","Paths.hx",10,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_26_xml,"Paths","xml",0x5a3d5877,"Paths.xml","Paths.hx",26,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_30_sound,"Paths","sound",0x86f65f6f,"Paths.sound","Paths.hx",30,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_34_music,"Paths","music",0x1684a345,"Paths.music","Paths.hx",34,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_38_getSparrowAtlas,"Paths","getSparrowAtlas",0x5a1f05f5,"Paths.getSparrowAtlas","Paths.hx",38,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_42_getPackerAtlas,"Paths","getPackerAtlas",0xa8de8c4f,"Paths.getPackerAtlas","Paths.hx",42,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_47_video,"Paths","video",0x3d25e71b,"Paths.video","Paths.hx",47,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_8_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",8,0x309ea470)

void Paths_obj::__construct() { }

Dynamic Paths_obj::__CreateEmpty() { return new Paths_obj; }

void *Paths_obj::_hx_vtable = 0;

Dynamic Paths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Paths_obj > _hx_result = new Paths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Paths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x44c8e46a;
}

::String Paths_obj::audioExtension;

 ::Dynamic Paths_obj::image(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_10_image)
HXLINE(  12)		::String data = ((HX_("assets/images/",ab,47,cb,9f) + key) + HX_(".png",3b,2d,bd,1e));
HXLINE(  14)		if (::ImageCache_obj::exists(data)) {
HXLINE(  16)			return ::ImageCache_obj::get(data);
            		}
            		else {
HXLINE(  20)			return data;
            		}
HXLINE(  14)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,image,return )

::String Paths_obj::xml(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_26_xml)
HXDLIN(  26)		return ((HX_("assets/images/",ab,47,cb,9f) + key) + HX_(".xml",69,3e,c3,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,xml,return )

::String Paths_obj::sound(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_30_sound)
HXDLIN(  30)		return (((HX_("assets/sounds/",1f,fa,fb,94) + key) + HX_(".",2e,00,00,00)) + ::Paths_obj::audioExtension);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,sound,return )

::String Paths_obj::music(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_34_music)
HXDLIN(  34)		return (((HX_("assets/music/",36,ab,d2,e0) + key) + HX_(".",2e,00,00,00)) + ::Paths_obj::audioExtension);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,music,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getSparrowAtlas(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_38_getSparrowAtlas)
HXDLIN(  38)		::String data = ((HX_("assets/images/",ab,47,cb,9f) + key) + HX_(".png",3b,2d,bd,1e));
HXDLIN(  38)		 ::Dynamic _hx_tmp;
HXDLIN(  38)		if (::ImageCache_obj::exists(data)) {
HXDLIN(  38)			_hx_tmp = ::ImageCache_obj::get(data);
            		}
            		else {
HXDLIN(  38)			_hx_tmp = data;
            		}
HXDLIN(  38)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,((HX_("assets/images/",ab,47,cb,9f) + key) + HX_(".xml",69,3e,c3,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,getSparrowAtlas,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getPackerAtlas(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_42_getPackerAtlas)
HXDLIN(  42)		::String data = ((HX_("assets/images/",ab,47,cb,9f) + key) + HX_(".png",3b,2d,bd,1e));
HXDLIN(  42)		 ::Dynamic _hx_tmp;
HXDLIN(  42)		if (::ImageCache_obj::exists(data)) {
HXDLIN(  42)			_hx_tmp = ::ImageCache_obj::get(data);
            		}
            		else {
HXDLIN(  42)			_hx_tmp = data;
            		}
HXDLIN(  42)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp,((HX_("assets/images/",ab,47,cb,9f) + key) + HX_(".txt",02,3f,c0,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,getPackerAtlas,return )

::String Paths_obj::video(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_47_video)
HXDLIN(  47)		return ((HX_("assets/videos/",cb,c4,dd,db) + key) + HX_(".mp4",03,e8,ba,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,video,return )


Paths_obj::Paths_obj()
{
}

bool Paths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { outValue = xml_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { outValue = image_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sound") ) { outValue = sound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"music") ) { outValue = music_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"video") ) { outValue = video_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"audioExtension") ) { outValue = ( audioExtension ); return true; }
		if (HX_FIELD_EQ(inName,"getPackerAtlas") ) { outValue = getPackerAtlas_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getSparrowAtlas") ) { outValue = getSparrowAtlas_dyn(); return true; }
	}
	return false;
}

bool Paths_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"audioExtension") ) { audioExtension=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Paths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Paths_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Paths_obj::audioExtension,HX_("audioExtension",c9,2f,d4,15)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Paths_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Paths_obj::audioExtension,"audioExtension");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Paths_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Paths_obj::audioExtension,"audioExtension");
};

#endif

::hx::Class Paths_obj::__mClass;

static ::String Paths_obj_sStaticFields[] = {
	HX_("audioExtension",c9,2f,d4,15),
	HX_("image",5b,1f,69,bd),
	HX_("xml",d7,6d,5b,00),
	HX_("sound",cf,8c,cc,80),
	HX_("music",a5,d0,5a,10),
	HX_("getSparrowAtlas",55,ab,b7,a7),
	HX_("getPackerAtlas",ef,b2,47,f7),
	HX_("video",7b,14,fc,36),
	::String(null())
};

void Paths_obj::__register()
{
	Paths_obj _hx_dummy;
	Paths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Paths",0e,7b,84,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Paths_obj::__GetStatic;
	__mClass->mSetStaticField = &Paths_obj::__SetStatic;
	__mClass->mMarkFunc = Paths_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Paths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Paths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Paths_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Paths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Paths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Paths_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_8_boot)
HXDLIN(   8)		audioExtension = HX_("ogg",4f,94,54,00);
            	}
}

