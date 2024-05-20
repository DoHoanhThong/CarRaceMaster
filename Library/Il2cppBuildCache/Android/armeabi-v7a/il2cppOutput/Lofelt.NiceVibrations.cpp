#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Timers.ElapsedEventArgs
struct ElapsedEventArgs_tEB7D552F06F480B5F4B445AB1F364FB5474F2FFB;
// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// Lofelt.NiceVibrations.HapticClip
struct HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F;
// Lofelt.NiceVibrations.HapticReceiver
struct HapticReceiver_t49C33383A9A4D17497B2469F0B25FAF6B80241C2;
// Lofelt.NiceVibrations.HapticSource
struct HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.ComponentModel.ISite
struct ISite_tC1E55EC6FA743BE8C9D79C838308E788B90C8790;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t95FF063A5295003D96C3C680EDF773DDF830DBF9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Timers.Timer
struct Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Lofelt.NiceVibrations.GamepadRumbler/<>c
struct U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B;
// Lofelt.NiceVibrations.GamepadRumbler/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t85FE944063BAEC0D51718C85639D6889BD7B45DD;
// Lofelt.NiceVibrations.HapticController/<>c
struct U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F;
// Lofelt.NiceVibrations.HapticController/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t89AAAA2C31EE49CD9361159A776B9819C132B715;
// Lofelt.NiceVibrations.HapticSource/<>c
struct U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass27_0_t89AAAA2C31EE49CD9361159A776B9819C132B715_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t85FE944063BAEC0D51718C85639D6889BD7B45DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D____5F0774E0B9EA6C3443748D1474FD43A0B3A08CCEF3C2B9F8E15F3F7D43BD4ACC_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D____B30613B9E077778CFC78B406A72E83D147142167568E0E0D6622F3E876B22D37_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D____EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D____F6CA0AA9C0FC9679D7F39A00D68E861941FF51D0434CDB22D33B4163AA27F2AC_3_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B;
IL2CPP_EXTERN_C String_t* _stringLiteral11A4FE01BF2A9FE8159B9EA16D64D70159683C53;
IL2CPP_EXTERN_C String_t* _stringLiteral1590B1DD196F96A11A36B50B360EB57178EEF954;
IL2CPP_EXTERN_C String_t* _stringLiteral1A5A4A501BAA6FD3ED4EBE9BFC926066FCBD5ABE;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral41122A25B762B3B469C8461B4F6196CC75D3EF6A;
IL2CPP_EXTERN_C String_t* _stringLiteral4B481BD414EE082CA5F33A7513CDB2D68ADAF594;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8;
IL2CPP_EXTERN_C String_t* _stringLiteral61DD0B794D236B1414F02F76E8AF03EDCDC5FD17;
IL2CPP_EXTERN_C String_t* _stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7;
IL2CPP_EXTERN_C String_t* _stringLiteral8B63886015A4191332EA3F977B1146A0B78A6E82;
IL2CPP_EXTERN_C String_t* _stringLiteralA2135703B40B414C092DF068E8FAA55E46FFB30B;
IL2CPP_EXTERN_C String_t* _stringLiteralB390D5019ED8691FF161C85B9EC17FE9D19763EF;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC444FDC3B86DC5349F7224E5C2605245C0859BA1;
IL2CPP_EXTERN_C String_t* _stringLiteralC5CF167CD5E0AB4195BC6B1A4DEDCCEEA1E9E954;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E079158CE53A6B1B96591E1222924C388B17C2;
IL2CPP_EXTERN_C String_t* _stringLiteralC7E3AEAEF7966AC50BEA811A1C12092709305E19;
IL2CPP_EXTERN_C String_t* _stringLiteralCA44DFF94D6AA7697C8ADB77FB3A367BA465B869;
IL2CPP_EXTERN_C String_t* _stringLiteralD3CF9BBC2C80F53F057554706A4681C9C5301858;
IL2CPP_EXTERN_C String_t* _stringLiteralD8F8B953FE2D84FB48669F1FF532EB963C0006E0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m068E70BCBA9EACF8129B1C9F711D3132EB6C9061_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3167F97B4EFA74B4D583E7D2588E3E8386091FF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitU3Eb__27_1_mF25DC2AB3A303AF871DAAD5F02F546E4720C4436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitU3Eb__8_1_mB7D9BF77670218D1E9D69D4E606EAE74A7362B37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__22_0_m8F9720455C09F03318126B234BB1165C37B9F94E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__22_1_m8E42C9A2149C51CF31F4CDBBB94453A7D4BF7FC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass27_0_U3CInitU3Eb__0_mFAE4814163D4551AED798B522BB547D05F720430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CInitU3Eb__0_m3315DC0FCA2E027F2921B0C687BC9C9D38EDA374_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t71511090035E95DE2AA6F4D2FE16E17CD8A60BC6 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// Lofelt.NiceVibrations.LofeltHaptics
struct LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192  : public RuntimeObject
{
public:

public:
};

struct LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields
{
public:
	// UnityEngine.AndroidJavaObject Lofelt.NiceVibrations.LofeltHaptics::lofeltHaptics
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___lofeltHaptics_0;
	// UnityEngine.AndroidJavaObject Lofelt.NiceVibrations.LofeltHaptics::hapticPatterns
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___hapticPatterns_1;
	// System.Int64 Lofelt.NiceVibrations.LofeltHaptics::nativeController
	int64_t ___nativeController_2;

public:
	inline static int32_t get_offset_of_lofeltHaptics_0() { return static_cast<int32_t>(offsetof(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields, ___lofeltHaptics_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_lofeltHaptics_0() const { return ___lofeltHaptics_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_lofeltHaptics_0() { return &___lofeltHaptics_0; }
	inline void set_lofeltHaptics_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___lofeltHaptics_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lofeltHaptics_0), (void*)value);
	}

	inline static int32_t get_offset_of_hapticPatterns_1() { return static_cast<int32_t>(offsetof(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields, ___hapticPatterns_1)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_hapticPatterns_1() const { return ___hapticPatterns_1; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_hapticPatterns_1() { return &___hapticPatterns_1; }
	inline void set_hapticPatterns_1(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___hapticPatterns_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hapticPatterns_1), (void*)value);
	}

	inline static int32_t get_offset_of_nativeController_2() { return static_cast<int32_t>(offsetof(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields, ___nativeController_2)); }
	inline int64_t get_nativeController_2() const { return ___nativeController_2; }
	inline int64_t* get_address_of_nativeController_2() { return &___nativeController_2; }
	inline void set_nativeController_2(int64_t value)
	{
		___nativeController_2 = value;
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
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

// Lofelt.NiceVibrations.GamepadRumbler/<>c
struct U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_StaticFields
{
public:
	// Lofelt.NiceVibrations.GamepadRumbler/<>c Lofelt.NiceVibrations.GamepadRumbler/<>c::<>9
	U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B * ___U3CU3E9_0;
	// System.Threading.SendOrPostCallback Lofelt.NiceVibrations.GamepadRumbler/<>c::<>9__8_1
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___U3CU3E9__8_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_StaticFields, ___U3CU3E9__8_1_1)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_U3CU3E9__8_1_1() const { return ___U3CU3E9__8_1_1; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_U3CU3E9__8_1_1() { return &___U3CU3E9__8_1_1; }
	inline void set_U3CU3E9__8_1_1(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___U3CU3E9__8_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_1_1), (void*)value);
	}
};


// Lofelt.NiceVibrations.GamepadRumbler/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t85FE944063BAEC0D51718C85639D6889BD7B45DD  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContext Lofelt.NiceVibrations.GamepadRumbler/<>c__DisplayClass8_0::syncContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___syncContext_0;

public:
	inline static int32_t get_offset_of_syncContext_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t85FE944063BAEC0D51718C85639D6889BD7B45DD, ___syncContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_syncContext_0() const { return ___syncContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_syncContext_0() { return &___syncContext_0; }
	inline void set_syncContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___syncContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncContext_0), (void*)value);
	}
};


// Lofelt.NiceVibrations.HapticController/<>c
struct U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_StaticFields
{
public:
	// Lofelt.NiceVibrations.HapticController/<>c Lofelt.NiceVibrations.HapticController/<>c::<>9
	U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F * ___U3CU3E9_0;
	// System.Threading.SendOrPostCallback Lofelt.NiceVibrations.HapticController/<>c::<>9__27_1
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___U3CU3E9__27_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__27_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_StaticFields, ___U3CU3E9__27_1_1)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_U3CU3E9__27_1_1() const { return ___U3CU3E9__27_1_1; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_U3CU3E9__27_1_1() { return &___U3CU3E9__27_1_1; }
	inline void set_U3CU3E9__27_1_1(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___U3CU3E9__27_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__27_1_1), (void*)value);
	}
};


// Lofelt.NiceVibrations.HapticController/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t89AAAA2C31EE49CD9361159A776B9819C132B715  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContext Lofelt.NiceVibrations.HapticController/<>c__DisplayClass27_0::syncContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___syncContext_0;

public:
	inline static int32_t get_offset_of_syncContext_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_t89AAAA2C31EE49CD9361159A776B9819C132B715, ___syncContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_syncContext_0() const { return ___syncContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_syncContext_0() { return &___syncContext_0; }
	inline void set_syncContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___syncContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncContext_0), (void*)value);
	}
};


// Lofelt.NiceVibrations.HapticSource/<>c
struct U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED_StaticFields
{
public:
	// Lofelt.NiceVibrations.HapticSource/<>c Lofelt.NiceVibrations.HapticSource/<>c::<>9
	U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.ComponentModel.Component
struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_2), (void*)value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___events_3)); }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_3), (void*)value);
	}
};

struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_1), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
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

// Lofelt.NiceVibrations.GamepadRumble
struct GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045 
{
public:
	// System.Int32[] Lofelt.NiceVibrations.GamepadRumble::durationsMs
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___durationsMs_0;
	// System.Int32 Lofelt.NiceVibrations.GamepadRumble::totalDurationMs
	int32_t ___totalDurationMs_1;
	// System.Single[] Lofelt.NiceVibrations.GamepadRumble::lowFrequencyMotorSpeeds
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lowFrequencyMotorSpeeds_2;
	// System.Single[] Lofelt.NiceVibrations.GamepadRumble::highFrequencyMotorSpeeds
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___highFrequencyMotorSpeeds_3;

public:
	inline static int32_t get_offset_of_durationsMs_0() { return static_cast<int32_t>(offsetof(GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045, ___durationsMs_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_durationsMs_0() const { return ___durationsMs_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_durationsMs_0() { return &___durationsMs_0; }
	inline void set_durationsMs_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___durationsMs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___durationsMs_0), (void*)value);
	}

	inline static int32_t get_offset_of_totalDurationMs_1() { return static_cast<int32_t>(offsetof(GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045, ___totalDurationMs_1)); }
	inline int32_t get_totalDurationMs_1() const { return ___totalDurationMs_1; }
	inline int32_t* get_address_of_totalDurationMs_1() { return &___totalDurationMs_1; }
	inline void set_totalDurationMs_1(int32_t value)
	{
		___totalDurationMs_1 = value;
	}

	inline static int32_t get_offset_of_lowFrequencyMotorSpeeds_2() { return static_cast<int32_t>(offsetof(GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045, ___lowFrequencyMotorSpeeds_2)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_lowFrequencyMotorSpeeds_2() const { return ___lowFrequencyMotorSpeeds_2; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_lowFrequencyMotorSpeeds_2() { return &___lowFrequencyMotorSpeeds_2; }
	inline void set_lowFrequencyMotorSpeeds_2(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___lowFrequencyMotorSpeeds_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lowFrequencyMotorSpeeds_2), (void*)value);
	}

	inline static int32_t get_offset_of_highFrequencyMotorSpeeds_3() { return static_cast<int32_t>(offsetof(GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045, ___highFrequencyMotorSpeeds_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_highFrequencyMotorSpeeds_3() const { return ___highFrequencyMotorSpeeds_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_highFrequencyMotorSpeeds_3() { return &___highFrequencyMotorSpeeds_3; }
	inline void set_highFrequencyMotorSpeeds_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___highFrequencyMotorSpeeds_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highFrequencyMotorSpeeds_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Lofelt.NiceVibrations.GamepadRumble
struct GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___durationsMs_0;
	int32_t ___totalDurationMs_1;
	Il2CppSafeArray/*NONE*/* ___lowFrequencyMotorSpeeds_2;
	Il2CppSafeArray/*NONE*/* ___highFrequencyMotorSpeeds_3;
};
// Native definition for COM marshalling of Lofelt.NiceVibrations.GamepadRumble
struct GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___durationsMs_0;
	int32_t ___totalDurationMs_1;
	Il2CppSafeArray/*NONE*/* ___lowFrequencyMotorSpeeds_2;
	Il2CppSafeArray/*NONE*/* ___highFrequencyMotorSpeeds_3;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_t856C280F2AA8B984C37E70EC10EB33043129EC65 
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
		uint8_t __StaticArrayInitTypeSizeU3D16_t856C280F2AA8B984C37E70EC10EB33043129EC65__padding[16];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_t80568247D5976431FBBA9E378F1CE7147360F350 
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
		uint8_t __StaticArrayInitTypeSizeU3D32_t80568247D5976431FBBA9E378F1CE7147360F350__padding[32];
	};

public:
};
#pragma pack(pop, tp)


// Lofelt.NiceVibrations.HapticPatterns/Pattern
struct Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E 
{
public:
	// System.Single[] Lofelt.NiceVibrations.HapticPatterns/Pattern::time
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___time_0;
	// System.Single[] Lofelt.NiceVibrations.HapticPatterns/Pattern::amplitude
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___amplitude_1;
	// System.String Lofelt.NiceVibrations.HapticPatterns/Pattern::clip
	String_t* ___clip_2;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E, ___time_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_time_0() const { return ___time_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___time_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___time_0), (void*)value);
	}

	inline static int32_t get_offset_of_amplitude_1() { return static_cast<int32_t>(offsetof(Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E, ___amplitude_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_amplitude_1() const { return ___amplitude_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_amplitude_1() { return &___amplitude_1; }
	inline void set_amplitude_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___amplitude_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___amplitude_1), (void*)value);
	}

	inline static int32_t get_offset_of_clip_2() { return static_cast<int32_t>(offsetof(Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E, ___clip_2)); }
	inline String_t* get_clip_2() const { return ___clip_2; }
	inline String_t** get_address_of_clip_2() { return &___clip_2; }
	inline void set_clip_2(String_t* value)
	{
		___clip_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clip_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Lofelt.NiceVibrations.HapticPatterns/Pattern
struct Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___time_0;
	Il2CppSafeArray/*NONE*/* ___amplitude_1;
	char* ___clip_2;
};
// Native definition for COM marshalling of Lofelt.NiceVibrations.HapticPatterns/Pattern
struct Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___time_0;
	Il2CppSafeArray/*NONE*/* ___amplitude_1;
	Il2CppChar* ___clip_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5F0774E0B9EA6C3443748D1474FD43A0B3A08CCEF3C2B9F8E15F3F7D43BD4ACC
	__StaticArrayInitTypeSizeU3D32_t80568247D5976431FBBA9E378F1CE7147360F350  ___5F0774E0B9EA6C3443748D1474FD43A0B3A08CCEF3C2B9F8E15F3F7D43BD4ACC_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B30613B9E077778CFC78B406A72E83D147142167568E0E0D6622F3E876B22D37
	__StaticArrayInitTypeSizeU3D16_t856C280F2AA8B984C37E70EC10EB33043129EC65  ___B30613B9E077778CFC78B406A72E83D147142167568E0E0D6622F3E876B22D37_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2
	__StaticArrayInitTypeSizeU3D32_t80568247D5976431FBBA9E378F1CE7147360F350  ___EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::F6CA0AA9C0FC9679D7F39A00D68E861941FF51D0434CDB22D33B4163AA27F2AC
	__StaticArrayInitTypeSizeU3D16_t856C280F2AA8B984C37E70EC10EB33043129EC65  ___F6CA0AA9C0FC9679D7F39A00D68E861941FF51D0434CDB22D33B4163AA27F2AC_3;

public:
	inline static int32_t get_offset_of_U35F0774E0B9EA6C3443748D1474FD43A0B3A08CCEF3C2B9F8E15F3F7D43BD4ACC_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D_StaticFields, ___5F0774E0B9EA6C3443748D1474FD43A0B3A08CCEF3C2B9F8E15F3F7D43BD4ACC_0)); }
	inline __StaticArrayInitTypeSizeU3D32_t80568247D5976431FBBA9E378F1CE7147360F350  get_U35F0774E0B9EA6C3443748D1474FD43A0B3A08CCEF3C2B9F8E15F3F7D43BD4ACC_0() const { return ___5F0774E0B9EA6C3443748D1474FD43A0B3A08CCEF3C2B9F8E15F3F7D43BD4ACC_0; }
	inline __StaticArrayInitTypeSizeU3D32_t80568247D5976431FBBA9E378F1CE7147360F350 * get_address_of_U35F0774E0B9EA6C3443748D1474FD43A0B3A08CCEF3C2B9F8E15F3F7D43BD4ACC_0() { return &___5F0774E0B9EA6C3443748D1474FD43A0B3A08CCEF3C2B9F8E15F3F7D43BD4ACC_0; }
	inline void set_U35F0774E0B9EA6C3443748D1474FD43A0B3A08CCEF3C2B9F8E15F3F7D43BD4ACC_0(__StaticArrayInitTypeSizeU3D32_t80568247D5976431FBBA9E378F1CE7147360F350  value)
	{
		___5F0774E0B9EA6C3443748D1474FD43A0B3A08CCEF3C2B9F8E15F3F7D43BD4ACC_0 = value;
	}

	inline static int32_t get_offset_of_B30613B9E077778CFC78B406A72E83D147142167568E0E0D6622F3E876B22D37_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D_StaticFields, ___B30613B9E077778CFC78B406A72E83D147142167568E0E0D6622F3E876B22D37_1)); }
	inline __StaticArrayInitTypeSizeU3D16_t856C280F2AA8B984C37E70EC10EB33043129EC65  get_B30613B9E077778CFC78B406A72E83D147142167568E0E0D6622F3E876B22D37_1() const { return ___B30613B9E077778CFC78B406A72E83D147142167568E0E0D6622F3E876B22D37_1; }
	inline __StaticArrayInitTypeSizeU3D16_t856C280F2AA8B984C37E70EC10EB33043129EC65 * get_address_of_B30613B9E077778CFC78B406A72E83D147142167568E0E0D6622F3E876B22D37_1() { return &___B30613B9E077778CFC78B406A72E83D147142167568E0E0D6622F3E876B22D37_1; }
	inline void set_B30613B9E077778CFC78B406A72E83D147142167568E0E0D6622F3E876B22D37_1(__StaticArrayInitTypeSizeU3D16_t856C280F2AA8B984C37E70EC10EB33043129EC65  value)
	{
		___B30613B9E077778CFC78B406A72E83D147142167568E0E0D6622F3E876B22D37_1 = value;
	}

	inline static int32_t get_offset_of_EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D_StaticFields, ___EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_2)); }
	inline __StaticArrayInitTypeSizeU3D32_t80568247D5976431FBBA9E378F1CE7147360F350  get_EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_2() const { return ___EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_2; }
	inline __StaticArrayInitTypeSizeU3D32_t80568247D5976431FBBA9E378F1CE7147360F350 * get_address_of_EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_2() { return &___EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_2; }
	inline void set_EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_2(__StaticArrayInitTypeSizeU3D32_t80568247D5976431FBBA9E378F1CE7147360F350  value)
	{
		___EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_2 = value;
	}

	inline static int32_t get_offset_of_F6CA0AA9C0FC9679D7F39A00D68E861941FF51D0434CDB22D33B4163AA27F2AC_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D_StaticFields, ___F6CA0AA9C0FC9679D7F39A00D68E861941FF51D0434CDB22D33B4163AA27F2AC_3)); }
	inline __StaticArrayInitTypeSizeU3D16_t856C280F2AA8B984C37E70EC10EB33043129EC65  get_F6CA0AA9C0FC9679D7F39A00D68E861941FF51D0434CDB22D33B4163AA27F2AC_3() const { return ___F6CA0AA9C0FC9679D7F39A00D68E861941FF51D0434CDB22D33B4163AA27F2AC_3; }
	inline __StaticArrayInitTypeSizeU3D16_t856C280F2AA8B984C37E70EC10EB33043129EC65 * get_address_of_F6CA0AA9C0FC9679D7F39A00D68E861941FF51D0434CDB22D33B4163AA27F2AC_3() { return &___F6CA0AA9C0FC9679D7F39A00D68E861941FF51D0434CDB22D33B4163AA27F2AC_3; }
	inline void set_F6CA0AA9C0FC9679D7F39A00D68E861941FF51D0434CDB22D33B4163AA27F2AC_3(__StaticArrayInitTypeSizeU3D16_t856C280F2AA8B984C37E70EC10EB33043129EC65  value)
	{
		___F6CA0AA9C0FC9679D7F39A00D68E861941FF51D0434CDB22D33B4163AA27F2AC_3 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Timers.ElapsedEventArgs
struct ElapsedEventArgs_tEB7D552F06F480B5F4B445AB1F364FB5474F2FFB  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.DateTime System.Timers.ElapsedEventArgs::time
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___time_1;

public:
	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(ElapsedEventArgs_tEB7D552F06F480B5F4B445AB1F364FB5474F2FFB, ___time_1)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_time_1() const { return ___time_1; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___time_1 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Lofelt.NiceVibrations.GamepadRumbler
struct GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE  : public RuntimeObject
{
public:

public:
};

struct GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields
{
public:
	// Lofelt.NiceVibrations.GamepadRumble Lofelt.NiceVibrations.GamepadRumbler::loadedRumble
	GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  ___loadedRumble_0;
	// System.Boolean Lofelt.NiceVibrations.GamepadRumbler::rumbleLoaded
	bool ___rumbleLoaded_1;
	// System.Timers.Timer Lofelt.NiceVibrations.GamepadRumbler::rumbleTimer
	Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * ___rumbleTimer_2;
	// System.Int32 Lofelt.NiceVibrations.GamepadRumbler::rumbleIndex
	int32_t ___rumbleIndex_3;
	// System.Int64 Lofelt.NiceVibrations.GamepadRumbler::rumblePositionMs
	int64_t ___rumblePositionMs_4;
	// System.Diagnostics.Stopwatch Lofelt.NiceVibrations.GamepadRumbler::playbackWatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___playbackWatch_5;
	// System.Single Lofelt.NiceVibrations.GamepadRumbler::lowFrequencyMotorSpeedMultiplication
	float ___lowFrequencyMotorSpeedMultiplication_6;
	// System.Single Lofelt.NiceVibrations.GamepadRumbler::highFrequencyMotorSpeedMultiplication
	float ___highFrequencyMotorSpeedMultiplication_7;

public:
	inline static int32_t get_offset_of_loadedRumble_0() { return static_cast<int32_t>(offsetof(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields, ___loadedRumble_0)); }
	inline GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  get_loadedRumble_0() const { return ___loadedRumble_0; }
	inline GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045 * get_address_of_loadedRumble_0() { return &___loadedRumble_0; }
	inline void set_loadedRumble_0(GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  value)
	{
		___loadedRumble_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___loadedRumble_0))->___durationsMs_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___loadedRumble_0))->___lowFrequencyMotorSpeeds_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___loadedRumble_0))->___highFrequencyMotorSpeeds_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_rumbleLoaded_1() { return static_cast<int32_t>(offsetof(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields, ___rumbleLoaded_1)); }
	inline bool get_rumbleLoaded_1() const { return ___rumbleLoaded_1; }
	inline bool* get_address_of_rumbleLoaded_1() { return &___rumbleLoaded_1; }
	inline void set_rumbleLoaded_1(bool value)
	{
		___rumbleLoaded_1 = value;
	}

	inline static int32_t get_offset_of_rumbleTimer_2() { return static_cast<int32_t>(offsetof(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields, ___rumbleTimer_2)); }
	inline Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * get_rumbleTimer_2() const { return ___rumbleTimer_2; }
	inline Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE ** get_address_of_rumbleTimer_2() { return &___rumbleTimer_2; }
	inline void set_rumbleTimer_2(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * value)
	{
		___rumbleTimer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rumbleTimer_2), (void*)value);
	}

	inline static int32_t get_offset_of_rumbleIndex_3() { return static_cast<int32_t>(offsetof(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields, ___rumbleIndex_3)); }
	inline int32_t get_rumbleIndex_3() const { return ___rumbleIndex_3; }
	inline int32_t* get_address_of_rumbleIndex_3() { return &___rumbleIndex_3; }
	inline void set_rumbleIndex_3(int32_t value)
	{
		___rumbleIndex_3 = value;
	}

	inline static int32_t get_offset_of_rumblePositionMs_4() { return static_cast<int32_t>(offsetof(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields, ___rumblePositionMs_4)); }
	inline int64_t get_rumblePositionMs_4() const { return ___rumblePositionMs_4; }
	inline int64_t* get_address_of_rumblePositionMs_4() { return &___rumblePositionMs_4; }
	inline void set_rumblePositionMs_4(int64_t value)
	{
		___rumblePositionMs_4 = value;
	}

	inline static int32_t get_offset_of_playbackWatch_5() { return static_cast<int32_t>(offsetof(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields, ___playbackWatch_5)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_playbackWatch_5() const { return ___playbackWatch_5; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_playbackWatch_5() { return &___playbackWatch_5; }
	inline void set_playbackWatch_5(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___playbackWatch_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playbackWatch_5), (void*)value);
	}

	inline static int32_t get_offset_of_lowFrequencyMotorSpeedMultiplication_6() { return static_cast<int32_t>(offsetof(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields, ___lowFrequencyMotorSpeedMultiplication_6)); }
	inline float get_lowFrequencyMotorSpeedMultiplication_6() const { return ___lowFrequencyMotorSpeedMultiplication_6; }
	inline float* get_address_of_lowFrequencyMotorSpeedMultiplication_6() { return &___lowFrequencyMotorSpeedMultiplication_6; }
	inline void set_lowFrequencyMotorSpeedMultiplication_6(float value)
	{
		___lowFrequencyMotorSpeedMultiplication_6 = value;
	}

	inline static int32_t get_offset_of_highFrequencyMotorSpeedMultiplication_7() { return static_cast<int32_t>(offsetof(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields, ___highFrequencyMotorSpeedMultiplication_7)); }
	inline float get_highFrequencyMotorSpeedMultiplication_7() const { return ___highFrequencyMotorSpeedMultiplication_7; }
	inline float* get_address_of_highFrequencyMotorSpeedMultiplication_7() { return &___highFrequencyMotorSpeedMultiplication_7; }
	inline void set_highFrequencyMotorSpeedMultiplication_7(float value)
	{
		___highFrequencyMotorSpeedMultiplication_7 = value;
	}
};


