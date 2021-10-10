// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_VideoHandler
#include <VideoHandler.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_title_TitleScreen
#include <title/TitleScreen.h>
#endif
#ifndef INCLUDED_title_TitleVideo
#include <title/TitleVideo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f88d4fd03e8d34c1_18_new,"title.TitleVideo","new",0xe588a46b,"title.TitleVideo.new","title/TitleVideo.hx",18,0x02d864c4)
HX_LOCAL_STACK_FRAME(_hx_pos_f88d4fd03e8d34c1_35_create,"title.TitleVideo","create",0xf7dc6bd1,"title.TitleVideo.create","title/TitleVideo.hx",35,0x02d864c4)
HX_LOCAL_STACK_FRAME(_hx_pos_f88d4fd03e8d34c1_47_create,"title.TitleVideo","create",0xf7dc6bd1,"title.TitleVideo.create","title/TitleVideo.hx",47,0x02d864c4)
HX_LOCAL_STACK_FRAME(_hx_pos_f88d4fd03e8d34c1_70_update,"title.TitleVideo","update",0x02d28ade,"title.TitleVideo.update","title/TitleVideo.hx",70,0x02d864c4)
namespace title{

void TitleVideo_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_f88d4fd03e8d34c1_18_new)
HXLINE(  30)		this->oldFPS = ::VideoHandler_obj::MAX_FPS;
HXLINE(  26)		this->curWacky = ::Array_obj< ::String >::__new(0);
HXLINE(  18)		super::__construct(MaxSize);
            	}

Dynamic TitleVideo_obj::__CreateEmpty() { return new TitleVideo_obj; }

void *TitleVideo_obj::_hx_vtable = 0;

Dynamic TitleVideo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TitleVideo_obj > _hx_result = new TitleVideo_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TitleVideo_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7c795c9f) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x7c795c9f;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7fb87997;
	}
}

void TitleVideo_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_f88d4fd03e8d34c1_35_create)
HXLINE(  37)		this->super::create();
HXLINE(  39)		{
HXLINE(  39)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _this = ::flixel::FlxG_obj::sound;
HXDLIN(  39)			::String EmbeddedSound = (((HX_("assets/music/",36,ab,d2,e0) + HX_("klaskiiLoop",9c,b4,18,a0)) + HX_(".",2e,00,00,00)) + ::Paths_obj::audioExtension);
HXDLIN(  39)			bool _hx_tmp;
HXDLIN(  39)			if (!(::openfl::utils::Assets_obj::exists(EmbeddedSound,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE(  39)				_hx_tmp = ::openfl::utils::Assets_obj::exists(EmbeddedSound,HX_("MUSIC",85,08,49,8e));
            			}
            			else {
HXLINE(  39)				_hx_tmp = true;
            			}
HXDLIN(  39)			if (_hx_tmp) {
HXLINE(  39)				::openfl::utils::Assets_obj::getSound(EmbeddedSound,true);
            			}
            		}
HXLINE(  41)		if (!(::Main_obj::novid)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_f88d4fd03e8d34c1_47_create)
HXLINE(  48)				::flixel::FlxG_obj::camera->flash(-1,60,null(),null());
HXLINE(  49)				::flixel::FlxG_obj::sound->playMusic((((HX_("assets/music/",36,ab,d2,e0) + HX_("klaskiiLoop",9c,b4,18,a0)) + HX_(".",2e,00,00,00)) + ::Paths_obj::audioExtension),((Float)0.75),null(),null());
HXLINE(  50)				::Conductor_obj::changeBPM(( (Float)(158) ));
HXLINE(  51)				{
HXLINE(  51)					 ::flixel::FlxState nextState =  ::title::TitleScreen_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  51)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  51)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  43)			::VideoHandler_obj::MAX_FPS = 60;
HXLINE(  45)			this->video =  ::VideoHandler_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  47)			this->video->playMP4(((HX_("assets/videos/",cb,c4,dd,db) + HX_("klaskiiTitle",60,78,c6,0c)) + HX_(".mp4",03,e8,ba,1e)), ::Dynamic(new _hx_Closure_0()),false,true);
HXLINE(  57)			this->add(this->video);
            		}
            		else {
HXLINE(  61)			::flixel::FlxG_obj::camera->flash(-1,60,null(),null());
HXLINE(  62)			::flixel::FlxG_obj::sound->playMusic((((HX_("assets/music/",36,ab,d2,e0) + HX_("klaskiiLoop",9c,b4,18,a0)) + HX_(".",2e,00,00,00)) + ::Paths_obj::audioExtension),((Float)0.75),null(),null());
HXLINE(  63)			::Conductor_obj::changeBPM(( (Float)(158) ));
HXLINE(  64)			{
HXLINE(  64)				 ::flixel::FlxState nextState =  ::title::TitleScreen_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  64)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  64)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
            	}


