// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Boyfriend
#include <Boyfriend.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_86c0a8e48d33a6ef_15_new,"Boyfriend","new",0x7fa6173c,"Boyfriend.new","Boyfriend.hx",15,0x444da3b4)
HX_LOCAL_STACK_FRAME(_hx_pos_86c0a8e48d33a6ef_19_update,"Boyfriend","update",0xbd4df0ad,"Boyfriend.update","Boyfriend.hx",19,0x444da3b4)
HX_LOCAL_STACK_FRAME(_hx_pos_86c0a8e48d33a6ef_45_idleEnd,"Boyfriend","idleEnd",0xc5509e03,"Boyfriend.idleEnd","Boyfriend.hx",45,0x444da3b4)
HX_LOCAL_STACK_FRAME(_hx_pos_86c0a8e48d33a6ef_60_dance,"Boyfriend","dance",0x821a390f,"Boyfriend.dance","Boyfriend.hx",60,0x444da3b4)

void Boyfriend_obj::__construct(Float x,Float y,::String __o__hx_char){
            		::String _hx_char = __o__hx_char;
            		if (::hx::IsNull(__o__hx_char)) _hx_char = HX_("bf",c4,55,00,00);
            	HX_STACKFRAME(&_hx_pos_86c0a8e48d33a6ef_15_new)
HXDLIN(  15)		super::__construct(x,y,_hx_char,true);
            	}

Dynamic Boyfriend_obj::__CreateEmpty() { return new Boyfriend_obj; }

void *Boyfriend_obj::_hx_vtable = 0;

Dynamic Boyfriend_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Boyfriend_obj > _hx_result = new Boyfriend_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Boyfriend_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x55af02e5) {
		if (inClassId<=(int)0x4bce7e8a) {
			if (inClassId<=(int)0x2c01639b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
			} else {
				return inClassId==(int)0x4bce7e8a;
			}
		} else {
			return inClassId==(int)0x55af02e5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Boyfriend_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_86c0a8e48d33a6ef_19_update)
HXLINE(  20)		if (!(this->debugMode)) {
HXLINE(  22)			if (::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("sing",4f,96,53,4c))) {
HXLINE(  24)				 ::Boyfriend _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  24)				_hx_tmp->holdTimer = (_hx_tmp->holdTimer + elapsed);
            			}
            			else {
HXLINE(  27)				this->holdTimer = ( (Float)(0) );
            			}
HXLINE(  29)			bool _hx_tmp;
HXDLIN(  29)			bool _hx_tmp1;
HXDLIN(  29)			if (::StringTools_obj::endsWith(this->animation->_curAnim->name,HX_("miss",fc,52,5c,48))) {
HXLINE(  29)				_hx_tmp1 = this->animation->_curAnim->finished;
            			}
            			else {
HXLINE(  29)				_hx_tmp1 = false;
            			}
HXDLIN(  29)			if (_hx_tmp1) {
HXLINE(  29)				_hx_tmp = !(this->debugMode);
            			}
            			else {
HXLINE(  29)				_hx_tmp = false;
            			}
HXDLIN(  29)			if (_hx_tmp) {
HXLINE(  31)				this->idleEnd(null());
            			}
HXLINE(  34)			bool _hx_tmp2;
HXDLIN(  34)			if ((this->animation->_curAnim->name == HX_("firstDeath",e4,d8,fc,14))) {
HXLINE(  34)				_hx_tmp2 = this->animation->_curAnim->finished;
            			}
            			else {
HXLINE(  34)				_hx_tmp2 = false;
            			}
HXDLIN(  34)			if (_hx_tmp2) {
HXLINE(  36)				this->playAnim(HX_("deathLoop",b8,0b,79,2e),null(),null(),null());
            			}
            		}
HXLINE(  40)		this->super::update(elapsed);
            	}


