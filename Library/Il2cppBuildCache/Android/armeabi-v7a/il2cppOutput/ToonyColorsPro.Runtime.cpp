#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<System.String[]>
struct List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.String[][]
struct StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.FlareLayer
struct FlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// UnityEngine.Skybox
struct Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0;
// System.String
struct String_t;
// ToonyColorsPro.Runtime.TCP2_CameraDepth
struct TCP2_CameraDepth_t638D8F9F65F58B21A922E9F59C39B016F3B6E250;
// ToonyColorsPro.Runtime.TCP2_GetPosOnWater
struct TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E;
// ToonyColorsPro.Runtime.TCP2_PlanarReflection
struct TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019;
// ToonyColorsPro.Runtime.TCP2_ShaderUpdateUnityTime
struct TCP2_ShaderUpdateUnityTime_t132EEEA1FC7623D16FCBAA81B293D2998A154FBC;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;

IL2CPP_EXTERN_C RuntimeClass* Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TCP2_RuntimeUtils_t98E53D9A6E701236E6F2AD6B5895BA9BAFA1A818_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204____1A70BAE12848E0CCADB10009D4920BED5C1135E1D288A0F3D390035604846F38_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204____89C1CF9324638CEDC10B05C2D337701B9E9B858A3906AC94C72AE20569DF6F7C_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204____9C6B6E6E7AADE3A98BBB9505E2AA1D9BF3ABEEB62207237B946440D2451BFA11_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204____EC951036C7DAFDDEEECD4BFD154D1FD3C37C066CB53EF1D86675B1C8168003BD_3_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral055E2BC6FC0C0670695F60037D4D969590DD5A5E;
IL2CPP_EXTERN_C String_t* _stringLiteral05E47A2F07E9D9A37CF82B8B7292B8D0073324FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0C11FFBAB8AA738FEDA8B2E47FCA289F53F977C8;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral25A48893C95318D7E0A508DDFBB672FF3E43922D;
IL2CPP_EXTERN_C String_t* _stringLiteral32BC544C06225EE440679BE6646FFFE40FC36433;
IL2CPP_EXTERN_C String_t* _stringLiteral4017354CE7C7E8601B2045AD090F32A21FE80F01;
IL2CPP_EXTERN_C String_t* _stringLiteral47D462D5B38F0A5177ED612304E062E150044C2F;
IL2CPP_EXTERN_C String_t* _stringLiteral48167882D06D213282D0B0265043EDB047203572;
IL2CPP_EXTERN_C String_t* _stringLiteral579B607FD0BB19369CAE06D0FC1F56ED2D7F85D8;
IL2CPP_EXTERN_C String_t* _stringLiteral6E75A7F6B1D53D770E799FA180B1E92C3BEC8B6B;
IL2CPP_EXTERN_C String_t* _stringLiteral6EE10BE9A84B8EE696062A84A890739F72DD0CAE;
IL2CPP_EXTERN_C String_t* _stringLiteral716F6BFC32ABF52915936AA6B0445724BBA4451D;
IL2CPP_EXTERN_C String_t* _stringLiteral71E2151BF75F822D32529B598E65CB2CF534C8BD;
IL2CPP_EXTERN_C String_t* _stringLiteral851F9501FFDEDBC611D5201E456668A28E0C7F4B;
IL2CPP_EXTERN_C String_t* _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8;
IL2CPP_EXTERN_C String_t* _stringLiteral88BC903474F3EEC4A94B28FB209B0CB7F7426FCF;
IL2CPP_EXTERN_C String_t* _stringLiteral90D06E84F06130A1E294B7100441A92113C7EB43;
IL2CPP_EXTERN_C String_t* _stringLiteral9C9DA00C6A4C83135AB9BFE5F7C7405FF12BFDCE;
IL2CPP_EXTERN_C String_t* _stringLiteralA9EE614F0746F6CFA739F4BFC0AD67ACBE293F75;
IL2CPP_EXTERN_C String_t* _stringLiteralBCA6F238331EF68017D1ADF8BEADDA03900A1940;
IL2CPP_EXTERN_C String_t* _stringLiteralC37459BA213E8B09FB24FA0927B73EA78BDF7C7D;
IL2CPP_EXTERN_C String_t* _stringLiteralCB414C73F9E54AF3AD8F7CFB654C37B3A3B13925;
IL2CPP_EXTERN_C String_t* _stringLiteralCF08D47AA950197FBF22492248D649A8126E68AB;
IL2CPP_EXTERN_C String_t* _stringLiteralD34832E26D345212F1E60233E1603D507C2DB8B1;
IL2CPP_EXTERN_C String_t* _stringLiteralD9E119F3EF845484CED205A9FD0CBD04AAE8D9B2;
IL2CPP_EXTERN_C String_t* _stringLiteralDB784C0FDB5E2F468943EF04EB13EE0E6135421C;
IL2CPP_EXTERN_C String_t* _stringLiteralE0A9DCBA20570641426F54838A643EAB380B2A68;
IL2CPP_EXTERN_C String_t* _stringLiteralE79AE536975E96591357EA5533F095F6E75B5545;
IL2CPP_EXTERN_C String_t* _stringLiteralF422850993212057809CBD984B2F3DAEC17A02ED;
IL2CPP_EXTERN_C String_t* _stringLiteralFA855702F3E0239B3B0D1F427461543C440733A6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m35D683F1FD7FDF886D380D2B4B29C05FB4CBD3AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEEB79F249721ABE5DA6E2434A4CC4248838DE9BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF8F0B568877EAC3A3342752FCF885DCA39305874_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3BB840CC2CB4A01F42865D5BC2B1571BB6B73C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6_mA8CC4ED679D5915529405AB96956CFF0CBDB5E3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m082FA1DF3F55DB16A1CC64016C47D3A5BA8AEBCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m820FB589FB840B4AC5662EFFC75D30E7DAA422BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_0_0_0_var;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t055C0B605ACA42670C944D85DC74D9BC2956491A 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Char>
struct EmptyArray_1_t8C9D46673F64ABE360DE6F02C2BA0A5566DC9FDC  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t8C9D46673F64ABE360DE6F02C2BA0A5566DC9FDC_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t8C9D46673F64ABE360DE6F02C2BA0A5566DC9FDC_StaticFields, ___Value_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_Value_0() const { return ___Value_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String[]>
struct List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09, ____items_1)); }
	inline StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* get__items_1() const { return ____items_1; }
	inline StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// ToonyColorsPro.Runtime.TCP2_RuntimeUtils
struct TCP2_RuntimeUtils_t98E53D9A6E701236E6F2AD6B5895BA9BAFA1A818  : public RuntimeObject
{
public:

public:
};

struct TCP2_RuntimeUtils_t98E53D9A6E701236E6F2AD6B5895BA9BAFA1A818_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.String[]> ToonyColorsPro.Runtime.TCP2_RuntimeUtils::ShaderVariants
	List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * ___ShaderVariants_4;

public:
	inline static int32_t get_offset_of_ShaderVariants_4() { return static_cast<int32_t>(offsetof(TCP2_RuntimeUtils_t98E53D9A6E701236E6F2AD6B5895BA9BAFA1A818_StaticFields, ___ShaderVariants_4)); }
	inline List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * get_ShaderVariants_4() const { return ___ShaderVariants_4; }
	inline List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 ** get_address_of_ShaderVariants_4() { return &___ShaderVariants_4; }
	inline void set_ShaderVariants_4(List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * value)
	{
		___ShaderVariants_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShaderVariants_4), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<System.String[]>
struct Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0, ___list_0)); }
	inline List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * get_list_0() const { return ___list_0; }
	inline List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0, ___current_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_current_3() const { return ___current_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096__padding[32];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::1A70BAE12848E0CCADB10009D4920BED5C1135E1D288A0F3D390035604846F38
	__StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096  ___1A70BAE12848E0CCADB10009D4920BED5C1135E1D288A0F3D390035604846F38_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::89C1CF9324638CEDC10B05C2D337701B9E9B858A3906AC94C72AE20569DF6F7C
	__StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096  ___89C1CF9324638CEDC10B05C2D337701B9E9B858A3906AC94C72AE20569DF6F7C_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::9C6B6E6E7AADE3A98BBB9505E2AA1D9BF3ABEEB62207237B946440D2451BFA11
	__StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096  ___9C6B6E6E7AADE3A98BBB9505E2AA1D9BF3ABEEB62207237B946440D2451BFA11_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::EC951036C7DAFDDEEECD4BFD154D1FD3C37C066CB53EF1D86675B1C8168003BD
	__StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096  ___EC951036C7DAFDDEEECD4BFD154D1FD3C37C066CB53EF1D86675B1C8168003BD_3;

public:
	inline static int32_t get_offset_of_U31A70BAE12848E0CCADB10009D4920BED5C1135E1D288A0F3D390035604846F38_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204_StaticFields, ___1A70BAE12848E0CCADB10009D4920BED5C1135E1D288A0F3D390035604846F38_0)); }
	inline __StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096  get_U31A70BAE12848E0CCADB10009D4920BED5C1135E1D288A0F3D390035604846F38_0() const { return ___1A70BAE12848E0CCADB10009D4920BED5C1135E1D288A0F3D390035604846F38_0; }
	inline __StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096 * get_address_of_U31A70BAE12848E0CCADB10009D4920BED5C1135E1D288A0F3D390035604846F38_0() { return &___1A70BAE12848E0CCADB10009D4920BED5C1135E1D288A0F3D390035604846F38_0; }
	inline void set_U31A70BAE12848E0CCADB10009D4920BED5C1135E1D288A0F3D390035604846F38_0(__StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096  value)
	{
		___1A70BAE12848E0CCADB10009D4920BED5C1135E1D288A0F3D390035604846F38_0 = value;
	}

	inline static int32_t get_offset_of_U389C1CF9324638CEDC10B05C2D337701B9E9B858A3906AC94C72AE20569DF6F7C_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204_StaticFields, ___89C1CF9324638CEDC10B05C2D337701B9E9B858A3906AC94C72AE20569DF6F7C_1)); }
	inline __StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096  get_U389C1CF9324638CEDC10B05C2D337701B9E9B858A3906AC94C72AE20569DF6F7C_1() const { return ___89C1CF9324638CEDC10B05C2D337701B9E9B858A3906AC94C72AE20569DF6F7C_1; }
	inline __StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096 * get_address_of_U389C1CF9324638CEDC10B05C2D337701B9E9B858A3906AC94C72AE20569DF6F7C_1() { return &___89C1CF9324638CEDC10B05C2D337701B9E9B858A3906AC94C72AE20569DF6F7C_1; }
	inline void set_U389C1CF9324638CEDC10B05C2D337701B9E9B858A3906AC94C72AE20569DF6F7C_1(__StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096  value)
	{
		___89C1CF9324638CEDC10B05C2D337701B9E9B858A3906AC94C72AE20569DF6F7C_1 = value;
	}

	inline static int32_t get_offset_of_U39C6B6E6E7AADE3A98BBB9505E2AA1D9BF3ABEEB62207237B946440D2451BFA11_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204_StaticFields, ___9C6B6E6E7AADE3A98BBB9505E2AA1D9BF3ABEEB62207237B946440D2451BFA11_2)); }
	inline __StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096  get_U39C6B6E6E7AADE3A98BBB9505E2AA1D9BF3ABEEB62207237B946440D2451BFA11_2() const { return ___9C6B6E6E7AADE3A98BBB9505E2AA1D9BF3ABEEB62207237B946440D2451BFA11_2; }
	inline __StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096 * get_address_of_U39C6B6E6E7AADE3A98BBB9505E2AA1D9BF3ABEEB62207237B946440D2451BFA11_2() { return &___9C6B6E6E7AADE3A98BBB9505E2AA1D9BF3ABEEB62207237B946440D2451BFA11_2; }
	inline void set_U39C6B6E6E7AADE3A98BBB9505E2AA1D9BF3ABEEB62207237B946440D2451BFA11_2(__StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096  value)
	{
		___9C6B6E6E7AADE3A98BBB9505E2AA1D9BF3ABEEB62207237B946440D2451BFA11_2 = value;
	}

	inline static int32_t get_offset_of_EC951036C7DAFDDEEECD4BFD154D1FD3C37C066CB53EF1D86675B1C8168003BD_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204_StaticFields, ___EC951036C7DAFDDEEECD4BFD154D1FD3C37C066CB53EF1D86675B1C8168003BD_3)); }
	inline __StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096  get_EC951036C7DAFDDEEECD4BFD154D1FD3C37C066CB53EF1D86675B1C8168003BD_3() const { return ___EC951036C7DAFDDEEECD4BFD154D1FD3C37C066CB53EF1D86675B1C8168003BD_3; }
	inline __StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096 * get_address_of_EC951036C7DAFDDEEECD4BFD154D1FD3C37C066CB53EF1D86675B1C8168003BD_3() { return &___EC951036C7DAFDDEEECD4BFD154D1FD3C37C066CB53EF1D86675B1C8168003BD_3; }
	inline void set_EC951036C7DAFDDEEECD4BFD154D1FD3C37C066CB53EF1D86675B1C8168003BD_3(__StaticArrayInitTypeSizeU3D32_tB2BFC2BD17DCE8106DE7DAE5EC51C5E5110BE096  value)
	{
		___EC951036C7DAFDDEEECD4BFD154D1FD3C37C066CB53EF1D86675B1C8168003BD_3 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.CameraClearFlags
struct CameraClearFlags_t5CCA5C0FD787D780C128B8B0D6ACC80BB41B1DE7 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_t5CCA5C0FD787D780C128B8B0D6ACC80BB41B1DE7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.DepthTextureMode
struct DepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* ___buckets_10;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_11;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_12;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_13;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_20;

public:
	inline static int32_t get_offset_of_buckets_10() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___buckets_10)); }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* get_buckets_10() const { return ___buckets_10; }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190** get_address_of_buckets_10() { return &___buckets_10; }
	inline void set_buckets_10(bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* value)
	{
		___buckets_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_10), (void*)value);
	}

	inline static int32_t get_offset_of_count_11() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___count_11)); }
	inline int32_t get_count_11() const { return ___count_11; }
	inline int32_t* get_address_of_count_11() { return &___count_11; }
	inline void set_count_11(int32_t value)
	{
		___count_11 = value;
	}

	inline static int32_t get_offset_of_occupancy_12() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___occupancy_12)); }
	inline int32_t get_occupancy_12() const { return ___occupancy_12; }
	inline int32_t* get_address_of_occupancy_12() { return &___occupancy_12; }
	inline void set_occupancy_12(int32_t value)
	{
		___occupancy_12 = value;
	}

	inline static int32_t get_offset_of_loadsize_13() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadsize_13)); }
	inline int32_t get_loadsize_13() const { return ___loadsize_13; }
	inline int32_t* get_address_of_loadsize_13() { return &___loadsize_13; }
	inline void set_loadsize_13(int32_t value)
	{
		___loadsize_13 = value;
	}

	inline static int32_t get_offset_of_loadFactor_14() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadFactor_14)); }
	inline float get_loadFactor_14() const { return ___loadFactor_14; }
	inline float* get_address_of_loadFactor_14() { return &___loadFactor_14; }
	inline void set_loadFactor_14(float value)
	{
		___loadFactor_14 = value;
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___version_15)); }
	inline int32_t get_version_15() const { return ___version_15; }
	inline int32_t* get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(int32_t value)
	{
		___version_15 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_16() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___isWriterInProgress_16)); }
	inline bool get_isWriterInProgress_16() const { return ___isWriterInProgress_16; }
	inline bool* get_address_of_isWriterInProgress_16() { return &___isWriterInProgress_16; }
	inline void set_isWriterInProgress_16(bool value)
	{
		___isWriterInProgress_16 = value;
	}

	inline static int32_t get_offset_of_keys_17() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___keys_17)); }
	inline RuntimeObject* get_keys_17() const { return ___keys_17; }
	inline RuntimeObject** get_address_of_keys_17() { return &___keys_17; }
	inline void set_keys_17(RuntimeObject* value)
	{
		___keys_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_17), (void*)value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___values_18)); }
	inline RuntimeObject* get_values_18() const { return ___values_18; }
	inline RuntimeObject** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(RuntimeObject* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_18), (void*)value);
	}

	inline static int32_t get_offset_of__keycomparer_19() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____keycomparer_19)); }
	inline RuntimeObject* get__keycomparer_19() const { return ____keycomparer_19; }
	inline RuntimeObject** get_address_of__keycomparer_19() { return &____keycomparer_19; }
	inline void set__keycomparer_19(RuntimeObject* value)
	{
		____keycomparer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keycomparer_19), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_20() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____syncRoot_20)); }
	inline RuntimeObject * get__syncRoot_20() const { return ____syncRoot_20; }
	inline RuntimeObject ** get_address_of__syncRoot_20() { return &____syncRoot_20; }
	inline void set__syncRoot_20(RuntimeObject * value)
	{
		____syncRoot_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_20), (void*)value);
	}
};


// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Space
struct Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.FlareLayer
struct FlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Skybox
struct Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// ToonyColorsPro.Runtime.TCP2_CameraDepth
struct TCP2_CameraDepth_t638D8F9F65F58B21A922E9F59C39B016F3B6E250  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean ToonyColorsPro.Runtime.TCP2_CameraDepth::RenderDepth
	bool ___RenderDepth_4;

public:
	inline static int32_t get_offset_of_RenderDepth_4() { return static_cast<int32_t>(offsetof(TCP2_CameraDepth_t638D8F9F65F58B21A922E9F59C39B016F3B6E250, ___RenderDepth_4)); }
	inline bool get_RenderDepth_4() const { return ___RenderDepth_4; }
	inline bool* get_address_of_RenderDepth_4() { return &___RenderDepth_4; }
	inline void set_RenderDepth_4(bool value)
	{
		___RenderDepth_4 = value;
	}
};


// ToonyColorsPro.Runtime.TCP2_GetPosOnWater
struct TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material ToonyColorsPro.Runtime.TCP2_GetPosOnWater::WaterMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___WaterMaterial_4;
	// System.Single ToonyColorsPro.Runtime.TCP2_GetPosOnWater::heightScale
	float ___heightScale_5;
	// System.Boolean ToonyColorsPro.Runtime.TCP2_GetPosOnWater::followWaterHeight
	bool ___followWaterHeight_6;
	// System.Single ToonyColorsPro.Runtime.TCP2_GetPosOnWater::heightOffset
	float ___heightOffset_7;
	// System.Boolean ToonyColorsPro.Runtime.TCP2_GetPosOnWater::followWaterNormal
	bool ___followWaterNormal_8;
	// UnityEngine.Vector3 ToonyColorsPro.Runtime.TCP2_GetPosOnWater::upAxis
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upAxis_9;
	// UnityEngine.Vector3 ToonyColorsPro.Runtime.TCP2_GetPosOnWater::postRotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___postRotation_10;
	// System.Boolean ToonyColorsPro.Runtime.TCP2_GetPosOnWater::isValid
	bool ___isValid_11;
	// System.Int32 ToonyColorsPro.Runtime.TCP2_GetPosOnWater::sineCount
	int32_t ___sineCount_12;
	// System.Single[] ToonyColorsPro.Runtime.TCP2_GetPosOnWater::sinePosOffsetsX
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___sinePosOffsetsX_13;
	// System.Single[] ToonyColorsPro.Runtime.TCP2_GetPosOnWater::sinePosOffsetsZ
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___sinePosOffsetsZ_14;
	// System.Single[] ToonyColorsPro.Runtime.TCP2_GetPosOnWater::sinePhsOffsetsX
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___sinePhsOffsetsX_15;
	// System.Single[] ToonyColorsPro.Runtime.TCP2_GetPosOnWater::sinePhsOffsetsZ
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___sinePhsOffsetsZ_16;