void TitleVideo_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_f88d4fd03e8d34c1_70_update)
HXDLIN(  70)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< TitleVideo_obj > TitleVideo_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< TitleVideo_obj > __this = new TitleVideo_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< TitleVideo_obj > TitleVideo_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	TitleVideo_obj *__this = (TitleVideo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TitleVideo_obj), true, "title.TitleVideo"));
	*(void **)__this = TitleVideo_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

TitleVideo_obj::TitleVideo_obj()
{
}

void TitleVideo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TitleVideo);
	HX_MARK_MEMBER_NAME(blackScreen,"blackScreen");
	HX_MARK_MEMBER_NAME(credGroup,"credGroup");
	HX_MARK_MEMBER_NAME(textGroup,"textGroup");
	HX_MARK_MEMBER_NAME(ngSpr,"ngSpr");
	HX_MARK_MEMBER_NAME(curWacky,"curWacky");
	HX_MARK_MEMBER_NAME(wackyImage,"wackyImage");
	HX_MARK_MEMBER_NAME(oldFPS,"oldFPS");
	HX_MARK_MEMBER_NAME(video,"video");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TitleVideo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blackScreen,"blackScreen");
	HX_VISIT_MEMBER_NAME(credGroup,"credGroup");
	HX_VISIT_MEMBER_NAME(textGroup,"textGroup");
	HX_VISIT_MEMBER_NAME(ngSpr,"ngSpr");
	HX_VISIT_MEMBER_NAME(curWacky,"curWacky");
	HX_VISIT_MEMBER_NAME(wackyImage,"wackyImage");
	HX_VISIT_MEMBER_NAME(oldFPS,"oldFPS");
	HX_VISIT_MEMBER_NAME(video,"video");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TitleVideo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ngSpr") ) { return ::hx::Val( ngSpr ); }
		if (HX_FIELD_EQ(inName,"video") ) { return ::hx::Val( video ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"oldFPS") ) { return ::hx::Val( oldFPS ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { return ::hx::Val( curWacky ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { return ::hx::Val( credGroup ); }
		if (HX_FIELD_EQ(inName,"textGroup") ) { return ::hx::Val( textGroup ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { return ::hx::Val( wackyImage ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { return ::hx::Val( blackScreen ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TitleVideo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ngSpr") ) { ngSpr=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"video") ) { video=inValue.Cast<  ::VideoHandler >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"oldFPS") ) { oldFPS=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { curWacky=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { credGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textGroup") ) { textGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { wackyImage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { blackScreen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TitleVideo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("blackScreen",8b,de,f4,5d));
	outFields->push(HX_("credGroup",91,7f,9c,9c));
	outFields->push(HX_("textGroup",52,43,e2,32));
	outFields->push(HX_("ngSpr",7c,26,68,9a));
	outFields->push(HX_("curWacky",67,31,c6,0c));
	outFields->push(HX_("wackyImage",d4,7e,d6,81));
	outFields->push(HX_("oldFPS",82,6d,32,d3));
	outFields->push(HX_("video",7b,14,fc,36));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TitleVideo_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleVideo_obj,blackScreen),HX_("blackScreen",8b,de,f4,5d)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleVideo_obj,credGroup),HX_("credGroup",91,7f,9c,9c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleVideo_obj,textGroup),HX_("textGroup",52,43,e2,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleVideo_obj,ngSpr),HX_("ngSpr",7c,26,68,9a)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(TitleVideo_obj,curWacky),HX_("curWacky",67,31,c6,0c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleVideo_obj,wackyImage),HX_("wackyImage",d4,7e,d6,81)},
	{::hx::fsInt,(int)offsetof(TitleVideo_obj,oldFPS),HX_("oldFPS",82,6d,32,d3)},
	{::hx::fsObject /*  ::VideoHandler */ ,(int)offsetof(TitleVideo_obj,video),HX_("video",7b,14,fc,36)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TitleVideo_obj_sStaticStorageInfo = 0;
#endif

static ::String TitleVideo_obj_sMemberFields[] = {
	HX_("blackScreen",8b,de,f4,5d),
	HX_("credGroup",91,7f,9c,9c),
	HX_("textGroup",52,43,e2,32),
	HX_("ngSpr",7c,26,68,9a),
	HX_("curWacky",67,31,c6,0c),
	HX_("wackyImage",d4,7e,d6,81),
	HX_("oldFPS",82,6d,32,d3),
	HX_("video",7b,14,fc,36),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class TitleVideo_obj::__mClass;

void TitleVideo_obj::__register()
{
	TitleVideo_obj _hx_dummy;
	TitleVideo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("title.TitleVideo",f9,92,d5,58);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TitleVideo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TitleVideo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TitleVideo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TitleVideo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace title
