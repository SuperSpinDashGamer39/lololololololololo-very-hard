// Generated by Haxe 4.1.5
#ifndef INCLUDED_config_KeyBindMenuController
#define INCLUDED_config_KeyBindMenuController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS1(config,KeyBindMenuController)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace config{


class HXCPP_CLASS_ATTRIBUTES KeyBindMenuController_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef KeyBindMenuController_obj OBJ_;
		KeyBindMenuController_obj();

	public:
		enum { _hx_ClassId = 0x0fd4d715 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="config.KeyBindMenuController")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"config.KeyBindMenuController"); }
		static ::hx::ObjectPtr< KeyBindMenuController_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< KeyBindMenuController_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~KeyBindMenuController_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("KeyBindMenuController",17,ab,46,c7); }

		 ::flixel::text::FlxText keyTextDisplay;
		 ::flixel::text::FlxText keyWarning;
		 ::flixel::tweens::FlxTween warningTween;
		::Array< ::String > keyText;
		::Array< ::String > defaultKeys;
		::Array< int > allowedKeys;
		int curSelected;
		::Array< ::String > keys;
		::String tempKey;
		::Array< ::String > blacklist;
		::String state;
		void create();

		void update(Float elapsed);

		void textUpdate();
		::Dynamic textUpdate_dyn();

		void save();
		::Dynamic save_dyn();

		void reset();
		::Dynamic reset_dyn();

		void quit();
		::Dynamic quit_dyn();

		void addKey(::String r);
		::Dynamic addKey_dyn();

		void changeItem(::hx::Null< int >  _amount);
		::Dynamic changeItem_dyn();

};

} // end namespace config

#endif /* INCLUDED_config_KeyBindMenuController */ 