public:
	inline static int32_t get_offset_of_WaterMaterial_4() { return static_cast<int32_t>(offsetof(TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E, ___WaterMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_WaterMaterial_4() const { return ___WaterMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_WaterMaterial_4() { return &___WaterMaterial_4; }
	inline void set_WaterMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___WaterMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WaterMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_heightScale_5() { return static_cast<int32_t>(offsetof(TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E, ___heightScale_5)); }
	inline float get_heightScale_5() const { return ___heightScale_5; }
	inline float* get_address_of_heightScale_5() { return &___heightScale_5; }
	inline void set_heightScale_5(float value)
	{
		___heightScale_5 = value;
	}

	inline static int32_t get_offset_of_followWaterHeight_6() { return static_cast<int32_t>(offsetof(TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E, ___followWaterHeight_6)); }
	inline bool get_followWaterHeight_6() const { return ___followWaterHeight_6; }
	inline bool* get_address_of_followWaterHeight_6() { return &___followWaterHeight_6; }
	inline void set_followWaterHeight_6(bool value)
	{
		___followWaterHeight_6 = value;
	}

	inline static int32_t get_offset_of_heightOffset_7() { return static_cast<int32_t>(offsetof(TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E, ___heightOffset_7)); }
	inline float get_heightOffset_7() const { return ___heightOffset_7; }
	inline float* get_address_of_heightOffset_7() { return &___heightOffset_7; }
	inline void set_heightOffset_7(float value)
	{
		___heightOffset_7 = value;
	}

	inline static int32_t get_offset_of_followWaterNormal_8() { return static_cast<int32_t>(offsetof(TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E, ___followWaterNormal_8)); }
	inline bool get_followWaterNormal_8() const { return ___followWaterNormal_8; }
	inline bool* get_address_of_followWaterNormal_8() { return &___followWaterNormal_8; }
	inline void set_followWaterNormal_8(bool value)
	{
		___followWaterNormal_8 = value;
	}

	inline static int32_t get_offset_of_upAxis_9() { return static_cast<int32_t>(offsetof(TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E, ___upAxis_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upAxis_9() const { return ___upAxis_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upAxis_9() { return &___upAxis_9; }
	inline void set_upAxis_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upAxis_9 = value;
	}

	inline static int32_t get_offset_of_postRotation_10() { return static_cast<int32_t>(offsetof(TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E, ___postRotation_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_postRotation_10() const { return ___postRotation_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_postRotation_10() { return &___postRotation_10; }
	inline void set_postRotation_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___postRotation_10 = value;
	}

	inline static int32_t get_offset_of_isValid_11() { return static_cast<int32_t>(offsetof(TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E, ___isValid_11)); }
	inline bool get_isValid_11() const { return ___isValid_11; }
	inline bool* get_address_of_isValid_11() { return &___isValid_11; }
	inline void set_isValid_11(bool value)
	{
		___isValid_11 = value;
	}

	inline static int32_t get_offset_of_sineCount_12() { return static_cast<int32_t>(offsetof(TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E, ___sineCount_12)); }
	inline int32_t get_sineCount_12() const { return ___sineCount_12; }
	inline int32_t* get_address_of_sineCount_12() { return &___sineCount_12; }
	inline void set_sineCount_12(int32_t value)
	{
		___sineCount_12 = value;
	}

	inline static int32_t get_offset_of_sinePosOffsetsX_13() { return static_cast<int32_t>(offsetof(TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E, ___sinePosOffsetsX_13)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_sinePosOffsetsX_13() const { return ___sinePosOffsetsX_13; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_sinePosOffsetsX_13() { return &___sinePosOffsetsX_13; }
	inline void set_sinePosOffsetsX_13(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___sinePosOffsetsX_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sinePosOffsetsX_13), (void*)value);
	}

	inline static int32_t get_offset_of_sinePosOffsetsZ_14() { return static_cast<int32_t>(offsetof(TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E, ___sinePosOffsetsZ_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_sinePosOffsetsZ_14() const { return ___sinePosOffsetsZ_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_sinePosOffsetsZ_14() { return &___sinePosOffsetsZ_14; }
	inline void set_sinePosOffsetsZ_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___sinePosOffsetsZ_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sinePosOffsetsZ_14), (void*)value);
	}

	inline static int32_t get_offset_of_sinePhsOffsetsX_15() { return static_cast<int32_t>(offsetof(TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E, ___sinePhsOffsetsX_15)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_sinePhsOffsetsX_15() const { return ___sinePhsOffsetsX_15; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_sinePhsOffsetsX_15() { return &___sinePhsOffsetsX_15; }
	inline void set_sinePhsOffsetsX_15(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___sinePhsOffsetsX_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sinePhsOffsetsX_15), (void*)value);
	}

	inline static int32_t get_offset_of_sinePhsOffsetsZ_16() { return static_cast<int32_t>(offsetof(TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E, ___sinePhsOffsetsZ_16)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_sinePhsOffsetsZ_16() const { return ___sinePhsOffsetsZ_16; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_sinePhsOffsetsZ_16() { return &___sinePhsOffsetsZ_16; }
	inline void set_sinePhsOffsetsZ_16(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___sinePhsOffsetsZ_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sinePhsOffsetsZ_16), (void*)value);
	}
};


// ToonyColorsPro.Runtime.TCP2_PlanarReflection
struct TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean ToonyColorsPro.Runtime.TCP2_PlanarReflection::m_DisablePixelLights
	bool ___m_DisablePixelLights_4;
	// System.Int32 ToonyColorsPro.Runtime.TCP2_PlanarReflection::m_TextureSize
	int32_t ___m_TextureSize_5;
	// System.Single ToonyColorsPro.Runtime.TCP2_PlanarReflection::m_ClipPlaneOffset
	float ___m_ClipPlaneOffset_6;
	// UnityEngine.LayerMask ToonyColorsPro.Runtime.TCP2_PlanarReflection::m_ReflectLayers
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_ReflectLayers_7;
	// System.Collections.Hashtable ToonyColorsPro.Runtime.TCP2_PlanarReflection::m_ReflectionCameras
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___m_ReflectionCameras_8;
	// UnityEngine.RenderTexture ToonyColorsPro.Runtime.TCP2_PlanarReflection::m_ReflectionTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ReflectionTexture_9;
	// System.Int32 ToonyColorsPro.Runtime.TCP2_PlanarReflection::m_OldReflectionTextureSize
	int32_t ___m_OldReflectionTextureSize_10;

public:
	inline static int32_t get_offset_of_m_DisablePixelLights_4() { return static_cast<int32_t>(offsetof(TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019, ___m_DisablePixelLights_4)); }
	inline bool get_m_DisablePixelLights_4() const { return ___m_DisablePixelLights_4; }
	inline bool* get_address_of_m_DisablePixelLights_4() { return &___m_DisablePixelLights_4; }
	inline void set_m_DisablePixelLights_4(bool value)
	{
		___m_DisablePixelLights_4 = value;
	}

	inline static int32_t get_offset_of_m_TextureSize_5() { return static_cast<int32_t>(offsetof(TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019, ___m_TextureSize_5)); }
	inline int32_t get_m_TextureSize_5() const { return ___m_TextureSize_5; }
	inline int32_t* get_address_of_m_TextureSize_5() { return &___m_TextureSize_5; }
	inline void set_m_TextureSize_5(int32_t value)
	{
		___m_TextureSize_5 = value;
	}

	inline static int32_t get_offset_of_m_ClipPlaneOffset_6() { return static_cast<int32_t>(offsetof(TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019, ___m_ClipPlaneOffset_6)); }
	inline float get_m_ClipPlaneOffset_6() const { return ___m_ClipPlaneOffset_6; }
	inline float* get_address_of_m_ClipPlaneOffset_6() { return &___m_ClipPlaneOffset_6; }
	inline void set_m_ClipPlaneOffset_6(float value)
	{
		___m_ClipPlaneOffset_6 = value;
	}

	inline static int32_t get_offset_of_m_ReflectLayers_7() { return static_cast<int32_t>(offsetof(TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019, ___m_ReflectLayers_7)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_ReflectLayers_7() const { return ___m_ReflectLayers_7; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_ReflectLayers_7() { return &___m_ReflectLayers_7; }
	inline void set_m_ReflectLayers_7(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_ReflectLayers_7 = value;
	}

	inline static int32_t get_offset_of_m_ReflectionCameras_8() { return static_cast<int32_t>(offsetof(TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019, ___m_ReflectionCameras_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_m_ReflectionCameras_8() const { return ___m_ReflectionCameras_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_m_ReflectionCameras_8() { return &___m_ReflectionCameras_8; }
	inline void set_m_ReflectionCameras_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___m_ReflectionCameras_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReflectionCameras_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReflectionTexture_9() { return static_cast<int32_t>(offsetof(TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019, ___m_ReflectionTexture_9)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_m_ReflectionTexture_9() const { return ___m_ReflectionTexture_9; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_m_ReflectionTexture_9() { return &___m_ReflectionTexture_9; }
	inline void set_m_ReflectionTexture_9(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___m_ReflectionTexture_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReflectionTexture_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_OldReflectionTextureSize_10() { return static_cast<int32_t>(offsetof(TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019, ___m_OldReflectionTextureSize_10)); }
	inline int32_t get_m_OldReflectionTextureSize_10() const { return ___m_OldReflectionTextureSize_10; }
	inline int32_t* get_address_of_m_OldReflectionTextureSize_10() { return &___m_OldReflectionTextureSize_10; }
	inline void set_m_OldReflectionTextureSize_10(int32_t value)
	{
		___m_OldReflectionTextureSize_10 = value;
	}
};

struct TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019_StaticFields
{
public:
	// System.Boolean ToonyColorsPro.Runtime.TCP2_PlanarReflection::s_InsideRendering
	bool ___s_InsideRendering_11;

public:
	inline static int32_t get_offset_of_s_InsideRendering_11() { return static_cast<int32_t>(offsetof(TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019_StaticFields, ___s_InsideRendering_11)); }
	inline bool get_s_InsideRendering_11() const { return ___s_InsideRendering_11; }
	inline bool* get_address_of_s_InsideRendering_11() { return &___s_InsideRendering_11; }
	inline void set_s_InsideRendering_11(bool value)
	{
		___s_InsideRendering_11 = value;
	}
};


// ToonyColorsPro.Runtime.TCP2_ShaderUpdateUnityTime
struct TCP2_ShaderUpdateUnityTime_t132EEEA1FC7623D16FCBAA81B293D2998A154FBC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t8927C00353A72755313F046D0CE85178AE8218EE * m_Items[1];

public:
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Char>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m35D683F1FD7FDF886D380D2B4B29C05FB4CBD3AB_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void ToonyColorsPro.Runtime.TCP2_CameraDepth::SetCameraDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_CameraDepth_SetCameraDepth_mA09551CF7C5684461C7FCA554737FB68BCBB6115 (TCP2_CameraDepth_t638D8F9F65F58B21A922E9F59C39B016F3B6E250 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_depthTextureMode_mA4B03C6B552FB03DF8A8C20DC9F4EB8FD978A7DD (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 ToonyColorsPro.Runtime.TCP2_GetPosOnWater::GetPositionOnWater(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TCP2_GetPosOnWater_GetPositionOnWater_m3288C4B692351AB597CED018CA0FFB9C4DAE3A8F (TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 ToonyColorsPro.Runtime.TCP2_GetPosOnWater::GetNormalOnWater(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TCP2_GetPosOnWater_GetNormalOnWater_m776686CC32BA1F7875B815DCD3CE558DAF2B1838 (TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_m148C402FBE59E64FEEC9029185706B2A0DD39A03 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m52C9390086344FA8787001ED5911550D850CE515 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_mD84FDFCD32FC48C865A89FD4251232E2A9D7015A (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_current_m897579BE2488D7BEC232C3BD1C520FE9F1B3A717 (const RuntimeMethod* method);
// System.Void ToonyColorsPro.Runtime.TCP2_PlanarReflection::CreateMirrorObjects(UnityEngine.Camera,UnityEngine.Camera&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_PlanarReflection_CreateMirrorObjects_mF2DA23EB1D9DD1DBACE29ACC6E74A8B4F62407DC (TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___currentCamera0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** ___reflectionCamera1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.QualitySettings::get_pixelLightCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_pixelLightCount_m8281503A286BD25BED326F1134613C9FB7AEEEF5 (const RuntimeMethod* method);
// System.Void UnityEngine.QualitySettings::set_pixelLightCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_set_pixelLightCount_m10003935FA659AC6E1DC88BFC72764A23B5246ED (int32_t ___value0, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Runtime.TCP2_PlanarReflection::UpdateCameraModes(UnityEngine.Camera,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_PlanarReflection_UpdateCameraModes_m967200D52460CE408A6C225FB844FD77959C3F06 (TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___src0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___dest1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m81A33FB5E8269E1A21554ECCB1639019C708A1CF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_zero_m3AE487076023B04A02A0703A2628721BF5FDD74D (const RuntimeMethod* method);
// System.Void ToonyColorsPro.Runtime.TCP2_PlanarReflection::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_PlanarReflection_CalculateReflectionMatrix_m841CAD598E37C1B79160E5BE12C2831406B6767B (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___reflectionMat0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___plane1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Camera_get_worldToCameraMatrix_m7E2B63F64437E2C91C07F7FC819C79BE2152C5F6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_op_Multiply_mB760A95995CDC5E31F18D76CE8806DF2C160DD4B (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_worldToCameraMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_worldToCameraMatrix_mD9E982CC4F356AC310C5B3145FC59FD73C420BE3 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector4 ToonyColorsPro.Runtime.TCP2_PlanarReflection::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  TCP2_PlanarReflection_CameraSpacePlane_mEFBFEE4FDA14DAD8721172A00E2A7A42AC426871 (TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal2, float ___sideSign3, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::CalculateObliqueMatrix(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Camera_CalculateObliqueMatrix_m8DCA87B4563A3515995B189E4EBEAE548563B94C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___clipPlane0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m6380C7449537F99361797225E179A9448A53DDF9 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::set_invertCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_set_invertCulling_m5A8DF08C3495C0B5E3DFAC0A3B3ED98D05AD09B5 (bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m2D9749799AAC91A3725044A6CF5594E1F5D68D61 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* Renderer_get_sharedMaterials_m9B2D432CA8AD8CEC4348E61789CC1BB0C3A00AFD (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mB6F155CD45C688DA232B56BD1A74474C224BE37E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Object System.Collections.DictionaryEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_clearFlags_m7D0E7A0DBAB6A84B680EC09835AA2F081A17E0D7 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_mE79A756CD7C9C84C86B6676F5C6342A45AE5F373 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Camera::get_backgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Camera_get_backgroundColor_m556B0BCFA01DC59AA6A3A4B27C9408C72C144FB5 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * Component_GetComponent_m4DE64B46F790BD785FDDDAD364E0364CDDE05BDB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, Type_t * ___type0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Skybox::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Skybox_get_material_m9AAE5143C39D1E5E13CD41BE53E950B56E5AAD85 (Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Skybox::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skybox_set_material_m74316F6709A669D3181C4CB1EA1F40E745D0F88A (Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m0FA1B9E2E815BECE2EA40023302EB942B52D9596 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m4EA1D92F6E1D17E423EC036561E115F434DC2263 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m3DE9A7705E2B4926BBFD2D6798D97B931B5B5550 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographic_m38A872FC2D448915EE94C4FB72FB02D4C3F56C52 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_mD0A1FC8F998473DA08866FF9CD61C02E6D5F4987 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_aspect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_aspect_mF0D72E1250A4408B6A7C32700EE3D80C75C3879C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_isPowerOfTwo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m9829583AE3BF1285861C580895202F760F3A82E8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___components1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.FlareLayer>()
inline FlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6 * GameObject_AddComponent_TisFlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6_mA8CC4ED679D5915529405AB96956CFF0CBDB5E3E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LayerMask_op_Implicit_m04FD003A196C7FA5C824D854803493EA31AE58D2 (int32_t ___intVal0, const RuntimeMethod* method);
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91 (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * __this, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String[]>::GetEnumerator()
inline Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0  List_1_GetEnumerator_m082FA1DF3F55DB16A1CC64016C47D3A5BA8AEBCE (List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0  (*) (List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String[]>::get_Current()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enumerator_get_Current_m3BB840CC2CB4A01F42865D5BC2B1571BB6B73C76_inline (Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.String[] UnityEngine.Material::get_shaderKeywords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Material_get_shaderKeywords_mDAD743C090C3CEE0B2883140B244853D71C5E9E0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String[]>::MoveNext()
inline bool Enumerator_MoveNext_mF8F0B568877EAC3A3342752FCF885DCA39305874 (Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String[]>::Dispose()
inline void Enumerator_Dispose_mEEB79F249721ABE5DA6E2434A4CC4248838DE9BE (Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// !!0[] System.Array::Empty<System.Char>()
inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m35D683F1FD7FDF886D380D2B4B29C05FB4CBD3AB_inline (const RuntimeMethod* method)
{
	return ((  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* (*) (const RuntimeMethod*))Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m35D683F1FD7FDF886D380D2B4B29C05FB4CBD3AB_gshared_inline)(method);
}
// System.String System.String::TrimEnd(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimChars0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m45BEBD9C59D474454BD0F4AB6C9A8A2D05D40DBE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0 (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String[]>::.ctor()
inline void List_1__ctor_m820FB589FB840B4AC5662EFFC75D30E7DAA422BA (List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String[]>::Add(!0)
inline void List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA (List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 *, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Shader::SetGlobalFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalFloat_mACF0D8A82FD29498BE757CC1D132BBD411078190 (String_t* ___name0, float ___value1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ToonyColorsPro.Runtime.TCP2_CameraDepth::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_CameraDepth_OnEnable_m065B23720AC86F9586E9808E55F342CFC6CAE802 (TCP2_CameraDepth_t638D8F9F65F58B21A922E9F59C39B016F3B6E250 * __this, const RuntimeMethod* method)
{
	{
		// SetCameraDepth();
		TCP2_CameraDepth_SetCameraDepth_mA09551CF7C5684461C7FCA554737FB68BCBB6115(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Runtime.TCP2_CameraDepth::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_CameraDepth_OnValidate_mFC488BDAFB29D29F6A008438698120BA8278FAA2 (TCP2_CameraDepth_t638D8F9F65F58B21A922E9F59C39B016F3B6E250 * __this, const RuntimeMethod* method)
{
	{
		// SetCameraDepth();
		TCP2_CameraDepth_SetCameraDepth_mA09551CF7C5684461C7FCA554737FB68BCBB6115(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Runtime.TCP2_CameraDepth::SetCameraDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_CameraDepth_SetCameraDepth_mA09551CF7C5684461C7FCA554737FB68BCBB6115 (TCP2_CameraDepth_t638D8F9F65F58B21A922E9F59C39B016F3B6E250 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_0 = NULL;
	{
		// var cam = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		V_0 = L_0;
		// if (RenderDepth)
		bool L_1 = __this->get_RenderDepth_4();
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// cam.depthTextureMode |= DepthTextureMode.Depth;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = V_0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Camera_get_depthTextureMode_mA4B03C6B552FB03DF8A8C20DC9F4EB8FD978A7DD(L_3, /*hidden argument*/NULL);
		NullCheck(L_3);
		Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1(L_3, ((int32_t)((int32_t)L_4|(int32_t)1)), /*hidden argument*/NULL);
		return;
	}

IL_001e:
	{
		// cam.depthTextureMode &= ~DepthTextureMode.Depth;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = V_0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Camera_get_depthTextureMode_mA4B03C6B552FB03DF8A8C20DC9F4EB8FD978A7DD(L_6, /*hidden argument*/NULL);
		NullCheck(L_6);
		Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1(L_6, ((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Runtime.TCP2_CameraDepth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_CameraDepth__ctor_mEA8309E25FAC6FF21E6E6D5B31EEB7720D331165 (TCP2_CameraDepth_t638D8F9F65F58B21A922E9F59C39B016F3B6E250 * __this, const RuntimeMethod* method)
{
	{
		// public bool RenderDepth = true;
		__this->set_RenderDepth_4((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ToonyColorsPro.Runtime.TCP2_GetPosOnWater::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_GetPosOnWater_LateUpdate_m30432EBE05F3025B2B42027AC0B50130920D5B59 (TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (followWaterHeight)
		bool L_0 = __this->get_followWaterHeight_6();
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		// var worldPosition = GetPositionOnWater(transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = TCP2_GetPosOnWater_GetPositionOnWater_m3288C4B692351AB597CED018CA0FFB9C4DAE3A8F(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// worldPosition.y += heightOffset;
		float* L_4 = (&V_0)->get_address_of_y_3();
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		float L_7 = __this->get_heightOffset_7();
		*((float*)L_5) = (float)((float)il2cpp_codegen_add((float)L_6, (float)L_7));
		// transform.position = worldPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		NullCheck(L_8);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// if (followWaterNormal)
		bool L_10 = __this->get_followWaterNormal_8();
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		// transform.rotation = Quaternion.FromToRotation(upAxis, GetNormalOnWater(transform.position));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_upAxis_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = TCP2_GetPosOnWater_GetNormalOnWater_m776686CC32BA1F7875B815DCD3CE558DAF2B1838(__this, L_14, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_FromToRotation_m148C402FBE59E64FEEC9029185706B2A0DD39A03(L_12, L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_11, L_16, /*hidden argument*/NULL);
		// transform.Rotate(postRotation, Space.Self);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = __this->get_postRotation_10();
		NullCheck(L_17);
		Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378(L_17, L_18, 1, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 ToonyColorsPro.Runtime.TCP2_GetPosOnWater::GetPositionOnWater(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TCP2_GetPosOnWater_GetPositionOnWater_m3288C4B692351AB597CED018CA0FFB9C4DAE3A8F (TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral579B607FD0BB19369CAE06D0FC1F56ED2D7F85D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EE10BE9A84B8EE696062A84A890739F72DD0CAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9EE614F0746F6CFA739F4BFC0AD67ACBE293F75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE79AE536975E96591357EA5533F095F6E75B5545);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	{
		// if (!isValid)
		bool L_0 = __this->get_isValid_11();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning("Invalid Water Material, returning the same worldPosition");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteral6EE10BE9A84B8EE696062A84A890739F72DD0CAE, /*hidden argument*/NULL);
		// return worldPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___worldPosition0;
		return L_1;
	}

IL_0014:
	{
		// var freq = WaterMaterial.GetFloat("_WaveFrequency");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_WaterMaterial_4();
		NullCheck(L_2);
		float L_3;
		L_3 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_2, _stringLiteralA9EE614F0746F6CFA739F4BFC0AD67ACBE293F75, /*hidden argument*/NULL);
		V_0 = L_3;
		// var height = WaterMaterial.GetFloat("_WaveHeight") * heightScale;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_WaterMaterial_4();
		NullCheck(L_4);
		float L_5;
		L_5 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_4, _stringLiteralE79AE536975E96591357EA5533F095F6E75B5545, /*hidden argument*/NULL);
		float L_6 = __this->get_heightScale_5();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6));
		// var speed = WaterMaterial.GetFloat("_WaveSpeed");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_WaterMaterial_4();
		NullCheck(L_7);
		float L_8;
		L_8 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_7, _stringLiteral579B607FD0BB19369CAE06D0FC1F56ED2D7F85D8, /*hidden argument*/NULL);
		V_2 = L_8;
		// var phase = Time.time * speed;
		float L_9;
		L_9 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		float L_10 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10));
		// var x = worldPosition.x * freq;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___worldPosition0;
		float L_12 = L_11.get_x_2();
		float L_13 = V_0;
		V_4 = ((float)il2cpp_codegen_multiply((float)L_12, (float)L_13));
		// var z = worldPosition.z * freq;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___worldPosition0;
		float L_15 = L_14.get_z_4();
		float L_16 = V_0;
		V_5 = ((float)il2cpp_codegen_multiply((float)L_15, (float)L_16));
		// var waveFactorX = 0f;
		V_6 = (0.0f);
		// var waveFactorZ = 0f;
		V_7 = (0.0f);
		// switch (sineCount)
		int32_t L_17 = __this->get_sineCount_12();
		V_8 = L_17;
		int32_t L_18 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00a6;
			}
			case 1:
			{
				goto IL_00c5;
			}
			case 2:
			{
				goto IL_0415;
			}
			case 3:
			{
				goto IL_014c;
			}
		}
	}
	{
		int32_t L_19 = V_8;
		if ((((int32_t)L_19) == ((int32_t)8)))
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0415;
	}

IL_00a6:
	{
		// waveFactorX = Mathf.Sin(x + phase) * height;
		float L_20 = V_4;
		float L_21 = V_3;
		float L_22;
		L_22 = sinf(((float)il2cpp_codegen_add((float)L_20, (float)L_21)));
		float L_23 = V_1;
		V_6 = ((float)il2cpp_codegen_multiply((float)L_22, (float)L_23));
		// waveFactorZ = Mathf.Sin(z + phase) * height;
		float L_24 = V_5;
		float L_25 = V_3;
		float L_26;
		L_26 = sinf(((float)il2cpp_codegen_add((float)L_24, (float)L_25)));
		float L_27 = V_1;
		V_7 = ((float)il2cpp_codegen_multiply((float)L_26, (float)L_27));
		// break;
		goto IL_0415;
	}

IL_00c5:
	{
		// waveFactorX = (Mathf.Sin(sinePosOffsetsX[0] * x + sinePhsOffsetsX[0] * phase) + Mathf.Sin(sinePosOffsetsX[1] * x + sinePhsOffsetsX[1] * phase)) * height / 2f;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_28 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_28);
		int32_t L_29 = 0;
		float L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		float L_31 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_32 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_32);
		int32_t L_33 = 0;
		float L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		float L_35 = V_3;
		float L_36;
		L_36 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_30, (float)L_31)), (float)((float)il2cpp_codegen_multiply((float)L_34, (float)L_35)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_37 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_37);
		int32_t L_38 = 1;
		float L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		float L_40 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_41 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_41);
		int32_t L_42 = 1;
		float L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		float L_44 = V_3;
		float L_45;
		L_45 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_39, (float)L_40)), (float)((float)il2cpp_codegen_multiply((float)L_43, (float)L_44)))));
		float L_46 = V_1;
		V_6 = ((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_36, (float)L_45)), (float)L_46))/(float)(2.0f)));
		// waveFactorZ = (Mathf.Sin(sinePosOffsetsZ[0] * z + sinePhsOffsetsZ[0] * phase) + Mathf.Sin(sinePosOffsetsZ[1] * z + sinePhsOffsetsZ[1] * phase)) * height / 2f;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_47);
		int32_t L_48 = 0;
		float L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		float L_50 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_51 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_51);
		int32_t L_52 = 0;
		float L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		float L_54 = V_3;
		float L_55;
		L_55 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_49, (float)L_50)), (float)((float)il2cpp_codegen_multiply((float)L_53, (float)L_54)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_56 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_56);
		int32_t L_57 = 1;
		float L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		float L_59 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_60 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_60);
		int32_t L_61 = 1;
		float L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		float L_63 = V_3;
		float L_64;
		L_64 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_58, (float)L_59)), (float)((float)il2cpp_codegen_multiply((float)L_62, (float)L_63)))));
		float L_65 = V_1;
		V_7 = ((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_55, (float)L_64)), (float)L_65))/(float)(2.0f)));
		// break;
		goto IL_0415;
	}

IL_014c:
	{
		// waveFactorX = (Mathf.Sin(sinePosOffsetsX[0] * x + sinePhsOffsetsX[0] * phase) + Mathf.Sin(sinePosOffsetsX[1] * x + sinePhsOffsetsX[1] * phase) + Mathf.Sin(sinePosOffsetsX[2] * x + sinePhsOffsetsX[2] * phase) + Mathf.Sin(sinePosOffsetsX[3] * x + sinePhsOffsetsX[3] * phase)) * height / 4f;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_66 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_66);
		int32_t L_67 = 0;
		float L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		float L_69 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_70 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_70);
		int32_t L_71 = 0;
		float L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		float L_73 = V_3;
		float L_74;
		L_74 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_68, (float)L_69)), (float)((float)il2cpp_codegen_multiply((float)L_72, (float)L_73)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_75 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_75);
		int32_t L_76 = 1;
		float L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		float L_78 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_79 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_79);
		int32_t L_80 = 1;
		float L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		float L_82 = V_3;
		float L_83;
		L_83 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_77, (float)L_78)), (float)((float)il2cpp_codegen_multiply((float)L_81, (float)L_82)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_84 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_84);
		int32_t L_85 = 2;
		float L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		float L_87 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_88 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_88);
		int32_t L_89 = 2;
		float L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		float L_91 = V_3;
		float L_92;
		L_92 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_86, (float)L_87)), (float)((float)il2cpp_codegen_multiply((float)L_90, (float)L_91)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_93 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_93);
		int32_t L_94 = 3;
		float L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		float L_96 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_97 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_97);
		int32_t L_98 = 3;
		float L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		float L_100 = V_3;
		float L_101;
		L_101 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_95, (float)L_96)), (float)((float)il2cpp_codegen_multiply((float)L_99, (float)L_100)))));
		float L_102 = V_1;
		V_6 = ((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_74, (float)L_83)), (float)L_92)), (float)L_101)), (float)L_102))/(float)(4.0f)));
		// waveFactorZ = (Mathf.Sin(sinePosOffsetsZ[0] * z + sinePhsOffsetsZ[0] * phase) + Mathf.Sin(sinePosOffsetsZ[1] * z + sinePhsOffsetsZ[1] * phase) + Mathf.Sin(sinePosOffsetsZ[2] * z + sinePhsOffsetsZ[2] * phase) + Mathf.Sin(sinePosOffsetsZ[3] * z + sinePhsOffsetsZ[3] * phase)) * height / 4f;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_103 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_103);
		int32_t L_104 = 0;
		float L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		float L_106 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_107 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_107);
		int32_t L_108 = 0;
		float L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		float L_110 = V_3;
		float L_111;
		L_111 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_105, (float)L_106)), (float)((float)il2cpp_codegen_multiply((float)L_109, (float)L_110)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_112 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_112);
		int32_t L_113 = 1;
		float L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		float L_115 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_116 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_116);
		int32_t L_117 = 1;
		float L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		float L_119 = V_3;
		float L_120;
		L_120 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_114, (float)L_115)), (float)((float)il2cpp_codegen_multiply((float)L_118, (float)L_119)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_121 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_121);
		int32_t L_122 = 2;
		float L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		float L_124 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_125 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_125);
		int32_t L_126 = 2;
		float L_127 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		float L_128 = V_3;
		float L_129;
		L_129 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_123, (float)L_124)), (float)((float)il2cpp_codegen_multiply((float)L_127, (float)L_128)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_130 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_130);
		int32_t L_131 = 3;
		float L_132 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		float L_133 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_134 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_134);
		int32_t L_135 = 3;
		float L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		float L_137 = V_3;
		float L_138;
		L_138 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_132, (float)L_133)), (float)((float)il2cpp_codegen_multiply((float)L_136, (float)L_137)))));
		float L_139 = V_1;
		V_7 = ((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_111, (float)L_120)), (float)L_129)), (float)L_138)), (float)L_139))/(float)(4.0f)));
		// break;
		goto IL_0415;
	}

