// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


static ::String IFlxUIWidget_obj_sMemberFields[] = {
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("name",4b,72,ff,48),
	HX_("broadcastToFlxUI",ca,32,56,1a),
	::String(null()) };

::hx::Class IFlxUIWidget_obj::__mClass;

void IFlxUIWidget_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.interfaces.IFlxUIWidget",24,ab,fb,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFlxUIWidget_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x998525de >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces
