// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display3D_Uniform
#include <openfl/display3D/Uniform.h>
#endif
#ifndef INCLUDED_openfl_display3D_UniformMap
#include <openfl/display3D/UniformMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_485718db96d0565f_1044_new,"openfl.display3D.UniformMap","new",0x9f6fba13,"openfl.display3D.UniformMap.new","openfl/display3D/Program3D.hx",1044,0x0a985b04)
HX_DEFINE_STACK_FRAME(_hx_pos_485718db96d0565f_1039_new,"openfl.display3D.UniformMap","new",0x9f6fba13,"openfl.display3D.UniformMap.new","openfl/display3D/Program3D.hx",1039,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_485718db96d0565f_1072_flush,"openfl.display3D.UniformMap","flush",0x8fcb5f37,"openfl.display3D.UniformMap.flush","openfl/display3D/Program3D.hx",1072,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_485718db96d0565f_1088_markAllDirty,"openfl.display3D.UniformMap","markAllDirty",0xabef284b,"openfl.display3D.UniformMap.markAllDirty","openfl/display3D/Program3D.hx",1088,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_485718db96d0565f_1094_markDirty,"openfl.display3D.UniformMap","markDirty",0xb895e2b8,"openfl.display3D.UniformMap.markDirty","openfl/display3D/Program3D.hx",1094,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_485718db96d0565f_1030_boot,"openfl.display3D.UniformMap","boot",0xda6c171f,"openfl.display3D.UniformMap.boot","openfl/display3D/Program3D.hx",1030,0x0a985b04)
namespace openfl{
namespace display3D{

void UniformMap_obj::__construct(::Array< ::Dynamic> list){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::openfl::display3D::Uniform a, ::openfl::display3D::Uniform b){
            			HX_STACKFRAME(&_hx_pos_485718db96d0565f_1044_new)
HXLINE(1044)			return ::Reflect_obj::compare(a->regIndex,b->regIndex);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_485718db96d0565f_1039_new)
HXLINE(1040)		this->_hx___uniforms = list;
HXLINE(1042)		this->_hx___uniforms->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE(1047)		int total = 0;
HXLINE(1049)		{
HXLINE(1049)			int _g = 0;
HXDLIN(1049)			::Array< ::Dynamic> _g1 = this->_hx___uniforms;
HXDLIN(1049)			while((_g < _g1->length)){
HXLINE(1049)				 ::openfl::display3D::Uniform uniform = _g1->__get(_g).StaticCast<  ::openfl::display3D::Uniform >();
HXDLIN(1049)				_g = (_g + 1);
HXLINE(1051)				if (((uniform->regIndex + uniform->regCount) > total)) {
HXLINE(1053)					total = (uniform->regIndex + uniform->regCount);
            				}
            			}
            		}
HXLINE(1057)		bool fixed = null();
HXDLIN(1057)		::Array< ::Dynamic> array = null();
HXDLIN(1057)		this->_hx___registerLookup =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,total,fixed,array,true);
HXLINE(1059)		{
HXLINE(1059)			int _g2 = 0;
HXDLIN(1059)			::Array< ::Dynamic> _g3 = this->_hx___uniforms;
HXDLIN(1059)			while((_g2 < _g3->length)){
HXLINE(1059)				 ::openfl::display3D::Uniform uniform = _g3->__get(_g2).StaticCast<  ::openfl::display3D::Uniform >();
HXDLIN(1059)				_g2 = (_g2 + 1);
HXLINE(1061)				{
HXLINE(1061)					int _g = 0;
HXDLIN(1061)					int _g1 = uniform->regCount;
HXDLIN(1061)					while((_g < _g1)){
HXLINE(1061)						_g = (_g + 1);
HXDLIN(1061)						int i = (_g - 1);
HXLINE(1063)						this->_hx___registerLookup->set((uniform->regIndex + i),uniform).StaticCast<  ::openfl::display3D::Uniform >();
            					}
            				}
            			}
            		}
HXLINE(1067)		this->_hx___anyDirty = (this->_hx___allDirty = true);
            	}

Dynamic UniformMap_obj::__CreateEmpty() { return new UniformMap_obj; }

void *UniformMap_obj::_hx_vtable = 0;

Dynamic UniformMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UniformMap_obj > _hx_result = new UniformMap_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool UniformMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6d1a258b;
}

