// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_ImageCache
#include <ImageCache.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_config_ConfigMenu
#include <config/ConfigMenu.h>
#endif
#ifndef INCLUDED_config_KeyBindMenu
#include <config/KeyBindMenu.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b2b85bc770b57987_25_new,"config.KeyBindMenu","new",0x50c40761,"config.KeyBindMenu.new","config/KeyBindMenu.hx",25,0x8b035ef0)
static const ::String _hx_array_data_73bac2ef_1[] = {
	HX_("ESCAPE",81,ef,5c,8d),HX_("ENTER",f8,a4,74,ee),HX_("BACKSPACE",1f,f5,42,c6),HX_("SPACE",a6,c4,54,ff),
};
static const ::String _hx_array_data_73bac2ef_2[] = {
	HX_("A",41,00,00,00),HX_("S",53,00,00,00),HX_("W",57,00,00,00),HX_("D",44,00,00,00),HX_("R",52,00,00,00),
};
static const ::String _hx_array_data_73bac2ef_3[] = {
	HX_("LEFT",07,d0,70,32),HX_("DOWN",62,c0,2e,2d),HX_("UP",5b,4a,00,00),HX_("RIGHT",bc,43,52,67),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b2b85bc770b57987_47_create,"config.KeyBindMenu","create",0x6d04c69b,"config.KeyBindMenu.create","config/KeyBindMenu.hx",47,0x8b035ef0)
HX_LOCAL_STACK_FRAME(_hx_pos_b2b85bc770b57987_90_update,"config.KeyBindMenu","update",0x77fae5a8,"config.KeyBindMenu.update","config/KeyBindMenu.hx",90,0x8b035ef0)
HX_LOCAL_STACK_FRAME(_hx_pos_b2b85bc770b57987_159_textUpdate,"config.KeyBindMenu","textUpdate",0x6b3d21b5,"config.KeyBindMenu.textUpdate","config/KeyBindMenu.hx",159,0x8b035ef0)
HX_LOCAL_STACK_FRAME(_hx_pos_b2b85bc770b57987_183_save,"config.KeyBindMenu","save",0x5e0d751c,"config.KeyBindMenu.save","config/KeyBindMenu.hx",183,0x8b035ef0)
HX_LOCAL_STACK_FRAME(_hx_pos_b2b85bc770b57987_197_reset,"config.KeyBindMenu","reset",0x5cf50310,"config.KeyBindMenu.reset","config/KeyBindMenu.hx",197,0x8b035ef0)
HX_LOCAL_STACK_FRAME(_hx_pos_b2b85bc770b57987_206_quit,"config.KeyBindMenu","quit",0x5cca29ae,"config.KeyBindMenu.quit","config/KeyBindMenu.hx",206,0x8b035ef0)
HX_LOCAL_STACK_FRAME(_hx_pos_b2b85bc770b57987_217_addKey,"config.KeyBindMenu","addKey",0x8ff7f99d,"config.KeyBindMenu.addKey","config/KeyBindMenu.hx",217,0x8b035ef0)
HX_LOCAL_STACK_FRAME(_hx_pos_b2b85bc770b57987_262_changeItem,"config.KeyBindMenu","changeItem",0xcd5015c2,"config.KeyBindMenu.changeItem","config/KeyBindMenu.hx",262,0x8b035ef0)
namespace config{

void KeyBindMenu_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_b2b85bc770b57987_25_new)
HXLINE(  44)		this->state = HX_("select",fc,1a,33,6a);
HXLINE(  42)		this->blacklist = ::Array_obj< ::String >::fromData( _hx_array_data_73bac2ef_1,4);
HXLINE(  41)		this->tempKey = HX_("",00,00,00,00);
HXLINE(  35)		this->keys = ::Array_obj< ::String >::__new(5)->init(0, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("leftBind",64,39,12,48),::hx::paccDynamic)))->init(1, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("downBind",3f,f3,fe,75),::hx::paccDynamic)))->init(2, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("upBind",b8,51,92,70),::hx::paccDynamic)))->init(3, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("rightBind",b9,4b,dd,ab),::hx::paccDynamic)))->init(4, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("killBind",7b,28,25,80),::hx::paccDynamic)));
HXLINE(  33)		this->curSelected = 0;
HXLINE(  32)		this->defaultKeys = ::Array_obj< ::String >::fromData( _hx_array_data_73bac2ef_2,5);
HXLINE(  31)		this->keyText = ::Array_obj< ::String >::fromData( _hx_array_data_73bac2ef_3,4);
HXLINE(  25)		super::__construct(TransIn,TransOut);
            	}