// Lofelt.NiceVibrations.HapticPatterns
struct HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578  : public RuntimeObject
{
public:

public:
};

struct HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields
{
public:
	// System.String Lofelt.NiceVibrations.HapticPatterns::emphasisTemplate
	String_t* ___emphasisTemplate_0;
	// System.String Lofelt.NiceVibrations.HapticPatterns::constantTemplate
	String_t* ___constantTemplate_1;
	// System.String Lofelt.NiceVibrations.HapticPatterns::patternTemplate
	String_t* ___patternTemplate_2;
	// System.Globalization.NumberFormatInfo Lofelt.NiceVibrations.HapticPatterns::numberFormat
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numberFormat_3;
	// Lofelt.NiceVibrations.HapticPatterns/Pattern Lofelt.NiceVibrations.HapticPatterns::Selection
	Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  ___Selection_4;
	// Lofelt.NiceVibrations.HapticPatterns/Pattern Lofelt.NiceVibrations.HapticPatterns::Light
	Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  ___Light_5;
	// Lofelt.NiceVibrations.HapticPatterns/Pattern Lofelt.NiceVibrations.HapticPatterns::Medium
	Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  ___Medium_6;
	// Lofelt.NiceVibrations.HapticPatterns/Pattern Lofelt.NiceVibrations.HapticPatterns::Heavy
	Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  ___Heavy_7;
	// Lofelt.NiceVibrations.HapticPatterns/Pattern Lofelt.NiceVibrations.HapticPatterns::Rigid
	Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  ___Rigid_8;
	// Lofelt.NiceVibrations.HapticPatterns/Pattern Lofelt.NiceVibrations.HapticPatterns::Soft
	Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  ___Soft_9;
	// Lofelt.NiceVibrations.HapticPatterns/Pattern Lofelt.NiceVibrations.HapticPatterns::Success
	Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  ___Success_10;
	// Lofelt.NiceVibrations.HapticPatterns/Pattern Lofelt.NiceVibrations.HapticPatterns::Failure
	Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  ___Failure_11;
	// Lofelt.NiceVibrations.HapticPatterns/Pattern Lofelt.NiceVibrations.HapticPatterns::Warning
	Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  ___Warning_12;

public:
	inline static int32_t get_offset_of_emphasisTemplate_0() { return static_cast<int32_t>(offsetof(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields, ___emphasisTemplate_0)); }
	inline String_t* get_emphasisTemplate_0() const { return ___emphasisTemplate_0; }
	inline String_t** get_address_of_emphasisTemplate_0() { return &___emphasisTemplate_0; }
	inline void set_emphasisTemplate_0(String_t* value)
	{
		___emphasisTemplate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emphasisTemplate_0), (void*)value);
	}

	inline static int32_t get_offset_of_constantTemplate_1() { return static_cast<int32_t>(offsetof(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields, ___constantTemplate_1)); }
	inline String_t* get_constantTemplate_1() const { return ___constantTemplate_1; }
	inline String_t** get_address_of_constantTemplate_1() { return &___constantTemplate_1; }
	inline void set_constantTemplate_1(String_t* value)
	{
		___constantTemplate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constantTemplate_1), (void*)value);
	}

	inline static int32_t get_offset_of_patternTemplate_2() { return static_cast<int32_t>(offsetof(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields, ___patternTemplate_2)); }
	inline String_t* get_patternTemplate_2() const { return ___patternTemplate_2; }
	inline String_t** get_address_of_patternTemplate_2() { return &___patternTemplate_2; }
	inline void set_patternTemplate_2(String_t* value)
	{
		___patternTemplate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___patternTemplate_2), (void*)value);
	}

	inline static int32_t get_offset_of_numberFormat_3() { return static_cast<int32_t>(offsetof(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields, ___numberFormat_3)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numberFormat_3() const { return ___numberFormat_3; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numberFormat_3() { return &___numberFormat_3; }
	inline void set_numberFormat_3(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numberFormat_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberFormat_3), (void*)value);
	}

	inline static int32_t get_offset_of_Selection_4() { return static_cast<int32_t>(offsetof(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields, ___Selection_4)); }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  get_Selection_4() const { return ___Selection_4; }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E * get_address_of_Selection_4() { return &___Selection_4; }
	inline void set_Selection_4(Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  value)
	{
		___Selection_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Selection_4))->___time_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Selection_4))->___amplitude_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Selection_4))->___clip_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Light_5() { return static_cast<int32_t>(offsetof(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields, ___Light_5)); }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  get_Light_5() const { return ___Light_5; }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E * get_address_of_Light_5() { return &___Light_5; }
	inline void set_Light_5(Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  value)
	{
		___Light_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Light_5))->___time_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Light_5))->___amplitude_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Light_5))->___clip_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Medium_6() { return static_cast<int32_t>(offsetof(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields, ___Medium_6)); }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  get_Medium_6() const { return ___Medium_6; }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E * get_address_of_Medium_6() { return &___Medium_6; }
	inline void set_Medium_6(Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  value)
	{
		___Medium_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Medium_6))->___time_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Medium_6))->___amplitude_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Medium_6))->___clip_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Heavy_7() { return static_cast<int32_t>(offsetof(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields, ___Heavy_7)); }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  get_Heavy_7() const { return ___Heavy_7; }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E * get_address_of_Heavy_7() { return &___Heavy_7; }
	inline void set_Heavy_7(Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  value)
	{
		___Heavy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Heavy_7))->___time_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Heavy_7))->___amplitude_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Heavy_7))->___clip_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Rigid_8() { return static_cast<int32_t>(offsetof(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields, ___Rigid_8)); }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  get_Rigid_8() const { return ___Rigid_8; }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E * get_address_of_Rigid_8() { return &___Rigid_8; }
	inline void set_Rigid_8(Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  value)
	{
		___Rigid_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Rigid_8))->___time_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Rigid_8))->___amplitude_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Rigid_8))->___clip_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Soft_9() { return static_cast<int32_t>(offsetof(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields, ___Soft_9)); }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  get_Soft_9() const { return ___Soft_9; }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E * get_address_of_Soft_9() { return &___Soft_9; }
	inline void set_Soft_9(Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  value)
	{
		___Soft_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Soft_9))->___time_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Soft_9))->___amplitude_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Soft_9))->___clip_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Success_10() { return static_cast<int32_t>(offsetof(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields, ___Success_10)); }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  get_Success_10() const { return ___Success_10; }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E * get_address_of_Success_10() { return &___Success_10; }
	inline void set_Success_10(Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  value)
	{
		___Success_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Success_10))->___time_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Success_10))->___amplitude_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Success_10))->___clip_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Failure_11() { return static_cast<int32_t>(offsetof(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields, ___Failure_11)); }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  get_Failure_11() const { return ___Failure_11; }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E * get_address_of_Failure_11() { return &___Failure_11; }
	inline void set_Failure_11(Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  value)
	{
		___Failure_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Failure_11))->___time_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Failure_11))->___amplitude_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Failure_11))->___clip_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Warning_12() { return static_cast<int32_t>(offsetof(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields, ___Warning_12)); }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  get_Warning_12() const { return ___Warning_12; }
	inline Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E * get_address_of_Warning_12() { return &___Warning_12; }
	inline void set_Warning_12(Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  value)
	{
		___Warning_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Warning_12))->___time_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Warning_12))->___amplitude_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Warning_12))->___clip_2), (void*)NULL);
		#endif
	}
};


// System.Globalization.NumberStyles
struct NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
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


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.SynchronizationContextProperties
struct SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A 
{
public:
	// System.Int32 System.Threading.SynchronizationContextProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Timers.Timer
struct Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE  : public Component_t015539CFEAEEBFD7619041FE006475373E0D71DF
{
public:
	// System.Double System.Timers.Timer::interval
	double ___interval_4;
	// System.Boolean System.Timers.Timer::enabled
	bool ___enabled_5;
	// System.Boolean System.Timers.Timer::initializing
	bool ___initializing_6;
	// System.Boolean System.Timers.Timer::delayedEnable
	bool ___delayedEnable_7;
	// System.Timers.ElapsedEventHandler System.Timers.Timer::onIntervalElapsed
	ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 * ___onIntervalElapsed_8;
	// System.Boolean System.Timers.Timer::autoReset
	bool ___autoReset_9;
	// System.ComponentModel.ISynchronizeInvoke System.Timers.Timer::synchronizingObject
	RuntimeObject* ___synchronizingObject_10;
	// System.Boolean System.Timers.Timer::disposed
	bool ___disposed_11;
	// System.Threading.Timer System.Timers.Timer::timer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer_12;
	// System.Threading.TimerCallback System.Timers.Timer::callback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___callback_13;
	// System.Object System.Timers.Timer::cookie
	RuntimeObject * ___cookie_14;

public:
	inline static int32_t get_offset_of_interval_4() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___interval_4)); }
	inline double get_interval_4() const { return ___interval_4; }
	inline double* get_address_of_interval_4() { return &___interval_4; }
	inline void set_interval_4(double value)
	{
		___interval_4 = value;
	}

	inline static int32_t get_offset_of_enabled_5() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___enabled_5)); }
	inline bool get_enabled_5() const { return ___enabled_5; }
	inline bool* get_address_of_enabled_5() { return &___enabled_5; }
	inline void set_enabled_5(bool value)
	{
		___enabled_5 = value;
	}

	inline static int32_t get_offset_of_initializing_6() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___initializing_6)); }
	inline bool get_initializing_6() const { return ___initializing_6; }
	inline bool* get_address_of_initializing_6() { return &___initializing_6; }
	inline void set_initializing_6(bool value)
	{
		___initializing_6 = value;
	}

	inline static int32_t get_offset_of_delayedEnable_7() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___delayedEnable_7)); }
	inline bool get_delayedEnable_7() const { return ___delayedEnable_7; }
	inline bool* get_address_of_delayedEnable_7() { return &___delayedEnable_7; }
	inline void set_delayedEnable_7(bool value)
	{
		___delayedEnable_7 = value;
	}

	inline static int32_t get_offset_of_onIntervalElapsed_8() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___onIntervalElapsed_8)); }
	inline ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 * get_onIntervalElapsed_8() const { return ___onIntervalElapsed_8; }
	inline ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 ** get_address_of_onIntervalElapsed_8() { return &___onIntervalElapsed_8; }
	inline void set_onIntervalElapsed_8(ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 * value)
	{
		___onIntervalElapsed_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onIntervalElapsed_8), (void*)value);
	}

	inline static int32_t get_offset_of_autoReset_9() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___autoReset_9)); }
	inline bool get_autoReset_9() const { return ___autoReset_9; }
	inline bool* get_address_of_autoReset_9() { return &___autoReset_9; }
	inline void set_autoReset_9(bool value)
	{
		___autoReset_9 = value;
	}

	inline static int32_t get_offset_of_synchronizingObject_10() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___synchronizingObject_10)); }
	inline RuntimeObject* get_synchronizingObject_10() const { return ___synchronizingObject_10; }
	inline RuntimeObject** get_address_of_synchronizingObject_10() { return &___synchronizingObject_10; }
	inline void set_synchronizingObject_10(RuntimeObject* value)
	{
		___synchronizingObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synchronizingObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}

	inline static int32_t get_offset_of_timer_12() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___timer_12)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get_timer_12() const { return ___timer_12; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of_timer_12() { return &___timer_12; }
	inline void set_timer_12(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		___timer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timer_12), (void*)value);
	}

	inline static int32_t get_offset_of_callback_13() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___callback_13)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_callback_13() const { return ___callback_13; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_callback_13() { return &___callback_13; }
	inline void set_callback_13(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___callback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_13), (void*)value);
	}

	inline static int32_t get_offset_of_cookie_14() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___cookie_14)); }
	inline RuntimeObject * get_cookie_14() const { return ___cookie_14; }
	inline RuntimeObject ** get_address_of_cookie_14() { return &___cookie_14; }
	inline void set_cookie_14(RuntimeObject * value)
	{
		___cookie_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cookie_14), (void*)value);
	}
};


// Lofelt.NiceVibrations.HapticPatterns/PresetType
struct PresetType_tAD3A60C99B9B59677EFE8777750B13A6E947155D 
{
public:
	// System.Int32 Lofelt.NiceVibrations.HapticPatterns/PresetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PresetType_tAD3A60C99B9B59677EFE8777750B13A6E947155D, ___value___2)); }
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


// Lofelt.NiceVibrations.DeviceCapabilities
struct DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065  : public RuntimeObject
{
public:

public:
};

struct DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields
{
public:
	// UnityEngine.RuntimePlatform Lofelt.NiceVibrations.DeviceCapabilities::<platform>k__BackingField
	int32_t ___U3CplatformU3Ek__BackingField_0;
	// System.Int32 Lofelt.NiceVibrations.DeviceCapabilities::<platformVersion>k__BackingField
	int32_t ___U3CplatformVersionU3Ek__BackingField_1;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_meetsAdvancedRequirements
	bool ____meetsAdvancedRequirements_2;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::<isVersionSupported>k__BackingField
	bool ___U3CisVersionSupportedU3Ek__BackingField_3;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_hasAmplitudeControl
	bool ____hasAmplitudeControl_4;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_hasFrequencyControl
	bool ____hasFrequencyControl_5;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_hasAmplitudeModulation
	bool ____hasAmplitudeModulation_6;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_hasFrequencyModulation
	bool ____hasFrequencyModulation_7;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_hasEmphasis
	bool ____hasEmphasis_8;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_canEmulateEmphasis
	bool ____canEmulateEmphasis_9;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_canLoop
	bool ____canLoop_10;

public:
	inline static int32_t get_offset_of_U3CplatformU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ___U3CplatformU3Ek__BackingField_0)); }
	inline int32_t get_U3CplatformU3Ek__BackingField_0() const { return ___U3CplatformU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CplatformU3Ek__BackingField_0() { return &___U3CplatformU3Ek__BackingField_0; }
	inline void set_U3CplatformU3Ek__BackingField_0(int32_t value)
	{
		___U3CplatformU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CplatformVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ___U3CplatformVersionU3Ek__BackingField_1)); }
	inline int32_t get_U3CplatformVersionU3Ek__BackingField_1() const { return ___U3CplatformVersionU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CplatformVersionU3Ek__BackingField_1() { return &___U3CplatformVersionU3Ek__BackingField_1; }
	inline void set_U3CplatformVersionU3Ek__BackingField_1(int32_t value)
	{
		___U3CplatformVersionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of__meetsAdvancedRequirements_2() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ____meetsAdvancedRequirements_2)); }
	inline bool get__meetsAdvancedRequirements_2() const { return ____meetsAdvancedRequirements_2; }
	inline bool* get_address_of__meetsAdvancedRequirements_2() { return &____meetsAdvancedRequirements_2; }
	inline void set__meetsAdvancedRequirements_2(bool value)
	{
		____meetsAdvancedRequirements_2 = value;
	}

	inline static int32_t get_offset_of_U3CisVersionSupportedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ___U3CisVersionSupportedU3Ek__BackingField_3)); }
	inline bool get_U3CisVersionSupportedU3Ek__BackingField_3() const { return ___U3CisVersionSupportedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CisVersionSupportedU3Ek__BackingField_3() { return &___U3CisVersionSupportedU3Ek__BackingField_3; }
	inline void set_U3CisVersionSupportedU3Ek__BackingField_3(bool value)
	{
		___U3CisVersionSupportedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of__hasAmplitudeControl_4() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ____hasAmplitudeControl_4)); }
	inline bool get__hasAmplitudeControl_4() const { return ____hasAmplitudeControl_4; }
	inline bool* get_address_of__hasAmplitudeControl_4() { return &____hasAmplitudeControl_4; }
	inline void set__hasAmplitudeControl_4(bool value)
	{
		____hasAmplitudeControl_4 = value;
	}

	inline static int32_t get_offset_of__hasFrequencyControl_5() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ____hasFrequencyControl_5)); }
	inline bool get__hasFrequencyControl_5() const { return ____hasFrequencyControl_5; }
	inline bool* get_address_of__hasFrequencyControl_5() { return &____hasFrequencyControl_5; }
	inline void set__hasFrequencyControl_5(bool value)
	{
		____hasFrequencyControl_5 = value;
	}

	inline static int32_t get_offset_of__hasAmplitudeModulation_6() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ____hasAmplitudeModulation_6)); }
	inline bool get__hasAmplitudeModulation_6() const { return ____hasAmplitudeModulation_6; }
	inline bool* get_address_of__hasAmplitudeModulation_6() { return &____hasAmplitudeModulation_6; }
	inline void set__hasAmplitudeModulation_6(bool value)
	{
		____hasAmplitudeModulation_6 = value;
	}

	inline static int32_t get_offset_of__hasFrequencyModulation_7() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ____hasFrequencyModulation_7)); }
	inline bool get__hasFrequencyModulation_7() const { return ____hasFrequencyModulation_7; }
	inline bool* get_address_of__hasFrequencyModulation_7() { return &____hasFrequencyModulation_7; }
	inline void set__hasFrequencyModulation_7(bool value)
	{
		____hasFrequencyModulation_7 = value;
	}

	inline static int32_t get_offset_of__hasEmphasis_8() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ____hasEmphasis_8)); }
	inline bool get__hasEmphasis_8() const { return ____hasEmphasis_8; }
	inline bool* get_address_of__hasEmphasis_8() { return &____hasEmphasis_8; }
	inline void set__hasEmphasis_8(bool value)
	{
		____hasEmphasis_8 = value;
	}

	inline static int32_t get_offset_of__canEmulateEmphasis_9() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ____canEmulateEmphasis_9)); }
	inline bool get__canEmulateEmphasis_9() const { return ____canEmulateEmphasis_9; }
	inline bool* get_address_of__canEmulateEmphasis_9() { return &____canEmulateEmphasis_9; }
	inline void set__canEmulateEmphasis_9(bool value)
	{
		____canEmulateEmphasis_9 = value;
	}

	inline static int32_t get_offset_of__canLoop_10() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ____canLoop_10)); }
	inline bool get__canLoop_10() const { return ____canLoop_10; }
	inline bool* get_address_of__canLoop_10() { return &____canLoop_10; }
	inline void set__canLoop_10(bool value)
	{
		____canLoop_10 = value;
	}
};


// Lofelt.NiceVibrations.HapticController
struct HapticController_tCF66201AF596D421FA26B175E41175BF665BC230  : public RuntimeObject
{
public:

public:
};