IL_0243:
	{
		// waveFactorX = (Mathf.Sin(sinePosOffsetsX[0] * x + sinePhsOffsetsX[0] * phase) + Mathf.Sin(sinePosOffsetsX[1] * x + sinePhsOffsetsX[1] * phase) + Mathf.Sin(sinePosOffsetsX[2] * x + sinePhsOffsetsX[2] * phase) + Mathf.Sin(sinePosOffsetsX[3] * x + sinePhsOffsetsX[3] * phase) + Mathf.Sin(sinePosOffsetsX[4] * x + sinePhsOffsetsX[4] * phase) + Mathf.Sin(sinePosOffsetsX[5] * x + sinePhsOffsetsX[5] * phase) + Mathf.Sin(sinePosOffsetsX[6] * x + sinePhsOffsetsX[6] * phase) + Mathf.Sin(sinePosOffsetsX[7] * x + sinePhsOffsetsX[7] * phase)) * height / 8f;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_140 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_140);
		int32_t L_141 = 0;
		float L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		float L_143 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_144 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_144);
		int32_t L_145 = 0;
		float L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		float L_147 = V_3;
		float L_148;
		L_148 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_142, (float)L_143)), (float)((float)il2cpp_codegen_multiply((float)L_146, (float)L_147)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_149 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_149);
		int32_t L_150 = 1;
		float L_151 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		float L_152 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_153 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_153);
		int32_t L_154 = 1;
		float L_155 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		float L_156 = V_3;
		float L_157;
		L_157 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_151, (float)L_152)), (float)((float)il2cpp_codegen_multiply((float)L_155, (float)L_156)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_158 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_158);
		int32_t L_159 = 2;
		float L_160 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		float L_161 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_162 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_162);
		int32_t L_163 = 2;
		float L_164 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		float L_165 = V_3;
		float L_166;
		L_166 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_160, (float)L_161)), (float)((float)il2cpp_codegen_multiply((float)L_164, (float)L_165)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_167 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_167);
		int32_t L_168 = 3;
		float L_169 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		float L_170 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_171 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_171);
		int32_t L_172 = 3;
		float L_173 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		float L_174 = V_3;
		float L_175;
		L_175 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_169, (float)L_170)), (float)((float)il2cpp_codegen_multiply((float)L_173, (float)L_174)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_176 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_176);
		int32_t L_177 = 4;
		float L_178 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		float L_179 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_180 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_180);
		int32_t L_181 = 4;
		float L_182 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		float L_183 = V_3;
		float L_184;
		L_184 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_178, (float)L_179)), (float)((float)il2cpp_codegen_multiply((float)L_182, (float)L_183)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_185 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_185);
		int32_t L_186 = 5;
		float L_187 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		float L_188 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_189 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_189);
		int32_t L_190 = 5;
		float L_191 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		float L_192 = V_3;
		float L_193;
		L_193 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_187, (float)L_188)), (float)((float)il2cpp_codegen_multiply((float)L_191, (float)L_192)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_194 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_194);
		int32_t L_195 = 6;
		float L_196 = (L_194)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		float L_197 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_198 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_198);
		int32_t L_199 = 6;
		float L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		float L_201 = V_3;
		float L_202;
		L_202 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_196, (float)L_197)), (float)((float)il2cpp_codegen_multiply((float)L_200, (float)L_201)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_203 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_203);
		int32_t L_204 = 7;
		float L_205 = (L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		float L_206 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_207 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_207);
		int32_t L_208 = 7;
		float L_209 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_208));
		float L_210 = V_3;
		float L_211;
		L_211 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_205, (float)L_206)), (float)((float)il2cpp_codegen_multiply((float)L_209, (float)L_210)))));
		float L_212 = V_1;
		V_6 = ((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_148, (float)L_157)), (float)L_166)), (float)L_175)), (float)L_184)), (float)L_193)), (float)L_202)), (float)L_211)), (float)L_212))/(float)(8.0f)));
		// waveFactorZ = (Mathf.Sin(sinePosOffsetsZ[0] * z + sinePhsOffsetsZ[0] * phase) + Mathf.Sin(sinePosOffsetsZ[1] * z + sinePhsOffsetsZ[1] * phase) + Mathf.Sin(sinePosOffsetsZ[2] * z + sinePhsOffsetsZ[2] * phase) + Mathf.Sin(sinePosOffsetsZ[3] * z + sinePhsOffsetsZ[3] * phase) + Mathf.Sin(sinePosOffsetsZ[4] * z + sinePhsOffsetsZ[4] * phase) + Mathf.Sin(sinePosOffsetsZ[5] * z + sinePhsOffsetsZ[5] * phase) + Mathf.Sin(sinePosOffsetsZ[6] * z + sinePhsOffsetsZ[6] * phase) + Mathf.Sin(sinePosOffsetsZ[7] * z + sinePhsOffsetsZ[7] * phase)) * height / 8f;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_213 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_213);
		int32_t L_214 = 0;
		float L_215 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		float L_216 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_217 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_217);
		int32_t L_218 = 0;
		float L_219 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		float L_220 = V_3;
		float L_221;
		L_221 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_215, (float)L_216)), (float)((float)il2cpp_codegen_multiply((float)L_219, (float)L_220)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_222 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_222);
		int32_t L_223 = 1;
		float L_224 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_223));
		float L_225 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_226 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_226);
		int32_t L_227 = 1;
		float L_228 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_227));
		float L_229 = V_3;
		float L_230;
		L_230 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_224, (float)L_225)), (float)((float)il2cpp_codegen_multiply((float)L_228, (float)L_229)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_231 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_231);
		int32_t L_232 = 2;
		float L_233 = (L_231)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		float L_234 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_235 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_235);
		int32_t L_236 = 2;
		float L_237 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_236));
		float L_238 = V_3;
		float L_239;
		L_239 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_233, (float)L_234)), (float)((float)il2cpp_codegen_multiply((float)L_237, (float)L_238)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_240 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_240);
		int32_t L_241 = 3;
		float L_242 = (L_240)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		float L_243 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_244 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_244);
		int32_t L_245 = 3;
		float L_246 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		float L_247 = V_3;
		float L_248;
		L_248 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_242, (float)L_243)), (float)((float)il2cpp_codegen_multiply((float)L_246, (float)L_247)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_249 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_249);
		int32_t L_250 = 4;
		float L_251 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_250));
		float L_252 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_253 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_253);
		int32_t L_254 = 4;
		float L_255 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		float L_256 = V_3;
		float L_257;
		L_257 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_251, (float)L_252)), (float)((float)il2cpp_codegen_multiply((float)L_255, (float)L_256)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_258 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_258);
		int32_t L_259 = 5;
		float L_260 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		float L_261 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_262 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_262);
		int32_t L_263 = 5;
		float L_264 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		float L_265 = V_3;
		float L_266;
		L_266 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_260, (float)L_261)), (float)((float)il2cpp_codegen_multiply((float)L_264, (float)L_265)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_267 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_267);
		int32_t L_268 = 6;
		float L_269 = (L_267)->GetAt(static_cast<il2cpp_array_size_t>(L_268));
		float L_270 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_271 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_271);
		int32_t L_272 = 6;
		float L_273 = (L_271)->GetAt(static_cast<il2cpp_array_size_t>(L_272));
		float L_274 = V_3;
		float L_275;
		L_275 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_269, (float)L_270)), (float)((float)il2cpp_codegen_multiply((float)L_273, (float)L_274)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_276 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_276);
		int32_t L_277 = 7;
		float L_278 = (L_276)->GetAt(static_cast<il2cpp_array_size_t>(L_277));
		float L_279 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_280 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_280);
		int32_t L_281 = 7;
		float L_282 = (L_280)->GetAt(static_cast<il2cpp_array_size_t>(L_281));
		float L_283 = V_3;
		float L_284;
		L_284 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_278, (float)L_279)), (float)((float)il2cpp_codegen_multiply((float)L_282, (float)L_283)))));
		float L_285 = V_1;
		V_7 = ((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_221, (float)L_230)), (float)L_239)), (float)L_248)), (float)L_257)), (float)L_266)), (float)L_275)), (float)L_284)), (float)L_285))/(float)(8.0f)));
	}

IL_0415:
	{
		// worldPosition.y = (waveFactorX + waveFactorZ);
		float L_286 = V_6;
		float L_287 = V_7;
		(&___worldPosition0)->set_y_3(((float)il2cpp_codegen_add((float)L_286, (float)L_287)));
		// return worldPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_288 = ___worldPosition0;
		return L_288;
	}
}
// UnityEngine.Vector3 ToonyColorsPro.Runtime.TCP2_GetPosOnWater::GetNormalOnWater(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TCP2_GetPosOnWater_GetNormalOnWater_m776686CC32BA1F7875B815DCD3CE558DAF2B1838 (TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48167882D06D213282D0B0265043EDB047203572);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral579B607FD0BB19369CAE06D0FC1F56ED2D7F85D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9EE614F0746F6CFA739F4BFC0AD67ACBE293F75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE79AE536975E96591357EA5533F095F6E75B5545);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// if (!isValid)
		bool L_0 = __this->get_isValid_11();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarning("Invalid Water Material, returning the Vector3.up as the normal");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteral48167882D06D213282D0B0265043EDB047203572, /*hidden argument*/NULL);
		// return Vector3.up;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_up_mD84FDFCD32FC48C865A89FD4251232E2A9D7015A(/*hidden argument*/NULL);
		return L_1;
	}

IL_0018:
	{
		// var freq = WaterMaterial.GetFloat("_WaveFrequency");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_WaterMaterial_4();
		NullCheck(L_2);
		float L_3;
		L_3 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_2, _stringLiteralA9EE614F0746F6CFA739F4BFC0AD67ACBE293F75, /*hidden argument*/NULL);
		V_0 = L_3;
		// var height = WaterMaterial.GetFloat("_WaveHeight") * heightScale;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_WaterMaterial_4();
		NullCheck(L_4);
		float L_5;
		L_5 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_4, _stringLiteralE79AE536975E96591357EA5533F095F6E75B5545, /*hidden argument*/NULL);
		float L_6 = __this->get_heightScale_5();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6));
		// var speed = WaterMaterial.GetFloat("_WaveSpeed");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_WaterMaterial_4();
		NullCheck(L_7);
		float L_8;
		L_8 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_7, _stringLiteral579B607FD0BB19369CAE06D0FC1F56ED2D7F85D8, /*hidden argument*/NULL);
		V_2 = L_8;
		// var phase = Time.time * speed;
		float L_9;
		L_9 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		float L_10 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10));
		// var x = worldPosition.x * freq;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___worldPosition0;
		float L_12 = L_11.get_x_2();
		float L_13 = V_0;
		V_4 = ((float)il2cpp_codegen_multiply((float)L_12, (float)L_13));
		// var z = worldPosition.z * freq;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___worldPosition0;
		float L_15 = L_14.get_z_4();
		float L_16 = V_0;
		V_5 = ((float)il2cpp_codegen_multiply((float)L_15, (float)L_16));
		// var waveNormalX = 0f;
		V_6 = (0.0f);
		// var waveNormalZ = 0f;
		V_7 = (0.0f);
		// switch (sineCount)
		int32_t L_17 = __this->get_sineCount_12();
		V_8 = L_17;
		int32_t L_18 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00aa;
			}
			case 1:
			{
				goto IL_00cb;
			}
			case 2:
			{
				goto IL_051d;
			}
			case 3:
			{
				goto IL_0178;
			}
		}
	}
	{
		int32_t L_19 = V_8;
		if ((((int32_t)L_19) == ((int32_t)8)))
		{
			goto IL_02b9;
		}
	}
	{
		goto IL_051d;
	}

IL_00aa:
	{
		// waveNormalX = -height * Mathf.Cos(x + phase);
		float L_20 = V_1;
		float L_21 = V_4;
		float L_22 = V_3;
		float L_23;
		L_23 = cosf(((float)il2cpp_codegen_add((float)L_21, (float)L_22)));
		V_6 = ((float)il2cpp_codegen_multiply((float)((-L_20)), (float)L_23));
		// waveNormalZ = -height * Mathf.Cos(z + phase);
		float L_24 = V_1;
		float L_25 = V_5;
		float L_26 = V_3;
		float L_27;
		L_27 = cosf(((float)il2cpp_codegen_add((float)L_25, (float)L_26)));
		V_7 = ((float)il2cpp_codegen_multiply((float)((-L_24)), (float)L_27));
		// break;
		goto IL_051d;
	}

IL_00cb:
	{
		// waveNormalX = -height/2f * ((Mathf.Cos(sinePosOffsetsX[0]*x + sinePhsOffsetsX[0]*phase)*sinePosOffsetsX[0]) + (Mathf.Cos(sinePosOffsetsX[1]*x + sinePhsOffsetsX[1]*phase)*sinePosOffsetsX[1]));
		float L_28 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_29 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_29);
		int32_t L_30 = 0;
		float L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		float L_32 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_33 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_33);
		int32_t L_34 = 0;
		float L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		float L_36 = V_3;
		float L_37;
		L_37 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_31, (float)L_32)), (float)((float)il2cpp_codegen_multiply((float)L_35, (float)L_36)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_38 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_38);
		int32_t L_39 = 0;
		float L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_41 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_41);
		int32_t L_42 = 1;
		float L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		float L_44 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_45 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_45);
		int32_t L_46 = 1;
		float L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		float L_48 = V_3;
		float L_49;
		L_49 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_43, (float)L_44)), (float)((float)il2cpp_codegen_multiply((float)L_47, (float)L_48)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_50 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_50);
		int32_t L_51 = 1;
		float L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_6 = ((float)il2cpp_codegen_multiply((float)((float)((float)((-L_28))/(float)(2.0f))), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_37, (float)L_40)), (float)((float)il2cpp_codegen_multiply((float)L_49, (float)L_52))))));
		// waveNormalZ = -height/2f * ((Mathf.Cos(sinePosOffsetsZ[0]*z + sinePhsOffsetsZ[0]*phase)*sinePosOffsetsZ[0]) + (Mathf.Cos(sinePosOffsetsZ[1]*z + sinePhsOffsetsZ[1]*phase)*sinePosOffsetsZ[1]));
		float L_53 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_54 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_54);
		int32_t L_55 = 0;
		float L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		float L_57 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_58 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_58);
		int32_t L_59 = 0;
		float L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		float L_61 = V_3;
		float L_62;
		L_62 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_56, (float)L_57)), (float)((float)il2cpp_codegen_multiply((float)L_60, (float)L_61)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_63 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_63);
		int32_t L_64 = 0;
		float L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_66 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_66);
		int32_t L_67 = 1;
		float L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		float L_69 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_70 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_70);
		int32_t L_71 = 1;
		float L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		float L_73 = V_3;
		float L_74;
		L_74 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_68, (float)L_69)), (float)((float)il2cpp_codegen_multiply((float)L_72, (float)L_73)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_75 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_75);
		int32_t L_76 = 1;
		float L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_7 = ((float)il2cpp_codegen_multiply((float)((float)((float)((-L_53))/(float)(2.0f))), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_62, (float)L_65)), (float)((float)il2cpp_codegen_multiply((float)L_74, (float)L_77))))));
		// break;
		goto IL_051d;
	}

