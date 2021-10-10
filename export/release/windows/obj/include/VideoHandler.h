// Generated by Haxe 4.1.5
#ifndef INCLUDED_VideoHandler
#define INCLUDED_VideoHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(VideoHandler)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(vlc,VlcBitmap)



class HXCPP_CLASS_ATTRIBUTES VideoHandler_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef VideoHandler_obj OBJ_;
		VideoHandler_obj();

	public:
		enum { _hx_ClassId = 0x10c5b76f };

		void __construct( ::Dynamic __o_x, ::Dynamic __o_y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="VideoHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"VideoHandler"); }
		static ::hx::ObjectPtr< VideoHandler_obj > __new( ::Dynamic __o_x, ::Dynamic __o_y);
		static ::hx::ObjectPtr< VideoHandler_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_x, ::Dynamic __o_y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VideoHandler_obj();

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
		::String __ToString() const { return HX_("VideoHandler",af,64,e4,27); }

		static void __boot();
		static int MAX_FPS;
		bool skipable;
		bool _hx___muted;
		bool paused;
		 ::Dynamic finishCallback;
		Dynamic finishCallback_dyn() { return finishCallback;}
		bool waitingStart;
		bool startDrawing;
		Float frameCount;
		bool completed;
		 ::vlc::VlcBitmap vlcBitmap;
		void playMP4(::String videoPath, ::Dynamic callback, ::Dynamic repeat, ::Dynamic canSkip);
		::Dynamic playMP4_dyn();

		void playDesktopMP4(::String path, ::Dynamic callback, ::Dynamic repeat, ::Dynamic canSkip, ::Dynamic isWindow, ::Dynamic isFullscreen);
		::Dynamic playDesktopMP4_dyn();

		::String checkFile(::String fileName);
		::Dynamic checkFile_dyn();

		void onVLCVideoReady();
		::Dynamic onVLCVideoReady_dyn();

		void onVLCComplete();
		::Dynamic onVLCComplete_dyn();

		void vlcClean();
		::Dynamic vlcClean_dyn();

		void update(Float elapsed);

		void destroy();

		void pause();
		::Dynamic pause_dyn();

		void resume();
		::Dynamic resume_dyn();

		bool get_muted();
		::Dynamic get_muted_dyn();

		bool set_muted(bool value);
		::Dynamic set_muted_dyn();

};


#endif /* INCLUDED_VideoHandler */ 