struct HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields
{
public:
	// System.Boolean Lofelt.NiceVibrations.HapticController::lofeltHapticsInitalized
	bool ___lofeltHapticsInitalized_0;
	// System.Timers.Timer Lofelt.NiceVibrations.HapticController::playbackFinishedTimer
	Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * ___playbackFinishedTimer_1;
	// System.Single Lofelt.NiceVibrations.HapticController::clipLoadedDurationSecs
	float ___clipLoadedDurationSecs_2;
	// System.Boolean Lofelt.NiceVibrations.HapticController::clipLoaded
	bool ___clipLoaded_3;
	// System.Single Lofelt.NiceVibrations.HapticController::lastSeekTime
	float ___lastSeekTime_4;
	// System.Boolean Lofelt.NiceVibrations.HapticController::deviceMeetsAdvancedRequirements
	bool ___deviceMeetsAdvancedRequirements_5;
	// System.Boolean Lofelt.NiceVibrations.HapticController::isLoopingEnabledByUser
	bool ___isLoopingEnabledByUser_6;
	// System.Boolean Lofelt.NiceVibrations.HapticController::isPlaybackLooping
	bool ___isPlaybackLooping_7;
	// Lofelt.NiceVibrations.HapticPatterns/PresetType Lofelt.NiceVibrations.HapticController::_fallbackPreset
	int32_t ____fallbackPreset_8;
	// System.Boolean Lofelt.NiceVibrations.HapticController::_hapticsEnabled
	bool ____hapticsEnabled_9;
	// System.Single Lofelt.NiceVibrations.HapticController::_outputLevel
	float ____outputLevel_10;
	// System.Single Lofelt.NiceVibrations.HapticController::_clipLevel
	float ____clipLevel_11;
	// System.Action Lofelt.NiceVibrations.HapticController::LoadedClipChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___LoadedClipChanged_12;
	// System.Action Lofelt.NiceVibrations.HapticController::PlaybackStarted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___PlaybackStarted_13;
	// System.Action Lofelt.NiceVibrations.HapticController::PlaybackStopped
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___PlaybackStopped_14;

public:
	inline static int32_t get_offset_of_lofeltHapticsInitalized_0() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___lofeltHapticsInitalized_0)); }
	inline bool get_lofeltHapticsInitalized_0() const { return ___lofeltHapticsInitalized_0; }
	inline bool* get_address_of_lofeltHapticsInitalized_0() { return &___lofeltHapticsInitalized_0; }
	inline void set_lofeltHapticsInitalized_0(bool value)
	{
		___lofeltHapticsInitalized_0 = value;
	}

	inline static int32_t get_offset_of_playbackFinishedTimer_1() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___playbackFinishedTimer_1)); }
	inline Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * get_playbackFinishedTimer_1() const { return ___playbackFinishedTimer_1; }
	inline Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE ** get_address_of_playbackFinishedTimer_1() { return &___playbackFinishedTimer_1; }
	inline void set_playbackFinishedTimer_1(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * value)
	{
		___playbackFinishedTimer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playbackFinishedTimer_1), (void*)value);
	}

	inline static int32_t get_offset_of_clipLoadedDurationSecs_2() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___clipLoadedDurationSecs_2)); }
	inline float get_clipLoadedDurationSecs_2() const { return ___clipLoadedDurationSecs_2; }
	inline float* get_address_of_clipLoadedDurationSecs_2() { return &___clipLoadedDurationSecs_2; }
	inline void set_clipLoadedDurationSecs_2(float value)
	{
		___clipLoadedDurationSecs_2 = value;
	}

	inline static int32_t get_offset_of_clipLoaded_3() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___clipLoaded_3)); }
	inline bool get_clipLoaded_3() const { return ___clipLoaded_3; }
	inline bool* get_address_of_clipLoaded_3() { return &___clipLoaded_3; }
	inline void set_clipLoaded_3(bool value)
	{
		___clipLoaded_3 = value;
	}

	inline static int32_t get_offset_of_lastSeekTime_4() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___lastSeekTime_4)); }
	inline float get_lastSeekTime_4() const { return ___lastSeekTime_4; }
	inline float* get_address_of_lastSeekTime_4() { return &___lastSeekTime_4; }
	inline void set_lastSeekTime_4(float value)
	{
		___lastSeekTime_4 = value;
	}

	inline static int32_t get_offset_of_deviceMeetsAdvancedRequirements_5() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___deviceMeetsAdvancedRequirements_5)); }
	inline bool get_deviceMeetsAdvancedRequirements_5() const { return ___deviceMeetsAdvancedRequirements_5; }
	inline bool* get_address_of_deviceMeetsAdvancedRequirements_5() { return &___deviceMeetsAdvancedRequirements_5; }
	inline void set_deviceMeetsAdvancedRequirements_5(bool value)
	{
		___deviceMeetsAdvancedRequirements_5 = value;
	}

	inline static int32_t get_offset_of_isLoopingEnabledByUser_6() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___isLoopingEnabledByUser_6)); }
	inline bool get_isLoopingEnabledByUser_6() const { return ___isLoopingEnabledByUser_6; }
	inline bool* get_address_of_isLoopingEnabledByUser_6() { return &___isLoopingEnabledByUser_6; }
	inline void set_isLoopingEnabledByUser_6(bool value)
	{
		___isLoopingEnabledByUser_6 = value;
	}

	inline static int32_t get_offset_of_isPlaybackLooping_7() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___isPlaybackLooping_7)); }
	inline bool get_isPlaybackLooping_7() const { return ___isPlaybackLooping_7; }
	inline bool* get_address_of_isPlaybackLooping_7() { return &___isPlaybackLooping_7; }
	inline void set_isPlaybackLooping_7(bool value)
	{
		___isPlaybackLooping_7 = value;
	}

	inline static int32_t get_offset_of__fallbackPreset_8() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ____fallbackPreset_8)); }
	inline int32_t get__fallbackPreset_8() const { return ____fallbackPreset_8; }
	inline int32_t* get_address_of__fallbackPreset_8() { return &____fallbackPreset_8; }
	inline void set__fallbackPreset_8(int32_t value)
	{
		____fallbackPreset_8 = value;
	}

	inline static int32_t get_offset_of__hapticsEnabled_9() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ____hapticsEnabled_9)); }
	inline bool get__hapticsEnabled_9() const { return ____hapticsEnabled_9; }
	inline bool* get_address_of__hapticsEnabled_9() { return &____hapticsEnabled_9; }
	inline void set__hapticsEnabled_9(bool value)
	{
		____hapticsEnabled_9 = value;
	}

	inline static int32_t get_offset_of__outputLevel_10() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ____outputLevel_10)); }
	inline float get__outputLevel_10() const { return ____outputLevel_10; }
	inline float* get_address_of__outputLevel_10() { return &____outputLevel_10; }
	inline void set__outputLevel_10(float value)
	{
		____outputLevel_10 = value;
	}

	inline static int32_t get_offset_of__clipLevel_11() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ____clipLevel_11)); }
	inline float get__clipLevel_11() const { return ____clipLevel_11; }
	inline float* get_address_of__clipLevel_11() { return &____clipLevel_11; }
	inline void set__clipLevel_11(float value)
	{
		____clipLevel_11 = value;
	}

	inline static int32_t get_offset_of_LoadedClipChanged_12() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___LoadedClipChanged_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_LoadedClipChanged_12() const { return ___LoadedClipChanged_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_LoadedClipChanged_12() { return &___LoadedClipChanged_12; }
	inline void set_LoadedClipChanged_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___LoadedClipChanged_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadedClipChanged_12), (void*)value);
	}

	inline static int32_t get_offset_of_PlaybackStarted_13() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___PlaybackStarted_13)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_PlaybackStarted_13() const { return ___PlaybackStarted_13; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_PlaybackStarted_13() { return &___PlaybackStarted_13; }
	inline void set_PlaybackStarted_13(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___PlaybackStarted_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlaybackStarted_13), (void*)value);
	}

	inline static int32_t get_offset_of_PlaybackStopped_14() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___PlaybackStopped_14)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_PlaybackStopped_14() const { return ___PlaybackStopped_14; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_PlaybackStopped_14() { return &___PlaybackStopped_14; }
	inline void set_PlaybackStopped_14(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___PlaybackStopped_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlaybackStopped_14), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;

public:
	inline static int32_t get_offset_of__props_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069, ____props_0)); }
	inline int32_t get__props_0() const { return ____props_0; }
	inline int32_t* get_address_of__props_0() { return &____props_0; }
	inline void set__props_0(int32_t value)
	{
		____props_0 = value;
	}
};

struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields
{
public:
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t * ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t * ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t * ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t * ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t * ___s_cachedPreparedType5_5;

public:
	inline static int32_t get_offset_of_s_cachedPreparedType1_1() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType1_1)); }
	inline Type_t * get_s_cachedPreparedType1_1() const { return ___s_cachedPreparedType1_1; }
	inline Type_t ** get_address_of_s_cachedPreparedType1_1() { return &___s_cachedPreparedType1_1; }
	inline void set_s_cachedPreparedType1_1(Type_t * value)
	{
		___s_cachedPreparedType1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType1_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType2_2() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType2_2)); }
	inline Type_t * get_s_cachedPreparedType2_2() const { return ___s_cachedPreparedType2_2; }
	inline Type_t ** get_address_of_s_cachedPreparedType2_2() { return &___s_cachedPreparedType2_2; }
	inline void set_s_cachedPreparedType2_2(Type_t * value)
	{
		___s_cachedPreparedType2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType2_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType3_3() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType3_3)); }
	inline Type_t * get_s_cachedPreparedType3_3() const { return ___s_cachedPreparedType3_3; }
	inline Type_t ** get_address_of_s_cachedPreparedType3_3() { return &___s_cachedPreparedType3_3; }
	inline void set_s_cachedPreparedType3_3(Type_t * value)
	{
		___s_cachedPreparedType3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType3_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType4_4() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType4_4)); }
	inline Type_t * get_s_cachedPreparedType4_4() const { return ___s_cachedPreparedType4_4; }
	inline Type_t ** get_address_of_s_cachedPreparedType4_4() { return &___s_cachedPreparedType4_4; }
	inline void set_s_cachedPreparedType4_4(Type_t * value)
	{
		___s_cachedPreparedType4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType4_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType5_5() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType5_5)); }
	inline Type_t * get_s_cachedPreparedType5_5() const { return ___s_cachedPreparedType5_5; }
	inline Type_t ** get_address_of_s_cachedPreparedType5_5() { return &___s_cachedPreparedType5_5; }
	inline void set_s_cachedPreparedType5_5(Type_t * value)
	{
		___s_cachedPreparedType5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType5_5), (void*)value);
	}
};


// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3  : public MulticastDelegate_t
{
public:

public:
};


// Lofelt.NiceVibrations.HapticClip
struct HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Byte[] Lofelt.NiceVibrations.HapticClip::json
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___json_4;
	// Lofelt.NiceVibrations.GamepadRumble Lofelt.NiceVibrations.HapticClip::gamepadRumble
	GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  ___gamepadRumble_5;

public:
	inline static int32_t get_offset_of_json_4() { return static_cast<int32_t>(offsetof(HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F, ___json_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_json_4() const { return ___json_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_json_4() { return &___json_4; }
	inline void set_json_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___json_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_4), (void*)value);
	}

	inline static int32_t get_offset_of_gamepadRumble_5() { return static_cast<int32_t>(offsetof(HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F, ___gamepadRumble_5)); }
	inline GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  get_gamepadRumble_5() const { return ___gamepadRumble_5; }
	inline GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045 * get_address_of_gamepadRumble_5() { return &___gamepadRumble_5; }
	inline void set_gamepadRumble_5(GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  value)
	{
		___gamepadRumble_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gamepadRumble_5))->___durationsMs_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___gamepadRumble_5))->___lowFrequencyMotorSpeeds_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___gamepadRumble_5))->___highFrequencyMotorSpeeds_3), (void*)NULL);
		#endif
	}
};


// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C  : public MulticastDelegate_t
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


// Lofelt.NiceVibrations.HapticReceiver
struct HapticReceiver_t49C33383A9A4D17497B2469F0B25FAF6B80241C2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Lofelt.NiceVibrations.HapticReceiver::_outputLevel
	float ____outputLevel_4;
	// System.Boolean Lofelt.NiceVibrations.HapticReceiver::_hapticsEnabled
	bool ____hapticsEnabled_5;

public:
	inline static int32_t get_offset_of__outputLevel_4() { return static_cast<int32_t>(offsetof(HapticReceiver_t49C33383A9A4D17497B2469F0B25FAF6B80241C2, ____outputLevel_4)); }
	inline float get__outputLevel_4() const { return ____outputLevel_4; }
	inline float* get_address_of__outputLevel_4() { return &____outputLevel_4; }
	inline void set__outputLevel_4(float value)
	{
		____outputLevel_4 = value;
	}

	inline static int32_t get_offset_of__hapticsEnabled_5() { return static_cast<int32_t>(offsetof(HapticReceiver_t49C33383A9A4D17497B2469F0B25FAF6B80241C2, ____hapticsEnabled_5)); }
	inline bool get__hapticsEnabled_5() const { return ____hapticsEnabled_5; }
	inline bool* get_address_of__hapticsEnabled_5() { return &____hapticsEnabled_5; }
	inline void set__hapticsEnabled_5(bool value)
	{
		____hapticsEnabled_5 = value;
	}
};


// Lofelt.NiceVibrations.HapticSource
struct HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Lofelt.NiceVibrations.HapticClip Lofelt.NiceVibrations.HapticSource::clip
	HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * ___clip_5;
	// System.Int32 Lofelt.NiceVibrations.HapticSource::priority
	int32_t ___priority_6;
	// System.Single Lofelt.NiceVibrations.HapticSource::seekTime
	float ___seekTime_7;
	// Lofelt.NiceVibrations.HapticPatterns/PresetType Lofelt.NiceVibrations.HapticSource::_fallbackPreset
	int32_t ____fallbackPreset_8;
	// System.Boolean Lofelt.NiceVibrations.HapticSource::_loop
	bool ____loop_9;
	// System.Single Lofelt.NiceVibrations.HapticSource::_level
	float ____level_10;
	// System.Single Lofelt.NiceVibrations.HapticSource::_frequencyShift
	float ____frequencyShift_11;

public:
	inline static int32_t get_offset_of_clip_5() { return static_cast<int32_t>(offsetof(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183, ___clip_5)); }
	inline HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * get_clip_5() const { return ___clip_5; }
	inline HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F ** get_address_of_clip_5() { return &___clip_5; }
	inline void set_clip_5(HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * value)
	{
		___clip_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clip_5), (void*)value);
	}

	inline static int32_t get_offset_of_priority_6() { return static_cast<int32_t>(offsetof(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183, ___priority_6)); }
	inline int32_t get_priority_6() const { return ___priority_6; }
	inline int32_t* get_address_of_priority_6() { return &___priority_6; }
	inline void set_priority_6(int32_t value)
	{
		___priority_6 = value;
	}

	inline static int32_t get_offset_of_seekTime_7() { return static_cast<int32_t>(offsetof(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183, ___seekTime_7)); }
	inline float get_seekTime_7() const { return ___seekTime_7; }
	inline float* get_address_of_seekTime_7() { return &___seekTime_7; }
	inline void set_seekTime_7(float value)
	{
		___seekTime_7 = value;
	}

	inline static int32_t get_offset_of__fallbackPreset_8() { return static_cast<int32_t>(offsetof(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183, ____fallbackPreset_8)); }
	inline int32_t get__fallbackPreset_8() const { return ____fallbackPreset_8; }
	inline int32_t* get_address_of__fallbackPreset_8() { return &____fallbackPreset_8; }
	inline void set__fallbackPreset_8(int32_t value)
	{
		____fallbackPreset_8 = value;
	}

	inline static int32_t get_offset_of__loop_9() { return static_cast<int32_t>(offsetof(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183, ____loop_9)); }
	inline bool get__loop_9() const { return ____loop_9; }
	inline bool* get_address_of__loop_9() { return &____loop_9; }
	inline void set__loop_9(bool value)
	{
		____loop_9 = value;
	}

	inline static int32_t get_offset_of__level_10() { return static_cast<int32_t>(offsetof(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183, ____level_10)); }
	inline float get__level_10() const { return ____level_10; }
	inline float* get_address_of__level_10() { return &____level_10; }
	inline void set__level_10(float value)
	{
		____level_10 = value;
	}

	inline static int32_t get_offset_of__frequencyShift_11() { return static_cast<int32_t>(offsetof(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183, ____frequencyShift_11)); }
	inline float get__frequencyShift_11() const { return ____frequencyShift_11; }
	inline float* get_address_of__frequencyShift_11() { return &____frequencyShift_11; }
	inline void set__frequencyShift_11(float value)
	{
		____frequencyShift_11 = value;
	}
};

struct HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_StaticFields
{
public:
	// Lofelt.NiceVibrations.HapticSource Lofelt.NiceVibrations.HapticSource::loadedHapticSource
	HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * ___loadedHapticSource_12;
	// Lofelt.NiceVibrations.HapticSource Lofelt.NiceVibrations.HapticSource::lastPlayedHapticSource
	HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * ___lastPlayedHapticSource_13;

public:
	inline static int32_t get_offset_of_loadedHapticSource_12() { return static_cast<int32_t>(offsetof(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_StaticFields, ___loadedHapticSource_12)); }
	inline HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * get_loadedHapticSource_12() const { return ___loadedHapticSource_12; }
	inline HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 ** get_address_of_loadedHapticSource_12() { return &___loadedHapticSource_12; }
	inline void set_loadedHapticSource_12(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * value)
	{
		___loadedHapticSource_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadedHapticSource_12), (void*)value);
	}

	inline static int32_t get_offset_of_lastPlayedHapticSource_13() { return static_cast<int32_t>(offsetof(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_StaticFields, ___lastPlayedHapticSource_13)); }
	inline HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * get_lastPlayedHapticSource_13() const { return ___lastPlayedHapticSource_13; }
	inline HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 ** get_address_of_lastPlayedHapticSource_13() { return &___lastPlayedHapticSource_13; }
	inline void set_lastPlayedHapticSource_13(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * value)
	{
		___lastPlayedHapticSource_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastPlayedHapticSource_13), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m068E70BCBA9EACF8129B1C9F711D3132EB6C9061_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,!!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3167F97B4EFA74B4D583E7D2588E3E8386091FF5_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___args1, const RuntimeMethod* method);

// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mAD6C941E38459EFF017EC446E2E5EFB7CDD36EE4 (const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_operatingSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_operatingSystem_m51B3776E39B006401BE682EFA70A5F000EDF1696 (const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mFEA51DE5E5C0BCB4D8A587AD7779DAC158BE7184 (String_t* ___s0, const RuntimeMethod* method);
// System.Int32 Lofelt.NiceVibrations.DeviceCapabilities::get_platformVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DeviceCapabilities_get_platformVersion_m6F4B3D9F45C6C44E2355CBDA37794C89DF50F929_inline (const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.LofeltHaptics::DeviceMeetsMinimumPlatformRequirements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_mCD17109E01DCD3FA1A47B64AE77F2416672922DB (const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.GamepadRumble::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumble_IsValid_m878CB18329953DB9755C2EBA5483788815C9649B (GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045 * __this, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.GamepadRumbler/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m1239904C4C32F628CB6073C01C550DDEA934031C (U3CU3Ec__DisplayClass8_0_t85FE944063BAEC0D51718C85639D6889BD7B45DD * __this, const RuntimeMethod* method);
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * SynchronizationContext_get_Current_mA91AB65F32E185D433CDB100FF651FB4FE0EFC43 (const RuntimeMethod* method);
// System.Void System.Timers.ElapsedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElapsedEventHandler__ctor_m2B99031158D1FA06EBE73A025249B5C1955441F5 (ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Timers.Timer::add_Elapsed(System.Timers.ElapsedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_add_Elapsed_m3FDC03401E31156441DE48618493181329C31A1F (Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * __this, ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 * ___value0, const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.GamepadRumbler::IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumbler_IsConnected_mC04BBAB58AE4B059DCF82DE9307B1FF92CEE8332 (const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Unload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Unload_m0137FAB967CB39DAD1D01779AB49E0090774D7B6 (const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.GamepadRumbler::CanPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumbler_CanPlay_m67F04FE93600E90CC2F48402E3BBADC13F8A4747 (const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.GamepadRumbler::ProcessNextRumble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_ProcessNextRumble_mEC18F9EB8253DF689FB92ED472CBAB68C7F901A0 (const RuntimeMethod* method);
// System.Void System.Timers.Timer::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_set_Enabled_m03648A71FC47FCE77C7382AED892E09ABE6C034C (Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Stop_mA4847F66A6DA1922C1F6F2A6D16E601F9559702C (const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.GamepadRumbler::IncreaseRumbleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumbler_IncreaseRumbleIndex_mACE3589338B2DE89FF14A64B71C96BC792BF52C3 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m5C96B726079E95BB1A1DC60532553CB723D24C79 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void System.Timers.Timer::set_Interval(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_set_Interval_mA437AE87EFE7BDF2BD2314158D3729B210474C23 (Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * __this, double ___value0, const RuntimeMethod* method);
// System.Void System.Timers.Timer::set_AutoReset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_set_AutoReset_mE39B03D4F8032BB39B5D09CBF4A13CE660A16619 (Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Timers.Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m8CD6E716B068F1BC15FE81D56671AB0A6D347EBD (Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Stop_mBC362B8017A7940605739D7556EA1BFB31536F73 (const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.HapticController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_Init_m05DB229DF56026DFD6E8B338602AA2094DEE0B9B (const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.LofeltHaptics::SetAmplitudeMultiplication(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_SetAmplitudeMultiplication_mF6D852744957F360CA7BE2BAC97FF73046788EDC (float ___factor0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m1E8B2D24105D04328C64C983D756F0C3CCD31426 (U3CU3Ec__DisplayClass27_0_t89AAAA2C31EE49CD9361159A776B9819C132B715 * __this, const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_isVersionSupported()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_isVersionSupported_mCB66CB54F7FE6E99C29096DD94F5621D7F6DE323_inline (const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Initialize_mA377FC50298CF947352265E440360496F8B0A1A7 (const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.DeviceCapabilities::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCapabilities_Init_m597266487CE223D724BF6F11C16B6BBDEAC0B0D5 (const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_meetsAdvancedRequirements()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_meetsAdvancedRequirements_mCE6A48C2E83BFBB85BE2E3778AE1FB557463AA3B_inline (const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Init_m07AB01289FE15F4D15177554AFB1582941B3A3FB (const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Load_m37600D26A0D58AC95F5CAEBCAD5A1C6619A0B451 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::set_clipLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_clipLevel_m25064A0FEAEC5C17FD00D1ED9220ADC3B906F654 (float ___value0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::Load(System.Byte[],Lofelt.NiceVibrations.GamepadRumble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_m5766B2D3286ED39B532E4053A97C12C47E5BF018 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___json0, GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  ___rumble1, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_m53D34F7D5AE0A3675EFE35CA93286EF1B8634B22 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Load(Lofelt.NiceVibrations.GamepadRumble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Load_m2F9721A4197FD997EACB73D25C8B449101ADC9D4 (GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  ___rumble0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Play_m4781E4D37B3E1F4048A59C8FDE1CB2EB44012C60 (const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_canLoop()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_canLoop_m49A0D71C43EF96302B36008D2F965CAC528512CC_inline (const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Play_m5CCEAA8FD388B705893025191DE4E0BFEB6A34A0 (const RuntimeMethod* method);
// Lofelt.NiceVibrations.HapticPatterns/PresetType Lofelt.NiceVibrations.HapticController::get_fallbackPreset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HapticController_get_fallbackPreset_m3A9A09E902E50F9405B81FC93BB6EDFB6683837B_inline (const RuntimeMethod* method);
// System.Single Lofelt.NiceVibrations.HapticPatterns::GetPresetDuration(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticPatterns_GetPresetDuration_mDEC5026CE886F90852F61E24201F48CA4C1B488F (int32_t ___presetType0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticPatterns::PlayPreset(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayPreset_m9AC38A9A2C0CFEB2EBFB0C5124C44382F8BFAEA5 (int32_t ___presetType0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::HandleFinishedPlayback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_HandleFinishedPlayback_mFE7E0FEF7508CBEACF23B8E222D18EAD2D9C15C5 (const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::Load(Lofelt.NiceVibrations.HapticClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_m6457DE38F1B509DCD885C8DE88C91F1BB06F548A (HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * ___clip0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Play_m953FC2DF71EF3439E59E074246BC37D331FB5C80 (const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Stop_mBDE87B98387910BD93002C41522D147E03AD8945 (const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Seek_m883C2BDEC223E19C459C0F7922DB73237E805761 (float ___time0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.LofeltHaptics::SetFrequencyShift(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_SetFrequencyShift_m1D9F98401A6EF0D6925B2CCDF3CFDBDF79F92304 (float ___shift0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Loop_mC52D6F9C0954FCCB063023EF3061C12D1F4A7E3B (bool ___enabled0, const RuntimeMethod* method);
// System.Boolean System.Timers.Timer::get_Enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Timer_get_Enabled_mB4FA1932A26F7AAFDEA0E1C33533305F1AF9ED17_inline (Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * __this, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Seek_mE3D9DF75C2BE679AA0291DCB82AB4EAA4BFA16B2 (float ___time0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::set_clipFrequencyShift(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_clipFrequencyShift_m141A54F5B79E5DCF056234F22005CA5B20782CA2 (float ___value0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::Loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Loop_m56DDCE2C8E43BBBC0FDD379C594E5941FA4712F2 (bool ___enabled0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::set_fallbackPreset(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HapticController_set_fallbackPreset_m6FE9C9CEC1AC8E8821AD81A3D87C5DF58A5FD9A3_inline (int32_t ___value0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticPatterns/Pattern::.ctor(System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pattern__ctor_mEB7F974ACA6B33C2A65C73C9CD0B9858DEFAC987 (Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___time0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___amplitude1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_mC33EB216560AE32277F2C285188B4490CEB6F074 (String_t* ___path0, const RuntimeMethod* method);
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218 (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// System.Void System.Globalization.NumberFormatInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatInfo__ctor_m6170D636849222DB99BEDFB33C7A5E4032D8A097 (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method);
// System.Void System.Globalization.NumberFormatInfo::set_NumberDecimalSeparator(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatInfo_set_NumberDecimalSeparator_m061730CB113D54B6DFD16532CFA295901905B44A (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m5EA831B060853D4246B8394A30599A0021F80AFF (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mF554E46C641C609768519378FB0486DFD7F82985 (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469 (const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticPatterns::SetEmphasisFallbackPresetsFromAmplitude(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_SetEmphasisFallbackPresetsFromAmplitude_mBBF70AC40C6AB0EAA8AA641CD65DC9999D47DED0 (float ___amplitude0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.LofeltHaptics::PlayMaximumAmplitudePattern(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_PlayMaximumAmplitudePattern_mB14CCA57411740ED96B4AE78B7EABC0F1EE5AA0B (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___timings0, const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.HapticController::get_hapticsEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HapticController_get_hapticsEnabled_mF14D3A3456DFAD498D252635383648969002263D_inline (const RuntimeMethod* method);
// Lofelt.NiceVibrations.HapticPatterns/Pattern Lofelt.NiceVibrations.HapticPatterns::PatternForPreset(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  HapticPatterns_PatternForPreset_mEE69B6C1F6A4C43260796806B0E8F1C18B3679D4 (int32_t ___presetType0, const RuntimeMethod* method);
// Lofelt.NiceVibrations.GamepadRumble Lofelt.NiceVibrations.HapticPatterns::PatternToRumble(Lofelt.NiceVibrations.HapticPatterns/Pattern)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  HapticPatterns_PatternToRumble_m0BFB848E2D5B35D33B1F43FFC7D901B9B182DAFD (Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  ___pattern0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticPatterns::PlayPattern(Lofelt.NiceVibrations.HapticPatterns/Pattern)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayPattern_m6AB7698D07CF6284ECA0C6597CB8906EFB76D854 (Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  ___pattern0, const RuntimeMethod* method);
// System.Single Lofelt.NiceVibrations.HapticPatterns::GetPatternDuration(Lofelt.NiceVibrations.HapticPatterns/Pattern)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticPatterns_GetPatternDuration_m5A2B51DBF287EEB07C98FF8B0FB00A90104D3266 (Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  ___pattern0, const RuntimeMethod* method);
// System.Single Lofelt.NiceVibrations.HapticController::get_outputLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticController_get_outputLevel_m074B13D20CAF608946AD01C936B3E47D76B839F8_inline (const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::set_outputLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_outputLevel_mF3825E9DEF7333A3674BB1BFE6BED3DF62D22E6A (float ___value0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::set_hapticsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_hapticsEnabled_m7870A34D4397D3D314EC8F3FEFE3FBA73EBA3454 (bool ___value0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::ProcessApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_ProcessApplicationFocus_mEE49E3FA2E8D52F3B53D2372C6DADCF2FF0F8C07 (bool ___hasFocus0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.HapticSource::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_IsLoaded_m9B447B5E016DFD815DD46229024861DC9A422E07 (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.HapticSource::CanPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_CanPlay_m48B4C6B069BC46E8C47A3C92E8C5767FACDE4893 (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.HapticSource::get_loop()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HapticSource_get_loop_mBCB0BF25BC583C1646A9566E23F66D6C415779FA_inline (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method);
// System.Single Lofelt.NiceVibrations.HapticSource::get_level()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticSource_get_level_mA7DE9BF9C274D680793A51CCFA57D61F3A215E02_inline (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method);
// System.Single Lofelt.NiceVibrations.HapticSource::get_frequencyShift()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticSource_get_frequencyShift_m4D0AC9A917728516CC1579CC9EE72C9A852E18CE_inline (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method);
// Lofelt.NiceVibrations.HapticPatterns/PresetType Lofelt.NiceVibrations.HapticSource::get_fallbackPreset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HapticSource_get_fallbackPreset_m569BAC15855572F15D0A4266C5A1CFCF6CCD2094_inline (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.HapticController::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_IsPlaying_mE39908387FFA5F99CD1EE851CC297EA1CB13BBB9 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_Stop_m9F684C369E17A07D59D8A393E3BEB52DDC3DDFF7 (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
inline int64_t AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared)(__this, ___methodName0, ___args1, method);
}
// System.IntPtr System.IntPtr::op_Explicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m8F9F5E8B5BCDCC5C93FF603433F134EE5D491859 (int64_t ___value0, const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.LofeltHaptics::lofeltHapticsLoadDirect(System.IntPtr,System.Byte[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LofeltHaptics_lofeltHapticsLoadDirect_m4C8610304599911F4D29BC6426F47967674411F6 (intptr_t ___controller0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, int64_t ___size2, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
inline float AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m068E70BCBA9EACF8129B1C9F711D3132EB6C9061 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m068E70BCBA9EACF8129B1C9F711D3132EB6C9061_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,!!0[])
inline void AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3167F97B4EFA74B4D583E7D2588E3E8386091FF5 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___args1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*))AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3167F97B4EFA74B4D583E7D2588E3E8386091FF5_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m46ED37623DEDA015336383E60909A968225E92F9 (U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4 (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5517E6E51B31F3B3F4FF1495D7822A422A86E4BB (U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F * __this, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBB29C861B6103C44AD31484810E6D1EAE7AE677D (U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED * __this, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lofelt_sdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL lofeltHapticsLoadDirect(intptr_t, uint8_t*, int64_t);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.RuntimePlatform Lofelt.NiceVibrations.DeviceCapabilities::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeviceCapabilities_get_platform_m75478B3C584748F45CC06CD2DDE30ED10FD7465B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static RuntimePlatform platform { get; }
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get_U3CplatformU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Int32 Lofelt.NiceVibrations.DeviceCapabilities::get_platformVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeviceCapabilities_get_platformVersion_m6F4B3D9F45C6C44E2355CBDA37794C89DF50F929 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int platformVersion { get; }
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get_U3CplatformVersionU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_meetsAdvancedRequirements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_meetsAdvancedRequirements_mCE6A48C2E83BFBB85BE2E3778AE1FB557463AA3B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _meetsAdvancedRequirements;
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get__meetsAdvancedRequirements_2();
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_isVersionSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_isVersionSupported_mCB66CB54F7FE6E99C29096DD94F5621D7F6DE323 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isVersionSupported { get; }
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get_U3CisVersionSupportedU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_hasAmplitudeControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_hasAmplitudeControl_m960FB3AFFE720D8EC148C92FF40171530DA9D401 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _hasAmplitudeControl;
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get__hasAmplitudeControl_4();
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_hasFrequencyControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_hasFrequencyControl_mC1A0ABA7ACB876C7329B0AF32F0CFAF9FD5EB248 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _hasFrequencyControl;
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get__hasFrequencyControl_5();
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_hasAmplitudeModulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_hasAmplitudeModulation_mA39FE321A6556BDFB46619B2AFC14339F810F6FA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _hasAmplitudeModulation;
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get__hasAmplitudeModulation_6();
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_hasFrequencyModulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_hasFrequencyModulation_m1B30B96AC05FD18ACB41257EEC0DD23770565290 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _hasFrequencyModulation;
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get__hasFrequencyModulation_7();
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_hasEmphasis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_hasEmphasis_mC03F1892249F07D5434E836BCBC6067DA2B6CE83 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _hasEmphasis;
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get__hasEmphasis_8();
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_canEmulateEmphasis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_canEmulateEmphasis_mE02DAFBB2A79E5EC5F5888E3B403219437551286 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _canEmulateEmphasis;
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get__canEmulateEmphasis_9();
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_canLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_canLoop_m49A0D71C43EF96302B36008D2F965CAC528512CC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _canLoop;
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get__canLoop_10();
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.DeviceCapabilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCapabilities__cctor_mA06AD2B825F13D3C16EDCE42FBE7B934DC4C7A2E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platform = Application.platform;
		int32_t L_0;
		L_0 = Application_get_platform_mAD6C941E38459EFF017EC446E2E5EFB7CDD36EE4(/*hidden argument*/NULL);
		((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->set_U3CplatformU3Ek__BackingField_0(L_0);
		// platformVersion = 0;
		((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->set_U3CplatformVersionU3Ek__BackingField_1(0);
		// isVersionSupported = false;
		((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->set_U3CisVersionSupportedU3Ek__BackingField_3((bool)0);
		// platformVersion = int.Parse(SystemInfo.operatingSystem.Substring(SystemInfo.operatingSystem.IndexOf("-") + 1, 3));
		String_t* L_1;
		L_1 = SystemInfo_get_operatingSystem_m51B3776E39B006401BE682EFA70A5F000EDF1696(/*hidden argument*/NULL);
		String_t* L_2;
		L_2 = SystemInfo_get_operatingSystem_m51B3776E39B006401BE682EFA70A5F000EDF1696(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_2, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_4;
		L_4 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_1, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), 3, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_mFEA51DE5E5C0BCB4D8A587AD7779DAC158BE7184(L_4, /*hidden argument*/NULL);
		((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->set_U3CplatformVersionU3Ek__BackingField_1(L_5);
		// isVersionSupported = platformVersion >= minimumSupportedAndroidSDKVersion;
		int32_t L_6;
		L_6 = DeviceCapabilities_get_platformVersion_m6F4B3D9F45C6C44E2355CBDA37794C89DF50F929_inline(/*hidden argument*/NULL);
		((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->set_U3CisVersionSupportedU3Ek__BackingField_3((bool)((((int32_t)((((int32_t)L_6) < ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.DeviceCapabilities::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCapabilities_Init_m597266487CE223D724BF6F11C16B6BBDEAC0B0D5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hasAmplitudeControl = LofeltHaptics.DeviceMeetsMinimumPlatformRequirements();
		bool L_0;
		L_0 = LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_mCD17109E01DCD3FA1A47B64AE77F2416672922DB(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->set__hasAmplitudeControl_4(L_0);
		// _canEmulateEmphasis = LofeltHaptics.DeviceMeetsMinimumPlatformRequirements();
		bool L_1;
		L_1 = LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_mCD17109E01DCD3FA1A47B64AE77F2416672922DB(/*hidden argument*/NULL);
		((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->set__canEmulateEmphasis_9(L_1);
		// _canLoop = LofeltHaptics.DeviceMeetsMinimumPlatformRequirements();
		bool L_2;
		L_2 = LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_mCD17109E01DCD3FA1A47B64AE77F2416672922DB(/*hidden argument*/NULL);
		((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->set__canLoop_10(L_2);
		// _meetsAdvancedRequirements = LofeltHaptics.DeviceMeetsMinimumPlatformRequirements();
		bool L_3;
		L_3 = LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_mCD17109E01DCD3FA1A47B64AE77F2416672922DB(/*hidden argument*/NULL);
		((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->set__meetsAdvancedRequirements_2(L_3);
		// }
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
// Conversion methods for marshalling of: Lofelt.NiceVibrations.GamepadRumble
IL2CPP_EXTERN_C void GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045_marshal_pinvoke(const GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045& unmarshaled, GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045_marshaled_pinvoke& marshaled)
{
	marshaled.___durationsMs_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.get_durationsMs_0());
	marshaled.___totalDurationMs_1 = unmarshaled.get_totalDurationMs_1();
	marshaled.___lowFrequencyMotorSpeeds_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_lowFrequencyMotorSpeeds_2());
	marshaled.___highFrequencyMotorSpeeds_3 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_highFrequencyMotorSpeeds_3());
}
IL2CPP_EXTERN_C void GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045_marshal_pinvoke_back(const GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045_marshaled_pinvoke& marshaled, GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_durationsMs_0((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, marshaled.___durationsMs_0));
	int32_t unmarshaled_totalDurationMs_temp_1 = 0;
	unmarshaled_totalDurationMs_temp_1 = marshaled.___totalDurationMs_1;
	unmarshaled.set_totalDurationMs_1(unmarshaled_totalDurationMs_temp_1);
	unmarshaled.set_lowFrequencyMotorSpeeds_2((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___lowFrequencyMotorSpeeds_2));
	unmarshaled.set_highFrequencyMotorSpeeds_3((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___highFrequencyMotorSpeeds_3));
}
// Conversion method for clean up from marshalling of: Lofelt.NiceVibrations.GamepadRumble
IL2CPP_EXTERN_C void GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045_marshal_pinvoke_cleanup(GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___durationsMs_0);
	marshaled.___durationsMs_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___lowFrequencyMotorSpeeds_2);
	marshaled.___lowFrequencyMotorSpeeds_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___highFrequencyMotorSpeeds_3);
	marshaled.___highFrequencyMotorSpeeds_3 = NULL;
}
// Conversion methods for marshalling of: Lofelt.NiceVibrations.GamepadRumble
IL2CPP_EXTERN_C void GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045_marshal_com(const GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045& unmarshaled, GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045_marshaled_com& marshaled)
{
	marshaled.___durationsMs_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.get_durationsMs_0());
	marshaled.___totalDurationMs_1 = unmarshaled.get_totalDurationMs_1();
	marshaled.___lowFrequencyMotorSpeeds_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_lowFrequencyMotorSpeeds_2());
	marshaled.___highFrequencyMotorSpeeds_3 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_highFrequencyMotorSpeeds_3());
}
IL2CPP_EXTERN_C void GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045_marshal_com_back(const GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045_marshaled_com& marshaled, GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_durationsMs_0((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, marshaled.___durationsMs_0));
	int32_t unmarshaled_totalDurationMs_temp_1 = 0;
	unmarshaled_totalDurationMs_temp_1 = marshaled.___totalDurationMs_1;
	unmarshaled.set_totalDurationMs_1(unmarshaled_totalDurationMs_temp_1);
	unmarshaled.set_lowFrequencyMotorSpeeds_2((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___lowFrequencyMotorSpeeds_2));
	unmarshaled.set_highFrequencyMotorSpeeds_3((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___highFrequencyMotorSpeeds_3));
}
// Conversion method for clean up from marshalling of: Lofelt.NiceVibrations.GamepadRumble
IL2CPP_EXTERN_C void GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045_marshal_com_cleanup(GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___durationsMs_0);
	marshaled.___durationsMs_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___lowFrequencyMotorSpeeds_2);
	marshaled.___lowFrequencyMotorSpeeds_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___highFrequencyMotorSpeeds_3);
	marshaled.___highFrequencyMotorSpeeds_3 = NULL;
}
// System.Boolean Lofelt.NiceVibrations.GamepadRumble::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumble_IsValid_m878CB18329953DB9755C2EBA5483788815C9649B (GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045 * __this, const RuntimeMethod* method)
{
	{
		// return durationsMs != null &&
		//        lowFrequencyMotorSpeeds != null &&
		//        highFrequencyMotorSpeeds != null &&
		//        durationsMs.Length == lowFrequencyMotorSpeeds.Length &&
		//        durationsMs.Length == highFrequencyMotorSpeeds.Length &&
		//        durationsMs.Length > 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_durationsMs_0();
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = __this->get_lowFrequencyMotorSpeeds_2();
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = __this->get_highFrequencyMotorSpeeds_3();
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = __this->get_durationsMs_0();
		NullCheck(L_3);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = __this->get_lowFrequencyMotorSpeeds_2();
		NullCheck(L_4);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))))
		{
			goto IL_0047;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = __this->get_durationsMs_0();
		NullCheck(L_5);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = __this->get_highFrequencyMotorSpeeds_3();
		NullCheck(L_6);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))))
		{
			goto IL_0047;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = __this->get_durationsMs_0();
		NullCheck(L_7);
		return (bool)((!(((uint32_t)(((RuntimeArray*)L_7)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0047:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool GamepadRumble_IsValid_m878CB18329953DB9755C2EBA5483788815C9649B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045 * _thisAdjusted = reinterpret_cast<GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045 *>(__this + _offset);
	bool _returnValue;
	_returnValue = GamepadRumble_IsValid_m878CB18329953DB9755C2EBA5483788815C9649B(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Init_m07AB01289FE15F4D15177554AFB1582941B3A3FB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CInitU3Eb__0_m3315DC0FCA2E027F2921B0C687BC9C9D38EDA374_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t85FE944063BAEC0D51718C85639D6889BD7B45DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t85FE944063BAEC0D51718C85639D6889BD7B45DD * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t85FE944063BAEC0D51718C85639D6889BD7B45DD * L_0 = (U3CU3Ec__DisplayClass8_0_t85FE944063BAEC0D51718C85639D6889BD7B45DD *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t85FE944063BAEC0D51718C85639D6889BD7B45DD_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8_0__ctor_m1239904C4C32F628CB6073C01C550DDEA934031C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// var syncContext = System.Threading.SynchronizationContext.Current;
		U3CU3Ec__DisplayClass8_0_t85FE944063BAEC0D51718C85639D6889BD7B45DD * L_1 = V_0;
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_2;
		L_2 = SynchronizationContext_get_Current_mA91AB65F32E185D433CDB100FF651FB4FE0EFC43(/*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_syncContext_0(L_2);
		// rumbleTimer.Elapsed += (object obj, System.Timers.ElapsedEventArgs args) =>
		// {
		//     syncContext.Post(_ =>
		//     {
		//         ProcessNextRumble();
		//     }, null);
		// };
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_3 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumbleTimer_2();
		U3CU3Ec__DisplayClass8_0_t85FE944063BAEC0D51718C85639D6889BD7B45DD * L_4 = V_0;
		ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 * L_5 = (ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 *)il2cpp_codegen_object_new(ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3_il2cpp_TypeInfo_var);
		ElapsedEventHandler__ctor_m2B99031158D1FA06EBE73A025249B5C1955441F5(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CInitU3Eb__0_m3315DC0FCA2E027F2921B0C687BC9C9D38EDA374_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		Timer_add_Elapsed_m3FDC03401E31156441DE48618493181329C31A1F(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.GamepadRumbler::CanPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumbler_CanPlay_m67F04FE93600E90CC2F48402E3BBADC13F8A4747 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IsConnected() && rumbleLoaded && loadedRumble.IsValid();
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = GamepadRumbler_IsConnected_mC04BBAB58AE4B059DCF82DE9307B1FF92CEE8332(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		bool L_1 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumbleLoaded_1();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = GamepadRumble_IsValid_m878CB18329953DB9755C2EBA5483788815C9649B((GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045 *)(((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_address_of_loadedRumble_0()), /*hidden argument*/NULL);
		return L_2;
	}

IL_0019:
	{
		return (bool)0;
	}
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler::SetCurrentGamepad(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_SetCurrentGamepad_m63984140000FBF94585FE4AB858E2266742A5487 (int32_t ___gamepadID0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.GamepadRumbler::IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumbler_IsConnected_mC04BBAB58AE4B059DCF82DE9307B1FF92CEE8332 (const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Load(Lofelt.NiceVibrations.GamepadRumble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Load_m2F9721A4197FD997EACB73D25C8B449101ADC9D4 (GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  ___rumble0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rumble.IsValid())
		bool L_0;
		L_0 = GamepadRumble_IsValid_m878CB18329953DB9755C2EBA5483788815C9649B((GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045 *)(&___rumble0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// loadedRumble = rumble;
		GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  L_1 = ___rumble0;
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_loadedRumble_0(L_1);
		// rumbleLoaded = true;
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_rumbleLoaded_1((bool)1);
		// lowFrequencyMotorSpeedMultiplication = 1.0f;
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_lowFrequencyMotorSpeedMultiplication_6((1.0f));
		// highFrequencyMotorSpeedMultiplication = 1.0f;
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_highFrequencyMotorSpeedMultiplication_7((1.0f));
		// }
		return;
	}

IL_002a:
	{
		// Unload();
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		GamepadRumbler_Unload_m0137FAB967CB39DAD1D01779AB49E0090774D7B6(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Play_m4781E4D37B3E1F4048A59C8FDE1CB2EB44012C60 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanPlay())
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = GamepadRumbler_CanPlay_m67F04FE93600E90CC2F48402E3BBADC13F8A4747(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// rumbleIndex = 0;
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_rumbleIndex_3(0);
		// rumblePositionMs = 0;
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_rumblePositionMs_4(((int64_t)((int64_t)0)));
		// playbackWatch.Restart();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_1 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_playbackWatch_5();
		NullCheck(L_1);
		Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B(L_1, /*hidden argument*/NULL);
		// ProcessNextRumble();
		GamepadRumbler_ProcessNextRumble_mEC18F9EB8253DF689FB92ED472CBAB68C7F901A0(/*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Stop_mA4847F66A6DA1922C1F6F2A6D16E601F9559702C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rumbleTimer.Enabled = false;
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_0 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumbleTimer_2();
		NullCheck(L_0);
		Timer_set_Enabled_m03648A71FC47FCE77C7382AED892E09ABE6C034C(L_0, (bool)0, /*hidden argument*/NULL);
		// rumbleIndex = -1;
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_rumbleIndex_3((-1));
		// rumblePositionMs = 0;
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_rumblePositionMs_4(((int64_t)((int64_t)0)));
		// playbackWatch.Stop();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_1 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_playbackWatch_5();
		NullCheck(L_1);
		Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Unload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Unload_m0137FAB967CB39DAD1D01779AB49E0090774D7B6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// loadedRumble.highFrequencyMotorSpeeds = null;
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		(((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_address_of_loadedRumble_0())->set_highFrequencyMotorSpeeds_3((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL);
		// loadedRumble.lowFrequencyMotorSpeeds = null;
		(((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_address_of_loadedRumble_0())->set_lowFrequencyMotorSpeeds_2((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL);
		// loadedRumble.durationsMs = null;
		(((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_address_of_loadedRumble_0())->set_durationsMs_0((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		// rumbleLoaded = false;
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_rumbleLoaded_1((bool)0);
		// Stop();
		GamepadRumbler_Stop_mA4847F66A6DA1922C1F6F2A6D16E601F9559702C(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.GamepadRumbler::IncreaseRumbleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumbler_IncreaseRumbleIndex_mACE3589338B2DE89FF14A64B71C96BC792BF52C3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rumblePositionMs += loadedRumble.durationsMs[rumbleIndex];
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		int64_t L_0 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumblePositionMs_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_address_of_loadedRumble_0())->get_durationsMs_0();
		int32_t L_2 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumbleIndex_3();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_rumblePositionMs_4(((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)((int64_t)((int64_t)L_4)))));
		// rumbleIndex++;
		int32_t L_5 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumbleIndex_3();
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_rumbleIndex_3(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// if (rumbleIndex == loadedRumble.durationsMs.Length)
		int32_t L_6 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumbleIndex_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_address_of_loadedRumble_0())->get_durationsMs_0();
		NullCheck(L_7);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))))
		{
			goto IL_0042;
		}
	}
	{
		// Stop();
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		GamepadRumbler_Stop_mA4847F66A6DA1922C1F6F2A6D16E601F9559702C(/*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0042:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler::ProcessNextRumble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_ProcessNextRumble_mEC18F9EB8253DF689FB92ED472CBAB68C7F901A0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	{
		// if (rumbleIndex == -1)
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumbleIndex_3();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (rumbleIndex == loadedRumble.durationsMs.Length)
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumbleIndex_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_address_of_loadedRumble_0())->get_durationsMs_0();
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))))
		{
			goto IL_0022;
		}
	}
	{
		// Stop();
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		GamepadRumbler_Stop_mA4847F66A6DA1922C1F6F2A6D16E601F9559702C(/*hidden argument*/NULL);
		// return;
		return;
	}

IL_0022:
	{
		// long elapsed = playbackWatch.ElapsedMilliseconds;
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_3 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_playbackWatch_5();
		NullCheck(L_3);
		int64_t L_4;
		L_4 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// long durationToWait = 0;
		V_1 = ((int64_t)((int64_t)0));
	}

IL_0030:
	{
		// long rumbleEntryDuration = loadedRumble.durationsMs[rumbleIndex];
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_address_of_loadedRumble_0())->get_durationsMs_0();
		int32_t L_6 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumbleIndex_3();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// long error = elapsed - rumblePositionMs;
		int64_t L_9 = V_0;
		int64_t L_10 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumblePositionMs_4();
		V_2 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_9, (int64_t)L_10));
		// durationToWait = rumbleEntryDuration - error;
		int64_t L_11 = V_2;
		V_1 = ((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)((int64_t)L_8)), (int64_t)L_11));
		// if (durationToWait > 0)
		int64_t L_12 = V_1;
		if ((((int64_t)L_12) > ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0059;
		}
	}
	{
		// if (!IncreaseRumbleIndex())
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = GamepadRumbler_IncreaseRumbleIndex_mACE3589338B2DE89FF14A64B71C96BC792BF52C3(/*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0030;
		}
	}
	{
		// return;
		return;
	}

IL_0059:
	{
		// float lowFrequencySpeed = loadedRumble.lowFrequencyMotorSpeeds[rumbleIndex] * Mathf.Max(lowFrequencyMotorSpeedMultiplication, 0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = (((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_address_of_loadedRumble_0())->get_lowFrequencyMotorSpeeds_2();
		int32_t L_15 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumbleIndex_3();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		float L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		float L_18 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_lowFrequencyMotorSpeedMultiplication_6();
		float L_19;
		L_19 = Mathf_Max_m5C96B726079E95BB1A1DC60532553CB723D24C79(L_18, (0.0f), /*hidden argument*/NULL);
		// float highFrequencySpeed = loadedRumble.highFrequencyMotorSpeeds[rumbleIndex] * Mathf.Max(highFrequencyMotorSpeedMultiplication, 0.0f);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = (((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_address_of_loadedRumble_0())->get_highFrequencyMotorSpeeds_3();
		int32_t L_21 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumbleIndex_3();
		NullCheck(L_20);
		int32_t L_22 = L_21;
		float L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		float L_24 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_highFrequencyMotorSpeedMultiplication_7();
		float L_25;
		L_25 = Mathf_Max_m5C96B726079E95BB1A1DC60532553CB723D24C79(L_24, (0.0f), /*hidden argument*/NULL);
		// rumblePositionMs += loadedRumble.durationsMs[rumbleIndex];
		int64_t L_26 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumblePositionMs_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = (((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_address_of_loadedRumble_0())->get_durationsMs_0();
		int32_t L_28 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumbleIndex_3();
		NullCheck(L_27);
		int32_t L_29 = L_28;
		int32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_rumblePositionMs_4(((int64_t)il2cpp_codegen_add((int64_t)L_26, (int64_t)((int64_t)((int64_t)L_30)))));
		// rumbleIndex++;
		int32_t L_31 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumbleIndex_3();
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_rumbleIndex_3(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)));
		// rumbleTimer.Interval = durationToWait;
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_32 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumbleTimer_2();
		int64_t L_33 = V_1;
		NullCheck(L_32);
		Timer_set_Interval_mA437AE87EFE7BDF2BD2314158D3729B210474C23(L_32, ((double)((double)L_33)), /*hidden argument*/NULL);
		// rumbleTimer.AutoReset = false;
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_34 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumbleTimer_2();
		NullCheck(L_34);
		Timer_set_AutoReset_mE39B03D4F8032BB39B5D09CBF4A13CE660A16619(L_34, (bool)0, /*hidden argument*/NULL);
		// rumbleTimer.Enabled = true;
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_35 = ((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->get_rumbleTimer_2();
		NullCheck(L_35);
		Timer_set_Enabled_m03648A71FC47FCE77C7382AED892E09ABE6C034C(L_35, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler__cctor_m0D197F25321CC01FF0D74551C30BFFFC33FD5C21 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static bool rumbleLoaded = false;
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_rumbleLoaded_1((bool)0);
		// static Timer rumbleTimer = new Timer();
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_0 = (Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE *)il2cpp_codegen_object_new(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE_il2cpp_TypeInfo_var);
		Timer__ctor_m8CD6E716B068F1BC15FE81D56671AB0A6D347EBD(L_0, /*hidden argument*/NULL);
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_rumbleTimer_2(L_0);
		// static int rumbleIndex = -1;
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_rumbleIndex_3((-1));
		// static long rumblePositionMs = 0;
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_rumblePositionMs_4(((int64_t)((int64_t)0)));
		// static Stopwatch playbackWatch = new Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_1 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_1, /*hidden argument*/NULL);
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_playbackWatch_5(L_1);
		// public static float lowFrequencyMotorSpeedMultiplication = 1.0f;
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_lowFrequencyMotorSpeedMultiplication_6((1.0f));
		// public static float highFrequencyMotorSpeedMultiplication = 1.0f;
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_highFrequencyMotorSpeedMultiplication_7((1.0f));
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
// System.Void Lofelt.NiceVibrations.HapticClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticClip__ctor_mDA5C718F3840EF39183001C5AC3A7EEAE745CB55 (HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// Lofelt.NiceVibrations.HapticPatterns/PresetType Lofelt.NiceVibrations.HapticController::get_fallbackPreset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HapticController_get_fallbackPreset_m3A9A09E902E50F9405B81FC93BB6EDFB6683837B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _fallbackPreset; }
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		int32_t L_0 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__fallbackPreset_8();
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::set_fallbackPreset(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_fallbackPreset_m6FE9C9CEC1AC8E8821AD81A3D87C5DF58A5FD9A3 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _fallbackPreset = value; }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set__fallbackPreset_8(L_0);
		// set { _fallbackPreset = value; }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticController::get_hapticsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_get_hapticsEnabled_mF14D3A3456DFAD498D252635383648969002263D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _hapticsEnabled; }
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__hapticsEnabled_9();
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::set_hapticsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_hapticsEnabled_m7870A34D4397D3D314EC8F3FEFE3FBA73EBA3454 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_hapticsEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__hapticsEnabled_9();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// Stop();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Stop_mBC362B8017A7940605739D7556EA1BFB31536F73(/*hidden argument*/NULL);
	}

IL_000c:
	{
		// _hapticsEnabled = value;
		bool L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set__hapticsEnabled_9(L_1);
		// }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.HapticController::get_outputLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticController_get_outputLevel_m074B13D20CAF608946AD01C936B3E47D76B839F8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _outputLevel; }
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		float L_0 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__outputLevel_10();
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::set_outputLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_outputLevel_mF3825E9DEF7333A3674BB1BFE6BED3DF62D22E6A (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _outputLevel = value;
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set__outputLevel_10(L_0);
		// if (Init())
		bool L_1;
		L_1 = HapticController_Init_m05DB229DF56026DFD6E8B338602AA2094DEE0B9B(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// LofeltHaptics.SetAmplitudeMultiplication(_outputLevel * _clipLevel);
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		float L_2 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__outputLevel_10();
		float L_3 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__clipLevel_11();
		LofeltHaptics_SetAmplitudeMultiplication_mF6D852744957F360CA7BE2BAC97FF73046788EDC(((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), /*hidden argument*/NULL);
	}

IL_001d:
	{
		// GamepadRumbler.lowFrequencyMotorSpeedMultiplication = _outputLevel * _clipLevel;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		float L_4 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__outputLevel_10();
		float L_5 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__clipLevel_11();
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_lowFrequencyMotorSpeedMultiplication_6(((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)));
		// GamepadRumbler.highFrequencyMotorSpeedMultiplication = _outputLevel * _clipLevel;
		float L_6 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__outputLevel_10();
		float L_7 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__clipLevel_11();
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_highFrequencyMotorSpeedMultiplication_7(((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)));
		// }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.HapticController::get_clipLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticController_get_clipLevel_mA24A31BA608881ABA7A7F41E7198EB9F9F8D0179 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _clipLevel; }
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		float L_0 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__clipLevel_11();
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::set_clipLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_clipLevel_m25064A0FEAEC5C17FD00D1ED9220ADC3B906F654 (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _clipLevel = value;
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set__clipLevel_11(L_0);
		// if (Init())
		bool L_1;
		L_1 = HapticController_Init_m05DB229DF56026DFD6E8B338602AA2094DEE0B9B(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// LofeltHaptics.SetAmplitudeMultiplication(_outputLevel * _clipLevel);
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		float L_2 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__outputLevel_10();
		float L_3 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__clipLevel_11();
		LofeltHaptics_SetAmplitudeMultiplication_mF6D852744957F360CA7BE2BAC97FF73046788EDC(((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), /*hidden argument*/NULL);
	}

IL_001d:
	{
		// GamepadRumbler.lowFrequencyMotorSpeedMultiplication = _outputLevel * _clipLevel;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		float L_4 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__outputLevel_10();
		float L_5 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__clipLevel_11();
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_lowFrequencyMotorSpeedMultiplication_6(((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)));
		// GamepadRumbler.highFrequencyMotorSpeedMultiplication = _outputLevel * _clipLevel;
		float L_6 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__outputLevel_10();
		float L_7 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__clipLevel_11();
		((GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_StaticFields*)il2cpp_codegen_static_fields_for(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var))->set_highFrequencyMotorSpeedMultiplication_7(((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)));
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_Init_m05DB229DF56026DFD6E8B338602AA2094DEE0B9B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_0_U3CInitU3Eb__0_mFAE4814163D4551AED798B522BB547D05F720430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_0_t89AAAA2C31EE49CD9361159A776B9819C132B715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass27_0_t89AAAA2C31EE49CD9361159A776B9819C132B715 * V_0 = NULL;
	{
		// if (!lofeltHapticsInitalized)
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_lofeltHapticsInitalized_0();
		if (L_0)
		{
			goto IL_0054;
		}
	}
	{
		U3CU3Ec__DisplayClass27_0_t89AAAA2C31EE49CD9361159A776B9819C132B715 * L_1 = (U3CU3Ec__DisplayClass27_0_t89AAAA2C31EE49CD9361159A776B9819C132B715 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass27_0_t89AAAA2C31EE49CD9361159A776B9819C132B715_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass27_0__ctor_m1E8B2D24105D04328C64C983D756F0C3CCD31426(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		// lofeltHapticsInitalized = true;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_lofeltHapticsInitalized_0((bool)1);
		// var syncContext = System.Threading.SynchronizationContext.Current;
		U3CU3Ec__DisplayClass27_0_t89AAAA2C31EE49CD9361159A776B9819C132B715 * L_2 = V_0;
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_3;
		L_3 = SynchronizationContext_get_Current_mA91AB65F32E185D433CDB100FF651FB4FE0EFC43(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_syncContext_0(L_3);
		// playbackFinishedTimer.Elapsed += (object obj, System.Timers.ElapsedEventArgs args) =>
		// {
		//     // Timer elapsed events are called from a separate thread, so use
		//     // SynchronizationContext to handle it in the main thread.
		//     syncContext.Post(_ =>
		//     {
		//         HandleFinishedPlayback();
		//     }, null);
		// };
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_4 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_playbackFinishedTimer_1();
		U3CU3Ec__DisplayClass27_0_t89AAAA2C31EE49CD9361159A776B9819C132B715 * L_5 = V_0;
		ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 * L_6 = (ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 *)il2cpp_codegen_object_new(ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3_il2cpp_TypeInfo_var);
		ElapsedEventHandler__ctor_m2B99031158D1FA06EBE73A025249B5C1955441F5(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass27_0_U3CInitU3Eb__0_mFAE4814163D4551AED798B522BB547D05F720430_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		Timer_add_Elapsed_m3FDC03401E31156441DE48618493181329C31A1F(L_4, L_6, /*hidden argument*/NULL);
		// if (DeviceCapabilities.isVersionSupported)
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = DeviceCapabilities_get_isVersionSupported_mCB66CB54F7FE6E99C29096DD94F5621D7F6DE323_inline(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		// LofeltHaptics.Initialize();
		LofeltHaptics_Initialize_mA377FC50298CF947352265E440360496F8B0A1A7(/*hidden argument*/NULL);
		// DeviceCapabilities.Init();
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		DeviceCapabilities_Init_m597266487CE223D724BF6F11C16B6BBDEAC0B0D5(/*hidden argument*/NULL);
		// deviceMeetsAdvancedRequirements = DeviceCapabilities.meetsAdvancedRequirements;
		bool L_8;
		L_8 = DeviceCapabilities_get_meetsAdvancedRequirements_mCE6A48C2E83BFBB85BE2E3778AE1FB557463AA3B_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_deviceMeetsAdvancedRequirements_5(L_8);
	}

IL_004f:
	{
		// GamepadRumbler.Init();
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		GamepadRumbler_Init_m07AB01289FE15F4D15177554AFB1582941B3A3FB(/*hidden argument*/NULL);
	}

IL_0054:
	{
		// return deviceMeetsAdvancedRequirements;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_9 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_deviceMeetsAdvancedRequirements_5();
		return L_9;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_m53D34F7D5AE0A3675EFE35CA93286EF1B8634B22 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B3_0 = NULL;
	{
		// GamepadRumbler.Unload();
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		GamepadRumbler_Unload_m0137FAB967CB39DAD1D01779AB49E0090774D7B6(/*hidden argument*/NULL);
		// lastSeekTime = 0.0f;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_lastSeekTime_4((0.0f));
		// clipLoaded = true;
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_clipLoaded_3((bool)1);
		// clipLoadedDurationSecs = 0.0f;
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_clipLoadedDurationSecs_2((0.0f));
		// if (Init())
		bool L_0;
		L_0 = HapticController_Init_m05DB229DF56026DFD6E8B338602AA2094DEE0B9B(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		// LofeltHaptics.Load(data);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		LofeltHaptics_Load_m37600D26A0D58AC95F5CAEBCAD5A1C6619A0B451(L_1, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// clipLevel = 1.0f;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_clipLevel_m25064A0FEAEC5C17FD00D1ED9220ADC3B906F654((1.0f), /*hidden argument*/NULL);
		// LoadedClipChanged?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_LoadedClipChanged_12();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0040;
		}
	}
	{
		return;
	}

IL_0040:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B4_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Load(Lofelt.NiceVibrations.HapticClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_m6457DE38F1B509DCD885C8DE88C91F1BB06F548A (HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * ___clip0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Load(clip.json, clip.gamepadRumble);
		HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * L_0 = ___clip0;
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0->get_json_4();
		HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * L_2 = ___clip0;
		NullCheck(L_2);
		GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  L_3 = L_2->get_gamepadRumble_5();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Load_m5766B2D3286ED39B532E4053A97C12C47E5BF018(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Load(System.Byte[],Lofelt.NiceVibrations.GamepadRumble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_m5766B2D3286ED39B532E4053A97C12C47E5BF018 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___json0, GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  ___rumble1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Load(json);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___json0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Load_m53D34F7D5AE0A3675EFE35CA93286EF1B8634B22(L_0, /*hidden argument*/NULL);
		// GamepadRumbler.Load(rumble);
		GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  L_1 = ___rumble1;
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		GamepadRumbler_Load_m2F9721A4197FD997EACB73D25C8B449101ADC9D4(L_1, /*hidden argument*/NULL);
		// if (clipLoadedDurationSecs == 0.0f && rumble.IsValid())
		float L_2 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_clipLoadedDurationSecs_2();
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0033;
		}
	}
	{
		bool L_3;
		L_3 = GamepadRumble_IsValid_m878CB18329953DB9755C2EBA5483788815C9649B((GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045 *)(&___rumble1), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// clipLoadedDurationSecs = rumble.totalDurationMs / 1000.0f;
		GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  L_4 = ___rumble1;
		int32_t L_5 = L_4.get_totalDurationMs_1();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_clipLoadedDurationSecs_2(((float)((float)((float)((float)L_5))/(float)(1000.0f))));
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::HandleFinishedPlayback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_HandleFinishedPlayback_mFE7E0FEF7508CBEACF23B8E222D18EAD2D9C15C5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// lastSeekTime = 0.0f;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_lastSeekTime_4((0.0f));
		// isPlaybackLooping = false;
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_isPlaybackLooping_7((bool)0);
		// playbackFinishedTimer.Enabled = false;
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_0 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_playbackFinishedTimer_1();
		NullCheck(L_0);
		Timer_set_Enabled_m03648A71FC47FCE77C7382AED892E09ABE6C034C(L_0, (bool)0, /*hidden argument*/NULL);
		// PlaybackStopped?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_PlaybackStopped_14();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0025;
		}
	}
	{
		return;
	}

IL_0025:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Play_m953FC2DF71EF3439E59E074246BC37D331FB5C80 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B10_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B9_0 = NULL;
	{
		// if (!_hapticsEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__hapticsEnabled_9();
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// float remainingPlayDuration = 0.0f;
		V_0 = (0.0f);
		// bool canLoop = false;
		V_1 = (bool)0;
		// if (GamepadRumbler.CanPlay())
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = GamepadRumbler_CanPlay_m67F04FE93600E90CC2F48402E3BBADC13F8A4747(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// remainingPlayDuration = clipLoadedDurationSecs;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		float L_2 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_clipLoadedDurationSecs_2();
		V_0 = L_2;
		// GamepadRumbler.Play();
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		GamepadRumbler_Play_m4781E4D37B3E1F4048A59C8FDE1CB2EB44012C60(/*hidden argument*/NULL);
		// }
		goto IL_006a;
	}

IL_0024:
	{
		// else if (Init())
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = HapticController_Init_m05DB229DF56026DFD6E8B338602AA2094DEE0B9B(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		// remainingPlayDuration = Mathf.Max(clipLoadedDurationSecs - lastSeekTime, 0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		float L_4 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_clipLoadedDurationSecs_2();
		float L_5 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_lastSeekTime_4();
		float L_6;
		L_6 = Mathf_Max_m5C96B726079E95BB1A1DC60532553CB723D24C79(((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		// canLoop = DeviceCapabilities.canLoop;
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = DeviceCapabilities_get_canLoop_m49A0D71C43EF96302B36008D2F965CAC528512CC_inline(/*hidden argument*/NULL);
		V_1 = L_7;
		// LofeltHaptics.Play();
		LofeltHaptics_Play_m5CCEAA8FD388B705893025191DE4E0BFEB6A34A0(/*hidden argument*/NULL);
		// }
		goto IL_006a;
	}

IL_004e:
	{
		// else if (DeviceCapabilities.isVersionSupported)
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = DeviceCapabilities_get_isVersionSupported_mCB66CB54F7FE6E99C29096DD94F5621D7F6DE323_inline(/*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// remainingPlayDuration = HapticPatterns.GetPresetDuration(fallbackPreset);
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = HapticController_get_fallbackPreset_m3A9A09E902E50F9405B81FC93BB6EDFB6683837B_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		float L_10;
		L_10 = HapticPatterns_GetPresetDuration_mDEC5026CE886F90852F61E24201F48CA4C1B488F(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// HapticPatterns.PlayPreset(fallbackPreset);
		int32_t L_11;
		L_11 = HapticController_get_fallbackPreset_m3A9A09E902E50F9405B81FC93BB6EDFB6683837B_inline(/*hidden argument*/NULL);
		HapticPatterns_PlayPreset_m9AC38A9A2C0CFEB2EBFB0C5124C44382F8BFAEA5(L_11, /*hidden argument*/NULL);
	}

IL_006a:
	{
		// isPlaybackLooping = isLoopingEnabledByUser && canLoop;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_12 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_isLoopingEnabledByUser_6();
		bool L_13 = V_1;
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_isPlaybackLooping_7((bool)((int32_t)((int32_t)L_12&(int32_t)L_13)));
		// PlaybackStarted?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_14 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_PlaybackStarted_13();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_15 = L_14;
		G_B9_0 = L_15;
		if (L_15)
		{
			G_B10_0 = L_15;
			goto IL_0081;
		}
	}
	{
		goto IL_0086;
	}

IL_0081:
	{
		NullCheck(G_B10_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B10_0, /*hidden argument*/NULL);
	}

IL_0086:
	{
		// if (remainingPlayDuration > 0.0f)
		float L_16 = V_0;
		if ((!(((float)L_16) > ((float)(0.0f)))))
		{
			goto IL_00be;
		}
	}
	{
		// playbackFinishedTimer.Interval = remainingPlayDuration * 1000;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_17 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_playbackFinishedTimer_1();
		float L_18 = V_0;
		NullCheck(L_17);
		Timer_set_Interval_mA437AE87EFE7BDF2BD2314158D3729B210474C23(L_17, ((double)((double)((float)il2cpp_codegen_multiply((float)L_18, (float)(1000.0f))))), /*hidden argument*/NULL);
		// playbackFinishedTimer.AutoReset = false;
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_19 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_playbackFinishedTimer_1();
		NullCheck(L_19);
		Timer_set_AutoReset_mE39B03D4F8032BB39B5D09CBF4A13CE660A16619(L_19, (bool)0, /*hidden argument*/NULL);
		// playbackFinishedTimer.Enabled = !isPlaybackLooping;
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_20 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_playbackFinishedTimer_1();
		bool L_21 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_isPlaybackLooping_7();
		NullCheck(L_20);
		Timer_set_Enabled_m03648A71FC47FCE77C7382AED892E09ABE6C034C(L_20, (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}

IL_00be:
	{
		// HandleFinishedPlayback();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_HandleFinishedPlayback_mFE7E0FEF7508CBEACF23B8E222D18EAD2D9C15C5(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Play(Lofelt.NiceVibrations.HapticClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Play_mE8F395BC8C38E1ADCE92A69AAAF9082B9DDCB172 (HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * ___clip0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Load(clip);
		HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * L_0 = ___clip0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Load_m6457DE38F1B509DCD885C8DE88C91F1BB06F548A(L_0, /*hidden argument*/NULL);
		// Play();
		HapticController_Play_m953FC2DF71EF3439E59E074246BC37D331FB5C80(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Stop_mBC362B8017A7940605739D7556EA1BFB31536F73 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Init())
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m05DB229DF56026DFD6E8B338602AA2094DEE0B9B(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// LofeltHaptics.Stop();
		LofeltHaptics_Stop_mBDE87B98387910BD93002C41522D147E03AD8945(/*hidden argument*/NULL);
	}

IL_000c:
	{
		// GamepadRumbler.Stop();
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		GamepadRumbler_Stop_mA4847F66A6DA1922C1F6F2A6D16E601F9559702C(/*hidden argument*/NULL);
		// HandleFinishedPlayback();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_HandleFinishedPlayback_mFE7E0FEF7508CBEACF23B8E222D18EAD2D9C15C5(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Seek_mE3D9DF75C2BE679AA0291DCB82AB4EAA4BFA16B2 (float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Init())
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m05DB229DF56026DFD6E8B338602AA2094DEE0B9B(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// LofeltHaptics.Stop();
		LofeltHaptics_Stop_mBDE87B98387910BD93002C41522D147E03AD8945(/*hidden argument*/NULL);
		// LofeltHaptics.Seek(time);
		float L_1 = ___time0;
		LofeltHaptics_Seek_m883C2BDEC223E19C459C0F7922DB73237E805761(L_1, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// GamepadRumbler.Stop();
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		GamepadRumbler_Stop_mA4847F66A6DA1922C1F6F2A6D16E601F9559702C(/*hidden argument*/NULL);
		// lastSeekTime = time;
		float L_2 = ___time0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_lastSeekTime_4(L_2);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::set_clipFrequencyShift(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_clipFrequencyShift_m141A54F5B79E5DCF056234F22005CA5B20782CA2 (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Init())
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m05DB229DF56026DFD6E8B338602AA2094DEE0B9B(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// LofeltHaptics.SetFrequencyShift(value);
		float L_1 = ___value0;
		LofeltHaptics_SetFrequencyShift_m1D9F98401A6EF0D6925B2CCDF3CFDBDF79F92304(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Loop_m56DDCE2C8E43BBBC0FDD379C594E5941FA4712F2 (bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Init())
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m05DB229DF56026DFD6E8B338602AA2094DEE0B9B(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// LofeltHaptics.Loop(enabled);
		bool L_1 = ___enabled0;
		LofeltHaptics_Loop_mC52D6F9C0954FCCB063023EF3061C12D1F4A7E3B(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// isLoopingEnabledByUser = enabled;
		bool L_2 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_isLoopingEnabledByUser_6(L_2);
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticController::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_IsPlaying_mE39908387FFA5F99CD1EE851CC297EA1CB13BBB9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playbackFinishedTimer.Enabled)
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_0 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_playbackFinishedTimer_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = Timer_get_Enabled_mB4FA1932A26F7AAFDEA0E1C33533305F1AF9ED17_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000e:
	{
		// return isPlaybackLooping;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_2 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_isPlaybackLooping_7();
		return L_2;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Reset_mBC0ED72E96C59888E6BB046CC2A9C35600242445 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (clipLoaded)
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_clipLoaded_3();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// Seek(0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Seek_mE3D9DF75C2BE679AA0291DCB82AB4EAA4BFA16B2((0.0f), /*hidden argument*/NULL);
		// Stop();
		HapticController_Stop_mBC362B8017A7940605739D7556EA1BFB31536F73(/*hidden argument*/NULL);
		// clipLevel = 1.0f;
		HapticController_set_clipLevel_m25064A0FEAEC5C17FD00D1ED9220ADC3B906F654((1.0f), /*hidden argument*/NULL);
		// clipFrequencyShift = 0.0f;
		HapticController_set_clipFrequencyShift_m141A54F5B79E5DCF056234F22005CA5B20782CA2((0.0f), /*hidden argument*/NULL);
		// Loop(false);
		HapticController_Loop_m56DDCE2C8E43BBBC0FDD379C594E5941FA4712F2((bool)0, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// fallbackPreset = HapticPatterns.PresetType.None;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_fallbackPreset_m6FE9C9CEC1AC8E8821AD81A3D87C5DF58A5FD9A3_inline((-1), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::ProcessApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_ProcessApplicationFocus_mEE49E3FA2E8D52F3B53D2372C6DADCF2FF0F8C07 (bool ___hasFocus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!hasFocus)
		bool L_0 = ___hasFocus0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// Stop();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Stop_mBC362B8017A7940605739D7556EA1BFB31536F73(/*hidden argument*/NULL);
	}

IL_0008:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController__cctor_m3F7B9A27F687C48AC38A8AB46A66A240514F60E4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static bool lofeltHapticsInitalized = false;
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_lofeltHapticsInitalized_0((bool)0);
		// static Timer playbackFinishedTimer = new Timer();
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_0 = (Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE *)il2cpp_codegen_object_new(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE_il2cpp_TypeInfo_var);
		Timer__ctor_m8CD6E716B068F1BC15FE81D56671AB0A6D347EBD(L_0, /*hidden argument*/NULL);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_playbackFinishedTimer_1(L_0);
		// static float clipLoadedDurationSecs = 0.0f;
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_clipLoadedDurationSecs_2((0.0f));
		// static bool clipLoaded = false;
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_clipLoaded_3((bool)0);
		// static float lastSeekTime = 0.0f;
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_lastSeekTime_4((0.0f));
		// static bool deviceMeetsAdvancedRequirements = false;
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_deviceMeetsAdvancedRequirements_5((bool)0);
		// static bool isLoopingEnabledByUser = false;
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_isLoopingEnabledByUser_6((bool)0);
		// static bool isPlaybackLooping = false;
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_isPlaybackLooping_7((bool)0);
		// static HapticPatterns.PresetType _fallbackPreset = HapticPatterns.PresetType.None;
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set__fallbackPreset_8((-1));
		// internal static bool _hapticsEnabled = true;
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set__hapticsEnabled_9((bool)1);
		// internal static float _outputLevel = 1.0f;
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set__outputLevel_10((1.0f));
		// internal static float _clipLevel = 1.0f;
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set__clipLevel_11((1.0f));
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
// System.Void Lofelt.NiceVibrations.HapticPatterns::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns__cctor_m2994FA1F9C08C01B6E85F7A0B2425D09A03D1D16 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D____5F0774E0B9EA6C3443748D1474FD43A0B3A08CCEF3C2B9F8E15F3F7D43BD4ACC_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D____B30613B9E077778CFC78B406A72E83D147142167568E0E0D6622F3E876B22D37_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D____EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D____F6CA0AA9C0FC9679D7F39A00D68E861941FF51D0434CDB22D33B4163AA27F2AC_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B63886015A4191332EA3F977B1146A0B78A6E82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2135703B40B414C092DF068E8FAA55E46FFB30B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC444FDC3B86DC5349F7224E5C2605245C0859BA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Pattern Selection =
		//     new Pattern(new float[] { 0.0f, 0.01f },
		//                          new float[] { 0.471f, 0.471f });
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.00999999978f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.470999986f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.470999986f));
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Pattern__ctor_mEB7F974ACA6B33C2A65C73C9CD0B9858DEFAC987((&L_5), L_1, L_4, /*hidden argument*/NULL);
		((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->set_Selection_4(L_5);
		// static Pattern Light =
		//     new Pattern(new float[] { 0.0f, 0.02f },
		//                          new float[] { 0.156f, 0.156f });
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0199999996f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.156000003f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.156000003f));
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Pattern__ctor_mEB7F974ACA6B33C2A65C73C9CD0B9858DEFAC987((&L_11), L_7, L_10, /*hidden argument*/NULL);
		((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->set_Light_5(L_11);
		// static Pattern Medium =
		//     new Pattern(new float[] { 0.0f, 0.04f },
		//                          new float[] { 0.471f, 0.471f });
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = L_12;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0399999991f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15 = L_14;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.470999986f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.470999986f));
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Pattern__ctor_mEB7F974ACA6B33C2A65C73C9CD0B9858DEFAC987((&L_17), L_13, L_16, /*hidden argument*/NULL);
		((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->set_Medium_6(L_17);
		// static Pattern Heavy =
		//     new Pattern(new float[] { 0.0f, 0.08f },
		//                          new float[] { 1.0f, 1.0f });
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_18 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = L_18;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0799999982f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_21 = L_20;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.0f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_22 = L_21;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(1.0f));
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Pattern__ctor_mEB7F974ACA6B33C2A65C73C9CD0B9858DEFAC987((&L_23), L_19, L_22, /*hidden argument*/NULL);
		((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->set_Heavy_7(L_23);
		// static Pattern Rigid =
		//     new Pattern(new float[] { 0.0f, 0.02f },
		//                          new float[] { 1.0f, 1.0f });
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_25 = L_24;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0199999996f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_26 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_27 = L_26;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.0f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_28 = L_27;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(1.0f));
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Pattern__ctor_mEB7F974ACA6B33C2A65C73C9CD0B9858DEFAC987((&L_29), L_25, L_28, /*hidden argument*/NULL);
		((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->set_Rigid_8(L_29);
		// static Pattern Soft =
		//     new Pattern(new float[] { 0.0f, 0.08f },
		//                          new float[] { 0.156f, 0.156f });
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_30 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_31 = L_30;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0799999982f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_32 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_33 = L_32;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.156000003f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_34 = L_33;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.156000003f));
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Pattern__ctor_mEB7F974ACA6B33C2A65C73C9CD0B9858DEFAC987((&L_35), L_31, L_34, /*hidden argument*/NULL);
		((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->set_Soft_9(L_35);
		// static Pattern Success =
		//     new Pattern(new float[] { 0.0f, 0.020f, 0.040f, 0.120f },
		//                          new float[] { 0.0f, 0.157f, 0.0f, 1.0f });
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_36 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_37 = L_36;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_38 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D____F6CA0AA9C0FC9679D7F39A00D68E861941FF51D0434CDB22D33B4163AA27F2AC_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F((RuntimeArray *)(RuntimeArray *)L_37, L_38, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_39 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_40 = L_39;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.157000005f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_41 = L_40;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)(1.0f));
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Pattern__ctor_mEB7F974ACA6B33C2A65C73C9CD0B9858DEFAC987((&L_42), L_37, L_41, /*hidden argument*/NULL);
		((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->set_Success_10(L_42);
		// static Pattern Failure =
		//     new Pattern(new float[] { 0.0f, 0.040f, 0.060f, 0.100f, 0.120f, 0.200f, 0.220f, 0.240f },
		//                          new float[] { 0.0f, 0.47f, 0.0f, 0.47f, 0.0f, 1.0f, 0.0f, 0.157f });
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_43 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)8);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_44 = L_43;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_45 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D____5F0774E0B9EA6C3443748D1474FD43A0B3A08CCEF3C2B9F8E15F3F7D43BD4ACC_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F((RuntimeArray *)(RuntimeArray *)L_44, L_45, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_46 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)8);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47 = L_46;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_48 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D____EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F((RuntimeArray *)(RuntimeArray *)L_47, L_48, /*hidden argument*/NULL);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Pattern__ctor_mEB7F974ACA6B33C2A65C73C9CD0B9858DEFAC987((&L_49), L_44, L_47, /*hidden argument*/NULL);
		((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->set_Failure_11(L_49);
		// static Pattern Warning =
		//     new Pattern(new float[] { 0.0f, 0.060f, 0.120f, 0.140f },
		//                          new float[] { 0.0f, 1.0f, 0.0f, 0.47f });
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_50 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_51 = L_50;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_52 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tECA7C8D0DE7D42FE4D7DAF83495766A09E0C112D____B30613B9E077778CFC78B406A72E83D147142167568E0E0D6622F3E876B22D37_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F((RuntimeArray *)(RuntimeArray *)L_51, L_52, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_53 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_54 = L_53;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(1.0f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_55 = L_54;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)(0.469999999f));
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_56;
		memset((&L_56), 0, sizeof(L_56));
		Pattern__ctor_mEB7F974ACA6B33C2A65C73C9CD0B9858DEFAC987((&L_56), L_51, L_55, /*hidden argument*/NULL);
		((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->set_Warning_12(L_56);
		// emphasisTemplate = (Resources.Load("nv-emphasis-template") as TextAsset).text;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_57;
		L_57 = Resources_Load_mC33EB216560AE32277F2C285188B4490CEB6F074(_stringLiteralC444FDC3B86DC5349F7224E5C2605245C0859BA1, /*hidden argument*/NULL);
		NullCheck(((TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *)IsInstClass((RuntimeObject*)L_57, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var)));
		String_t* L_58;
		L_58 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(((TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *)IsInstClass((RuntimeObject*)L_57, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->set_emphasisTemplate_0(L_58);
		// constantTemplate = (Resources.Load("nv-constant-template") as TextAsset).text;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_59;
		L_59 = Resources_Load_mC33EB216560AE32277F2C285188B4490CEB6F074(_stringLiteral8B63886015A4191332EA3F977B1146A0B78A6E82, /*hidden argument*/NULL);
		NullCheck(((TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *)IsInstClass((RuntimeObject*)L_59, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var)));
		String_t* L_60;
		L_60 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(((TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *)IsInstClass((RuntimeObject*)L_59, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->set_constantTemplate_1(L_60);
		// patternTemplate = (Resources.Load("nv-pattern-template") as TextAsset).text;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_61;
		L_61 = Resources_Load_mC33EB216560AE32277F2C285188B4490CEB6F074(_stringLiteralA2135703B40B414C092DF068E8FAA55E46FFB30B, /*hidden argument*/NULL);
		NullCheck(((TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *)IsInstClass((RuntimeObject*)L_61, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var)));
		String_t* L_62;
		L_62 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(((TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *)IsInstClass((RuntimeObject*)L_61, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->set_patternTemplate_2(L_62);
		// numberFormat = new NumberFormatInfo();
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_63 = (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D *)il2cpp_codegen_object_new(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_il2cpp_TypeInfo_var);
		NumberFormatInfo__ctor_m6170D636849222DB99BEDFB33C7A5E4032D8A097(L_63, /*hidden argument*/NULL);
		((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->set_numberFormat_3(L_63);
		// numberFormat.NumberDecimalSeparator = ".";
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_64 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_numberFormat_3();
		NullCheck(L_64);
		NumberFormatInfo_set_NumberDecimalSeparator_m061730CB113D54B6DFD16532CFA295901905B44A(L_64, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticPatterns::PlayEmphasis(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayEmphasis_mD59F41F6ED9065808EC011FAA66270BD5443E334 (float ___amplitude0, float ___frequency1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A5A4A501BAA6FD3ED4EBE9BFC926066FCBD5ABE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61DD0B794D236B1414F02F76E8AF03EDCDC5FD17);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	String_t* V_2 = NULL;
	GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	{
		// if (emphasisTemplate == null)
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		String_t* L_0 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_emphasisTemplate_0();
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// float clampedAmplitude = Mathf.Clamp(amplitude, 0.0f, 1.0f);
		float L_1 = ___amplitude0;
		float L_2;
		L_2 = Mathf_Clamp_m5EA831B060853D4246B8394A30599A0021F80AFF(L_1, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_2;
		// float clampedFrequency = Mathf.Clamp(frequency, 0.0f, 1.0f);
		float L_3 = ___frequency1;
		float L_4;
		L_4 = Mathf_Clamp_m5EA831B060853D4246B8394A30599A0021F80AFF(L_3, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_1 = L_4;
		// String json = emphasisTemplate
		//     .Replace("{amplitude}", clampedAmplitude.ToString(numberFormat))
		//     .Replace("{frequency}", clampedFrequency.ToString(numberFormat))
		//     .Replace("{duration}", duration.ToString(numberFormat));
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		String_t* L_5 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_emphasisTemplate_0();
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_6 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_numberFormat_3();
		String_t* L_7;
		L_7 = Single_ToString_mF554E46C641C609768519378FB0486DFD7F82985((float*)(&V_0), L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_8;
		L_8 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_5, _stringLiteral61DD0B794D236B1414F02F76E8AF03EDCDC5FD17, L_7, /*hidden argument*/NULL);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_9 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_numberFormat_3();
		String_t* L_10;
		L_10 = Single_ToString_mF554E46C641C609768519378FB0486DFD7F82985((float*)(&V_1), L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_11;
		L_11 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_8, _stringLiteral1A5A4A501BAA6FD3ED4EBE9BFC926066FCBD5ABE, L_10, /*hidden argument*/NULL);
		V_4 = (0.100000001f);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_12 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_numberFormat_3();
		String_t* L_13;
		L_13 = Single_ToString_mF554E46C641C609768519378FB0486DFD7F82985((float*)(&V_4), L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_14;
		L_14 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_11, _stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		// GamepadRumble rumble = new GamepadRumble();
		il2cpp_codegen_initobj((&V_3), sizeof(GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045 ));
		// rumble.durationsMs = new int[] { (int)(duration * 1000) };
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)100));
		(&V_3)->set_durationsMs_0(L_16);
		// rumble.lowFrequencyMotorSpeeds = new float[] { clampedAmplitude };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)1);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_18 = L_17;
		float L_19 = V_0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_19);
		(&V_3)->set_lowFrequencyMotorSpeeds_2(L_18);
		// rumble.highFrequencyMotorSpeeds = new float[] { clampedFrequency };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)1);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_21 = L_20;
		float L_22 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_22);
		(&V_3)->set_highFrequencyMotorSpeeds_3(L_21);
		// HapticController.Load(System.Text.Encoding.UTF8.GetBytes(json), rumble);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_23;
		L_23 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
		String_t* L_24 = V_2;
		NullCheck(L_23);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25;
		L_25 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_23, L_24);
		GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  L_26 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Load_m5766B2D3286ED39B532E4053A97C12C47E5BF018(L_25, L_26, /*hidden argument*/NULL);
		// HapticController.Loop(false);
		HapticController_Loop_m56DDCE2C8E43BBBC0FDD379C594E5941FA4712F2((bool)0, /*hidden argument*/NULL);
		// SetEmphasisFallbackPresetsFromAmplitude(amplitude);
		float L_27 = ___amplitude0;
		HapticPatterns_SetEmphasisFallbackPresetsFromAmplitude_mBBF70AC40C6AB0EAA8AA641CD65DC9999D47DED0(L_27, /*hidden argument*/NULL);
		// HapticController.Play();
		HapticController_Play_m953FC2DF71EF3439E59E074246BC37D331FB5C80(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticPatterns::SetEmphasisFallbackPresetsFromAmplitude(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_SetEmphasisFallbackPresetsFromAmplitude_mBBF70AC40C6AB0EAA8AA641CD65DC9999D47DED0 (float ___amplitude0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (amplitude > 0.5f)
		float L_0 = ___amplitude0;
		if ((!(((float)L_0) > ((float)(0.5f)))))
		{
			goto IL_000f;
		}
	}
	{
		// HapticController.fallbackPreset = HapticPatterns.PresetType.HeavyImpact;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_fallbackPreset_m6FE9C9CEC1AC8E8821AD81A3D87C5DF58A5FD9A3_inline(6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_000f:
	{
		// else if (amplitude <= 0.5f && amplitude > 0.3)
		float L_1 = ___amplitude0;
		if ((!(((float)L_1) <= ((float)(0.5f)))))
		{
			goto IL_002b;
		}
	}
	{
		float L_2 = ___amplitude0;
		if ((!(((double)((double)((double)L_2))) > ((double)(0.29999999999999999)))))
		{
			goto IL_002b;
		}
	}
	{
		// HapticController.fallbackPreset = HapticPatterns.PresetType.MediumImpact;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_fallbackPreset_m6FE9C9CEC1AC8E8821AD81A3D87C5DF58A5FD9A3_inline(5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002b:
	{
		// else if (amplitude <= 0.3f)
		float L_3 = ___amplitude0;
		if ((!(((float)L_3) <= ((float)(0.300000012f)))))
		{
			goto IL_0039;
		}
	}
	{
		// HapticController.fallbackPreset = HapticPatterns.PresetType.LightImpact;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_fallbackPreset_m6FE9C9CEC1AC8E8821AD81A3D87C5DF58A5FD9A3_inline(4, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticPatterns::PlayConstant(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayConstant_m0683110D782E5EF2874D32EC2AAE714B3A9B4DF7 (float ___amplitude0, float ___frequency1, float ___duration2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	String_t* V_3 = NULL;
	GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// if (constantTemplate == null)
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		String_t* L_0 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_constantTemplate_1();
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// float clampedAmplitude = Mathf.Clamp(amplitude, 0.0f, 1.0f);
		float L_1 = ___amplitude0;
		float L_2;
		L_2 = Mathf_Clamp_m5EA831B060853D4246B8394A30599A0021F80AFF(L_1, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_2;
		// float clampedFrequency = Mathf.Clamp(frequency, 0.0f, 1.0f);
		float L_3 = ___frequency1;
		float L_4;
		L_4 = Mathf_Clamp_m5EA831B060853D4246B8394A30599A0021F80AFF(L_3, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_1 = L_4;
		// float clampedDurationSecs = Mathf.Max(duration, 0.0f);
		float L_5 = ___duration2;
		float L_6;
		L_6 = Mathf_Max_m5C96B726079E95BB1A1DC60532553CB723D24C79(L_5, (0.0f), /*hidden argument*/NULL);
		V_2 = L_6;
		// String json = constantTemplate
		//     .Replace("{duration}", clampedDurationSecs.ToString(numberFormat));
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		String_t* L_7 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_constantTemplate_1();
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_8 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_numberFormat_3();
		String_t* L_9;
		L_9 = Single_ToString_mF554E46C641C609768519378FB0486DFD7F82985((float*)(&V_2), L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_10;
		L_10 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_7, _stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// GamepadRumble rumble = new GamepadRumble();
		il2cpp_codegen_initobj((&V_4), sizeof(GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045 ));
		// int rumbleDurationMs = (int)(clampedDurationSecs * 1000);
		float L_11 = V_2;
		// int rumbleEntryCount = rumbleDurationMs / rumbleEntryDurationMs;
		V_5 = ((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)L_11, (float)(1000.0f))))/(int32_t)((int32_t)16)));
		// rumble.durationsMs = new int[rumbleEntryCount];
		int32_t L_12 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_12);
		(&V_4)->set_durationsMs_0(L_13);
		// rumble.lowFrequencyMotorSpeeds = new float[rumbleEntryCount];
		int32_t L_14 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_14);
		(&V_4)->set_lowFrequencyMotorSpeeds_2(L_15);
		// rumble.highFrequencyMotorSpeeds = new float[rumbleEntryCount];
		int32_t L_16 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_16);
		(&V_4)->set_highFrequencyMotorSpeeds_3(L_17);
		// for (int i = 0; i < rumbleEntryCount; i++)
		V_6 = 0;
		goto IL_00c6;
	}

IL_0096:
	{
		// rumble.durationsMs[i] = rumbleEntryDurationMs;
		GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  L_18 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = L_18.get_durationsMs_0();
		int32_t L_20 = V_6;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (int32_t)((int32_t)16));
		// rumble.lowFrequencyMotorSpeeds[i] = 1.0f;
		GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  L_21 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_22 = L_21.get_lowFrequencyMotorSpeeds_2();
		int32_t L_23 = V_6;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (float)(1.0f));
		// rumble.highFrequencyMotorSpeeds[i] = 1.0f;
		GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  L_24 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_25 = L_24.get_highFrequencyMotorSpeeds_3();
		int32_t L_26 = V_6;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (float)(1.0f));
		// for (int i = 0; i < rumbleEntryCount; i++)
		int32_t L_27 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00c6:
	{
		// for (int i = 0; i < rumbleEntryCount; i++)
		int32_t L_28 = V_6;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0096;
		}
	}
	{
		// HapticController.Load(System.Text.Encoding.UTF8.GetBytes(json), rumble);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_30;
		L_30 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
		String_t* L_31 = V_3;
		NullCheck(L_30);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32;
		L_32 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_30, L_31);
		GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  L_33 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Load_m5766B2D3286ED39B532E4053A97C12C47E5BF018(L_32, L_33, /*hidden argument*/NULL);
		// HapticController.Loop(false);
		HapticController_Loop_m56DDCE2C8E43BBBC0FDD379C594E5941FA4712F2((bool)0, /*hidden argument*/NULL);
		// HapticController.clipLevel = clampedAmplitude;
		float L_34 = V_0;
		HapticController_set_clipLevel_m25064A0FEAEC5C17FD00D1ED9220ADC3B906F654(L_34, /*hidden argument*/NULL);
		// HapticController.clipFrequencyShift = clampedFrequency;
		float L_35 = V_1;
		HapticController_set_clipFrequencyShift_m141A54F5B79E5DCF056234F22005CA5B20782CA2(L_35, /*hidden argument*/NULL);
		// HapticController.Play();
		HapticController_Play_m953FC2DF71EF3439E59E074246BC37D331FB5C80(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticPatterns::PlayPattern(Lofelt.NiceVibrations.HapticPatterns/Pattern)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayPattern_m6AB7698D07CF6284ECA0C6597CB8906EFB76D854 (Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  ___pattern0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B481BD414EE082CA5F33A7513CDB2D68ADAF594);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CF167CD5E0AB4195BC6B1A4DEDCCEEA1E9E954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8F8B953FE2D84FB48669F1FF532EB963C0006E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		// if (patternTemplate == null)
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		String_t* L_0 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_patternTemplate_2();
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (pattern.time.Length == 0 ||
		//     pattern.amplitude.Length != pattern.time.Length)
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_1 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = L_1.get_time_0();
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0023;
		}
	}
	{
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_3 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = L_3.get_amplitude_1();
		NullCheck(L_4);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_5 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = L_5.get_time_0();
		NullCheck(L_6);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0024;
		}
	}

IL_0023:
	{
		// return;
		return;
	}

IL_0024:
	{
		// if (HapticController.Init())
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = HapticController_Init_m05DB229DF56026DFD6E8B338602AA2094DEE0B9B(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00f9;
		}
	}
	{
		// String amplitudeEnvelope = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < pattern.time.Length; i++)
		V_1 = 0;
		goto IL_00b3;
	}

IL_0038:
	{
		// float clampedAmplitude = Mathf.Clamp(pattern.amplitude[i], 0.0f, 1.0f);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_8 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = L_8.get_amplitude_1();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13;
		L_13 = Mathf_Clamp_m5EA831B060853D4246B8394A30599A0021F80AFF(L_12, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_2 = L_13;
		// amplitudeEnvelope += "{ \"time\":" + pattern.time[i] + "," +
		//                         "\"amplitude\":" + clampedAmplitude + "}";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		String_t* L_16 = V_0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_16);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral4B481BD414EE082CA5F33A7513CDB2D68ADAF594);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4B481BD414EE082CA5F33A7513CDB2D68ADAF594);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_19 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = L_19.get_time_0();
		int32_t L_21 = V_1;
		NullCheck(L_20);
		String_t* L_22;
		L_22 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_22);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_18;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralD8F8B953FE2D84FB48669F1FF532EB963C0006E0);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralD8F8B953FE2D84FB48669F1FF532EB963C0006E0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_23;
		String_t* L_25;
		L_25 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_25);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_24;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		String_t* L_27;
		L_27 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417(L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		// if (i + 1 < pattern.time.Length)
		int32_t L_28 = V_1;
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_29 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_30 = L_29.get_time_0();
		NullCheck(L_30);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1))) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_00af;
		}
	}
	{
		// amplitudeEnvelope += ",";
		String_t* L_31 = V_0;
		String_t* L_32;
		L_32 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(L_31, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
		V_0 = L_32;
	}

IL_00af:
	{
		// for (int i = 0; i < pattern.time.Length; i++)
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00b3:
	{
		// for (int i = 0; i < pattern.time.Length; i++)
		int32_t L_34 = V_1;
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_35 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_36 = L_35.get_time_0();
		NullCheck(L_36);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		// pattern.clip = patternTemplate
		//     .Replace("{amplitude-envelope}", amplitudeEnvelope);
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		String_t* L_37 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_patternTemplate_2();
		String_t* L_38 = V_0;
		NullCheck(L_37);
		String_t* L_39;
		L_39 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_37, _stringLiteralC5CF167CD5E0AB4195BC6B1A4DEDCCEEA1E9E954, L_38, /*hidden argument*/NULL);
		(&___pattern0)->set_clip_2(L_39);
		// HapticController.Load(System.Text.Encoding.UTF8.GetBytes(pattern.clip));
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_40;
		L_40 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_41 = ___pattern0;
		String_t* L_42 = L_41.get_clip_2();
		NullCheck(L_40);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43;
		L_43 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_40, L_42);
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Load_m53D34F7D5AE0A3675EFE35CA93286EF1B8634B22(L_43, /*hidden argument*/NULL);
		// HapticController.Loop(false);
		HapticController_Loop_m56DDCE2C8E43BBBC0FDD379C594E5941FA4712F2((bool)0, /*hidden argument*/NULL);
		// HapticController.Play();
		HapticController_Play_m953FC2DF71EF3439E59E074246BC37D331FB5C80(/*hidden argument*/NULL);
		// }
		return;
	}

IL_00f9:
	{
		// else if (DeviceCapabilities.isVersionSupported)
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = DeviceCapabilities_get_isVersionSupported_mCB66CB54F7FE6E99C29096DD94F5621D7F6DE323_inline(/*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_010b;
		}
	}
	{
		// LofeltHaptics.PlayMaximumAmplitudePattern(pattern.time);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_45 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_46 = L_45.get_time_0();
		LofeltHaptics_PlayMaximumAmplitudePattern_mB14CCA57411740ED96B4AE78B7EABC0F1EE5AA0B(L_46, /*hidden argument*/NULL);
	}

IL_010b:
	{
		// }
		return;
	}
}
// Lofelt.NiceVibrations.HapticPatterns/Pattern Lofelt.NiceVibrations.HapticPatterns::PatternForPreset(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  HapticPatterns_PatternForPreset_mEE69B6C1F6A4C43260796806B0E8F1C18B3679D4 (int32_t ___presetType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___presetType0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_005c;
			}
			case 3:
			{
				goto IL_0056;
			}
			case 4:
			{
				goto IL_0032;
			}
			case 5:
			{
				goto IL_0038;
			}
			case 6:
			{
				goto IL_003e;
			}
			case 7:
			{
				goto IL_0044;
			}
			case 8:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_002c:
	{
		// return Selection;
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_1 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_Selection_4();
		return L_1;
	}

IL_0032:
	{
		// return Light;
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_2 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_Light_5();
		return L_2;
	}

IL_0038:
	{
		// return Medium;
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_3 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_Medium_6();
		return L_3;
	}

IL_003e:
	{
		// return Heavy;
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_4 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_Heavy_7();
		return L_4;
	}

IL_0044:
	{
		// return Rigid;
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_5 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_Rigid_8();
		return L_5;
	}

IL_004a:
	{
		// return Soft;
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_6 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_Soft_9();
		return L_6;
	}

IL_0050:
	{
		// return Success;
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_7 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_Success_10();
		return L_7;
	}

IL_0056:
	{
		// return Failure;
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_8 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_Failure_11();
		return L_8;
	}

IL_005c:
	{
		// return Warning;
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_9 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_Warning_12();
		return L_9;
	}

IL_0062:
	{
		// return Medium;
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_10 = ((HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var))->get_Medium_6();
		return L_10;
	}
}
// Lofelt.NiceVibrations.GamepadRumble Lofelt.NiceVibrations.HapticPatterns::PatternToRumble(Lofelt.NiceVibrations.HapticPatterns/Pattern)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  HapticPatterns_PatternToRumble_m0BFB848E2D5B35D33B1F43FFC7D901B9B182DAFD (Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  ___pattern0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// GamepadRumble result = new GamepadRumble();
		il2cpp_codegen_initobj((&V_0), sizeof(GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045 ));
		// if (pattern.time.Length <= 1)
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_0 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0.get_time_0();
		NullCheck(L_1);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) > ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		// return result;
		GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  L_2 = V_0;
		return L_2;
	}

IL_0015:
	{
		// int rumbleCount = pattern.time.Length - 1;
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_3 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = L_3.get_time_0();
		NullCheck(L_4);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)1));
		// result.durationsMs = new int[rumbleCount];
		int32_t L_5 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_5);
		(&V_0)->set_durationsMs_0(L_6);
		// result.lowFrequencyMotorSpeeds = new float[rumbleCount];
		int32_t L_7 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_7);
		(&V_0)->set_lowFrequencyMotorSpeeds_2(L_8);
		// result.highFrequencyMotorSpeeds = new float[rumbleCount];
		int32_t L_9 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_9);
		(&V_0)->set_highFrequencyMotorSpeeds_3(L_10);
		// result.totalDurationMs = 0;
		(&V_0)->set_totalDurationMs_1(0);
		// for (int rumbleIndex = 0; rumbleIndex < rumbleCount; rumbleIndex++)
		V_2 = 0;
		goto IL_00b0;
	}

IL_0053:
	{
		// int patternDurationMs = (int)((pattern.time[rumbleIndex + 1] - pattern.time[rumbleIndex]) * 1000.0f);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_11 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = L_11.get_time_0();
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_16 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = L_16.get_time_0();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		float L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_15, (float)L_20)), (float)(1000.0f))));
		// result.durationsMs[rumbleIndex] = patternDurationMs * 2;
		GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  L_21 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = L_21.get_durationsMs_0();
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)2)));
		// result.lowFrequencyMotorSpeeds[rumbleIndex] = pattern.amplitude[rumbleIndex];
		GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  L_25 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_26 = L_25.get_lowFrequencyMotorSpeeds_2();
		int32_t L_27 = V_2;
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_28 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_29 = L_28.get_amplitude_1();
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		float L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (float)L_32);
		// result.highFrequencyMotorSpeeds[rumbleIndex] = pattern.amplitude[rumbleIndex];
		GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  L_33 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_34 = L_33.get_highFrequencyMotorSpeeds_3();
		int32_t L_35 = V_2;
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_36 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_37 = L_36.get_amplitude_1();
		int32_t L_38 = V_2;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		float L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (float)L_40);
		// result.totalDurationMs += result.durationsMs[rumbleIndex];
		int32_t* L_41 = (&V_0)->get_address_of_totalDurationMs_1();
		int32_t* L_42 = L_41;
		int32_t L_43 = *((int32_t*)L_42);
		GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  L_44 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_45 = L_44.get_durationsMs_0();
		int32_t L_46 = V_2;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		*((int32_t*)L_42) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_48));
		// for (int rumbleIndex = 0; rumbleIndex < rumbleCount; rumbleIndex++)
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00b0:
	{
		// for (int rumbleIndex = 0; rumbleIndex < rumbleCount; rumbleIndex++)
		int32_t L_50 = V_2;
		int32_t L_51 = V_1;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0053;
		}
	}
	{
		// return result;
		GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  L_52 = V_0;
		return L_52;
	}
}
// System.Void Lofelt.NiceVibrations.HapticPatterns::PlayPreset(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayPreset_m9AC38A9A2C0CFEB2EBFB0C5124C44382F8BFAEA5 (int32_t ___presetType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!HapticController.hapticsEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_get_hapticsEnabled_mF14D3A3456DFAD498D252635383648969002263D_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// Pattern pattern = PatternForPreset(presetType);
		int32_t L_1 = ___presetType0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_2;
		L_2 = HapticPatterns_PatternForPreset_mEE69B6C1F6A4C43260796806B0E8F1C18B3679D4(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (GamepadRumbler.IsConnected())
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = GamepadRumbler_IsConnected_mC04BBAB58AE4B059DCF82DE9307B1FF92CEE8332(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// GamepadRumble rumble = PatternToRumble(pattern);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  L_5;
		L_5 = HapticPatterns_PatternToRumble_m0BFB848E2D5B35D33B1F43FFC7D901B9B182DAFD(L_4, /*hidden argument*/NULL);
		// GamepadRumbler.Load(rumble);
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		GamepadRumbler_Load_m2F9721A4197FD997EACB73D25C8B449101ADC9D4(L_5, /*hidden argument*/NULL);
		// GamepadRumbler.Play();
		GamepadRumbler_Play_m4781E4D37B3E1F4048A59C8FDE1CB2EB44012C60(/*hidden argument*/NULL);
		// return;
		return;
	}

IL_0027:
	{
		// PlayPattern(pattern);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		HapticPatterns_PlayPattern_m6AB7698D07CF6284ECA0C6597CB8906EFB76D854(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.HapticPatterns::GetPatternDuration(Lofelt.NiceVibrations.HapticPatterns/Pattern)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticPatterns_GetPatternDuration_m5A2B51DBF287EEB07C98FF8B0FB00A90104D3266 (Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  ___pattern0, const RuntimeMethod* method)
{
	{
		// if (pattern.time.Length > 0)
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_0 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0.get_time_0();
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001b;
		}
	}
	{
		// return pattern.time[pattern.time.Length - 1];
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_2 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = L_2.get_time_0();
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_4 = ___pattern0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = L_4.get_time_0();
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), (int32_t)1));
		float L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}

IL_001b:
	{
		// return 0f;
		return (0.0f);
	}
}
// System.Single Lofelt.NiceVibrations.HapticPatterns::GetPresetDuration(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticPatterns_GetPresetDuration_mDEC5026CE886F90852F61E24201F48CA4C1B488F (int32_t ___presetType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Pattern pattern = PatternForPreset(presetType);
		int32_t L_0 = ___presetType0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E  L_1;
		L_1 = HapticPatterns_PatternForPreset_mEE69B6C1F6A4C43260796806B0E8F1C18B3679D4(L_0, /*hidden argument*/NULL);
		// return GetPatternDuration(pattern);
		float L_2;
		L_2 = HapticPatterns_GetPatternDuration_m5A2B51DBF287EEB07C98FF8B0FB00A90104D3266(L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Lofelt.NiceVibrations.HapticReceiver::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_OnBeforeSerialize_mAF7053C780A07266440E01C13046DB1A04E78B38 (HapticReceiver_t49C33383A9A4D17497B2469F0B25FAF6B80241C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _outputLevel = HapticController._outputLevel;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		float L_0 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__outputLevel_10();
		__this->set__outputLevel_4(L_0);
		// _hapticsEnabled = HapticController._hapticsEnabled;
		bool L_1 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__hapticsEnabled_9();
		__this->set__hapticsEnabled_5(L_1);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_OnAfterDeserialize_m8C8EC18318A5D2E3F35663C76EBB3769F60F8315 (HapticReceiver_t49C33383A9A4D17497B2469F0B25FAF6B80241C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HapticController._outputLevel = _outputLevel;
		float L_0 = __this->get__outputLevel_4();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set__outputLevel_10(L_0);
		// HapticController._hapticsEnabled = _hapticsEnabled;
		bool L_1 = __this->get__hapticsEnabled_5();
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set__hapticsEnabled_9(L_1);
		// }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.HapticReceiver::get_outputLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticReceiver_get_outputLevel_m433CDBAA407A6DF42459C8B8BBD4F7092FC5D123 (HapticReceiver_t49C33383A9A4D17497B2469F0B25FAF6B80241C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return HapticController.outputLevel; }
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = HapticController_get_outputLevel_m074B13D20CAF608946AD01C936B3E47D76B839F8_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::set_outputLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_set_outputLevel_m27EFA7877CEC6F7DB07D4D70872A8CE1782538AB (HapticReceiver_t49C33383A9A4D17497B2469F0B25FAF6B80241C2 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { HapticController.outputLevel = value; }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_outputLevel_mF3825E9DEF7333A3674BB1BFE6BED3DF62D22E6A(L_0, /*hidden argument*/NULL);
		// set { HapticController.outputLevel = value; }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticReceiver::get_hapticsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticReceiver_get_hapticsEnabled_m5DA3A9AF411B310BBDF7B195617E056796FE3E8A (HapticReceiver_t49C33383A9A4D17497B2469F0B25FAF6B80241C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return HapticController.hapticsEnabled; }
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_get_hapticsEnabled_mF14D3A3456DFAD498D252635383648969002263D_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::set_hapticsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_set_hapticsEnabled_mE08983213A916197F0487DA2FF7E51DF9CD30AF6 (HapticReceiver_t49C33383A9A4D17497B2469F0B25FAF6B80241C2 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { HapticController.hapticsEnabled = value; }
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_hapticsEnabled_m7870A34D4397D3D314EC8F3FEFE3FBA73EBA3454(L_0, /*hidden argument*/NULL);
		// set { HapticController.hapticsEnabled = value; }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_Start_m20FB05EA56712DCF7D7DE120D66F3382B39F4368 (HapticReceiver_t49C33383A9A4D17497B2469F0B25FAF6B80241C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HapticController.Init();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m05DB229DF56026DFD6E8B338602AA2094DEE0B9B(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_OnApplicationFocus_mC0224086B7FD93BC2A20068B58499E5287A9BFB4 (HapticReceiver_t49C33383A9A4D17497B2469F0B25FAF6B80241C2 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HapticController.ProcessApplicationFocus(hasFocus);
		bool L_0 = ___hasFocus0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_ProcessApplicationFocus_mEE49E3FA2E8D52F3B53D2372C6DADCF2FF0F8C07(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_OnDestroy_mE425F66306C46AFA23571A6E3812D6B05A3A4435 (HapticReceiver_t49C33383A9A4D17497B2469F0B25FAF6B80241C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GamepadRumbler.Stop();
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		GamepadRumbler_Stop_mA4847F66A6DA1922C1F6F2A6D16E601F9559702C(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver__ctor_m821A7ABCDE3D7DFE0290086F61B5FD945FCCBBFE (HapticReceiver_t49C33383A9A4D17497B2469F0B25FAF6B80241C2 * __this, const RuntimeMethod* method)
{
	{
		// private float _outputLevel = 1.0f;
		__this->set__outputLevel_4((1.0f));
		// private bool _hapticsEnabled = true;
		__this->set__hapticsEnabled_5((bool)1);
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
// Lofelt.NiceVibrations.HapticPatterns/PresetType Lofelt.NiceVibrations.HapticSource::get_fallbackPreset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HapticSource_get_fallbackPreset_m569BAC15855572F15D0A4266C5A1CFCF6CCD2094 (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method)
{
	{
		// get { return _fallbackPreset; }
		int32_t L_0 = __this->get__fallbackPreset_8();
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::set_fallbackPreset(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_set_fallbackPreset_m545365A4E8A1F57BB93A42DC608DFB9D42B54942 (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _fallbackPreset = value; }
		int32_t L_0 = ___value0;
		__this->set__fallbackPreset_8(L_0);
		// set { _fallbackPreset = value; }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticSource::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_get_loop_mBCB0BF25BC583C1646A9566E23F66D6C415779FA (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method)
{
	{
		// get { return _loop; }
		bool L_0 = __this->get__loop_9();
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_set_loop_mA73A794245098F9422AEA842F086CEF40685E367 (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { _loop = value; }
		bool L_0 = ___value0;
		__this->set__loop_9(L_0);
		// set { _loop = value; }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.HapticSource::get_level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticSource_get_level_mA7DE9BF9C274D680793A51CCFA57D61F3A215E02 (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method)
{
	{
		// get { return _level; }
		float L_0 = __this->get__level_10();
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::set_level(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_set_level_mD457080F75EC2DD68405022BF7B5C6C330EDF57E (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _level = value;
		float L_0 = ___value0;
		__this->set__level_10(L_0);
		// if (IsLoaded())
		bool L_1;
		L_1 = HapticSource_IsLoaded_m9B447B5E016DFD815DD46229024861DC9A422E07(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// HapticController.clipLevel = _level;
		float L_2 = __this->get__level_10();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_clipLevel_m25064A0FEAEC5C17FD00D1ED9220ADC3B906F654(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.HapticSource::get_frequencyShift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticSource_get_frequencyShift_m4D0AC9A917728516CC1579CC9EE72C9A852E18CE (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method)
{
	{
		// get { return _frequencyShift; }
		float L_0 = __this->get__frequencyShift_11();
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::set_frequencyShift(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_set_frequencyShift_m320EC89643199DE9F6CF76A8056D75EC843190F7 (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _frequencyShift = value;
		float L_0 = ___value0;
		__this->set__frequencyShift_11(L_0);
		// if (IsLoaded())
		bool L_1;
		L_1 = HapticSource_IsLoaded_m9B447B5E016DFD815DD46229024861DC9A422E07(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// HapticController.clipFrequencyShift = _frequencyShift;
		float L_2 = __this->get__frequencyShift_11();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_clipFrequencyShift_m141A54F5B79E5DCF056234F22005CA5B20782CA2(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource__cctor_mAB4D4F94FE4DD6910E59F9555EA17E369A07B4FE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__22_0_m8F9720455C09F03318126B234BB1165C37B9F94E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__22_1_m8E42C9A2149C51CF31F4CDBBB94453A7D4BF7FC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HapticController.LoadedClipChanged += () =>
		// {
		//     loadedHapticSource = null;
		// };
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_LoadedClipChanged_12();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED_il2cpp_TypeInfo_var);
		U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED * L_1 = ((U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, L_1, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__22_0_m8F9720455C09F03318126B234BB1165C37B9F94E_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_3;
		L_3 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_0, L_2, /*hidden argument*/NULL);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_LoadedClipChanged_12(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_3, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// HapticController.PlaybackStarted += () =>
		// {
		//     lastPlayedHapticSource = null;
		// };
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get_PlaybackStarted_13();
		U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED * L_5 = ((U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__22_1_m8E42C9A2149C51CF31F4CDBBB94453A7D4BF7FC1_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_7;
		L_7 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_4, L_6, /*hidden argument*/NULL);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set_PlaybackStarted_13(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_7, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_Play_m0FCA324D9E629C3C2EF2196A40389D08D0E1E2F3 (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanPlay())
		bool L_0;
		L_0 = HapticSource_CanPlay_m48B4C6B069BC46E8C47A3C92E8C5767FACDE4893(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0070;
		}
	}
	{
		// HapticController.Load(clip);
		HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * L_1 = __this->get_clip_5();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Load_m6457DE38F1B509DCD885C8DE88C91F1BB06F548A(L_1, /*hidden argument*/NULL);
		// loadedHapticSource = this;
		IL2CPP_RUNTIME_CLASS_INIT(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var);
		((HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var))->set_loadedHapticSource_12(__this);
		// HapticController.Loop(loop);
		bool L_2;
		L_2 = HapticSource_get_loop_mBCB0BF25BC583C1646A9566E23F66D6C415779FA_inline(__this, /*hidden argument*/NULL);
		HapticController_Loop_m56DDCE2C8E43BBBC0FDD379C594E5941FA4712F2(L_2, /*hidden argument*/NULL);
		// HapticController.clipLevel = level;
		float L_3;
		L_3 = HapticSource_get_level_mA7DE9BF9C274D680793A51CCFA57D61F3A215E02_inline(__this, /*hidden argument*/NULL);
		HapticController_set_clipLevel_m25064A0FEAEC5C17FD00D1ED9220ADC3B906F654(L_3, /*hidden argument*/NULL);
		// HapticController.clipFrequencyShift = frequencyShift;
		float L_4;
		L_4 = HapticSource_get_frequencyShift_m4D0AC9A917728516CC1579CC9EE72C9A852E18CE_inline(__this, /*hidden argument*/NULL);
		HapticController_set_clipFrequencyShift_m141A54F5B79E5DCF056234F22005CA5B20782CA2(L_4, /*hidden argument*/NULL);
		// if (seekTime != 0.0f && !loop)
		float L_5 = __this->get_seekTime_7();
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_005a;
		}
	}
	{
		bool L_6;
		L_6 = HapticSource_get_loop_mBCB0BF25BC583C1646A9566E23F66D6C415779FA_inline(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		// HapticController.Seek(seekTime);
		float L_7 = __this->get_seekTime_7();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Seek_mE3D9DF75C2BE679AA0291DCB82AB4EAA4BFA16B2(L_7, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// HapticController.fallbackPreset = fallbackPreset;
		int32_t L_8;
		L_8 = HapticSource_get_fallbackPreset_m569BAC15855572F15D0A4266C5A1CFCF6CCD2094_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_fallbackPreset_m6FE9C9CEC1AC8E8821AD81A3D87C5DF58A5FD9A3_inline(L_8, /*hidden argument*/NULL);
		// HapticController.Play();
		HapticController_Play_m953FC2DF71EF3439E59E074246BC37D331FB5C80(/*hidden argument*/NULL);
		// lastPlayedHapticSource = this;
		IL2CPP_RUNTIME_CLASS_INIT(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var);
		((HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var))->set_lastPlayedHapticSource_13(__this);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticSource::CanPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_CanPlay_m48B4C6B069BC46E8C47A3C92E8C5767FACDE4893 (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (!HapticController.IsPlaying() ||
		//        (lastPlayedHapticSource != null && priority <= lastPlayedHapticSource.priority));
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_IsPlaying_mE39908387FFA5F99CD1EE851CC297EA1CB13BBB9(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var);
		HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * L_1 = ((HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var))->get_lastPlayedHapticSource_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->get_priority_6();
		IL2CPP_RUNTIME_CLASS_INIT(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var);
		HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * L_4 = ((HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var))->get_lastPlayedHapticSource_13();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_priority_6();
		return (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002a:
	{
		return (bool)0;
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticSource::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_IsLoaded_m9B447B5E016DFD815DD46229024861DC9A422E07 (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Object.ReferenceEquals(this, loadedHapticSource);
		IL2CPP_RUNTIME_CLASS_INIT(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var);
		HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * L_0 = ((HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var))->get_loadedHapticSource_12();
		return (bool)((((RuntimeObject*)(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 *)__this) == ((RuntimeObject*)(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 *)L_0))? 1 : 0);
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_Stop_m9F684C369E17A07D59D8A393E3BEB52DDC3DDFF7 (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsLoaded())
		bool L_0;
		L_0 = HapticSource_IsLoaded_m9B447B5E016DFD815DD46229024861DC9A422E07(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// HapticController.Stop();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Stop_mBC362B8017A7940605739D7556EA1BFB31536F73(/*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_Seek_m4C79AF5464A2BD203E498AD975C67C43C45D8D4B (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, float ___time0, const RuntimeMethod* method)
{
	{
		// this.seekTime = time;
		float L_0 = ___time0;
		__this->set_seekTime_7(L_0);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_OnDisable_m51C0FD784EA1CD6B35C6FC73A69259D1850DBC9E (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (HapticController.IsPlaying() && IsLoaded())
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_IsPlaying_mE39908387FFA5F99CD1EE851CC297EA1CB13BBB9(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = HapticSource_IsLoaded_m9B447B5E016DFD815DD46229024861DC9A422E07(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// this.Stop();
		HapticSource_Stop_m9F684C369E17A07D59D8A393E3BEB52DDC3DDFF7(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource__ctor_m67CF61EF32054D47DB68F85ADD4F0E5E1AAE8BEE (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method)
{
	{
		// public int priority = DEFAULT_PRIORITY;
		__this->set_priority_6(((int32_t)128));
		// HapticPatterns.PresetType _fallbackPreset = HapticPatterns.PresetType.None;
		__this->set__fallbackPreset_8((-1));
		// float _level = 1.0f;
		__this->set__level_10((1.0f));
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
// System.Boolean Lofelt.NiceVibrations.LofeltHaptics::lofeltHapticsLoadDirect(System.IntPtr,System.Byte[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LofeltHaptics_lofeltHapticsLoadDirect_m4C8610304599911F4D29BC6426F47967674411F6 (intptr_t ___controller0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, int64_t ___size2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lofelt_sdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lofelt_sdk"), "lofeltHapticsLoadDirect", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lofelt_sdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lofeltHapticsLoadDirect)(___controller0, ____bytes1_marshaled, ___size2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___controller0, ____bytes1_marshaled, ___size2);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Initialize_mA377FC50298CF947352265E440360496F8B0A1A7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41122A25B762B3B469C8461B4F6196CC75D3EF6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7E3AEAEF7966AC50BEA811A1C12092709305E19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3CF9BBC2C80F53F057554706A4681C9C5301858);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// using (var unityPlayerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
			AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
			V_0 = L_0;
		}

IL_000b:
		try
		{ // begin try (depth: 2)
			{
				// using (var context = unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity"))
				AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = V_0;
				NullCheck(L_1);
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
				L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
				V_1 = L_2;
			}

IL_0017:
			try
			{ // begin try (depth: 3)
				// lofeltHaptics = new AndroidJavaObject("com.lofelt.haptics.LofeltHaptics", context);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5 = V_1;
				NullCheck(L_4);
				ArrayElementTypeCheck (L_4, L_5);
				(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_6, _stringLiteralC7E3AEAEF7966AC50BEA811A1C12092709305E19, L_4, /*hidden argument*/NULL);
				((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->set_lofeltHaptics_0(L_6);
				// nativeController = lofeltHaptics.Call<long>("getControllerHandle");
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7 = ((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->get_lofeltHaptics_0();
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8;
				L_8 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
				NullCheck(L_7);
				int64_t L_9;
				L_9 = AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787(L_7, _stringLiteral41122A25B762B3B469C8461B4F6196CC75D3EF6A, L_8, /*hidden argument*/AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_RuntimeMethod_var);
				((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->set_nativeController_2(L_9);
				// hapticPatterns =  new AndroidJavaObject("com.lofelt.haptics.HapticPatterns", context);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_10;
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_12 = V_1;
				NullCheck(L_11);
				ArrayElementTypeCheck (L_11, L_12);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_13 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_13, _stringLiteralD3CF9BBC2C80F53F057554706A4681C9C5301858, L_11, /*hidden argument*/NULL);
				((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->set_hapticPatterns_1(L_13);
				// }
				IL2CPP_LEAVE(0x6E, FINALLY_0064);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0064;
			}

FINALLY_0064:
			{ // begin finally (depth: 3)
				{
					AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_14 = V_1;
					if (!L_14)
					{
						goto IL_006d;
					}
				}

IL_0067:
				{
					AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_15 = V_1;
					NullCheck(L_15);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
				}

IL_006d:
				{
					IL2CPP_END_FINALLY(100)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(100)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x6E, IL_006e)
			}

IL_006e:
			{
				IL2CPP_LEAVE(0x7A, FINALLY_0070);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0070;
		}

FINALLY_0070:
		{ // begin finally (depth: 2)
			{
				AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_16 = V_0;
				if (!L_16)
				{
					goto IL_0079;
				}
			}

IL_0073:
			{
				AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_17 = V_0;
				NullCheck(L_17);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_17);
			}

IL_0079:
			{
				IL2CPP_END_FINALLY(112)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(112)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x7A, IL_007a)
		}

IL_007a:
		{
			// }
			goto IL_0083;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007c;
		}
		throw e;
	}

CATCH_007c:
	{ // begin catch(System.Exception)
		// Debug.LogWarning(ex);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0083;
	} // end catch (depth: 1)

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Release_mB32A9246C2A06BA476FBE68EB681432386A26AB7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// lofeltHaptics.Dispose();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->get_lofeltHaptics_0();
		NullCheck(L_0);
		AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45(L_0, /*hidden argument*/NULL);
		// lofeltHaptics = null;
		((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->set_lofeltHaptics_0((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)NULL);
		// hapticPatterns.Dispose();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = ((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->get_hapticPatterns_1();
		NullCheck(L_1);
		AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45(L_1, /*hidden argument*/NULL);
		// hapticPatterns = null;
		((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->set_hapticPatterns_1((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)NULL);
		// }
		goto IL_0029;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		throw e;
	}

CATCH_0022:
	{ // begin catch(System.Exception)
		// Debug.LogWarning(ex);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	} // end catch (depth: 1)

IL_0029:
	{
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.LofeltHaptics::DeviceMeetsMinimumPlatformRequirements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_mCD17109E01DCD3FA1A47B64AE77F2416672922DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA44DFF94D6AA7697C8ADB77FB3A367BA465B869);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// return lofeltHaptics.Call<bool>("deviceMeetsMinimumRequirements");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->get_lofeltHaptics_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteralCA44DFF94D6AA7697C8ADB77FB3A367BA465B869, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0020;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.Exception)
		// Debug.LogWarning(ex);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// return false;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0020;
	} // end catch (depth: 1)

IL_0020:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Load_m37600D26A0D58AC95F5CAEBCAD5A1C6619A0B451 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// lofeltHapticsLoadDirect((IntPtr)nativeController, data, data.Length);
		int64_t L_0 = ((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->get_nativeController_2();
		intptr_t L_1;
		L_1 = IntPtr_op_Explicit_m8F9F5E8B5BCDCC5C93FF603433F134EE5D491859(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___data0;
		NullCheck(L_3);
		bool L_4;
		L_4 = LofeltHaptics_lofeltHapticsLoadDirect_m4C8610304599911F4D29BC6426F47967674411F6((intptr_t)L_1, L_2, ((int64_t)((int64_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))), /*hidden argument*/NULL);
		// }
		goto IL_001e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.Exception)
		// Debug.LogWarning(ex);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		// }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.LofeltHaptics::GetClipDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LofeltHaptics_GetClipDuration_m7896604E7BD57007817B35A749A40A76BC495C5D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m068E70BCBA9EACF8129B1C9F711D3132EB6C9061_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB390D5019ED8691FF161C85B9EC17FE9D19763EF);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// return lofeltHaptics.Call<float>("getClipDuration");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->get_lofeltHaptics_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_0);
		float L_2;
		L_2 = AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m068E70BCBA9EACF8129B1C9F711D3132EB6C9061(L_0, _stringLiteralB390D5019ED8691FF161C85B9EC17FE9D19763EF, L_1, /*hidden argument*/AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m068E70BCBA9EACF8129B1C9F711D3132EB6C9061_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0024;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.Exception)
		// Debug.LogWarning(ex);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// return 0.0f;
		V_0 = (0.0f);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0024;
	} // end catch (depth: 1)

IL_0024:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Play_m5CCEAA8FD388B705893025191DE4E0BFEB6A34A0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// lofeltHaptics.Call("play");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->get_lofeltHaptics_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8, L_1, /*hidden argument*/NULL);
		// }
		goto IL_001d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{ // begin catch(System.Exception)
		// Debug.LogWarning(ex);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	} // end catch (depth: 1)

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::PlayMaximumAmplitudePattern(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_PlayMaximumAmplitudePattern_mB14CCA57411740ED96B4AE78B7EABC0F1EE5AA0B (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___timings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3167F97B4EFA74B4D583E7D2588E3E8386091FF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5E079158CE53A6B1B96591E1222924C388B17C2);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// hapticPatterns.Call("playMaximumAmplitudePattern",timings);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->get_hapticPatterns_1();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___timings0;
		NullCheck(L_0);
		AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3167F97B4EFA74B4D583E7D2588E3E8386091FF5(L_0, _stringLiteralC5E079158CE53A6B1B96591E1222924C388B17C2, L_1, /*hidden argument*/AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3167F97B4EFA74B4D583E7D2588E3E8386091FF5_RuntimeMethod_var);
		// }
		goto IL_0019;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{ // begin catch(System.Exception)
		// Debug.LogWarning(ex);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0019;
	} // end catch (depth: 1)

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Stop_mBDE87B98387910BD93002C41522D147E03AD8945 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// lofeltHaptics.Call("stop");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->get_lofeltHaptics_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7, L_1, /*hidden argument*/NULL);
		// }
		goto IL_001d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{ // begin catch(System.Exception)
		// Debug.LogWarning(ex);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	} // end catch (depth: 1)

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Seek_m883C2BDEC223E19C459C0F7922DB73237E805761 (float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11A4FE01BF2A9FE8159B9EA16D64D70159683C53);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// lofeltHaptics.Call("seek", time);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->get_lofeltHaptics_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		float L_3 = ___time0;
		float L_4 = L_3;
		RuntimeObject * L_5 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral11A4FE01BF2A9FE8159B9EA16D64D70159683C53, L_2, /*hidden argument*/NULL);
		// }
		goto IL_0027;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0020:
	{ // begin catch(System.Exception)
		// Debug.LogWarning(ex);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0027;
	} // end catch (depth: 1)

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::SetAmplitudeMultiplication(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_SetAmplitudeMultiplication_mF6D852744957F360CA7BE2BAC97FF73046788EDC (float ___factor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1590B1DD196F96A11A36B50B360EB57178EEF954);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// lofeltHaptics.Call("setAmplitudeMultiplication", factor);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->get_lofeltHaptics_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		float L_3 = ___factor0;
		float L_4 = L_3;
		RuntimeObject * L_5 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral1590B1DD196F96A11A36B50B360EB57178EEF954, L_2, /*hidden argument*/NULL);
		// }
		goto IL_0027;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0020:
	{ // begin catch(System.Exception)
		// Debug.LogWarning(ex);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0027;
	} // end catch (depth: 1)

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::SetFrequencyShift(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_SetFrequencyShift_m1D9F98401A6EF0D6925B2CCDF3CFDBDF79F92304 (float ___shift0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Loop_mC52D6F9C0954FCCB063023EF3061C12D1F4A7E3B (bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// lofeltHaptics.Call("loop", enabled);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var))->get_lofeltHaptics_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___enabled0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125, L_2, /*hidden argument*/NULL);
		// }
		goto IL_0027;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0020:
	{ // begin catch(System.Exception)
		// Debug.LogWarning(ex);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0027;
	} // end catch (depth: 1)

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::TriggerPresetHaptics(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_TriggerPresetHaptics_mCBDF5314B60E20FE5ED5D47D660FF5B82C28A788 (int32_t ___type0, const RuntimeMethod* method)
{
	{
		// }
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
// System.Void Lofelt.NiceVibrations.GamepadRumbler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB7C64C7D696EEA571AAD15C96C3C713FC0093490 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B * L_0 = (U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B *)il2cpp_codegen_object_new(U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m46ED37623DEDA015336383E60909A968225E92F9(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m46ED37623DEDA015336383E60909A968225E92F9 (U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler/<>c::<Init>b__8_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitU3Eb__8_1_mB7D9BF77670218D1E9D69D4E606EAE74A7362B37 (U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B * __this, RuntimeObject * ____0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ProcessNextRumble();
		IL2CPP_RUNTIME_CLASS_INIT(GamepadRumbler_t13B60826DA63388DAD2685B5B11B818B9E20E1AE_il2cpp_TypeInfo_var);
		GamepadRumbler_ProcessNextRumble_mEC18F9EB8253DF689FB92ED472CBAB68C7F901A0(/*hidden argument*/NULL);
		// }, null);
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
// System.Void Lofelt.NiceVibrations.GamepadRumbler/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m1239904C4C32F628CB6073C01C550DDEA934031C (U3CU3Ec__DisplayClass8_0_t85FE944063BAEC0D51718C85639D6889BD7B45DD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler/<>c__DisplayClass8_0::<Init>b__0(System.Object,System.Timers.ElapsedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CInitU3Eb__0_m3315DC0FCA2E027F2921B0C687BC9C9D38EDA374 (U3CU3Ec__DisplayClass8_0_t85FE944063BAEC0D51718C85639D6889BD7B45DD * __this, RuntimeObject * ___obj0, ElapsedEventArgs_tEB7D552F06F480B5F4B445AB1F364FB5474F2FFB * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitU3Eb__8_1_mB7D9BF77670218D1E9D69D4E606EAE74A7362B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * G_B2_0 = NULL;
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * G_B2_1 = NULL;
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * G_B1_0 = NULL;
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * G_B1_1 = NULL;
	{
		// syncContext.Post(_ =>
		// {
		//     ProcessNextRumble();
		// }, null);
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = __this->get_syncContext_0();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_il2cpp_TypeInfo_var);
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_1 = ((U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_il2cpp_TypeInfo_var))->get_U3CU3E9__8_1_1();
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_il2cpp_TypeInfo_var);
		U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B * L_3 = ((U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_4 = (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *)il2cpp_codegen_object_new(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CInitU3Eb__8_1_mB7D9BF77670218D1E9D69D4E606EAE74A7362B37_RuntimeMethod_var), /*hidden argument*/NULL);
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_5 = L_4;
		((U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4C9E83569F89EEEFFF961933E6A4C302386D09B_il2cpp_TypeInfo_var))->set_U3CU3E9__8_1_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		NullCheck(G_B2_1);
		VirtActionInvoker2< SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, G_B2_1, G_B2_0, NULL);
		// };
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
// System.Void Lofelt.NiceVibrations.HapticController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB4E545A83A74021A383C6D550657A07BB5DED223 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F * L_0 = (U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F *)il2cpp_codegen_object_new(U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5517E6E51B31F3B3F4FF1495D7822A422A86E4BB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5517E6E51B31F3B3F4FF1495D7822A422A86E4BB (U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController/<>c::<Init>b__27_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitU3Eb__27_1_mF25DC2AB3A303AF871DAAD5F02F546E4720C4436 (U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F * __this, RuntimeObject * ____0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandleFinishedPlayback();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_HandleFinishedPlayback_mFE7E0FEF7508CBEACF23B8E222D18EAD2D9C15C5(/*hidden argument*/NULL);
		// }, null);
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
// System.Void Lofelt.NiceVibrations.HapticController/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m1E8B2D24105D04328C64C983D756F0C3CCD31426 (U3CU3Ec__DisplayClass27_0_t89AAAA2C31EE49CD9361159A776B9819C132B715 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController/<>c__DisplayClass27_0::<Init>b__0(System.Object,System.Timers.ElapsedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0_U3CInitU3Eb__0_mFAE4814163D4551AED798B522BB547D05F720430 (U3CU3Ec__DisplayClass27_0_t89AAAA2C31EE49CD9361159A776B9819C132B715 * __this, RuntimeObject * ___obj0, ElapsedEventArgs_tEB7D552F06F480B5F4B445AB1F364FB5474F2FFB * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitU3Eb__27_1_mF25DC2AB3A303AF871DAAD5F02F546E4720C4436_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * G_B2_0 = NULL;
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * G_B2_1 = NULL;
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * G_B1_0 = NULL;
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * G_B1_1 = NULL;
	{
		// syncContext.Post(_ =>
		// {
		//     HandleFinishedPlayback();
		// }, null);
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = __this->get_syncContext_0();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_il2cpp_TypeInfo_var);
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_1 = ((U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_il2cpp_TypeInfo_var))->get_U3CU3E9__27_1_1();
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_il2cpp_TypeInfo_var);
		U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F * L_3 = ((U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_4 = (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *)il2cpp_codegen_object_new(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CInitU3Eb__27_1_mF25DC2AB3A303AF871DAAD5F02F546E4720C4436_RuntimeMethod_var), /*hidden argument*/NULL);
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_5 = L_4;
		((U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC8DF5197AD415386C3725E9C5C53914B1085339F_il2cpp_TypeInfo_var))->set_U3CU3E9__27_1_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		NullCheck(G_B2_1);
		VirtActionInvoker2< SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, G_B2_1, G_B2_0, NULL);
		// };
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
// Conversion methods for marshalling of: Lofelt.NiceVibrations.HapticPatterns/Pattern
IL2CPP_EXTERN_C void Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E_marshal_pinvoke(const Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E& unmarshaled, Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E_marshaled_pinvoke& marshaled)
{
	marshaled.___time_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_time_0());
	marshaled.___amplitude_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_amplitude_1());
	marshaled.___clip_2 = il2cpp_codegen_marshal_string(unmarshaled.get_clip_2());
}
IL2CPP_EXTERN_C void Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E_marshal_pinvoke_back(const Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E_marshaled_pinvoke& marshaled, Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_time_0((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___time_0));
	unmarshaled.set_amplitude_1((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___amplitude_1));
	unmarshaled.set_clip_2(il2cpp_codegen_marshal_string_result(marshaled.___clip_2));
}
// Conversion method for clean up from marshalling of: Lofelt.NiceVibrations.HapticPatterns/Pattern
IL2CPP_EXTERN_C void Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E_marshal_pinvoke_cleanup(Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___time_0);
	marshaled.___time_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___amplitude_1);
	marshaled.___amplitude_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___clip_2);
	marshaled.___clip_2 = NULL;
}
// Conversion methods for marshalling of: Lofelt.NiceVibrations.HapticPatterns/Pattern
IL2CPP_EXTERN_C void Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E_marshal_com(const Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E& unmarshaled, Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E_marshaled_com& marshaled)
{
	marshaled.___time_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_time_0());
	marshaled.___amplitude_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_amplitude_1());
	marshaled.___clip_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_clip_2());
}
IL2CPP_EXTERN_C void Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E_marshal_com_back(const Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E_marshaled_com& marshaled, Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_time_0((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___time_0));
	unmarshaled.set_amplitude_1((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___amplitude_1));
	unmarshaled.set_clip_2(il2cpp_codegen_marshal_bstring_result(marshaled.___clip_2));
}
// Conversion method for clean up from marshalling of: Lofelt.NiceVibrations.HapticPatterns/Pattern
IL2CPP_EXTERN_C void Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E_marshal_com_cleanup(Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___time_0);
	marshaled.___time_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___amplitude_1);
	marshaled.___amplitude_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___clip_2);
	marshaled.___clip_2 = NULL;
}
// System.Void Lofelt.NiceVibrations.HapticPatterns/Pattern::.ctor(System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pattern__ctor_mEB7F974ACA6B33C2A65C73C9CD0B9858DEFAC987 (Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___time0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___amplitude1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.time = time;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___time0;
		__this->set_time_0(L_0);
		// this.amplitude = amplitude;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___amplitude1;
		__this->set_amplitude_1(L_1);
		// this.clip = "";
		__this->set_clip_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Pattern__ctor_mEB7F974ACA6B33C2A65C73C9CD0B9858DEFAC987_AdjustorThunk (RuntimeObject * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___time0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___amplitude1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E * _thisAdjusted = reinterpret_cast<Pattern_tC9CB761C407A1F8D0D6762CEA51AAD55903EF89E *>(__this + _offset);
	Pattern__ctor_mEB7F974ACA6B33C2A65C73C9CD0B9858DEFAC987(_thisAdjusted, ___time0, ___amplitude1, method);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Lofelt.NiceVibrations.HapticSource/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m24F062BBCBEF96BDD039AD1C8C69047F8792ACFD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED * L_0 = (U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED *)il2cpp_codegen_object_new(U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mBB29C861B6103C44AD31484810E6D1EAE7AE677D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBB29C861B6103C44AD31484810E6D1EAE7AE677D (U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource/<>c::<.cctor>b__22_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__22_0_m8F9720455C09F03318126B234BB1165C37B9F94E (U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// loadedHapticSource = null;
		IL2CPP_RUNTIME_CLASS_INIT(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var);
		((HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var))->set_loadedHapticSource_12((HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 *)NULL);
		// };
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource/<>c::<.cctor>b__22_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__22_1_m8E42C9A2149C51CF31F4CDBBB94453A7D4BF7FC1 (U3CU3Ec_t53AEBD12B5343CCC808C012F02E07E2379104CED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lastPlayedHapticSource = null;
		IL2CPP_RUNTIME_CLASS_INIT(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var);
		((HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183_il2cpp_TypeInfo_var))->set_lastPlayedHapticSource_13((HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 *)NULL);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DeviceCapabilities_get_platformVersion_m6F4B3D9F45C6C44E2355CBDA37794C89DF50F929_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int platformVersion { get; }
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get_U3CplatformVersionU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_isVersionSupported_mCB66CB54F7FE6E99C29096DD94F5621D7F6DE323_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isVersionSupported { get; }
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get_U3CisVersionSupportedU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_meetsAdvancedRequirements_mCE6A48C2E83BFBB85BE2E3778AE1FB557463AA3B_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _meetsAdvancedRequirements;
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get__meetsAdvancedRequirements_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_canLoop_m49A0D71C43EF96302B36008D2F965CAC528512CC_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _canLoop;
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get__canLoop_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HapticController_get_fallbackPreset_m3A9A09E902E50F9405B81FC93BB6EDFB6683837B_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _fallbackPreset; }
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		int32_t L_0 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__fallbackPreset_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Timer_get_Enabled_mB4FA1932A26F7AAFDEA0E1C33533305F1AF9ED17_inline (Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_enabled_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HapticController_set_fallbackPreset_m6FE9C9CEC1AC8E8821AD81A3D87C5DF58A5FD9A3_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _fallbackPreset = value; }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set__fallbackPreset_8(L_0);
		// set { _fallbackPreset = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HapticController_get_hapticsEnabled_mF14D3A3456DFAD498D252635383648969002263D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _hapticsEnabled; }
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__hapticsEnabled_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticController_get_outputLevel_m074B13D20CAF608946AD01C936B3E47D76B839F8_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _outputLevel; }
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		float L_0 = ((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->get__outputLevel_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HapticSource_get_loop_mBCB0BF25BC583C1646A9566E23F66D6C415779FA_inline (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method)
{
	{
		// get { return _loop; }
		bool L_0 = __this->get__loop_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticSource_get_level_mA7DE9BF9C274D680793A51CCFA57D61F3A215E02_inline (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method)
{
	{
		// get { return _level; }
		float L_0 = __this->get__level_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticSource_get_frequencyShift_m4D0AC9A917728516CC1579CC9EE72C9A852E18CE_inline (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method)
{
	{
		// get { return _frequencyShift; }
		float L_0 = __this->get__frequencyShift_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HapticSource_get_fallbackPreset_m569BAC15855572F15D0A4266C5A1CFCF6CCD2094_inline (HapticSource_t1C212804C680B0CE8F28E939AEA326388D424183 * __this, const RuntimeMethod* method)
{
	{
		// get { return _fallbackPreset; }
		int32_t L_0 = __this->get__fallbackPreset_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