IL_0178:
	{
		// waveNormalX = -height/4f * ((Mathf.Cos(sinePosOffsetsX[0]*x + sinePhsOffsetsX[0]*phase)*sinePosOffsetsX[0]) + (Mathf.Cos(sinePosOffsetsX[1]*x + sinePhsOffsetsX[1]*phase)*sinePosOffsetsX[1]) + (Mathf.Cos(sinePosOffsetsX[2]*x + sinePhsOffsetsX[2]*phase)*sinePosOffsetsX[2]) + (Mathf.Cos(sinePosOffsetsX[3]*x + sinePhsOffsetsX[3]*phase)*sinePosOffsetsX[3]));
		float L_78 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_79 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_79);
		int32_t L_80 = 0;
		float L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		float L_82 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_83 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_83);
		int32_t L_84 = 0;
		float L_85 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		float L_86 = V_3;
		float L_87;
		L_87 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_81, (float)L_82)), (float)((float)il2cpp_codegen_multiply((float)L_85, (float)L_86)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_88 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_88);
		int32_t L_89 = 0;
		float L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_91 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_91);
		int32_t L_92 = 1;
		float L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		float L_94 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_95 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_95);
		int32_t L_96 = 1;
		float L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		float L_98 = V_3;
		float L_99;
		L_99 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_93, (float)L_94)), (float)((float)il2cpp_codegen_multiply((float)L_97, (float)L_98)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_100 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_100);
		int32_t L_101 = 1;
		float L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_103 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_103);
		int32_t L_104 = 2;
		float L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		float L_106 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_107 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_107);
		int32_t L_108 = 2;
		float L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		float L_110 = V_3;
		float L_111;
		L_111 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_105, (float)L_106)), (float)((float)il2cpp_codegen_multiply((float)L_109, (float)L_110)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_112 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_112);
		int32_t L_113 = 2;
		float L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_115 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_115);
		int32_t L_116 = 3;
		float L_117 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		float L_118 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_119 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_119);
		int32_t L_120 = 3;
		float L_121 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		float L_122 = V_3;
		float L_123;
		L_123 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_117, (float)L_118)), (float)((float)il2cpp_codegen_multiply((float)L_121, (float)L_122)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_124 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_124);
		int32_t L_125 = 3;
		float L_126 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		V_6 = ((float)il2cpp_codegen_multiply((float)((float)((float)((-L_78))/(float)(4.0f))), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_87, (float)L_90)), (float)((float)il2cpp_codegen_multiply((float)L_99, (float)L_102)))), (float)((float)il2cpp_codegen_multiply((float)L_111, (float)L_114)))), (float)((float)il2cpp_codegen_multiply((float)L_123, (float)L_126))))));
		// waveNormalZ = -height/4f * ((Mathf.Cos(sinePosOffsetsZ[0]*z + sinePhsOffsetsZ[0]*phase)*sinePosOffsetsZ[0]) + (Mathf.Cos(sinePosOffsetsZ[1]*z + sinePhsOffsetsZ[1]*phase)*sinePosOffsetsZ[1]) + (Mathf.Cos(sinePosOffsetsZ[2]*z + sinePhsOffsetsZ[2]*phase)*sinePosOffsetsZ[2]) + (Mathf.Cos(sinePosOffsetsZ[3]*z + sinePhsOffsetsZ[3]*phase)*sinePosOffsetsZ[3]));
		float L_127 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_128 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_128);
		int32_t L_129 = 0;
		float L_130 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		float L_131 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_132 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_132);
		int32_t L_133 = 0;
		float L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		float L_135 = V_3;
		float L_136;
		L_136 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_130, (float)L_131)), (float)((float)il2cpp_codegen_multiply((float)L_134, (float)L_135)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_137 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_137);
		int32_t L_138 = 0;
		float L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_140 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_140);
		int32_t L_141 = 1;
		float L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		float L_143 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_144 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_144);
		int32_t L_145 = 1;
		float L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		float L_147 = V_3;
		float L_148;
		L_148 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_142, (float)L_143)), (float)((float)il2cpp_codegen_multiply((float)L_146, (float)L_147)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_149 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_149);
		int32_t L_150 = 1;
		float L_151 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_152 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_152);
		int32_t L_153 = 2;
		float L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		float L_155 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_156 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_156);
		int32_t L_157 = 2;
		float L_158 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		float L_159 = V_3;
		float L_160;
		L_160 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_154, (float)L_155)), (float)((float)il2cpp_codegen_multiply((float)L_158, (float)L_159)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_161 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_161);
		int32_t L_162 = 2;
		float L_163 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_164 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_164);
		int32_t L_165 = 3;
		float L_166 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		float L_167 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_168 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_168);
		int32_t L_169 = 3;
		float L_170 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		float L_171 = V_3;
		float L_172;
		L_172 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_166, (float)L_167)), (float)((float)il2cpp_codegen_multiply((float)L_170, (float)L_171)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_173 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_173);
		int32_t L_174 = 3;
		float L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		V_7 = ((float)il2cpp_codegen_multiply((float)((float)((float)((-L_127))/(float)(4.0f))), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_136, (float)L_139)), (float)((float)il2cpp_codegen_multiply((float)L_148, (float)L_151)))), (float)((float)il2cpp_codegen_multiply((float)L_160, (float)L_163)))), (float)((float)il2cpp_codegen_multiply((float)L_172, (float)L_175))))));
		// break;
		goto IL_051d;
	}

IL_02b9:
	{
		// waveNormalX = -height/8f * ((Mathf.Cos(sinePosOffsetsX[0]*x + sinePhsOffsetsX[0]*phase)*sinePosOffsetsX[0]) + (Mathf.Cos(sinePosOffsetsX[1]*x + sinePhsOffsetsX[1]*phase)*sinePosOffsetsX[1]) + (Mathf.Cos(sinePosOffsetsX[2]*x + sinePhsOffsetsX[2]*phase)*sinePosOffsetsX[2]) + (Mathf.Cos(sinePosOffsetsX[3]*x + sinePhsOffsetsX[3]*phase)*sinePosOffsetsX[3]) + (Mathf.Cos(sinePosOffsetsX[4]*x + sinePhsOffsetsX[4]*phase)*sinePosOffsetsX[4]) + (Mathf.Cos(sinePosOffsetsX[5]*x + sinePhsOffsetsX[5]*phase)*sinePosOffsetsX[5]) + (Mathf.Cos(sinePosOffsetsX[6]*x + sinePhsOffsetsX[6]*phase)*sinePosOffsetsX[6]) + (Mathf.Cos(sinePosOffsetsX[7]*x + sinePhsOffsetsX[7]*phase)*sinePosOffsetsX[7]));
		float L_176 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_177 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_177);
		int32_t L_178 = 0;
		float L_179 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		float L_180 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_181 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_181);
		int32_t L_182 = 0;
		float L_183 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		float L_184 = V_3;
		float L_185;
		L_185 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_179, (float)L_180)), (float)((float)il2cpp_codegen_multiply((float)L_183, (float)L_184)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_186 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_186);
		int32_t L_187 = 0;
		float L_188 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_189 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_189);
		int32_t L_190 = 1;
		float L_191 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		float L_192 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_193 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_193);
		int32_t L_194 = 1;
		float L_195 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		float L_196 = V_3;
		float L_197;
		L_197 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_191, (float)L_192)), (float)((float)il2cpp_codegen_multiply((float)L_195, (float)L_196)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_198 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_198);
		int32_t L_199 = 1;
		float L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_201 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_201);
		int32_t L_202 = 2;
		float L_203 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		float L_204 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_205 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_205);
		int32_t L_206 = 2;
		float L_207 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_206));
		float L_208 = V_3;
		float L_209;
		L_209 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_203, (float)L_204)), (float)((float)il2cpp_codegen_multiply((float)L_207, (float)L_208)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_210 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_210);
		int32_t L_211 = 2;
		float L_212 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_213 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_213);
		int32_t L_214 = 3;
		float L_215 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		float L_216 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_217 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_217);
		int32_t L_218 = 3;
		float L_219 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		float L_220 = V_3;
		float L_221;
		L_221 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_215, (float)L_216)), (float)((float)il2cpp_codegen_multiply((float)L_219, (float)L_220)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_222 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_222);
		int32_t L_223 = 3;
		float L_224 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_223));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_225 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_225);
		int32_t L_226 = 4;
		float L_227 = (L_225)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		float L_228 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_229 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_229);
		int32_t L_230 = 4;
		float L_231 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		float L_232 = V_3;
		float L_233;
		L_233 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_227, (float)L_228)), (float)((float)il2cpp_codegen_multiply((float)L_231, (float)L_232)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_234 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_234);
		int32_t L_235 = 4;
		float L_236 = (L_234)->GetAt(static_cast<il2cpp_array_size_t>(L_235));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_237 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_237);
		int32_t L_238 = 5;
		float L_239 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		float L_240 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_241 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_241);
		int32_t L_242 = 5;
		float L_243 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		float L_244 = V_3;
		float L_245;
		L_245 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_239, (float)L_240)), (float)((float)il2cpp_codegen_multiply((float)L_243, (float)L_244)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_246 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_246);
		int32_t L_247 = 5;
		float L_248 = (L_246)->GetAt(static_cast<il2cpp_array_size_t>(L_247));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_249 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_249);
		int32_t L_250 = 6;
		float L_251 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_250));
		float L_252 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_253 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_253);
		int32_t L_254 = 6;
		float L_255 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		float L_256 = V_3;
		float L_257;
		L_257 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_251, (float)L_252)), (float)((float)il2cpp_codegen_multiply((float)L_255, (float)L_256)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_258 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_258);
		int32_t L_259 = 6;
		float L_260 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_261 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_261);
		int32_t L_262 = 7;
		float L_263 = (L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_262));
		float L_264 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_265 = __this->get_sinePhsOffsetsX_15();
		NullCheck(L_265);
		int32_t L_266 = 7;
		float L_267 = (L_265)->GetAt(static_cast<il2cpp_array_size_t>(L_266));
		float L_268 = V_3;
		float L_269;
		L_269 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_263, (float)L_264)), (float)((float)il2cpp_codegen_multiply((float)L_267, (float)L_268)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_270 = __this->get_sinePosOffsetsX_13();
		NullCheck(L_270);
		int32_t L_271 = 7;
		float L_272 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_271));
		V_6 = ((float)il2cpp_codegen_multiply((float)((float)((float)((-L_176))/(float)(8.0f))), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_185, (float)L_188)), (float)((float)il2cpp_codegen_multiply((float)L_197, (float)L_200)))), (float)((float)il2cpp_codegen_multiply((float)L_209, (float)L_212)))), (float)((float)il2cpp_codegen_multiply((float)L_221, (float)L_224)))), (float)((float)il2cpp_codegen_multiply((float)L_233, (float)L_236)))), (float)((float)il2cpp_codegen_multiply((float)L_245, (float)L_248)))), (float)((float)il2cpp_codegen_multiply((float)L_257, (float)L_260)))), (float)((float)il2cpp_codegen_multiply((float)L_269, (float)L_272))))));
		// waveNormalZ = -height/8f * ((Mathf.Cos(sinePosOffsetsZ[0]*z + sinePhsOffsetsZ[0]*phase)*sinePosOffsetsZ[0]) + (Mathf.Cos(sinePosOffsetsZ[1]*z + sinePhsOffsetsZ[1]*phase)*sinePosOffsetsZ[1]) + (Mathf.Cos(sinePosOffsetsZ[2]*z + sinePhsOffsetsZ[2]*phase)*sinePosOffsetsZ[2]) + (Mathf.Cos(sinePosOffsetsZ[3]*z + sinePhsOffsetsZ[3]*phase)*sinePosOffsetsZ[3]) + (Mathf.Cos(sinePosOffsetsZ[4]*z + sinePhsOffsetsZ[4]*phase)*sinePosOffsetsZ[4]) + (Mathf.Cos(sinePosOffsetsZ[5]*z + sinePhsOffsetsZ[5]*phase)*sinePosOffsetsZ[5]) + (Mathf.Cos(sinePosOffsetsZ[6]*z + sinePhsOffsetsZ[6]*phase)*sinePosOffsetsZ[6]) + (Mathf.Cos(sinePosOffsetsZ[7]*z + sinePhsOffsetsZ[7]*phase)*sinePosOffsetsZ[7]));
		float L_273 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_274 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_274);
		int32_t L_275 = 0;
		float L_276 = (L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_275));
		float L_277 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_278 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_278);
		int32_t L_279 = 0;
		float L_280 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		float L_281 = V_3;
		float L_282;
		L_282 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_276, (float)L_277)), (float)((float)il2cpp_codegen_multiply((float)L_280, (float)L_281)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_283 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_283);
		int32_t L_284 = 0;
		float L_285 = (L_283)->GetAt(static_cast<il2cpp_array_size_t>(L_284));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_286 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_286);
		int32_t L_287 = 1;
		float L_288 = (L_286)->GetAt(static_cast<il2cpp_array_size_t>(L_287));
		float L_289 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_290 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_290);
		int32_t L_291 = 1;
		float L_292 = (L_290)->GetAt(static_cast<il2cpp_array_size_t>(L_291));
		float L_293 = V_3;
		float L_294;
		L_294 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_288, (float)L_289)), (float)((float)il2cpp_codegen_multiply((float)L_292, (float)L_293)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_295 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_295);
		int32_t L_296 = 1;
		float L_297 = (L_295)->GetAt(static_cast<il2cpp_array_size_t>(L_296));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_298 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_298);
		int32_t L_299 = 2;
		float L_300 = (L_298)->GetAt(static_cast<il2cpp_array_size_t>(L_299));
		float L_301 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_302 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_302);
		int32_t L_303 = 2;
		float L_304 = (L_302)->GetAt(static_cast<il2cpp_array_size_t>(L_303));
		float L_305 = V_3;
		float L_306;
		L_306 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_300, (float)L_301)), (float)((float)il2cpp_codegen_multiply((float)L_304, (float)L_305)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_307 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_307);
		int32_t L_308 = 2;
		float L_309 = (L_307)->GetAt(static_cast<il2cpp_array_size_t>(L_308));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_310 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_310);
		int32_t L_311 = 3;
		float L_312 = (L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_311));
		float L_313 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_314 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_314);
		int32_t L_315 = 3;
		float L_316 = (L_314)->GetAt(static_cast<il2cpp_array_size_t>(L_315));
		float L_317 = V_3;
		float L_318;
		L_318 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_312, (float)L_313)), (float)((float)il2cpp_codegen_multiply((float)L_316, (float)L_317)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_319 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_319);
		int32_t L_320 = 3;
		float L_321 = (L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_320));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_322 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_322);
		int32_t L_323 = 4;
		float L_324 = (L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_323));
		float L_325 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_326 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_326);
		int32_t L_327 = 4;
		float L_328 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		float L_329 = V_3;
		float L_330;
		L_330 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_324, (float)L_325)), (float)((float)il2cpp_codegen_multiply((float)L_328, (float)L_329)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_331 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_331);
		int32_t L_332 = 4;
		float L_333 = (L_331)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_334 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_334);
		int32_t L_335 = 5;
		float L_336 = (L_334)->GetAt(static_cast<il2cpp_array_size_t>(L_335));
		float L_337 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_338 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_338);
		int32_t L_339 = 5;
		float L_340 = (L_338)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		float L_341 = V_3;
		float L_342;
		L_342 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_336, (float)L_337)), (float)((float)il2cpp_codegen_multiply((float)L_340, (float)L_341)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_343 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_343);
		int32_t L_344 = 5;
		float L_345 = (L_343)->GetAt(static_cast<il2cpp_array_size_t>(L_344));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_346 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_346);
		int32_t L_347 = 6;
		float L_348 = (L_346)->GetAt(static_cast<il2cpp_array_size_t>(L_347));
		float L_349 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_350 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_350);
		int32_t L_351 = 6;
		float L_352 = (L_350)->GetAt(static_cast<il2cpp_array_size_t>(L_351));
		float L_353 = V_3;
		float L_354;
		L_354 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_348, (float)L_349)), (float)((float)il2cpp_codegen_multiply((float)L_352, (float)L_353)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_355 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_355);
		int32_t L_356 = 6;
		float L_357 = (L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_356));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_358 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_358);
		int32_t L_359 = 7;
		float L_360 = (L_358)->GetAt(static_cast<il2cpp_array_size_t>(L_359));
		float L_361 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_362 = __this->get_sinePhsOffsetsZ_16();
		NullCheck(L_362);
		int32_t L_363 = 7;
		float L_364 = (L_362)->GetAt(static_cast<il2cpp_array_size_t>(L_363));
		float L_365 = V_3;
		float L_366;
		L_366 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_360, (float)L_361)), (float)((float)il2cpp_codegen_multiply((float)L_364, (float)L_365)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_367 = __this->get_sinePosOffsetsZ_14();
		NullCheck(L_367);
		int32_t L_368 = 7;
		float L_369 = (L_367)->GetAt(static_cast<il2cpp_array_size_t>(L_368));
		V_7 = ((float)il2cpp_codegen_multiply((float)((float)((float)((-L_273))/(float)(8.0f))), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_282, (float)L_285)), (float)((float)il2cpp_codegen_multiply((float)L_294, (float)L_297)))), (float)((float)il2cpp_codegen_multiply((float)L_306, (float)L_309)))), (float)((float)il2cpp_codegen_multiply((float)L_318, (float)L_321)))), (float)((float)il2cpp_codegen_multiply((float)L_330, (float)L_333)))), (float)((float)il2cpp_codegen_multiply((float)L_342, (float)L_345)))), (float)((float)il2cpp_codegen_multiply((float)L_354, (float)L_357)))), (float)((float)il2cpp_codegen_multiply((float)L_366, (float)L_369))))));
	}

