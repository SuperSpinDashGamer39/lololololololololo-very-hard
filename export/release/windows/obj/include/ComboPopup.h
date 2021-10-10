// Generated by Haxe 4.1.5
#ifndef INCLUDED_ComboPopup
#define INCLUDED_ComboPopup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS0(ComboPopup)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES ComboPopup_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef ComboPopup_obj OBJ_;
		ComboPopup_obj();

	public:
		enum { _hx_ClassId = 0x222fa442 };

		void __construct(Float _x,Float _y,::cpp::VirtualArray _ratingInfo,::cpp::VirtualArray _numberInfo,::cpp::VirtualArray _comboBreakInfo,::Array< Float > _scale);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ComboPopup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ComboPopup"); }
		static ::hx::ObjectPtr< ComboPopup_obj > __new(Float _x,Float _y,::cpp::VirtualArray _ratingInfo,::cpp::VirtualArray _numberInfo,::cpp::VirtualArray _comboBreakInfo,::Array< Float > _scale);
		static ::hx::ObjectPtr< ComboPopup_obj > __alloc(::hx::Ctx *_hx_ctx,Float _x,Float _y,::cpp::VirtualArray _ratingInfo,::cpp::VirtualArray _numberInfo,::cpp::VirtualArray _comboBreakInfo,::Array< Float > _scale);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComboPopup_obj();

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
		::String __ToString() const { return HX_("ComboPopup",1e,7b,3b,cb); }

		static void __boot();
		static int GRAPHIC;
		static int WIDTH;
		static int HEIGHT;
		static int AA;
		static int X;
		static int Y;
		static ::Array< ::String > ratingList;
		::Array< Float > ratingPosition;
		::Array< Float > numberPosition;
		::Array< Float > breakPosition;
		Float ratingScale;
		Float numberScale;
		Float breakScale;
		Float accelScale;
		Float velocityScale;
		::cpp::VirtualArray ratingInfo;
		::cpp::VirtualArray numberInfo;
		::cpp::VirtualArray comboBreakInfo;
		void setScales(::Array< Float > _scale, ::Dynamic positionReset);
		::Dynamic setScales_dyn();

		void comboPopup(int _combo);
		::Dynamic comboPopup_dyn();

		void ratingPopup(::String _rating);
		::Dynamic ratingPopup_dyn();

		void breakPopup();
		::Dynamic breakPopup_dyn();

};


#endif /* INCLUDED_ComboPopup */ 
