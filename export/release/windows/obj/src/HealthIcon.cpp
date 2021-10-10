// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_HealthIcon
#include <HealthIcon.h>
#endif
#ifndef INCLUDED_ImageCache
#include <ImageCache.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_7_new,"HealthIcon","new",0x9b7badc7,"HealthIcon.new","HealthIcon.hx",7,0xf7836789)
static const int _hx_array_data_f8f9be55_1[] = {
	(int)0,(int)1,(int)30,
};
static const int _hx_array_data_f8f9be55_2[] = {
	(int)0,(int)1,(int)30,
};
static const int _hx_array_data_f8f9be55_3[] = {
	(int)0,(int)1,(int)30,
};
static const int _hx_array_data_f8f9be55_4[] = {
	(int)21,(int)41,(int)40,
};
static const int _hx_array_data_f8f9be55_5[] = {
	(int)2,(int)3,(int)31,
};
static const int _hx_array_data_f8f9be55_6[] = {
	(int)4,(int)5,(int)32,
};
static const int _hx_array_data_f8f9be55_7[] = {
	(int)6,(int)7,(int)33,
};
static const int _hx_array_data_f8f9be55_8[] = {
	(int)6,(int)7,(int)33,
};
static const int _hx_array_data_f8f9be55_9[] = {
	(int)8,(int)9,(int)50,
};
static const int _hx_array_data_f8f9be55_10[] = {
	(int)10,(int)11,(int)38,
};
static const int _hx_array_data_f8f9be55_11[] = {
	(int)12,(int)13,(int)34,
};
static const int _hx_array_data_f8f9be55_12[] = {
	(int)22,(int)42,(int)43,
};
static const int _hx_array_data_f8f9be55_13[] = {
	(int)44,(int)45,(int)46,
};
static const int _hx_array_data_f8f9be55_14[] = {
	(int)23,(int)47,(int)48,
};
static const int _hx_array_data_f8f9be55_15[] = {
	(int)14,(int)15,(int)39,
};
static const int _hx_array_data_f8f9be55_16[] = {
	(int)17,(int)18,(int)36,
};
static const int _hx_array_data_f8f9be55_17[] = {
	(int)19,(int)20,(int)37,
};
static const int _hx_array_data_f8f9be55_18[] = {
	(int)19,(int)20,(int)37,
};
static const int _hx_array_data_f8f9be55_19[] = {
	(int)16,(int)49,(int)35,
};
static const int _hx_array_data_f8f9be55_20[] = {
	(int)16,(int)49,(int)35,
};
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_59_update,"HealthIcon","update",0x767ac302,"HealthIcon.update","HealthIcon.hx",59,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_77_tweenToDefaultScale,"HealthIcon","tweenToDefaultScale",0xf5cf6756,"HealthIcon.tweenToDefaultScale","HealthIcon.hx",77,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_18_boot,"HealthIcon","boot",0x68d560eb,"HealthIcon.boot","HealthIcon.hx",18,0xf7836789)
static const ::String _hx_array_data_f8f9be55_24[] = {
	HX_("bf-pixel",fd,03,90,37),HX_("senpai",3c,df,8d,6b),HX_("senpai-angry",10,7a,b8,25),HX_("spirit",31,bb,a9,bd),
};

void HealthIcon_obj::__construct(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer, ::Dynamic __o__id){
            		::String _hx_char = __o__hx_char;
            		if (::hx::IsNull(__o__hx_char)) _hx_char = HX_("face",9d,b4,b5,43);
            		bool isPlayer = __o_isPlayer.Default(false);
            		 ::Dynamic _id = __o__id;
            		if (::hx::IsNull(__o__id)) _id = -1;
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_7_new)
HXLINE(  13)		this->iconScale = ((Float)1);
HXLINE(  12)		this->defualtIconScale = ((Float)1);
HXLINE(  22)		super::__construct(null(),null(),null());
HXLINE(  23)		::String data = ((HX_("assets/images/",ab,47,cb,9f) + HX_("iconGrid",df,9a,73,71)) + HX_(".png",3b,2d,bd,1e));
HXDLIN(  23)		 ::Dynamic _hx_tmp;
HXDLIN(  23)		if (::ImageCache_obj::exists(data)) {
HXLINE(  23)			_hx_tmp = ::ImageCache_obj::get(data);
            		}
            		else {
HXLINE(  23)			_hx_tmp = data;
            		}
