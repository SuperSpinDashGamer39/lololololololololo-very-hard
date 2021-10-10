// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4d49a2b5c395a512_33_new,"sys.io.FileInput","new",0x565591b9,"sys.io.FileInput.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileInput.hx",33,0x54202051)
HX_LOCAL_STACK_FRAME(_hx_pos_4d49a2b5c395a512_37_readByte,"sys.io.FileInput","readByte",0x25e0b585,"sys.io.FileInput.readByte","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileInput.hx",37,0x54202051)
HX_LOCAL_STACK_FRAME(_hx_pos_4d49a2b5c395a512_48_readBytes,"sys.io.FileInput","readBytes",0xfebe1f4e,"sys.io.FileInput.readBytes","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileInput.hx",48,0x54202051)
HX_LOCAL_STACK_FRAME(_hx_pos_4d49a2b5c395a512_58_close,"sys.io.FileInput","close",0x735aa151,"sys.io.FileInput.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileInput.hx",58,0x54202051)
namespace sys{
namespace io{

void FileInput_obj::__construct( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_4d49a2b5c395a512_33_new)
HXDLIN(  33)		this->_hx___f = f;
            	}

Dynamic FileInput_obj::__CreateEmpty() { return new FileInput_obj; }

void *FileInput_obj::_hx_vtable = 0;

Dynamic FileInput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FileInput_obj > _hx_result = new FileInput_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FileInput_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19e22056) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19e22056;
	} else {
		return inClassId==(int)0x1a1fbc7b;
	}
}

int FileInput_obj::readByte(){
            	HX_GC_STACKFRAME(&_hx_pos_4d49a2b5c395a512_37_readByte)
HXDLIN(  37)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  38)			return _hx_std_file_read_char(this->_hx___f);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(   1)				{
HXLINE(   1)					null();
            				}
HXDLIN(   1)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(  40)				if (( (bool)(e->__IsArray()) )) {
HXLINE(  41)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::haxe::io::Eof_obj::__alloc( HX_CTX )));
            				}
            				else {
HXLINE(  43)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Custom(e)));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  37)		return 0;
            	}


int FileInput_obj::readBytes( ::haxe::io::Bytes s,int p,int l){
            	HX_GC_STACKFRAME(&_hx_pos_4d49a2b5c395a512_48_readBytes)
HXDLIN(  48)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  49)			return _hx_std_file_read(this->_hx___f,s->b,p,l);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(   1)				{
HXLINE(   1)					null();
            				}
HXDLIN(   1)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(  51)				if (( (bool)(e->__IsArray()) )) {
HXLINE(  52)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::haxe::io::Eof_obj::__alloc( HX_CTX )));
            				}
            				else {
HXLINE(  54)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Custom(e)));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  48)		return 0;
            	}


void FileInput_obj::close(){
            	HX_STACKFRAME(&_hx_pos_4d49a2b5c395a512_58_close)
HXLINE(  59)		this->super::close();
HXLINE(  60)		_hx_std_file_close(this->_hx___f);
            	}



::hx::ObjectPtr< FileInput_obj > FileInput_obj::__new( ::Dynamic f) {
	::hx::ObjectPtr< FileInput_obj > __this = new FileInput_obj();
	__this->__construct(f);
	return __this;
}

::hx::ObjectPtr< FileInput_obj > FileInput_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic f) {
	FileInput_obj *__this = (FileInput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FileInput_obj), true, "sys.io.FileInput"));
	*(void **)__this = FileInput_obj::_hx_vtable;
	__this->__construct(f);
	return __this;
}

FileInput_obj::FileInput_obj()
{
}

void FileInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileInput);
	HX_MARK_MEMBER_NAME(_hx___f,"__f");
	HX_MARK_END_CLASS();
}

void FileInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___f,"__f");
}

::hx::Val FileInput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { return ::hx::Val( _hx___f ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return ::hx::Val( readByte_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return ::hx::Val( readBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FileInput_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { _hx___f=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__f",46,69,48,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FileInput_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FileInput_obj,_hx___f),HX_("__f",46,69,48,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FileInput_obj_sStaticStorageInfo = 0;
#endif

static ::String FileInput_obj_sMemberFields[] = {
	HX_("__f",46,69,48,00),
	HX_("readByte",7e,f9,1a,69),
	HX_("readBytes",35,55,7f,8e),
	HX_("close",b8,17,63,48),
	::String(null()) };

::hx::Class FileInput_obj::__mClass;

void FileInput_obj::__register()
{
	FileInput_obj _hx_dummy;
	FileInput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.io.FileInput",47,41,72,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FileInput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FileInput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileInput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace io
