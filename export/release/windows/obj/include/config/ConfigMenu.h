// Generated by Haxe 4.1.5
#ifndef INCLUDED_config_ConfigMenu
#define INCLUDED_config_ConfigMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS1(config,ConfigMenu)
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
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace config{


class HXCPP_CLASS_ATTRIBUTES ConfigMenu_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef ConfigMenu_obj OBJ_;
		ConfigMenu_obj();

	public:
		enum { _hx_ClassId = 0x03aad747 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="config.ConfigMenu")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"config.ConfigMenu"); }
		static ::hx::ObjectPtr< ConfigMenu_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< ConfigMenu_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ConfigMenu_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ConfigMenu",a1,55,55,6c); }

		static void __boot();
		static bool startSong;
		static  ::flixel::FlxState exitTo;
		 ::flixel::text::FlxText configText;
		 ::flixel::text::FlxText descText;
		 ::flixel::text::FlxText tabDisplay;
		int configSelected;
		Float offsetValue;
		::String accuracyType;
		int accuracyTypeInt;
		::Array< ::String > accuracyTypes;
		int healthValue;
		int healthDrainValue;
		int comboValue;
		::Array< ::String > comboTypes;
		bool downValue;
		bool glowValue;
		int randomTapValue;
		::Array< ::String > randomTapTypes;
		bool noCapValue;
		int scheme;
		int dimValue;
		::Array< ::String > tabKeys;
		bool canChangeItems;
		int leftRightCount;
		::Array< ::String > genericOnOff;
		::Array< ::String > settingText;
		::Array< ::String > settingDesc;
		::Array< ::String > ghostTapDesc;
		::Array< ::String > comboDisplayDesc;
		::Array< ::String > controlSchemes;
		::Array< ::String > controlSchemesDesc;
		void create();

		bool selectedSomethin;
		void update(Float elapsed);

		void changeItem(::hx::Null< int >  huh);
		::Dynamic changeItem_dyn();

		void textUpdate();
		::Dynamic textUpdate_dyn();

		::String getSetting(int r);
		::Dynamic getSetting_dyn();

		void exit();
		::Dynamic exit_dyn();

		void secretPresetTest(::Array< ::String > _combo);
		::Dynamic secretPresetTest_dyn();

		void writeToConfig();
		::Dynamic writeToConfig_dyn();

};

} // end namespace config

#endif /* INCLUDED_config_ConfigMenu */ 