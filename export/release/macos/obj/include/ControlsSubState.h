// Generated by Haxe 4.1.5
#ifndef INCLUDED_ControlsSubState
#define INCLUDED_ControlsSubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
HX_DECLARE_CLASS0(ControlsSubState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES ControlsSubState_obj : public  ::flixel::FlxSubState_obj
{
	public:
		typedef  ::flixel::FlxSubState_obj super;
		typedef ControlsSubState_obj OBJ_;
		ControlsSubState_obj();

	public:
		enum { _hx_ClassId = 0x7e7565a3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ControlsSubState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ControlsSubState"); }
		static ::hx::ObjectPtr< ControlsSubState_obj > __new();
		static ::hx::ObjectPtr< ControlsSubState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ControlsSubState_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ControlsSubState",27,51,d0,d8); }

};


#endif /* INCLUDED_ControlsSubState */ 