HXDLIN(  23)		this->loadGraphic(_hx_tmp,true,150,150,null(),null());
HXLINE(  25)		this->animation->add(HX_("bf",c4,55,00,00),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_1,3),0,false,isPlayer,null());
HXLINE(  26)		this->animation->add(HX_("bf-car",cb,95,e2,07),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_2,3),0,false,isPlayer,null());
HXLINE(  27)		this->animation->add(HX_("bf-christmas",79,02,f4,24),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_3,3),0,false,isPlayer,null());
HXLINE(  28)		this->animation->add(HX_("bf-pixel",fd,03,90,37),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_4,3),0,false,isPlayer,null());
HXLINE(  29)		this->animation->add(HX_("spooky",eb,bd,9e,c1),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_5,3),0,false,isPlayer,null());
HXLINE(  30)		this->animation->add(HX_("pico",e5,e8,57,4a),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_6,3),0,false,isPlayer,null());
HXLINE(  31)		this->animation->add(HX_("mom",cb,16,53,00),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_7,3),0,false,isPlayer,null());
HXLINE(  32)		this->animation->add(HX_("mom-car",52,e6,f7,f6),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_8,3),0,false,isPlayer,null());
HXLINE(  33)		this->animation->add(HX_("tankman",f0,7d,78,3d),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_9,3),0,false,isPlayer,null());
HXLINE(  34)		this->animation->add(HX_("face",9d,b4,b5,43),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_10,3),0,false,isPlayer,null());
HXLINE(  35)		this->animation->add(HX_("dad",47,36,4c,00),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_11,3),0,false,isPlayer,null());
HXLINE(  36)		this->animation->add(HX_("senpai",3c,df,8d,6b),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_12,3),0,false,isPlayer,null());
HXLINE(  37)		this->animation->add(HX_("senpai-angry",10,7a,b8,25),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_13,3),0,false,isPlayer,null());
HXLINE(  38)		this->animation->add(HX_("spirit",31,bb,a9,bd),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_14,3),0,false,isPlayer,null());
HXLINE(  39)		this->animation->add(HX_("bf-old",5e,ba,eb,07),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_15,3),0,false,isPlayer,null());
HXLINE(  40)		this->animation->add(HX_("parents-christmas",fe,94,c5,32),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_16,3),0,false,isPlayer,null());
HXLINE(  41)		this->animation->add(HX_("monster",1a,54,b0,b8),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_17,3),0,false,isPlayer,null());
HXLINE(  42)		this->animation->add(HX_("monster-christmas",4f,88,85,27),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_18,3),0,false,isPlayer,null());
HXLINE(  43)		int _hx_tmp1;
HXDLIN(  43)		if (::hx::IsNotEq( _id,-1 )) {
HXLINE(  43)			_hx_tmp1 = 49;
            		}
            		else {
HXLINE(  43)			_hx_tmp1 = 35;
            		}
HXDLIN(  43)		this->animation->add(HX_("gf",1f,5a,00,00),::Array_obj< int >::__new(3)->init(0,16)->init(1,49)->init(2,_hx_tmp1),0,false,isPlayer,null());
HXLINE(  44)		this->animation->add(HX_("gf-car",a6,63,ab,07),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_19,3),0,false,isPlayer,null());
HXLINE(  45)		this->animation->add(HX_("gf-pixel",98,3e,8c,55),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_20,3),0,false,isPlayer,null());
HXLINE(  47)		this->iconSize = this->get_width();
HXLINE(  49)		this->id = ( (int)(_id) );
HXLINE(  51)		this->set_antialiasing(!(::HealthIcon_obj::pixelIcons->contains(_hx_char)));
HXLINE(  52)		this->animation->play(_hx_char,null(),null(),null());
HXLINE(  53)		this->scrollFactor->set(null(),null());
HXLINE(  55)		this->tween = ::flixel::tweens::FlxTween_obj::tween(::hx::ObjectPtr<OBJ_>(this), ::Dynamic(::hx::Anon_obj::Create(0)),0,null());
            	}

Dynamic HealthIcon_obj::__CreateEmpty() { return new HealthIcon_obj; }

void *HealthIcon_obj::_hx_vtable = 0;

Dynamic HealthIcon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HealthIcon_obj > _hx_result = new HealthIcon_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool HealthIcon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x10bce115) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x10bce115;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void HealthIcon_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_59_update)
HXLINE(  62)		this->super::update(elapsed);
HXLINE(  63)		this->setGraphicSize(::Std_obj::_hx_int((this->iconSize * this->iconScale)),null());
HXLINE(  64)		this->updateHitbox();
HXLINE(  66)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(  67)			Float _hx_tmp = this->sprTracker->x;
HXDLIN(  67)			Float _hx_tmp1 = ((_hx_tmp + this->sprTracker->get_width()) + 10);
HXDLIN(  67)			this->setPosition(_hx_tmp1,(this->sprTracker->y - ( (Float)(30) )));
HXLINE(  68)			if ((this->id == ::FreeplayState_obj::curSelected)) {
HXLINE(  69)				this->animation->_curAnim->set_curFrame(2);
            			}
            			else {
HXLINE(  72)				this->animation->_curAnim->set_curFrame(0);
            			}
            		}
            	}