IL_051d:
	{
		// return new Vector3(waveNormalX, 1, waveNormalZ).normalized; ;
		float L_370 = V_6;
		float L_371 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_372;
		memset((&L_372), 0, sizeof(L_372));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_372), L_370, (1.0f), L_371, /*hidden argument*/NULL);
		V_9 = L_372;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_373;
		L_373 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_9), /*hidden argument*/NULL);
		return L_373;
	}
}
// System.Void ToonyColorsPro.Runtime.TCP2_GetPosOnWater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_GetPosOnWater__ctor_m3A708ACC282C4D30E5DE29350B00E5B4BA050496 (TCP2_GetPosOnWater_t1F724C1EEC70C402AA33BBDF1CAFC59D7CB9E50E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204____1A70BAE12848E0CCADB10009D4920BED5C1135E1D288A0F3D390035604846F38_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204____89C1CF9324638CEDC10B05C2D337701B9E9B858A3906AC94C72AE20569DF6F7C_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204____9C6B6E6E7AADE3A98BBB9505E2AA1D9BF3ABEEB62207237B946440D2451BFA11_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204____EC951036C7DAFDDEEECD4BFD154D1FD3C37C066CB53EF1D86675B1C8168003BD_3_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float heightScale = 1f;
		__this->set_heightScale_5((1.0f));
		// public bool followWaterHeight = true;
		__this->set_followWaterHeight_6((bool)1);
		// public Vector3 upAxis = new Vector3(0, 1, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_upAxis_9(L_0);
		// public Vector3 postRotation = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_postRotation_10(L_1);
		// float[] sinePosOffsetsX = { 1.0f, 2.2f, 2.7f, 3.4f, 1.4f, 1.8f, 4.2f, 3.6f };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)8);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = L_2;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_4 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204____89C1CF9324638CEDC10B05C2D337701B9E9B858A3906AC94C72AE20569DF6F7C_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F((RuntimeArray *)(RuntimeArray *)L_3, L_4, /*hidden argument*/NULL);
		__this->set_sinePosOffsetsX_13(L_3);
		// float[] sinePosOffsetsZ = { 0.6f, 1.3f, 3.1f, 2.4f, 1.1f, 2.8f, 1.7f, 4.3f };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)8);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = L_5;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204____EC951036C7DAFDDEEECD4BFD154D1FD3C37C066CB53EF1D86675B1C8168003BD_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F((RuntimeArray *)(RuntimeArray *)L_6, L_7, /*hidden argument*/NULL);
		__this->set_sinePosOffsetsZ_14(L_6);
		// float[] sinePhsOffsetsX = { 1.0f, 1.3f, 0.7f, 1.75f, 0.2f, 2.6f, 0.7f, 3.1f };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)8);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = L_8;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_10 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204____9C6B6E6E7AADE3A98BBB9505E2AA1D9BF3ABEEB62207237B946440D2451BFA11_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F((RuntimeArray *)(RuntimeArray *)L_9, L_10, /*hidden argument*/NULL);
		__this->set_sinePhsOffsetsX_15(L_9);
		// float[] sinePhsOffsetsZ = { 2.2f, 0.4f, 3.3f, 2.9f, 0.5f, 4.8f, 3.1f, 2.3f };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)8);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = L_11;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_13 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tC5FB8769F25964006B355F56F426360D8FE67204____1A70BAE12848E0CCADB10009D4920BED5C1135E1D288A0F3D390035604846F38_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F((RuntimeArray *)(RuntimeArray *)L_12, L_13, /*hidden argument*/NULL);
		__this->set_sinePhsOffsetsZ_16(L_12);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ToonyColorsPro.Runtime.TCP2_PlanarReflection::OnWillRenderObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_PlanarReflection_OnWillRenderObject_m9770EFBDFBAFBDB05D82A2AD531456A64A73F9F4 (TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BC903474F3EEC4A94B28FB209B0CB7F7426FCF);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * V_0 = NULL;
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_1 = NULL;
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_13;
	memset((&V_13), 0, sizeof(V_13));
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_14 = NULL;
	int32_t V_15 = 0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_16 = NULL;
	{
		// var rend = GetComponent<Renderer>();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		V_0 = L_0;
		// if (!enabled || !rend || !rend.sharedMaterial || !rend.enabled)
		bool L_1;
		L_1 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_4 = V_0;
		NullCheck(L_4);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5;
		L_5 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_002d;
		}
	}

IL_002c:
	{
		// return;
		return;
	}

IL_002d:
	{
		// var cam = Camera.current;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9;
		L_9 = Camera_get_current_m897579BE2488D7BEC232C3BD1C520FE9F1B3A717(/*hidden argument*/NULL);
		V_1 = L_9;
		// if (!cam)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_003c;
		}
	}
	{
		// return;
		return;
	}

IL_003c:
	{
		// if (s_InsideRendering)
		bool L_12 = ((TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019_StaticFields*)il2cpp_codegen_static_fields_for(TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019_il2cpp_TypeInfo_var))->get_s_InsideRendering_11();
		if (!L_12)
		{
			goto IL_0044;
		}
	}
	{
		// return;
		return;
	}

IL_0044:
	{
		// s_InsideRendering = true;
		((TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019_StaticFields*)il2cpp_codegen_static_fields_for(TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019_il2cpp_TypeInfo_var))->set_s_InsideRendering_11((bool)1);
		// CreateMirrorObjects(cam, out reflectionCamera);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13 = V_1;
		TCP2_PlanarReflection_CreateMirrorObjects_mF2DA23EB1D9DD1DBACE29ACC6E74A8B4F62407DC(__this, L_13, (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C **)(&V_2), /*hidden argument*/NULL);
		// var pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		// var normal = transform.up;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		// var oldPixelLightCount = QualitySettings.pixelLightCount;
		int32_t L_18;
		L_18 = QualitySettings_get_pixelLightCount_m8281503A286BD25BED326F1134613C9FB7AEEEF5(/*hidden argument*/NULL);
		V_5 = L_18;
		// if (m_DisablePixelLights)
		bool L_19 = __this->get_m_DisablePixelLights_4();
		if (!L_19)
		{
			goto IL_0081;
		}
	}
	{
		// QualitySettings.pixelLightCount = 0;
		QualitySettings_set_pixelLightCount_m10003935FA659AC6E1DC88BFC72764A23B5246ED(0, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// UpdateCameraModes(cam, reflectionCamera);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_20 = V_1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_21 = V_2;
		TCP2_PlanarReflection_UpdateCameraModes_m967200D52460CE408A6C225FB844FD77959C3F06(__this, L_20, L_21, /*hidden argument*/NULL);
		// var d = -Vector3.Dot(normal, pos) - m_ClipPlaneOffset;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_3;
		float L_24;
		L_24 = Vector3_Dot_m81A33FB5E8269E1A21554ECCB1639019C708A1CF_inline(L_22, L_23, /*hidden argument*/NULL);
		float L_25 = __this->get_m_ClipPlaneOffset_6();
		V_6 = ((float)il2cpp_codegen_subtract((float)((-L_24)), (float)L_25));
		// var reflectionPlane = new Vector4(normal.x, normal.y, normal.z, d);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_4;
		float L_27 = L_26.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_4;
		float L_29 = L_28.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_4;
		float L_31 = L_30.get_z_4();
		float L_32 = V_6;
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&V_7), L_27, L_29, L_31, L_32, /*hidden argument*/NULL);
		// var reflection = Matrix4x4.zero;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_33;
		L_33 = Matrix4x4_get_zero_m3AE487076023B04A02A0703A2628721BF5FDD74D(/*hidden argument*/NULL);
		V_8 = L_33;
		// CalculateReflectionMatrix(ref reflection, reflectionPlane);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_34 = V_7;
		TCP2_PlanarReflection_CalculateReflectionMatrix_m841CAD598E37C1B79160E5BE12C2831406B6767B((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_8), L_34, /*hidden argument*/NULL);
		// var oldpos = cam.transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_35 = V_1;
		NullCheck(L_35);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		V_9 = L_37;
		// var newpos = reflection.MultiplyPoint(oldpos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_8), L_38, /*hidden argument*/NULL);
		V_10 = L_39;
		// reflectionCamera.worldToCameraMatrix = cam.worldToCameraMatrix * reflection;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_40 = V_2;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_41 = V_1;
		NullCheck(L_41);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_42;
		L_42 = Camera_get_worldToCameraMatrix_m7E2B63F64437E2C91C07F7FC819C79BE2152C5F6(L_41, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_43 = V_8;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_44;
		L_44 = Matrix4x4_op_Multiply_mB760A95995CDC5E31F18D76CE8806DF2C160DD4B(L_42, L_43, /*hidden argument*/NULL);
		NullCheck(L_40);
		Camera_set_worldToCameraMatrix_mD9E982CC4F356AC310C5B3145FC59FD73C420BE3(L_40, L_44, /*hidden argument*/NULL);
		// var clipPlane = CameraSpacePlane(reflectionCamera, pos, normal, 1.0f);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_45 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = V_4;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_48;
		L_48 = TCP2_PlanarReflection_CameraSpacePlane_mEFBFEE4FDA14DAD8721172A00E2A7A42AC426871(__this, L_45, L_46, L_47, (1.0f), /*hidden argument*/NULL);
		V_11 = L_48;
		// var projection = cam.CalculateObliqueMatrix(clipPlane);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_49 = V_1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_50 = V_11;
		NullCheck(L_49);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_51;
		L_51 = Camera_CalculateObliqueMatrix_m8DCA87B4563A3515995B189E4EBEAE548563B94C(L_49, L_50, /*hidden argument*/NULL);
		V_12 = L_51;
		// reflectionCamera.projectionMatrix = projection;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_52 = V_2;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_53 = V_12;
		NullCheck(L_52);
		Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328(L_52, L_53, /*hidden argument*/NULL);
		// reflectionCamera.cullingMask = ~(1<<4) & m_ReflectLayers.value; // never render water layer
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_54 = V_2;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * L_55 = __this->get_address_of_m_ReflectLayers_7();
		int32_t L_56;
		L_56 = LayerMask_get_value_m6380C7449537F99361797225E179A9448A53DDF9((LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC(L_54, ((int32_t)((int32_t)((int32_t)-17)&(int32_t)L_56)), /*hidden argument*/NULL);
		// reflectionCamera.targetTexture = m_ReflectionTexture;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_57 = V_2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_58 = __this->get_m_ReflectionTexture_9();
		NullCheck(L_57);
		Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596(L_57, L_58, /*hidden argument*/NULL);
		// GL.invertCulling = true;
		GL_set_invertCulling_m5A8DF08C3495C0B5E3DFAC0A3B3ED98D05AD09B5((bool)1, /*hidden argument*/NULL);
		// reflectionCamera.transform.position = newpos;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_59 = V_2;
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_59, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61 = V_10;
		NullCheck(L_60);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_60, L_61, /*hidden argument*/NULL);
		// var euler = cam.transform.eulerAngles;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_62 = V_1;
		NullCheck(L_62);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_63, /*hidden argument*/NULL);
		V_13 = L_64;
		// reflectionCamera.transform.eulerAngles = new Vector3(0, euler.y, euler.z);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_65 = V_2;
		NullCheck(L_65);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_65, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = V_13;
		float L_68 = L_67.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69 = V_13;
		float L_70 = L_69.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		memset((&L_71), 0, sizeof(L_71));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_71), (0.0f), L_68, L_70, /*hidden argument*/NULL);
		NullCheck(L_66);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_66, L_71, /*hidden argument*/NULL);
		// reflectionCamera.Render();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_72 = V_2;
		NullCheck(L_72);
		Camera_Render_m2D9749799AAC91A3725044A6CF5594E1F5D68D61(L_72, /*hidden argument*/NULL);
		// reflectionCamera.transform.position = oldpos;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_73 = V_2;
		NullCheck(L_73);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_73, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75 = V_9;
		NullCheck(L_74);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_74, L_75, /*hidden argument*/NULL);
		// GL.invertCulling = false;
		GL_set_invertCulling_m5A8DF08C3495C0B5E3DFAC0A3B3ED98D05AD09B5((bool)0, /*hidden argument*/NULL);
		// var materials = rend.sharedMaterials;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_76 = V_0;
		NullCheck(L_76);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_77;
		L_77 = Renderer_get_sharedMaterials_m9B2D432CA8AD8CEC4348E61789CC1BB0C3A00AFD(L_76, /*hidden argument*/NULL);
		// foreach (var mat in materials)
		V_14 = L_77;
		V_15 = 0;
		goto IL_01cd;
	}

IL_01a0:
	{
		// foreach (var mat in materials)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_78 = V_14;
		int32_t L_79 = V_15;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_16 = L_81;
		// if (mat.HasProperty("_ReflectionTex"))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_82 = V_16;
		NullCheck(L_82);
		bool L_83;
		L_83 = Material_HasProperty_mB6F155CD45C688DA232B56BD1A74474C224BE37E(L_82, _stringLiteral88BC903474F3EEC4A94B28FB209B0CB7F7426FCF, /*hidden argument*/NULL);
		if (!L_83)
		{
			goto IL_01c7;
		}
	}
	{
		// mat.SetTexture("_ReflectionTex", m_ReflectionTexture);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_84 = V_16;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_85 = __this->get_m_ReflectionTexture_9();
		NullCheck(L_84);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_84, _stringLiteral88BC903474F3EEC4A94B28FB209B0CB7F7426FCF, L_85, /*hidden argument*/NULL);
	}

IL_01c7:
	{
		int32_t L_86 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
	}

IL_01cd:
	{
		// foreach (var mat in materials)
		int32_t L_87 = V_15;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_88 = V_14;
		NullCheck(L_88);
		if ((((int32_t)L_87) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_88)->max_length))))))
		{
			goto IL_01a0;
		}
	}
	{
		// if (m_DisablePixelLights)
		bool L_89 = __this->get_m_DisablePixelLights_4();
		if (!L_89)
		{
			goto IL_01e4;
		}
	}
	{
		// QualitySettings.pixelLightCount = oldPixelLightCount;
		int32_t L_90 = V_5;
		QualitySettings_set_pixelLightCount_m10003935FA659AC6E1DC88BFC72764A23B5246ED(L_90, /*hidden argument*/NULL);
	}

IL_01e4:
	{
		// s_InsideRendering = false;
		((TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019_StaticFields*)il2cpp_codegen_static_fields_for(TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019_il2cpp_TypeInfo_var))->set_s_InsideRendering_11((bool)0);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Runtime.TCP2_PlanarReflection::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_PlanarReflection_OnDisable_m288A1108B5A49E411E2D7EA4137929C16144BA92 (TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (m_ReflectionTexture)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = __this->get_m_ReflectionTexture_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// DestroyImmediate(m_ReflectionTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = __this->get_m_ReflectionTexture_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_2, /*hidden argument*/NULL);
		// m_ReflectionTexture = null;
		__this->set_m_ReflectionTexture_9((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL);
	}

IL_001f:
	{
		// foreach (DictionaryEntry kvp in m_ReflectionCameras)
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_3 = __this->get_m_ReflectionCameras_8();
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtFuncInvoker0< RuntimeObject* >::Invoke(23 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_3);
		V_0 = L_4;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004f;
		}

IL_002d:
		{
			// foreach (DictionaryEntry kvp in m_ReflectionCameras)
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			RuntimeObject * L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			V_1 = ((*(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)UnBox(L_6, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var))));
			// DestroyImmediate(((Camera)kvp.Value).gameObject);
			RuntimeObject * L_7;
			L_7 = DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_1), /*hidden argument*/NULL);
			NullCheck(((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)CastclassSealed((RuntimeObject*)L_7, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var)));
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
			L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)CastclassSealed((RuntimeObject*)L_7, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_8, /*hidden argument*/NULL);
		}

IL_004f:
		{
			// foreach (DictionaryEntry kvp in m_ReflectionCameras)
			RuntimeObject* L_9 = V_0;
			NullCheck(L_9);
			bool L_10;
			L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_002d;
			}
		}

IL_0057:
		{
			IL2CPP_LEAVE(0x6A, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_12 = V_2;
			if (!L_12)
			{
				goto IL_0069;
			}
		}

IL_0063:
		{
			RuntimeObject* L_13 = V_2;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_13);
		}

IL_0069:
		{
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
	}