void UniformMap_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_485718db96d0565f_1072_flush)
HXDLIN(1072)		if (this->_hx___anyDirty) {
HXLINE(1074)			{
HXLINE(1074)				int _g = 0;
HXDLIN(1074)				::Array< ::Dynamic> _g1 = this->_hx___uniforms;
HXDLIN(1074)				while((_g < _g1->length)){
HXLINE(1074)					 ::openfl::display3D::Uniform uniform = _g1->__get(_g).StaticCast<  ::openfl::display3D::Uniform >();
HXDLIN(1074)					_g = (_g + 1);
HXLINE(1076)					bool _hx_tmp;
HXDLIN(1076)					if (!(this->_hx___allDirty)) {
HXLINE(1076)						_hx_tmp = uniform->isDirty;
            					}
            					else {
HXLINE(1076)						_hx_tmp = true;
            					}
HXDLIN(1076)					if (_hx_tmp) {
HXLINE(1078)						uniform->flush();
HXLINE(1079)						uniform->isDirty = false;
            					}
            				}
            			}
HXLINE(1083)			this->_hx___anyDirty = (this->_hx___allDirty = false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(UniformMap_obj,flush,(void))

void UniformMap_obj::markAllDirty(){
            	HX_STACKFRAME(&_hx_pos_485718db96d0565f_1088_markAllDirty)
HXLINE(1089)		this->_hx___allDirty = true;
HXLINE(1090)		this->_hx___anyDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(UniformMap_obj,markAllDirty,(void))

void UniformMap_obj::markDirty(int start,int count){
            	HX_STACKFRAME(&_hx_pos_485718db96d0565f_1094_markDirty)
HXLINE(1095)		if (this->_hx___allDirty) {
HXLINE(1097)			return;
            		}
HXLINE(1100)		int end = (start + count);
HXLINE(1102)		if ((end > this->_hx___registerLookup->get_length())) {
HXLINE(1104)			end = this->_hx___registerLookup->get_length();
            		}
HXLINE(1107)		int index = start;
HXLINE(1109)		while((index < end)){
HXLINE(1111)			 ::openfl::display3D::Uniform uniform = this->_hx___registerLookup->get(index).StaticCast<  ::openfl::display3D::Uniform >();
HXLINE(1113)			if (::hx::IsNotNull( uniform )) {
HXLINE(1115)				uniform->isDirty = true;
HXLINE(1116)				this->_hx___anyDirty = true;
HXLINE(1118)				index = (uniform->regIndex + uniform->regCount);
            			}
            			else {
HXLINE(1122)				index = (index + 1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(UniformMap_obj,markDirty,(void))


::hx::ObjectPtr< UniformMap_obj > UniformMap_obj::__new(::Array< ::Dynamic> list) {
	::hx::ObjectPtr< UniformMap_obj > __this = new UniformMap_obj();
	__this->__construct(list);
	return __this;
}

::hx::ObjectPtr< UniformMap_obj > UniformMap_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> list) {
	UniformMap_obj *__this = (UniformMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UniformMap_obj), true, "openfl.display3D.UniformMap"));
	*(void **)__this = UniformMap_obj::_hx_vtable;
	__this->__construct(list);
	return __this;
}

UniformMap_obj::UniformMap_obj()
{
}

void UniformMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UniformMap);
	HX_MARK_MEMBER_NAME(_hx___allDirty,"__allDirty");
	HX_MARK_MEMBER_NAME(_hx___anyDirty,"__anyDirty");
	HX_MARK_MEMBER_NAME(_hx___registerLookup,"__registerLookup");
	HX_MARK_MEMBER_NAME(_hx___uniforms,"__uniforms");
	HX_MARK_END_CLASS();
}

void UniformMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___allDirty,"__allDirty");
	HX_VISIT_MEMBER_NAME(_hx___anyDirty,"__anyDirty");
	HX_VISIT_MEMBER_NAME(_hx___registerLookup,"__registerLookup");
	HX_VISIT_MEMBER_NAME(_hx___uniforms,"__uniforms");
}

::hx::Val UniformMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"markDirty") ) { return ::hx::Val( markDirty_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__allDirty") ) { return ::hx::Val( _hx___allDirty ); }
		if (HX_FIELD_EQ(inName,"__anyDirty") ) { return ::hx::Val( _hx___anyDirty ); }
		if (HX_FIELD_EQ(inName,"__uniforms") ) { return ::hx::Val( _hx___uniforms ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"markAllDirty") ) { return ::hx::Val( markAllDirty_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__registerLookup") ) { return ::hx::Val( _hx___registerLookup ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val UniformMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__allDirty") ) { _hx___allDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__anyDirty") ) { _hx___anyDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uniforms") ) { _hx___uniforms=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__registerLookup") ) { _hx___registerLookup=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UniformMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__allDirty",51,82,ec,75));
	outFields->push(HX_("__anyDirty",a6,20,bb,fb));
	outFields->push(HX_("__registerLookup",5d,b4,36,5c));
	outFields->push(HX_("__uniforms",df,3f,8d,a5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo UniformMap_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(UniformMap_obj,_hx___allDirty),HX_("__allDirty",51,82,ec,75)},
	{::hx::fsBool,(int)offsetof(UniformMap_obj,_hx___anyDirty),HX_("__anyDirty",a6,20,bb,fb)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(UniformMap_obj,_hx___registerLookup),HX_("__registerLookup",5d,b4,36,5c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(UniformMap_obj,_hx___uniforms),HX_("__uniforms",df,3f,8d,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *UniformMap_obj_sStaticStorageInfo = 0;
#endif

static ::String UniformMap_obj_sMemberFields[] = {
	HX_("__allDirty",51,82,ec,75),
	HX_("__anyDirty",a6,20,bb,fb),
	HX_("__registerLookup",5d,b4,36,5c),
	HX_("__uniforms",df,3f,8d,a5),
	HX_("flush",c4,62,9b,02),
	HX_("markAllDirty",5e,60,3e,4b),
	HX_("markDirty",c5,30,a3,36),
	::String(null()) };

::hx::Class UniformMap_obj::__mClass;

void UniformMap_obj::__register()
{
	UniformMap_obj _hx_dummy;
	UniformMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D.UniformMap",a1,b4,c6,51);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(UniformMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< UniformMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UniformMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UniformMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void UniformMap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_485718db96d0565f_1030_boot)
HXDLIN(1030)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display3D