void Boyfriend_obj::idleEnd( ::Dynamic __o_ignoreDebug){
            		 ::Dynamic ignoreDebug = __o_ignoreDebug;
            		if (::hx::IsNull(__o_ignoreDebug)) ignoreDebug = false;
            	HX_STACKFRAME(&_hx_pos_86c0a8e48d33a6ef_45_idleEnd)
HXDLIN(  45)		bool _hx_tmp;
HXDLIN(  45)		if (this->debugMode) {
HXDLIN(  45)			_hx_tmp = ( (bool)(ignoreDebug) );
            		}
            		else {
HXDLIN(  45)			_hx_tmp = true;
            		}
HXDLIN(  45)		if (_hx_tmp) {
HXLINE(  47)			::String _hx_switch_0 = this->curCharacter;
            			if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ||  (_hx_switch_0==HX_("gf-car",a6,63,ab,07)) ||  (_hx_switch_0==HX_("gf-christmas",94,26,b1,6d)) ||  (_hx_switch_0==HX_("gf-pixel",98,3e,8c,55)) ||  (_hx_switch_0==HX_("spooky",eb,bd,9e,c1)) ){
HXLINE(  50)				this->playAnim(HX_("danceRight",a9,7f,a6,91),true,false,(( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("danceRight",a9,7f,a6,91))) )->frames->length - 1));
HXDLIN(  50)				goto _hx_goto_2;
            			}
            			/* default */{
HXLINE(  53)				this->playAnim(HX_("idle",14,a7,b3,45),true,false,(( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("idle",14,a7,b3,45))) )->frames->length - 1));
            			}
            			_hx_goto_2:;
            		}
            	}


void Boyfriend_obj::dance( ::Dynamic __o_ignoreDebug){
            		 ::Dynamic ignoreDebug = __o_ignoreDebug;
            		if (::hx::IsNull(__o_ignoreDebug)) ignoreDebug = false;
            	HX_STACKFRAME(&_hx_pos_86c0a8e48d33a6ef_60_dance)
HXDLIN(  60)		bool _hx_tmp;
HXDLIN(  60)		if (this->debugMode) {
HXDLIN(  60)			_hx_tmp = ( (bool)(ignoreDebug) );
            		}
            		else {
HXDLIN(  60)			_hx_tmp = true;
            		}
HXDLIN(  60)		if (_hx_tmp) {
HXLINE(  62)			::String _hx_switch_0 = this->curCharacter;
            			if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ||  (_hx_switch_0==HX_("gf-car",a6,63,ab,07)) ||  (_hx_switch_0==HX_("gf-christmas",94,26,b1,6d)) ||  (_hx_switch_0==HX_("gf-pixel",98,3e,8c,55)) ||  (_hx_switch_0==HX_("spooky",eb,bd,9e,c1)) ){
HXLINE(  65)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("sing",4f,96,53,4c)))) {
HXLINE(  67)					this->danced = !(this->danced);
HXLINE(  69)					if (this->danced) {
HXLINE(  70)						this->playAnim(HX_("danceRight",a9,7f,a6,91),true,null(),null());
            					}
            					else {
HXLINE(  72)						this->playAnim(HX_("danceLeft",da,cc,f9,df),true,null(),null());
            					}
            				}
HXLINE(  65)				goto _hx_goto_4;
            			}
            			/* default */{
HXLINE(  76)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("sing",4f,96,53,4c)))) {
HXLINE(  78)					this->playAnim(HX_("idle",14,a7,b3,45),true,null(),null());
            				}
            			}
            			_hx_goto_4:;
            		}
            	}



::hx::ObjectPtr< Boyfriend_obj > Boyfriend_obj::__new(Float x,Float y,::String __o__hx_char) {
	::hx::ObjectPtr< Boyfriend_obj > __this = new Boyfriend_obj();
	__this->__construct(x,y,__o__hx_char);
	return __this;
}

::hx::ObjectPtr< Boyfriend_obj > Boyfriend_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o__hx_char) {
	Boyfriend_obj *__this = (Boyfriend_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Boyfriend_obj), true, "Boyfriend"));
	*(void **)__this = Boyfriend_obj::_hx_vtable;
	__this->__construct(x,y,__o__hx_char);
	return __this;
}

Boyfriend_obj::Boyfriend_obj()
{
}

::hx::Val Boyfriend_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dance") ) { return ::hx::Val( dance_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"idleEnd") ) { return ::hx::Val( idleEnd_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Boyfriend_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Boyfriend_obj_sStaticStorageInfo = 0;
#endif

static ::String Boyfriend_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	HX_("idleEnd",27,b9,3b,7c),
	HX_("dance",33,83,83,d4),
	::String(null()) };

::hx::Class Boyfriend_obj::__mClass;

void Boyfriend_obj::__register()
{
	Boyfriend_obj _hx_dummy;
	Boyfriend_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Boyfriend",4a,09,8b,88);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Boyfriend_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Boyfriend_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Boyfriend_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Boyfriend_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