Dynamic KeyBindMenu_obj::__CreateEmpty() { return new KeyBindMenu_obj; }

void *KeyBindMenu_obj::_hx_vtable = 0;

Dynamic KeyBindMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KeyBindMenu_obj > _hx_result = new KeyBindMenu_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool KeyBindMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x07618119) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x07618119;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void KeyBindMenu_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b2b85bc770b57987_47_create)
HXLINE(  49)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE(  51)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN(  51)		::String data = ((HX_("assets/images/",ab,47,cb,9f) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e));
HXDLIN(  51)		 ::Dynamic bg1;
HXDLIN(  51)		if (::ImageCache_obj::exists(data)) {
HXLINE(  51)			bg1 = ::ImageCache_obj::get(data);
            		}
            		else {
HXLINE(  51)			bg1 = data;
            		}
HXDLIN(  51)		 ::flixel::FlxSprite bg2 = bg->loadGraphic(bg1,null(),null(),null(),null(),null());
HXLINE(  52)		bg2->scrollFactor->set_x(( (Float)(0) ));
HXLINE(  53)		bg2->scrollFactor->set_y(( (Float)(0) ));
HXLINE(  54)		bg2->setGraphicSize(::Std_obj::_hx_int((bg2->get_width() * ((Float)1.18))),null());
HXLINE(  55)		bg2->updateHitbox();
HXLINE(  56)		bg2->screenCenter(null());
HXLINE(  57)		bg2->set_antialiasing(true);
HXLINE(  58)		bg2->set_color(-6854978);
HXLINE(  59)		this->add(bg2);
HXLINE(  61)		this->keyTextDisplay =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,1280,HX_("",00,00,00,00),72,null());
HXLINE(  62)		this->keyTextDisplay->scrollFactor->set(0,0);
HXLINE(  63)		this->keyTextDisplay->setFormat(HX_("assets/fonts/Funkin-Bold.otf",bd,87,d9,8a),72,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  64)		this->keyTextDisplay->set_borderSize(( (Float)(3) ));
HXLINE(  65)		this->keyTextDisplay->set_borderQuality(( (Float)(1) ));
HXLINE(  66)		this->add(this->keyTextDisplay);
HXLINE(  68)		this->keyWarning =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,580,1280,HX_("WARNING: BIND NOT SET, TRY ANOTHER KEY",35,75,ea,cc),42,null());
HXLINE(  69)		this->keyWarning->scrollFactor->set(0,0);
HXLINE(  70)		this->keyWarning->setFormat(HX_("assets/fonts/vcr.ttf",46,38,26,7e),42,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  71)		this->keyWarning->set_borderSize(( (Float)(3) ));
HXLINE(  72)		this->keyWarning->set_borderQuality(( (Float)(1) ));
HXLINE(  73)		this->keyWarning->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  74)		this->keyWarning->set_alpha(( (Float)(0) ));
HXLINE(  75)		this->add(this->keyWarning);
HXLINE(  77)		 ::flixel::text::FlxText backText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,(::flixel::FlxG_obj::height - 37),0,HX_("ESCAPE - Back to Menu\nBACKSPACE - Reset to Defaults\n",e5,94,ab,e0),16,null());
HXLINE(  78)		backText->scrollFactor->set(null(),null());
HXLINE(  79)		backText->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  80)		this->add(backText);
HXLINE(  82)		this->warningTween = ::flixel::tweens::FlxTween_obj::tween(this->keyWarning, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),0,null());
HXLINE(  84)		this->textUpdate();
HXLINE(  86)		this->super::create();
            	}