IL_006a:
	{
		// m_ReflectionCameras.Clear();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_14 = __this->get_m_ReflectionCameras_8();
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(16 /* System.Void System.Collections.Hashtable::Clear() */, L_14);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Runtime.TCP2_PlanarReflection::UpdateCameraModes(UnityEngine.Camera,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_PlanarReflection_UpdateCameraModes_m967200D52460CE408A6C225FB844FD77959C3F06 (TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___src0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___dest1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * V_0 = NULL;
	Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * V_1 = NULL;
	{
		// if (dest == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___dest1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// dest.clearFlags = src.clearFlags;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___dest1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = ___src0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Camera_get_clearFlags_m7D0E7A0DBAB6A84B680EC09835AA2F081A17E0D7(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_set_clearFlags_mE79A756CD7C9C84C86B6676F5C6342A45AE5F373(L_2, L_4, /*hidden argument*/NULL);
		// dest.backgroundColor = src.backgroundColor;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = ___dest1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = ___src0;
		NullCheck(L_6);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Camera_get_backgroundColor_m556B0BCFA01DC59AA6A3A4B27C9408C72C144FB5(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF(L_5, L_7, /*hidden argument*/NULL);
		// if (src.clearFlags == CameraClearFlags.Skybox)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = ___src0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Camera_get_clearFlags_m7D0E7A0DBAB6A84B680EC09835AA2F081A17E0D7(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0088;
		}
	}
	{
		// var sky = src.GetComponent(typeof(Skybox)) as Skybox;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10 = ___src0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_13;
		L_13 = Component_GetComponent_m4DE64B46F790BD785FDDDAD364E0364CDDE05BDB(L_10, L_12, /*hidden argument*/NULL);
		V_0 = ((Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 *)IsInstSealed((RuntimeObject*)L_13, Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_il2cpp_TypeInfo_var));
		// var mysky = dest.GetComponent(typeof(Skybox)) as Skybox;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_14 = ___dest1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_0_0_0_var) };
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_17;
		L_17 = Component_GetComponent_m4DE64B46F790BD785FDDDAD364E0364CDDE05BDB(L_14, L_16, /*hidden argument*/NULL);
		V_1 = ((Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 *)IsInstSealed((RuntimeObject*)L_17, Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_il2cpp_TypeInfo_var));
		// if (!sky || !sky.material)
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_20 = V_0;
		NullCheck(L_20);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21;
		L_21 = Skybox_get_material_m9AAE5143C39D1E5E13CD41BE53E950B56E5AAD85(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0075;
		}
	}

IL_006c:
	{
		// mysky.enabled = false;
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_23 = V_1;
		NullCheck(L_23);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_23, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_0088;
	}

IL_0075:
	{
		// mysky.enabled = true;
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_24 = V_1;
		NullCheck(L_24);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_24, (bool)1, /*hidden argument*/NULL);
		// mysky.material = sky.material;
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_25 = V_1;
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_26 = V_0;
		NullCheck(L_26);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27;
		L_27 = Skybox_get_material_m9AAE5143C39D1E5E13CD41BE53E950B56E5AAD85(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Skybox_set_material_m74316F6709A669D3181C4CB1EA1F40E745D0F88A(L_25, L_27, /*hidden argument*/NULL);
	}

IL_0088:
	{
		// dest.farClipPlane = src.farClipPlane;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_28 = ___dest1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_29 = ___src0;
		NullCheck(L_29);
		float L_30;
		L_30 = Camera_get_farClipPlane_m0FA1B9E2E815BECE2EA40023302EB942B52D9596(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41(L_28, L_30, /*hidden argument*/NULL);
		// dest.nearClipPlane = src.nearClipPlane;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_31 = ___dest1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_32 = ___src0;
		NullCheck(L_32);
		float L_33;
		L_33 = Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		Camera_set_nearClipPlane_m4EA1D92F6E1D17E423EC036561E115F434DC2263(L_31, L_33, /*hidden argument*/NULL);
		// dest.orthographic = src.orthographic;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_34 = ___dest1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_35 = ___src0;
		NullCheck(L_35);
		bool L_36;
		L_36 = Camera_get_orthographic_m3DE9A7705E2B4926BBFD2D6798D97B931B5B5550(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		Camera_set_orthographic_m38A872FC2D448915EE94C4FB72FB02D4C3F56C52(L_34, L_36, /*hidden argument*/NULL);
		// dest.fieldOfView = src.fieldOfView;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_37 = ___dest1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_38 = ___src0;
		NullCheck(L_38);
		float L_39;
		L_39 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49(L_37, L_39, /*hidden argument*/NULL);
		// dest.aspect = src.aspect;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_40 = ___dest1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_41 = ___src0;
		NullCheck(L_41);
		float L_42;
		L_42 = Camera_get_aspect_mD0A1FC8F998473DA08866FF9CD61C02E6D5F4987(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		Camera_set_aspect_mF0D72E1250A4408B6A7C32700EE3D80C75C3879C(L_40, L_42, /*hidden argument*/NULL);
		// dest.orthographicSize = src.orthographicSize;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_43 = ___dest1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_44 = ___src0;
		NullCheck(L_44);
		float L_45;
		L_45 = Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F(L_43, L_45, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Runtime.TCP2_PlanarReflection::CreateMirrorObjects(UnityEngine.Camera,UnityEngine.Camera&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_PlanarReflection_CreateMirrorObjects_mF2DA23EB1D9DD1DBACE29ACC6E74A8B4F62407DC (TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___currentCamera0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** ___reflectionCamera1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6_mA8CC4ED679D5915529405AB96956CFF0CBDB5E3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05E47A2F07E9D9A37CF82B8B7292B8D0073324FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4017354CE7C7E8601B2045AD090F32A21FE80F01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF422850993212057809CBD984B2F3DAEC17A02ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// reflectionCamera = null;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** L_0 = ___reflectionCamera1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// if (!m_ReflectionTexture || m_OldReflectionTextureSize != m_TextureSize)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_1 = __this->get_m_ReflectionTexture_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = __this->get_m_OldReflectionTextureSize_10();
		int32_t L_4 = __this->get_m_TextureSize_5();
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0097;
		}
	}

IL_001e:
	{
		// if (m_ReflectionTexture)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = __this->get_m_ReflectionTexture_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// DestroyImmediate(m_ReflectionTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = __this->get_m_ReflectionTexture_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_7, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// m_ReflectionTexture = new RenderTexture(m_TextureSize, m_TextureSize, 16);
		int32_t L_8 = __this->get_m_TextureSize_5();
		int32_t L_9 = __this->get_m_TextureSize_5();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_10 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)il2cpp_codegen_object_new(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF(L_10, L_8, L_9, ((int32_t)16), /*hidden argument*/NULL);
		__this->set_m_ReflectionTexture_9(L_10);
		// m_ReflectionTexture.name = "__MirrorReflection" + GetInstanceID();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11 = __this->get_m_ReflectionTexture_9();
		int32_t L_12;
		L_12 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(__this, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral05E47A2F07E9D9A37CF82B8B7292B8D0073324FD, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_11, L_14, /*hidden argument*/NULL);
		// m_ReflectionTexture.isPowerOfTwo = true;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_15 = __this->get_m_ReflectionTexture_9();
		NullCheck(L_15);
		RenderTexture_set_isPowerOfTwo_mA6D34F610DF27C40422DF5815892B45C656F1317(L_15, (bool)1, /*hidden argument*/NULL);
		// m_ReflectionTexture.hideFlags = HideFlags.DontSave;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16 = __this->get_m_ReflectionTexture_9();
		NullCheck(L_16);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_16, ((int32_t)52), /*hidden argument*/NULL);
		// m_OldReflectionTextureSize = m_TextureSize;
		int32_t L_17 = __this->get_m_TextureSize_5();
		__this->set_m_OldReflectionTextureSize_10(L_17);
	}

IL_0097:
	{
		// reflectionCamera = m_ReflectionCameras[currentCamera] as Camera;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** L_18 = ___reflectionCamera1;
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_19 = __this->get_m_ReflectionCameras_8();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_20 = ___currentCamera0;
		NullCheck(L_19);
		RuntimeObject * L_21;
		L_21 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_19, L_20);
		*((RuntimeObject **)L_18) = (RuntimeObject *)((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)IsInstSealed((RuntimeObject*)L_21, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_18, (void*)(RuntimeObject *)((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)IsInstSealed((RuntimeObject*)L_21, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var)));
		// if (!reflectionCamera) // catch both not-in-dictionary and in-dictionary-but-deleted-GO
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** L_22 = ___reflectionCamera1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_23 = *((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C **)L_22);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0168;
		}
	}
	{
		// var go = new GameObject("Mirror Refl Camera id" + GetInstanceID() + " for " + currentCamera.GetInstanceID(), typeof(Camera), typeof(Skybox));
		int32_t L_25;
		L_25 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(__this, /*hidden argument*/NULL);
		V_0 = L_25;
		String_t* L_26;
		L_26 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_27 = ___currentCamera0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		String_t* L_29;
		L_29 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(_stringLiteral4017354CE7C7E8601B2045AD090F32A21FE80F01, L_26, _stringLiteralF422850993212057809CBD984B2F3DAEC17A02ED, L_29, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_31 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_32 = L_31;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_33 = { reinterpret_cast<intptr_t> (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34;
		L_34 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_33, /*hidden argument*/NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_34);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_35 = L_32;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_36 = { reinterpret_cast<intptr_t> (Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_0_0_0_var) };
		Type_t * L_37;
		L_37 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_37);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_m9829583AE3BF1285861C580895202F760F3A82E8(L_38, L_30, L_35, /*hidden argument*/NULL);
		V_1 = L_38;
		// reflectionCamera = go.GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** L_39 = ___reflectionCamera1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = V_1;
		NullCheck(L_40);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_41;
		L_41 = GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49(L_40, /*hidden argument*/GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		*((RuntimeObject **)L_39) = (RuntimeObject *)L_41;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_39, (void*)(RuntimeObject *)L_41);
		// reflectionCamera.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** L_42 = ___reflectionCamera1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_43 = *((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C **)L_42);
		NullCheck(L_43);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_43, (bool)0, /*hidden argument*/NULL);
		// reflectionCamera.transform.position = transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** L_44 = ___reflectionCamera1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_45 = *((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C **)L_44);
		NullCheck(L_45);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_45, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_47);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_47, /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_46, L_48, /*hidden argument*/NULL);
		// reflectionCamera.transform.rotation = transform.rotation;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** L_49 = ___reflectionCamera1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_50 = *((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C **)L_49);
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_50, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_52);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_53;
		L_53 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_52, /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_51, L_53, /*hidden argument*/NULL);
		// reflectionCamera.gameObject.AddComponent<FlareLayer>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** L_54 = ___reflectionCamera1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_55 = *((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C **)L_54);
		NullCheck(L_55);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56;
		L_56 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		FlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6 * L_57;
		L_57 = GameObject_AddComponent_TisFlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6_mA8CC4ED679D5915529405AB96956CFF0CBDB5E3E(L_56, /*hidden argument*/GameObject_AddComponent_TisFlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6_mA8CC4ED679D5915529405AB96956CFF0CBDB5E3E_RuntimeMethod_var);
		// go.hideFlags = HideFlags.HideAndDontSave;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = V_1;
		NullCheck(L_58);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_58, ((int32_t)61), /*hidden argument*/NULL);
		// m_ReflectionCameras[currentCamera] = reflectionCamera;
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_59 = __this->get_m_ReflectionCameras_8();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_60 = ___currentCamera0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** L_61 = ___reflectionCamera1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_62 = *((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C **)L_61);
		NullCheck(L_59);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_59, L_60, L_62);
	}

IL_0168:
	{
		// }
		return;
	}
}
// System.Single ToonyColorsPro.Runtime.TCP2_PlanarReflection::sgn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TCP2_PlanarReflection_sgn_mCDF1371C2C208F31AE1AB09D323C2EC95A416A1D (float ___a0, const RuntimeMethod* method)
{
	{
		// if (a > 0.0f) return 1.0f;
		float L_0 = ___a0;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// if (a > 0.0f) return 1.0f;
		return (1.0f);
	}

IL_000e:
	{
		// if (a < 0.0f) return -1.0f;
		float L_1 = ___a0;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_001c;
		}
	}
	{
		// if (a < 0.0f) return -1.0f;
		return (-1.0f);
	}

