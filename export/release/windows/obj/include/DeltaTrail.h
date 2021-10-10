// Generated by Haxe 4.1.5
#ifndef INCLUDED_DeltaTrail
#define INCLUDED_DeltaTrail

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_effects_FlxTrail
#include <flixel/addons/effects/FlxTrail.h>
#endif
HX_DECLARE_CLASS0(DeltaTrail)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,effects,FlxTrail)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES DeltaTrail_obj : public  ::flixel::addons::effects::FlxTrail_obj
{
	public:
		typedef  ::flixel::addons::effects::FlxTrail_obj super;
		typedef DeltaTrail_obj OBJ_;
		DeltaTrail_obj();

	public:
		enum { _hx_ClassId = 0x0ee765f2 };

		void __construct( ::flixel::FlxSprite Target, ::Dynamic Graphic,::hx::Null< int >  __o_Length,::hx::Null< Float >  __o_Delay,::hx::Null< Float >  __o_Alpha,::hx::Null< Float >  __o_Diff);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="DeltaTrail")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"DeltaTrail"); }
		static ::hx::ObjectPtr< DeltaTrail_obj > __new( ::flixel::FlxSprite Target, ::Dynamic Graphic,::hx::Null< int >  __o_Length,::hx::Null< Float >  __o_Delay,::hx::Null< Float >  __o_Alpha,::hx::Null< Float >  __o_Diff);
		static ::hx::ObjectPtr< DeltaTrail_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite Target, ::Dynamic Graphic,::hx::Null< int >  __o_Length,::hx::Null< Float >  __o_Delay,::hx::Null< Float >  __o_Alpha,::hx::Null< Float >  __o_Diff);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DeltaTrail_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DeltaTrail",ce,3c,f3,b7); }

		Float _timer;
		Float timerMax;
		void update(Float elapsed);

};


#endif /* INCLUDED_DeltaTrail */ 