void KeyBindMenu_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_b2b85bc770b57987_90_update)
HXLINE(  92)		::String _hx_switch_0 = this->state;
            		if (  (_hx_switch_0==HX_("exiting",84,dc,da,24)) ){
HXLINE( 144)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("input",0a,c4,1d,be)) ){
HXLINE( 121)			this->tempKey = this->keys->__get(this->curSelected);
HXLINE( 122)			this->keys[this->curSelected] = HX_("?",3f,00,00,00);
HXLINE( 123)			this->textUpdate();
HXLINE( 124)			this->state = HX_("waiting",8d,e9,27,df);
HXLINE( 120)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("select",fc,1a,33,6a)) ){
HXLINE(  95)			if (::PlayerSettings_obj::player1->controls->_upP->check()) {
HXLINE(  97)				::flixel::FlxG_obj::sound->play((((HX_("assets/sounds/",1f,fa,fb,94) + HX_("scrollMenu",4c,d4,18,06)) + HX_(".",2e,00,00,00)) + ::Paths_obj::audioExtension),null(),null(),null(),null(),null());
HXLINE(  98)				this->changeItem(-1);
            			}
HXLINE( 101)			if (::PlayerSettings_obj::player1->controls->_downP->check()) {
HXLINE( 103)				::flixel::FlxG_obj::sound->play((((HX_("assets/sounds/",1f,fa,fb,94) + HX_("scrollMenu",4c,d4,18,06)) + HX_(".",2e,00,00,00)) + ::Paths_obj::audioExtension),null(),null(),null(),null(),null());
HXLINE( 104)				this->changeItem(1);
            			}
HXLINE( 107)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 107)			if (_this->keyManager->checkStatus(13,_this->status)) {
HXLINE( 108)				::flixel::FlxG_obj::sound->play((((HX_("assets/sounds/",1f,fa,fb,94) + HX_("scrollMenu",4c,d4,18,06)) + HX_(".",2e,00,00,00)) + ::Paths_obj::audioExtension),null(),null(),null(),null(),null());
HXLINE( 109)				this->state = HX_("input",0a,c4,1d,be);
            			}
            			else {
HXLINE( 111)				bool _hx_tmp;
HXDLIN( 111)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 111)				if (!(_this->keyManager->checkStatus(27,_this->status))) {
HXLINE( 111)					_hx_tmp = ::flixel::FlxG_obj::gamepads->anyHasState(-2,2);
            				}
            				else {
HXLINE( 111)					_hx_tmp = true;
            				}
HXDLIN( 111)				if (_hx_tmp) {
HXLINE( 112)					::flixel::FlxG_obj::sound->play((((HX_("assets/sounds/",1f,fa,fb,94) + HX_("cancelMenu",39,a4,43,b7)) + HX_(".",2e,00,00,00)) + ::Paths_obj::audioExtension),null(),null(),null(),null(),null());
HXLINE( 113)					this->quit();
            				}
            				else {
HXLINE( 115)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 115)					if (_this->keyManager->checkStatus(8,_this->status)) {
HXLINE( 116)						::flixel::FlxG_obj::sound->play((((HX_("assets/sounds/",1f,fa,fb,94) + HX_("cancelMenu",39,a4,43,b7)) + HX_(".",2e,00,00,00)) + ::Paths_obj::audioExtension),null(),null(),null(),null(),null());
HXLINE( 117)						this->reset();
            					}
            				}
            			}
HXLINE(  94)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("waiting",8d,e9,27,df)) ){
HXLINE( 127)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 127)			if (_this->keyManager->checkStatus(27,_this->status)) {
HXLINE( 128)				this->keys[this->curSelected] = this->tempKey;
HXLINE( 129)				this->state = HX_("select",fc,1a,33,6a);
HXLINE( 130)				::flixel::FlxG_obj::sound->play((((HX_("assets/sounds/",1f,fa,fb,94) + HX_("cancelMenu",39,a4,43,b7)) + HX_(".",2e,00,00,00)) + ::Paths_obj::audioExtension),null(),null(),null(),null(),null());
            			}
            			else {
HXLINE( 132)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 132)				if (_this->keyManager->checkStatus(13,_this->status)) {
HXLINE( 133)					this->addKey(this->defaultKeys->__get(this->curSelected));
HXLINE( 134)					this->save();
HXLINE( 135)					this->state = HX_("select",fc,1a,33,6a);
            				}
            				else {
HXLINE( 137)					if (( ( ::flixel::input::FlxBaseKeyList)(::flixel::FlxG_obj::keys->justPressed) )->get_ANY()) {
HXLINE( 138)						int this1 = ( (int)(::flixel::FlxG_obj::keys->getIsDown()->__get(0).StaticCast<  ::flixel::input::FlxInput >()->ID) );
HXDLIN( 138)						this->addKey(::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap->get_string(this1));
HXLINE( 139)						this->save();
HXLINE( 140)						this->state = HX_("select",fc,1a,33,6a);
            					}
            				}
            			}
