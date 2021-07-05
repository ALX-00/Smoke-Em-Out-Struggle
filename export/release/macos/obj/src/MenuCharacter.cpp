// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_MenuCharacter
#include <MenuCharacter.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ab0efa272e315d84_11_new,"MenuCharacter","new",0x6b6b77dc,"MenuCharacter.new","MenuCharacter.hx",11,0x28a93714)

void MenuCharacter_obj::__construct(Float x,::String __o_character){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            	HX_STACKFRAME(&_hx_pos_ab0efa272e315d84_11_new)
HXLINE(  12)		super::__construct(x,null(),null());
HXLINE(  14)		this->character = character;
HXLINE(  16)		::String library = null();
HXDLIN(  16)		::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_characters",24,49,1a,60)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  16)		 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_characters",24,49,1a,60)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  17)		this->set_frames(tex1);
HXLINE(  19)		this->animation->addByPrefix(HX_("bf",c4,55,00,00),HX_("BF idle dance white",cc,b4,ad,68),24,null(),null(),null());
HXLINE(  20)		this->animation->addByPrefix(HX_("bfConfirm",9c,6f,0e,68),HX_("BF HEY!!",40,93,04,8c),24,false,null(),null());
HXLINE(  21)		this->animation->addByPrefix(HX_("gf",1f,5a,00,00),HX_("GF Dancing Beat WHITE",f0,84,9e,e1),24,null(),null(),null());
HXLINE(  22)		this->animation->addByPrefix(HX_("dad",47,36,4c,00),HX_("Dad idle dance BLACK LINE",b5,ef,e0,8b),24,null(),null(),null());
HXLINE(  23)		this->animation->addByPrefix(HX_("spooky",eb,bd,9e,c1),HX_("spooky dance idle BLACK LINES",b4,84,b1,60),24,null(),null(),null());
HXLINE(  24)		this->animation->addByPrefix(HX_("pico",e5,e8,57,4a),HX_("Pico Idle Dance",62,48,dd,f6),24,null(),null(),null());
HXLINE(  25)		this->animation->addByPrefix(HX_("mom",cb,16,53,00),HX_("Mom Idle BLACK LINES",c7,f6,14,d1),24,null(),null(),null());
HXLINE(  26)		this->animation->addByPrefix(HX_("parents-christmas",fe,94,c5,32),HX_("Parent Christmas Idle",c8,04,64,10),24,null(),null(),null());
HXLINE(  27)		this->animation->addByPrefix(HX_("senpai",3c,df,8d,6b),HX_("SENPAI idle Black Lines",f6,9a,63,5d),24,null(),null(),null());
HXLINE(  28)		this->animation->addByPrefix(HX_("garcello",75,58,5d,9d),HX_("garcello idle",9f,16,8b,b3),24,null(),null(),null());
HXLINE(  31)		this->animation->play(character,null(),null(),null());
HXLINE(  32)		this->updateHitbox();
            	}

Dynamic MenuCharacter_obj::__CreateEmpty() { return new MenuCharacter_obj; }

void *MenuCharacter_obj::_hx_vtable = 0;

Dynamic MenuCharacter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuCharacter_obj > _hx_result = new MenuCharacter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MenuCharacter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5962df7e) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x5962df7e;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}


::hx::ObjectPtr< MenuCharacter_obj > MenuCharacter_obj::__new(Float x,::String __o_character) {
	::hx::ObjectPtr< MenuCharacter_obj > __this = new MenuCharacter_obj();
	__this->__construct(x,__o_character);
	return __this;
}

::hx::ObjectPtr< MenuCharacter_obj > MenuCharacter_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,::String __o_character) {
	MenuCharacter_obj *__this = (MenuCharacter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuCharacter_obj), true, "MenuCharacter"));
	*(void **)__this = MenuCharacter_obj::_hx_vtable;
	__this->__construct(x,__o_character);
	return __this;
}

MenuCharacter_obj::MenuCharacter_obj()
{
}

void MenuCharacter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuCharacter);
	HX_MARK_MEMBER_NAME(character,"character");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuCharacter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(character,"character");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuCharacter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"character") ) { return ::hx::Val( character ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuCharacter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"character") ) { character=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("character",a9,db,d1,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuCharacter_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(MenuCharacter_obj,character),HX_("character",a9,db,d1,41)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuCharacter_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuCharacter_obj_sMemberFields[] = {
	HX_("character",a9,db,d1,41),
	::String(null()) };

::hx::Class MenuCharacter_obj::__mClass;

void MenuCharacter_obj::__register()
{
	MenuCharacter_obj _hx_dummy;
	MenuCharacter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MenuCharacter",ea,99,ab,10);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuCharacter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuCharacter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuCharacter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuCharacter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