IL_001c:
	{
		// return 0.0f;
		return (0.0f);
	}
}
// UnityEngine.Vector4 ToonyColorsPro.Runtime.TCP2_PlanarReflection::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  TCP2_PlanarReflection_CameraSpacePlane_mEFBFEE4FDA14DAD8721172A00E2A7A42AC426871 (TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal2, float ___sideSign3, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var offsetPos = pos + normal * m_ClipPlaneOffset;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___pos1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___normal2;
		float L_2 = __this->get_m_ClipPlaneOffset_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// var m = cam.worldToCameraMatrix;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = ___cam0;
		NullCheck(L_5);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6;
		L_6 = Camera_get_worldToCameraMatrix_m7E2B63F64437E2C91C07F7FC819C79BE2152C5F6(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// var cpos = m.MultiplyPoint(offsetPos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// var cnormal = m.MultiplyVector(normal).normalized * sideSign;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___normal2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		float L_12 = ___sideSign3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		// return new Vector4(cnormal.x, cnormal.y, cnormal.z, -Vector3.Dot(cpos, cnormal));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_3;
		float L_15 = L_14.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_3;
		float L_17 = L_16.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_3;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_3;
		float L_22;
		L_22 = Vector3_Dot_m81A33FB5E8269E1A21554ECCB1639019C708A1CF_inline(L_20, L_21, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_23), L_15, L_17, L_19, ((-L_22)), /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Void ToonyColorsPro.Runtime.TCP2_PlanarReflection::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_PlanarReflection_CalculateReflectionMatrix_m841CAD598E37C1B79160E5BE12C2831406B6767B (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___reflectionMat0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___plane1, const RuntimeMethod* method)
{
	{
		// reflectionMat.m00 = (1F - 2F*plane[0]*plane[0]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_0 = ___reflectionMat0;
		float L_1;
		L_1 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 0, /*hidden argument*/NULL);
		float L_2;
		L_2 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 0, /*hidden argument*/NULL);
		L_0->set_m00_0(((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_1)), (float)L_2)))));
		// reflectionMat.m01 = (-2F*plane[0]*plane[1]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_3 = ___reflectionMat0;
		float L_4;
		L_4 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 0, /*hidden argument*/NULL);
		float L_5;
		L_5 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 1, /*hidden argument*/NULL);
		L_3->set_m01_4(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_4)), (float)L_5)));
		// reflectionMat.m02 = (-2F*plane[0]*plane[2]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_6 = ___reflectionMat0;
		float L_7;
		L_7 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 0, /*hidden argument*/NULL);
		float L_8;
		L_8 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 2, /*hidden argument*/NULL);
		L_6->set_m02_8(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_7)), (float)L_8)));
		// reflectionMat.m03 = (-2F*plane[3]*plane[0]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_9 = ___reflectionMat0;
		float L_10;
		L_10 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 3, /*hidden argument*/NULL);
		float L_11;
		L_11 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 0, /*hidden argument*/NULL);
		L_9->set_m03_12(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_10)), (float)L_11)));
		// reflectionMat.m10 = (-2F*plane[1]*plane[0]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_12 = ___reflectionMat0;
		float L_13;
		L_13 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 1, /*hidden argument*/NULL);
		float L_14;
		L_14 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 0, /*hidden argument*/NULL);
		L_12->set_m10_1(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_13)), (float)L_14)));
		// reflectionMat.m11 = (1F - 2F*plane[1]*plane[1]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_15 = ___reflectionMat0;
		float L_16;
		L_16 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 1, /*hidden argument*/NULL);
		float L_17;
		L_17 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 1, /*hidden argument*/NULL);
		L_15->set_m11_5(((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_16)), (float)L_17)))));
		// reflectionMat.m12 = (-2F*plane[1]*plane[2]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_18 = ___reflectionMat0;
		float L_19;
		L_19 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 1, /*hidden argument*/NULL);
		float L_20;
		L_20 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 2, /*hidden argument*/NULL);
		L_18->set_m12_9(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_19)), (float)L_20)));
		// reflectionMat.m13 = (-2F*plane[3]*plane[1]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_21 = ___reflectionMat0;
		float L_22;
		L_22 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 3, /*hidden argument*/NULL);
		float L_23;
		L_23 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 1, /*hidden argument*/NULL);
		L_21->set_m13_13(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_22)), (float)L_23)));
		// reflectionMat.m20 = (-2F*plane[2]*plane[0]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_24 = ___reflectionMat0;
		float L_25;
		L_25 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 2, /*hidden argument*/NULL);
		float L_26;
		L_26 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 0, /*hidden argument*/NULL);
		L_24->set_m20_2(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_25)), (float)L_26)));
		// reflectionMat.m21 = (-2F*plane[2]*plane[1]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_27 = ___reflectionMat0;
		float L_28;
		L_28 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 2, /*hidden argument*/NULL);
		float L_29;
		L_29 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 1, /*hidden argument*/NULL);
		L_27->set_m21_6(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_28)), (float)L_29)));
		// reflectionMat.m22 = (1F - 2F*plane[2]*plane[2]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_30 = ___reflectionMat0;
		float L_31;
		L_31 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 2, /*hidden argument*/NULL);
		float L_32;
		L_32 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 2, /*hidden argument*/NULL);
		L_30->set_m22_10(((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_31)), (float)L_32)))));
		// reflectionMat.m23 = (-2F*plane[3]*plane[2]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_33 = ___reflectionMat0;
		float L_34;
		L_34 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 3, /*hidden argument*/NULL);
		float L_35;
		L_35 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 2, /*hidden argument*/NULL);
		L_33->set_m23_14(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_34)), (float)L_35)));
		// reflectionMat.m30 = 0F;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_36 = ___reflectionMat0;
		L_36->set_m30_3((0.0f));
		// reflectionMat.m31 = 0F;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_37 = ___reflectionMat0;
		L_37->set_m31_7((0.0f));
		// reflectionMat.m32 = 0F;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_38 = ___reflectionMat0;
		L_38->set_m32_11((0.0f));
		// reflectionMat.m33 = 1F;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_39 = ___reflectionMat0;
		L_39->set_m33_15((1.0f));
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Runtime.TCP2_PlanarReflection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_PlanarReflection__ctor_m11F009CBC81FC53F700EA1C79D92930610AD0309 (TCP2_PlanarReflection_t304709409819B09FC6623B5982840FC1FE690019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int m_TextureSize = 1024;
		__this->set_m_TextureSize_5(((int32_t)1024));
		// public float m_ClipPlaneOffset = 0.07f;
		__this->set_m_ClipPlaneOffset_6((0.0700000003f));
		// public LayerMask m_ReflectLayers = -1;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0;
		L_0 = LayerMask_op_Implicit_m04FD003A196C7FA5C824D854803493EA31AE58D2((-1), /*hidden argument*/NULL);
		__this->set_m_ReflectLayers_7(L_0);
		// private Hashtable m_ReflectionCameras = new Hashtable(); // Camera -> Camera table
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_1 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91(L_1, /*hidden argument*/NULL);
		__this->set_m_ReflectionCameras_8(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Shader ToonyColorsPro.Runtime.TCP2_RuntimeUtils::GetShaderWithKeywords(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * TCP2_RuntimeUtils_GetShaderWithKeywords_mB9F14D39C52B59CD1A12B9D51C3A933CD5CD7FAF (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m35D683F1FD7FDF886D380D2B4B29C05FB4CBD3AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEEB79F249721ABE5DA6E2434A4CC4248838DE9BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF8F0B568877EAC3A3342752FCF885DCA39305874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3BB840CC2CB4A01F42865D5BC2B1571BB6B73C76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m082FA1DF3F55DB16A1CC64016C47D3A5BA8AEBCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP2_RuntimeUtils_t98E53D9A6E701236E6F2AD6B5895BA9BAFA1A818_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA6F238331EF68017D1ADF8BEADDA03900A1940);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB414C73F9E54AF3AD8F7CFB654C37B3A3B13925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF08D47AA950197FBF22492248D649A8126E68AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB784C0FDB5E2F468943EF04EB13EE0E6135421C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA855702F3E0239B3B0D1F427461543C440733A6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0  V_3;
	memset((&V_3), 0, sizeof(V_3));
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_4 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	int32_t V_8 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B3_0 = 0;
	String_t* G_B6_0 = NULL;
	{
		// var isMobileShader = material.shader != null && material.shader.name.ToLower().Contains("mobile");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ___material0;
		NullCheck(L_0);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1;
		L_1 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = ___material0;
		NullCheck(L_3);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_4;
		L_4 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_6, _stringLiteralFA855702F3E0239B3B0D1F427461543C440733A6, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 0;
	}

IL_002b:
	{
		// var baseName = isMobileShader ? BASE_SHADER_NAME_MOB : BASE_SHADER_NAME;
		if (G_B3_0)
		{
			goto IL_0034;
		}
	}
	{
		G_B6_0 = _stringLiteralDB784C0FDB5E2F468943EF04EB13EE0E6135421C;
		goto IL_0039;
	}

IL_0034:
	{
		G_B6_0 = _stringLiteralCB414C73F9E54AF3AD8F7CFB654C37B3A3B13925;
	}

IL_0039:
	{
		V_0 = G_B6_0;
		// var newShader = baseName;
		String_t* L_8 = V_0;
		V_1 = L_8;
		// foreach (var variantKeywords in ShaderVariants)
		IL2CPP_RUNTIME_CLASS_INIT(TCP2_RuntimeUtils_t98E53D9A6E701236E6F2AD6B5895BA9BAFA1A818_il2cpp_TypeInfo_var);
		List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * L_9 = ((TCP2_RuntimeUtils_t98E53D9A6E701236E6F2AD6B5895BA9BAFA1A818_StaticFields*)il2cpp_codegen_static_fields_for(TCP2_RuntimeUtils_t98E53D9A6E701236E6F2AD6B5895BA9BAFA1A818_il2cpp_TypeInfo_var))->get_ShaderVariants_4();
		NullCheck(L_9);
		Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0  L_10;
		L_10 = List_1_GetEnumerator_m082FA1DF3F55DB16A1CC64016C47D3A5BA8AEBCE(L_9, /*hidden argument*/List_1_GetEnumerator_m082FA1DF3F55DB16A1CC64016C47D3A5BA8AEBCE_RuntimeMethod_var);
		V_3 = L_10;
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a5;
		}

IL_0049:
		{
			// foreach (var variantKeywords in ShaderVariants)
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11;
			L_11 = Enumerator_get_Current_m3BB840CC2CB4A01F42865D5BC2B1571BB6B73C76_inline((Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m3BB840CC2CB4A01F42865D5BC2B1571BB6B73C76_RuntimeMethod_var);
			V_4 = L_11;
			// foreach (var keyword in material.shaderKeywords)
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = ___material0;
			NullCheck(L_12);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13;
			L_13 = Material_get_shaderKeywords_mDAD743C090C3CEE0B2883140B244853D71C5E9E0(L_12, /*hidden argument*/NULL);
			V_5 = L_13;
			V_6 = 0;
			goto IL_009d;
		}

IL_005f:
		{
			// foreach (var keyword in material.shaderKeywords)
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = V_5;
			int32_t L_15 = V_6;
			NullCheck(L_14);
			int32_t L_16 = L_15;
			String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
			V_7 = L_17;
			// for (var i = 1; i < variantKeywords.Length; i++)
			V_8 = 1;
			goto IL_008f;
		}

IL_006b:
		{
			// if (keyword == variantKeywords[i])
			String_t* L_18 = V_7;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = V_4;
			int32_t L_20 = V_8;
			NullCheck(L_19);
			int32_t L_21 = L_20;
			String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
			bool L_23;
			L_23 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_18, L_22, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_0089;
			}
		}

IL_0079:
		{
			// newShader += " " + variantKeywords[0];
			String_t* L_24 = V_1;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = V_4;
			NullCheck(L_25);
			int32_t L_26 = 0;
			String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
			String_t* L_28;
			L_28 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_24, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_27, /*hidden argument*/NULL);
			V_1 = L_28;
		}

IL_0089:
		{
			// for (var i = 1; i < variantKeywords.Length; i++)
			int32_t L_29 = V_8;
			V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		}

IL_008f:
		{
			// for (var i = 1; i < variantKeywords.Length; i++)
			int32_t L_30 = V_8;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = V_4;
			NullCheck(L_31);
			if ((((int32_t)L_30) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))))
			{
				goto IL_006b;
			}
		}

IL_0097:
		{
			int32_t L_32 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		}

IL_009d:
		{
			// foreach (var keyword in material.shaderKeywords)
			int32_t L_33 = V_6;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = V_5;
			NullCheck(L_34);
			if ((((int32_t)L_33) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))))
			{
				goto IL_005f;
			}
		}

IL_00a5:
		{
			// foreach (var variantKeywords in ShaderVariants)
			bool L_35;
			L_35 = Enumerator_MoveNext_mF8F0B568877EAC3A3342752FCF885DCA39305874((Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mF8F0B568877EAC3A3342752FCF885DCA39305874_RuntimeMethod_var);
			if (L_35)
			{
				goto IL_0049;
			}
		}

IL_00ae:
		{
			IL2CPP_LEAVE(0xBE, FINALLY_00b0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b0;
	}

FINALLY_00b0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEEB79F249721ABE5DA6E2434A4CC4248838DE9BE((Enumerator_t01F8256A6DE50EDAF2046B569542026C5E5718D0 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mEEB79F249721ABE5DA6E2434A4CC4248838DE9BE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(176)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(176)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
	}

IL_00be:
	{
		// newShader = newShader.TrimEnd();
		String_t* L_36 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_37;
		L_37 = Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m35D683F1FD7FDF886D380D2B4B29C05FB4CBD3AB_inline(/*hidden argument*/Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m35D683F1FD7FDF886D380D2B4B29C05FB4CBD3AB_RuntimeMethod_var);
		NullCheck(L_36);
		String_t* L_38;
		L_38 = String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E(L_36, L_37, /*hidden argument*/NULL);
		V_1 = L_38;
		// var basePath = BASE_SHADER_PATH;
		V_2 = _stringLiteralCF08D47AA950197FBF22492248D649A8126E68AB;
		// if (newShader != baseName)
		String_t* L_39 = V_1;
		String_t* L_40 = V_0;
		bool L_41;
		L_41 = String_op_Inequality_m45BEBD9C59D474454BD0F4AB6C9A8A2D05D40DBE(L_39, L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_00df;
		}
	}
	{
		// basePath = VARIANT_SHADER_PATH;
		V_2 = _stringLiteralBCA6F238331EF68017D1ADF8BEADDA03900A1940;
	}

IL_00df:
	{
		// var shader = Shader.Find(basePath + newShader);
		String_t* L_42 = V_2;
		String_t* L_43 = V_1;
		String_t* L_44;
		L_44 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(L_42, L_43, /*hidden argument*/NULL);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_45;
		L_45 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_44, /*hidden argument*/NULL);
		// return shader;
		return L_45;
	}
}
// System.Void ToonyColorsPro.Runtime.TCP2_RuntimeUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_RuntimeUtils__cctor_mCA3A1E9E56C105A63E7BB746DB5D93A688467231 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m820FB589FB840B4AC5662EFFC75D30E7DAA422BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP2_RuntimeUtils_t98E53D9A6E701236E6F2AD6B5895BA9BAFA1A818_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055E2BC6FC0C0670695F60037D4D969590DD5A5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C11FFBAB8AA738FEDA8B2E47FCA289F53F977C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25A48893C95318D7E0A508DDFBB672FF3E43922D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32BC544C06225EE440679BE6646FFFE40FC36433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47D462D5B38F0A5177ED612304E062E150044C2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E75A7F6B1D53D770E799FA180B1E92C3BEC8B6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71E2151BF75F822D32529B598E65CB2CF534C8BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral851F9501FFDEDBC611D5201E456668A28E0C7F4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90D06E84F06130A1E294B7100441A92113C7EB43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C9DA00C6A4C83135AB9BFE5F7C7405FF12BFDCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC37459BA213E8B09FB24FA0927B73EA78BDF7C7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD34832E26D345212F1E60233E1603D507C2DB8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9E119F3EF845484CED205A9FD0CBD04AAE8D9B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0A9DCBA20570641426F54838A643EAB380B2A68);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * V_0 = NULL;
	{
		//         private static List<string[]> ShaderVariants = new List<string[]>
		// {
		//     new[]{ "Specular", "TCP2_SPEC" },
		//     new[]{ "Reflection", "TCP2_REFLECTION", "TCP2_REFLECTION_MASKED" },
		//     new[]{ "Matcap", "TCP2_MC" },
		//     new[]{ "Rim", "TCP2_RIM" },
		//     new[]{ "RimOutline", "TCP2_RIMO" },
		//     new[]{ "Outline", "OUTLINES" },
		//     new[]{ "OutlineBlending", "OUTLINE_BLENDING" }
		// };
		List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * L_0 = (List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 *)il2cpp_codegen_object_new(List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09_il2cpp_TypeInfo_var);
		List_1__ctor_m820FB589FB840B4AC5662EFFC75D30E7DAA422BA(L_0, /*hidden argument*/List_1__ctor_m820FB589FB840B4AC5662EFFC75D30E7DAA422BA_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * L_1 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral32BC544C06225EE440679BE6646FFFE40FC36433);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral32BC544C06225EE440679BE6646FFFE40FC36433);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral055E2BC6FC0C0670695F60037D4D969590DD5A5E);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral055E2BC6FC0C0670695F60037D4D969590DD5A5E);
		NullCheck(L_1);
		List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA(L_1, L_4, /*hidden argument*/List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA_RuntimeMethod_var);
		List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * L_5 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral71E2151BF75F822D32529B598E65CB2CF534C8BD);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral71E2151BF75F822D32529B598E65CB2CF534C8BD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral6E75A7F6B1D53D770E799FA180B1E92C3BEC8B6B);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral6E75A7F6B1D53D770E799FA180B1E92C3BEC8B6B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral9C9DA00C6A4C83135AB9BFE5F7C7405FF12BFDCE);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9C9DA00C6A4C83135AB9BFE5F7C7405FF12BFDCE);
		NullCheck(L_5);
		List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA(L_5, L_9, /*hidden argument*/List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA_RuntimeMethod_var);
		List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * L_10 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral90D06E84F06130A1E294B7100441A92113C7EB43);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral90D06E84F06130A1E294B7100441A92113C7EB43);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralC37459BA213E8B09FB24FA0927B73EA78BDF7C7D);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC37459BA213E8B09FB24FA0927B73EA78BDF7C7D);
		NullCheck(L_10);
		List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA(L_10, L_13, /*hidden argument*/List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA_RuntimeMethod_var);
		List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * L_14 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral25A48893C95318D7E0A508DDFBB672FF3E43922D);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral25A48893C95318D7E0A508DDFBB672FF3E43922D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralE0A9DCBA20570641426F54838A643EAB380B2A68);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE0A9DCBA20570641426F54838A643EAB380B2A68);
		NullCheck(L_14);
		List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA(L_14, L_17, /*hidden argument*/List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA_RuntimeMethod_var);
		List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * L_18 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralD9E119F3EF845484CED205A9FD0CBD04AAE8D9B2);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD9E119F3EF845484CED205A9FD0CBD04AAE8D9B2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral851F9501FFDEDBC611D5201E456668A28E0C7F4B);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral851F9501FFDEDBC611D5201E456668A28E0C7F4B);
		NullCheck(L_18);
		List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA(L_18, L_21, /*hidden argument*/List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA_RuntimeMethod_var);
		List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * L_22 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral47D462D5B38F0A5177ED612304E062E150044C2F);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral47D462D5B38F0A5177ED612304E062E150044C2F);
		NullCheck(L_22);
		List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA(L_22, L_25, /*hidden argument*/List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA_RuntimeMethod_var);
		List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * L_26 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteralD34832E26D345212F1E60233E1603D507C2DB8B1);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD34832E26D345212F1E60233E1603D507C2DB8B1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral0C11FFBAB8AA738FEDA8B2E47FCA289F53F977C8);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral0C11FFBAB8AA738FEDA8B2E47FCA289F53F977C8);
		NullCheck(L_26);
		List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA(L_26, L_29, /*hidden argument*/List_1_Add_m7ACAB7B4D1BB5F4D83F5038E28A0F163384DDCBA_RuntimeMethod_var);
		List_1_t7FD9CE649EED35E489ACE9FA768F3547A3BEFD09 * L_30 = V_0;
		((TCP2_RuntimeUtils_t98E53D9A6E701236E6F2AD6B5895BA9BAFA1A818_StaticFields*)il2cpp_codegen_static_fields_for(TCP2_RuntimeUtils_t98E53D9A6E701236E6F2AD6B5895BA9BAFA1A818_il2cpp_TypeInfo_var))->set_ShaderVariants_4(L_30);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ToonyColorsPro.Runtime.TCP2_ShaderUpdateUnityTime::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_ShaderUpdateUnityTime_LateUpdate_mFB94689DA3B36B8B4BB73CC3D8B31B355548010C (TCP2_ShaderUpdateUnityTime_t132EEEA1FC7623D16FCBAA81B293D2998A154FBC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral716F6BFC32ABF52915936AA6B0445724BBA4451D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Shader.SetGlobalFloat("unityTime", Time.time);
		float L_0;
		L_0 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		Shader_SetGlobalFloat_mACF0D8A82FD29498BE757CC1D132BBD411078190(_stringLiteral716F6BFC32ABF52915936AA6B0445724BBA4451D, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Runtime.TCP2_ShaderUpdateUnityTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_ShaderUpdateUnityTime__ctor_mF503868F13CE0AC5D40CA6F52F30088EC0C8AF4C (TCP2_ShaderUpdateUnityTime_t132EEEA1FC7623D16FCBAA81B293D2998A154FBC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m81A33FB5E8269E1A21554ECCB1639019C708A1CF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* Array_Empty_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m35D683F1FD7FDF886D380D2B4B29C05FB4CBD3AB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ((EmptyArray_1_t8C9D46673F64ABE360DE6F02C2BA0A5566DC9FDC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_0;
	}
}