HXLINE( 127)			goto _hx_goto_5;
            		}
            		/* default */{
HXLINE( 148)			this->state = HX_("select",fc,1a,33,6a);
            		}
            		_hx_goto_5:;
HXLINE( 152)		if (( ( ::flixel::input::FlxBaseKeyList)(::flixel::FlxG_obj::keys->justPressed) )->get_ANY()) {
HXLINE( 153)			this->textUpdate();
            		}
HXLINE( 155)		this->super::update(elapsed);
            	}


void KeyBindMenu_obj::textUpdate(){
            	HX_GC_STACKFRAME(&_hx_pos_b2b85bc770b57987_159_textUpdate)
HXLINE( 161)		this->keyTextDisplay->clearFormats();
HXLINE( 162)		this->keyTextDisplay->set_text(HX_("\n\n",c0,08,00,00));
HXLINE( 164)		{
HXLINE( 164)			int _g = 0;
HXDLIN( 164)			int _g1 = this->keys->length;
HXDLIN( 164)			while((_g < _g1)){
HXLINE( 164)				_g = (_g + 1);
HXDLIN( 164)				int i = (_g - 1);
HXLINE( 166)				int sectionStart = this->keyTextDisplay->text.length;
HXLINE( 167)				if ((i < 4)) {
HXLINE( 168)					 ::flixel::text::FlxText _g = this->keyTextDisplay;
HXDLIN( 168)					::String _hx_tmp;
HXDLIN( 168)					if ((this->keys->__get(i) != this->keyText->__get(i))) {
HXLINE( 168)						_hx_tmp = (this->keys->__get(i) + HX_(" + ",b5,6d,18,00));
            					}
            					else {
HXLINE( 168)						_hx_tmp = HX_("",00,00,00,00);
            					}
HXDLIN( 168)					_g->set_text((_g->text + ((((this->keyText->__get(i) + HX_(": ",a6,32,00,00)) + _hx_tmp) + this->keyText->__get(i)) + HX_(" ARROW\n",61,9a,2c,9d))));
            				}
            				else {
HXLINE( 170)					 ::flixel::text::FlxText _g = this->keyTextDisplay;
HXDLIN( 170)					_g->set_text((_g->text + ((HX_("RESET: ",15,be,9d,e0) + this->keys->__get(4)) + HX_("\n",0a,00,00,00))));
            				}
HXLINE( 171)				int sectionEnd = (this->keyTextDisplay->text.length - 1);
HXLINE( 173)				if ((i == this->curSelected)) {
HXLINE( 174)					 ::flixel::text::FlxText _hx_tmp = this->keyTextDisplay;
HXDLIN( 174)					_hx_tmp->addFormat( ::flixel::text::FlxTextFormat_obj::__alloc( HX_CTX ,-256,null(),null(),null()),sectionStart,sectionEnd);
            				}
            			}
            		}
HXLINE( 179)		this->keyTextDisplay->screenCenter(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyBindMenu_obj,textUpdate,(void))

void KeyBindMenu_obj::save(){
            	HX_STACKFRAME(&_hx_pos_b2b85bc770b57987_183_save)
HXLINE( 185)		::flixel::FlxG_obj::save->data->__SetField(HX_("upBind",b8,51,92,70),this->keys->__get(2),::hx::paccDynamic);
HXLINE( 186)		::flixel::FlxG_obj::save->data->__SetField(HX_("downBind",3f,f3,fe,75),this->keys->__get(1),::hx::paccDynamic);
HXLINE( 187)		::flixel::FlxG_obj::save->data->__SetField(HX_("leftBind",64,39,12,48),this->keys->__get(0),::hx::paccDynamic);
HXLINE( 188)		::flixel::FlxG_obj::save->data->__SetField(HX_("rightBind",b9,4b,dd,ab),this->keys->__get(3),::hx::paccDynamic);
HXLINE( 189)		::flixel::FlxG_obj::save->data->__SetField(HX_("killBind",7b,28,25,80),this->keys->__get(4),::hx::paccDynamic);
HXLINE( 191)		::flixel::FlxG_obj::save->flush(null(),null());
HXLINE( 193)		::PlayerSettings_obj::player1->controls->loadKeyBinds();
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyBindMenu_obj,save,(void))

void KeyBindMenu_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_b2b85bc770b57987_197_reset)
HXLINE( 199)		{
HXLINE( 200)			this->keys[0] = this->defaultKeys->__get(0);
HXDLIN( 200)			this->keys[1] = this->defaultKeys->__get(1);
HXDLIN( 200)			this->keys[2] = this->defaultKeys->__get(2);
HXDLIN( 200)			this->keys[3] = this->defaultKeys->__get(3);
HXDLIN( 200)			this->keys[4] = this->defaultKeys->__get(4);
            		}