void HealthIcon_obj::tweenToDefaultScale(Float _time, ::Dynamic _ease){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_77_tweenToDefaultScale)
HXLINE(  79)		this->tween->cancel();
HXLINE(  80)		this->tween = ::flixel::tweens::FlxTween_obj::tween(::hx::ObjectPtr<OBJ_>(this), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("iconScale",51,a0,92,b2),this->defualtIconScale)),_time, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),_ease)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(HealthIcon_obj,tweenToDefaultScale,(void))

::Array< ::String > HealthIcon_obj::pixelIcons;


::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__new(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer, ::Dynamic __o__id) {
	::hx::ObjectPtr< HealthIcon_obj > __this = new HealthIcon_obj();
	__this->__construct(__o__hx_char,__o_isPlayer,__o__id);
	return __this;
}

::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o__hx_char,::hx::Null< bool >  __o_isPlayer, ::Dynamic __o__id) {
	HealthIcon_obj *__this = (HealthIcon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HealthIcon_obj), true, "HealthIcon"));
	*(void **)__this = HealthIcon_obj::_hx_vtable;
	__this->__construct(__o__hx_char,__o_isPlayer,__o__id);
	return __this;
}

HealthIcon_obj::HealthIcon_obj()
{
}

void HealthIcon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HealthIcon);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(defualtIconScale,"defualtIconScale");
	HX_MARK_MEMBER_NAME(iconScale,"iconScale");
	HX_MARK_MEMBER_NAME(iconSize,"iconSize");
	HX_MARK_MEMBER_NAME(tween,"tween");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HealthIcon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(defualtIconScale,"defualtIconScale");
	HX_VISIT_MEMBER_NAME(iconScale,"iconScale");
	HX_VISIT_MEMBER_NAME(iconSize,"iconSize");
	HX_VISIT_MEMBER_NAME(tween,"tween");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HealthIcon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return ::hx::Val( tween ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iconSize") ) { return ::hx::Val( iconSize ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iconScale") ) { return ::hx::Val( iconScale ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"defualtIconScale") ) { return ::hx::Val( defualtIconScale ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"tweenToDefaultScale") ) { return ::hx::Val( tweenToDefaultScale_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HealthIcon_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"pixelIcons") ) { outValue = ( pixelIcons ); return true; }
	}
	return false;
}

::hx::Val HealthIcon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { tween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iconSize") ) { iconSize=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iconScale") ) { iconScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"defualtIconScale") ) { defualtIconScale=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HealthIcon_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"pixelIcons") ) { pixelIcons=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

void HealthIcon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("defualtIconScale",f8,44,a0,c5));
	outFields->push(HX_("iconScale",51,a0,92,b2));
	outFields->push(HX_("iconSize",da,64,5b,79));
	outFields->push(HX_("tween",6b,aa,70,19));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HealthIcon_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HealthIcon_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsInt,(int)offsetof(HealthIcon_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsFloat,(int)offsetof(HealthIcon_obj,defualtIconScale),HX_("defualtIconScale",f8,44,a0,c5)},
	{::hx::fsFloat,(int)offsetof(HealthIcon_obj,iconScale),HX_("iconScale",51,a0,92,b2)},
	{::hx::fsFloat,(int)offsetof(HealthIcon_obj,iconSize),HX_("iconSize",da,64,5b,79)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(HealthIcon_obj,tween),HX_("tween",6b,aa,70,19)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo HealthIcon_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &HealthIcon_obj::pixelIcons,HX_("pixelIcons",74,e6,c5,55)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String HealthIcon_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("id",db,5b,00,00),
	HX_("defualtIconScale",f8,44,a0,c5),
	HX_("iconScale",51,a0,92,b2),
	HX_("iconSize",da,64,5b,79),
	HX_("tween",6b,aa,70,19),
	HX_("update",09,86,05,87),
	HX_("tweenToDefaultScale",ef,0b,44,30),
	::String(null()) };

static void HealthIcon_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HealthIcon_obj::pixelIcons,"pixelIcons");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HealthIcon_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HealthIcon_obj::pixelIcons,"pixelIcons");
};

#endif

::hx::Class HealthIcon_obj::__mClass;

static ::String HealthIcon_obj_sStaticFields[] = {
	HX_("pixelIcons",74,e6,c5,55),
	::String(null())
};

void HealthIcon_obj::__register()
{
	HealthIcon_obj _hx_dummy;
	HealthIcon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HealthIcon",55,be,f9,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HealthIcon_obj::__GetStatic;
	__mClass->mSetStaticField = &HealthIcon_obj::__SetStatic;
	__mClass->mMarkFunc = HealthIcon_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HealthIcon_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HealthIcon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HealthIcon_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HealthIcon_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HealthIcon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HealthIcon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HealthIcon_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_18_boot)
HXDLIN(  18)		pixelIcons = ::Array_obj< ::String >::fromData( _hx_array_data_f8f9be55_24,4);
            	}
}