HXLINE( 202)		this->quit();
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyBindMenu_obj,reset,(void))

void KeyBindMenu_obj::quit(){
            	HX_GC_STACKFRAME(&_hx_pos_b2b85bc770b57987_206_quit)
HXLINE( 208)		this->state = HX_("exiting",84,dc,da,24);
HXLINE( 210)		this->save();
HXLINE( 212)		::config::ConfigMenu_obj::startSong = false;
HXLINE( 213)		{
HXLINE( 213)			 ::flixel::FlxState nextState =  ::config::ConfigMenu_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 213)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 213)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyBindMenu_obj,quit,(void))

void KeyBindMenu_obj::addKey(::String r){
            	HX_STACKFRAME(&_hx_pos_b2b85bc770b57987_217_addKey)
HXLINE( 219)		bool shouldReturn = true;
HXLINE( 221)		::Array< ::String > notAllowed = ::Array_obj< ::String >::__new(0);
HXLINE( 223)		{
HXLINE( 223)			int _g = 0;
HXDLIN( 223)			::Array< ::String > _g1 = this->keys;
HXDLIN( 223)			while((_g < _g1->length)){
HXLINE( 223)				::String x = _g1->__get(_g);
HXDLIN( 223)				_g = (_g + 1);
HXLINE( 224)				if ((x != this->tempKey)) {
HXLINE( 224)					notAllowed->push(x);
            				}
            			}
            		}
HXLINE( 227)		{
HXLINE( 227)			int _g2 = 0;
HXDLIN( 227)			::Array< ::String > _g3 = this->blacklist;
HXDLIN( 227)			while((_g2 < _g3->length)){
HXLINE( 227)				::String x = _g3->__get(_g2);
HXDLIN( 227)				_g2 = (_g2 + 1);
HXDLIN( 227)				notAllowed->push(x);
            			}
            		}
HXLINE( 229)		if ((this->curSelected != 4)) {
HXLINE( 231)			int _g = 0;
HXDLIN( 231)			::Array< ::String > _g1 = this->keyText;
HXDLIN( 231)			while((_g < _g1->length)){
HXLINE( 231)				::String x = _g1->__get(_g);
HXDLIN( 231)				_g = (_g + 1);
HXLINE( 232)				if ((x != this->keyText->__get(this->curSelected))) {
HXLINE( 232)					notAllowed->push(x);
            				}
            			}
            		}
            		else {
HXLINE( 236)			int _g = 0;
HXDLIN( 236)			::Array< ::String > _g1 = this->keyText;
HXDLIN( 236)			while((_g < _g1->length)){
HXLINE( 236)				::String x = _g1->__get(_g);
HXDLIN( 236)				_g = (_g + 1);
HXDLIN( 236)				notAllowed->push(x);
            			}
            		}
HXLINE( 238)		::haxe::Log_obj::trace(notAllowed,::hx::SourceInfo(HX_("source/config/KeyBindMenu.hx",7c,73,ca,c9),238,HX_("config.KeyBindMenu",ef,c2,ba,73),HX_("addKey",fe,99,02,9f)));
HXLINE( 240)		{
HXLINE( 240)			int _g4 = 0;
HXDLIN( 240)			while((_g4 < notAllowed->length)){
HXLINE( 240)				::String x = notAllowed->__get(_g4);
HXDLIN( 240)				_g4 = (_g4 + 1);
HXDLIN( 240)				if ((x == r)) {
HXLINE( 240)					shouldReturn = false;
            				}
            			}
            		}
HXLINE( 242)		if (shouldReturn) {
HXLINE( 243)			this->keys[this->curSelected] = r;
HXLINE( 244)			::flixel::FlxG_obj::sound->play((((HX_("assets/sounds/",1f,fa,fb,94) + HX_("scrollMenu",4c,d4,18,06)) + HX_(".",2e,00,00,00)) + ::Paths_obj::audioExtension),null(),null(),null(),null(),null());
            		}
            		else {
HXLINE( 246)			bool _hx_tmp;
HXDLIN( 246)			if (!(shouldReturn)) {
HXLINE( 246)				_hx_tmp = this->keys->contains(r);
            			}
            			else {
HXLINE( 246)				_hx_tmp = false;
            			}
HXDLIN( 246)			if (_hx_tmp) {
HXLINE( 247)				this->keys[this->keys->indexOf(r,null())] = this->tempKey;
HXLINE( 248)				this->keys[this->curSelected] = r;
HXLINE( 249)				::flixel::FlxG_obj::sound->play((((HX_("assets/sounds/",1f,fa,fb,94) + HX_("scrollMenu",4c,d4,18,06)) + HX_(".",2e,00,00,00)) + ::Paths_obj::audioExtension),null(),null(),null(),null(),null());
            			}
            			else {
HXLINE( 252)				this->keys[this->curSelected] = this->tempKey;
HXLINE( 253)				::flixel::FlxG_obj::sound->play((((HX_("assets/sounds/",1f,fa,fb,94) + HX_("cancelMenu",39,a4,43,b7)) + HX_(".",2e,00,00,00)) + ::Paths_obj::audioExtension),null(),null(),null(),null(),null());
HXLINE( 254)				this->keyWarning->set_alpha(( (Float)(1) ));
HXLINE( 255)				this->warningTween->cancel();
HXLINE( 256)				this->warningTween = ::flixel::tweens::FlxTween_obj::tween(this->keyWarning, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("startDelay",c1,af,3d,f3),2)
            					->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circOut_dyn())));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyBindMenu_obj,addKey,(void))

void KeyBindMenu_obj::changeItem(::hx::Null< int >  __o__amount){
            		int _amount = __o__amount.Default(0);
            	HX_STACKFRAME(&_hx_pos_b2b85bc770b57987_262_changeItem)
HXLINE( 263)		 ::config::KeyBindMenu _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 263)		_hx_tmp->curSelected = (_hx_tmp->curSelected + _amount);
HXLINE( 265)		if ((this->curSelected > 4)) {
HXLINE( 266)			this->curSelected = 0;
            		}
HXLINE( 267)		if ((this->curSelected < 0)) {
HXLINE( 268)			this->curSelected = 4;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyBindMenu_obj,changeItem,(void))


::hx::ObjectPtr< KeyBindMenu_obj > KeyBindMenu_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< KeyBindMenu_obj > __this = new KeyBindMenu_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< KeyBindMenu_obj > KeyBindMenu_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	KeyBindMenu_obj *__this = (KeyBindMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(KeyBindMenu_obj), true, "config.KeyBindMenu"));
	*(void **)__this = KeyBindMenu_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

KeyBindMenu_obj::KeyBindMenu_obj()
{
}

void KeyBindMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KeyBindMenu);
	HX_MARK_MEMBER_NAME(keyTextDisplay,"keyTextDisplay");
	HX_MARK_MEMBER_NAME(keyWarning,"keyWarning");
	HX_MARK_MEMBER_NAME(warningTween,"warningTween");
	HX_MARK_MEMBER_NAME(keyText,"keyText");
	HX_MARK_MEMBER_NAME(defaultKeys,"defaultKeys");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_MEMBER_NAME(tempKey,"tempKey");
	HX_MARK_MEMBER_NAME(blacklist,"blacklist");
	HX_MARK_MEMBER_NAME(state,"state");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void KeyBindMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keyTextDisplay,"keyTextDisplay");
	HX_VISIT_MEMBER_NAME(keyWarning,"keyWarning");
	HX_VISIT_MEMBER_NAME(warningTween,"warningTween");
	HX_VISIT_MEMBER_NAME(keyText,"keyText");
	HX_VISIT_MEMBER_NAME(defaultKeys,"defaultKeys");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(keys,"keys");
	HX_VISIT_MEMBER_NAME(tempKey,"tempKey");
	HX_VISIT_MEMBER_NAME(blacklist,"blacklist");
	HX_VISIT_MEMBER_NAME(state,"state");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val KeyBindMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save_dyn() ); }
		if (HX_FIELD_EQ(inName,"quit") ) { return ::hx::Val( quit_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return ::hx::Val( state ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"addKey") ) { return ::hx::Val( addKey_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyText") ) { return ::hx::Val( keyText ); }
		if (HX_FIELD_EQ(inName,"tempKey") ) { return ::hx::Val( tempKey ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blacklist") ) { return ::hx::Val( blacklist ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyWarning") ) { return ::hx::Val( keyWarning ); }
		if (HX_FIELD_EQ(inName,"textUpdate") ) { return ::hx::Val( textUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeItem") ) { return ::hx::Val( changeItem_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultKeys") ) { return ::hx::Val( defaultKeys ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"warningTween") ) { return ::hx::Val( warningTween ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyTextDisplay") ) { return ::hx::Val( keyTextDisplay ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val KeyBindMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyText") ) { keyText=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tempKey") ) { tempKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blacklist") ) { blacklist=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyWarning") ) { keyWarning=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultKeys") ) { defaultKeys=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"warningTween") ) { warningTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyTextDisplay") ) { keyTextDisplay=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyBindMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("keyTextDisplay",b6,e9,da,71));
	outFields->push(HX_("keyWarning",7d,7a,53,78));
	outFields->push(HX_("warningTween",6f,32,71,d8));
	outFields->push(HX_("keyText",ec,3d,d3,a6));
	outFields->push(HX_("defaultKeys",55,db,c5,18));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("keys",f4,e1,06,47));
	outFields->push(HX_("tempKey",eb,a2,b3,46));
	outFields->push(HX_("blacklist",9d,3d,3c,1c));
	outFields->push(HX_("state",11,76,0b,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo KeyBindMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(KeyBindMenu_obj,keyTextDisplay),HX_("keyTextDisplay",b6,e9,da,71)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(KeyBindMenu_obj,keyWarning),HX_("keyWarning",7d,7a,53,78)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(KeyBindMenu_obj,warningTween),HX_("warningTween",6f,32,71,d8)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,keyText),HX_("keyText",ec,3d,d3,a6)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,defaultKeys),HX_("defaultKeys",55,db,c5,18)},
	{::hx::fsInt,(int)offsetof(KeyBindMenu_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,keys),HX_("keys",f4,e1,06,47)},
	{::hx::fsString,(int)offsetof(KeyBindMenu_obj,tempKey),HX_("tempKey",eb,a2,b3,46)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,blacklist),HX_("blacklist",9d,3d,3c,1c)},
	{::hx::fsString,(int)offsetof(KeyBindMenu_obj,state),HX_("state",11,76,0b,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *KeyBindMenu_obj_sStaticStorageInfo = 0;
#endif

static ::String KeyBindMenu_obj_sMemberFields[] = {
	HX_("keyTextDisplay",b6,e9,da,71),
	HX_("keyWarning",7d,7a,53,78),
	HX_("warningTween",6f,32,71,d8),
	HX_("keyText",ec,3d,d3,a6),
	HX_("defaultKeys",55,db,c5,18),
	HX_("curSelected",fb,eb,ab,32),
	HX_("keys",f4,e1,06,47),
	HX_("tempKey",eb,a2,b3,46),
	HX_("blacklist",9d,3d,3c,1c),
	HX_("state",11,76,0b,84),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("textUpdate",96,06,f6,bd),
	HX_("save",3d,8b,4d,4c),
	HX_("reset",cf,49,c8,e6),
	HX_("quit",cf,3f,0a,4b),
	HX_("addKey",fe,99,02,9f),
	HX_("changeItem",a3,fa,08,20),
	::String(null()) };

::hx::Class KeyBindMenu_obj::__mClass;

void KeyBindMenu_obj::__register()
{
	KeyBindMenu_obj _hx_dummy;
	KeyBindMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("config.KeyBindMenu",ef,c2,ba,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(KeyBindMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< KeyBindMenu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KeyBindMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KeyBindMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace config