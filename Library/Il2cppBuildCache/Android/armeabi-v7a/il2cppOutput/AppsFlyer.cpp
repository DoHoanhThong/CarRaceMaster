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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
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
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99;
// AFInAppEvents
struct AFInAppEvents_tEF325F1A66DE550F238F44FCC80923FEC06FF1CF;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// AppsFlyerSDK.AppsFlyer
struct AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC;
// AppsFlyerSDK.AppsFlyerAndroid
struct AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C;
// AppsFlyerObjectScript
struct AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7;
// AppsFlyerSDK.AppsFlyerRequestEventArgs
struct AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// AppsFlyerSDK.DeepLinkEventsArgs
struct DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// AppsFlyerSDK.IAppsFlyerNativeBridge
struct IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// AppsFlyerSDK.AppsFlyer/unityCallBack
struct unityCallBack_t92A5A0A8C398009538872E94CE2B7A9E11D6AA91;
// AFMiniJSON.Json/Parser
struct Parser_t83416D37107A3D52070D34329DE19C7C66883769;
// AFMiniJSON.Json/Serializer
struct Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t83416D37107A3D52070D34329DE19C7C66883769_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02E144D0DB3ED32BAD9132BAD38278E7E1F94CF6;
IL2CPP_EXTERN_C String_t* _stringLiteral040BC968D13C27DDE7EDD7C41E01CC04BCB1E424;
IL2CPP_EXTERN_C String_t* _stringLiteral05A9361873F8DF19119260FBA14633082BF234ED;
IL2CPP_EXTERN_C String_t* _stringLiteral05CC334A1D5B52C140EA7E7E8C38E6987CF9AFEB;
IL2CPP_EXTERN_C String_t* _stringLiteral07232168B08FAFB9EEFDEE7B0ECB21C9C0464670;
IL2CPP_EXTERN_C String_t* _stringLiteral0899C0CC6437FDB854B1FD864B75D539CED816E3;
IL2CPP_EXTERN_C String_t* _stringLiteral1300E98B4A07E137D38D108CC70CCD80E1159D31;
IL2CPP_EXTERN_C String_t* _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD;
IL2CPP_EXTERN_C String_t* _stringLiteral18FFE0A95B599D7BBDCCF1565B4C1B250799CF43;
IL2CPP_EXTERN_C String_t* _stringLiteral1AB25F8F9A918211E403469C2C851819036CD0AA;
IL2CPP_EXTERN_C String_t* _stringLiteral1BE966B394D2DCC26589F616D3CDD4614BC8A367;
IL2CPP_EXTERN_C String_t* _stringLiteral1CDAF50098C5C8647B302AF7AF4C17AD062496E6;
IL2CPP_EXTERN_C String_t* _stringLiteral1E9F40059822C86B8AEF125F7D1AC7639E4825B2;
IL2CPP_EXTERN_C String_t* _stringLiteral2095A4A05C95774A092312D4FB8B42EE93FF3DAC;
IL2CPP_EXTERN_C String_t* _stringLiteral2099A07A9756CE763F45096ED122941A5502F4A2;
IL2CPP_EXTERN_C String_t* _stringLiteral2195737597038930129AAB41E250EB47C49171B1;
IL2CPP_EXTERN_C String_t* _stringLiteral2339F28E8BA6A6AABFB30A14CC4FD89DCC6DA2BB;
IL2CPP_EXTERN_C String_t* _stringLiteral23C46B975D5704BA005EB63970310B3E22538994;
IL2CPP_EXTERN_C String_t* _stringLiteral23E39D5D880B50D49547323043FBE1EEEEC28913;
IL2CPP_EXTERN_C String_t* _stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C;
IL2CPP_EXTERN_C String_t* _stringLiteral28F69B1250EDC34ABBA2F702081D3EDBCD393A9F;
IL2CPP_EXTERN_C String_t* _stringLiteral2B5A08040822A9A5BF7079E79513108DDA959E44;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral2C98C0756A33C8EFDFB681374340D99FD56A2B06;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2A76D4105D5F7EC31FB47296BCB16C15EA1D1E;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2F13DB47076BB6959BB34D94AC259D426BCDF4;
IL2CPP_EXTERN_C String_t* _stringLiteral41AC34D8DBAF5CBA43F03167FBED01262D39AFDA;
IL2CPP_EXTERN_C String_t* _stringLiteral41BAF1C183A1066A16559AFAB0507F5743FF6DEB;
IL2CPP_EXTERN_C String_t* _stringLiteral441C41FF6E93EA9C63774CA4F33832FA34B8B88D;
IL2CPP_EXTERN_C String_t* _stringLiteral47CA7AF3AA31AB5DEDA911EBB9D31F1B1101A251;
IL2CPP_EXTERN_C String_t* _stringLiteral4B6D68694D821D56389DC2E2926D715CF4601A34;
IL2CPP_EXTERN_C String_t* _stringLiteral4D491D6C3C9342A8E0A1580F17094732F0EDC3FE;
IL2CPP_EXTERN_C String_t* _stringLiteral4F947CE6F90CAAF1930C6E71DF2D95DC8E236CB7;
IL2CPP_EXTERN_C String_t* _stringLiteral4FBCC5FD07D69F0DD3F15FD6B2E8C56BF9AB706A;
IL2CPP_EXTERN_C String_t* _stringLiteral519589080837BE020633F437BB3490F7E0C4EFF3;
IL2CPP_EXTERN_C String_t* _stringLiteral537DCE44ECD89031F1AAD55D87498A64090B02EF;
IL2CPP_EXTERN_C String_t* _stringLiteral5674B818A84C598AD302905844F0F57B3E85B1FC;
IL2CPP_EXTERN_C String_t* _stringLiteral57B0C096BC76C2A14272B0CA02FB1542B7A062D4;
IL2CPP_EXTERN_C String_t* _stringLiteral58F56EF1C778163989CC86F225EC53D6F42EAF38;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5C334DF8E3B019BAFD6F999810AC74BBD61701E0;
IL2CPP_EXTERN_C String_t* _stringLiteral626BD6414D5625772020727C7E3A76743A1C7353;
IL2CPP_EXTERN_C String_t* _stringLiteral63D91CC901D762D092AA3C0272FAD67B12955456;
IL2CPP_EXTERN_C String_t* _stringLiteral67657C4F1B8F10CE28FE667A9FC97B18921F70FC;
IL2CPP_EXTERN_C String_t* _stringLiteral68D4CB98723592275118ADD8147AD8B23271D821;
IL2CPP_EXTERN_C String_t* _stringLiteral68F0F963C02E4993D85C3AC03FBBD8380C05D1CB;
IL2CPP_EXTERN_C String_t* _stringLiteral6E8C3941B89408B33EFE91225B91AC36EBD1F87F;
IL2CPP_EXTERN_C String_t* _stringLiteral6EBABF2AFA57499234547483D4C9347AA07DAE90;
IL2CPP_EXTERN_C String_t* _stringLiteral6EDD3065EFD13B1C8856E99397C76A8490518392;
IL2CPP_EXTERN_C String_t* _stringLiteral757ED47D942E9A6A71748FEC5AAF9230FDDC2F97;
IL2CPP_EXTERN_C String_t* _stringLiteral764101B7160DBC377EBAF6B41B91DE5F7CDEEBE5;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7B9ECB1352368E293763D7833EE64283ACD370DD;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral832B94CF33F6E5DED6AE43E3E65AB4CC7FFEF547;
IL2CPP_EXTERN_C String_t* _stringLiteral83D0D9BD8D49B321C723B024A8387FA243347596;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral84BADEC5B05C73D2CCE6340D05EC49EA323FA28A;
IL2CPP_EXTERN_C String_t* _stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA;
IL2CPP_EXTERN_C String_t* _stringLiteral8A34F8DA3692071AC220CF18A87B33AAFF37CAB7;
IL2CPP_EXTERN_C String_t* _stringLiteral8F022F1FD861D8F0D797833011CEACA8B68D6278;
IL2CPP_EXTERN_C String_t* _stringLiteral9374A095C984B79D0B67F2A2F61445D48F4110EE;
IL2CPP_EXTERN_C String_t* _stringLiteral9BAD3ACBCCBECBC692D1B13C58A5A57DA672F3FB;
IL2CPP_EXTERN_C String_t* _stringLiteral9D0FAF3658B65273D1DC74F0E2AE442991EFD881;
IL2CPP_EXTERN_C String_t* _stringLiteral9D2C5BAAC864FF8EAB5A482091D545B7C900BEB0;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralAD476ACE1A706D5850371865BFAD794B13476417;
IL2CPP_EXTERN_C String_t* _stringLiteralB52EF5DFFF38ED3B405F71A7369FA36466D6F30E;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB8B612FAFB5026ABFF93AFC18FDF41ED875A4A8D;
IL2CPP_EXTERN_C String_t* _stringLiteralBB04809CAEA4C98545BADDEEAF210B3BC2E683DD;
IL2CPP_EXTERN_C String_t* _stringLiteralBEFECBD00DD90A3EB3AAD067FAFE35456CDA5EAD;
IL2CPP_EXTERN_C String_t* _stringLiteralBF541C1F76B0F286AE19538DFD602009F3477C6D;
IL2CPP_EXTERN_C String_t* _stringLiteralC8BD247A0DBD876062405ABFAFDFD135A1C478B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C2FCBAE0759C7ECF1390B1C66A2118E4DC2CDE;
IL2CPP_EXTERN_C String_t* _stringLiteralCD75758D19772B49DD8F613B685E0426D4C44121;
IL2CPP_EXTERN_C String_t* _stringLiteralCD826D30DAEB7EFC5FD945C16FB01FDD091BDF97;
IL2CPP_EXTERN_C String_t* _stringLiteralCE900A4791E737247188C56C6458FDB92AA0BCF7;
IL2CPP_EXTERN_C String_t* _stringLiteralD1E3E9ED6772FFC4AF4A9FC864ACF22E5BB03F0C;
IL2CPP_EXTERN_C String_t* _stringLiteralD218455EF3FDCD4B6E5440AB419563C0D63A72B1;
IL2CPP_EXTERN_C String_t* _stringLiteralD3269A41F619751C67FA42687D061C73E9A23E7A;
IL2CPP_EXTERN_C String_t* _stringLiteralD3383C8D690C3E5266179C6A2643D5D417456266;
IL2CPP_EXTERN_C String_t* _stringLiteralD3C457E89DFBA2FF6ECA7FF5FBCA406118FA6CC7;
IL2CPP_EXTERN_C String_t* _stringLiteralD3D4A417BC8782670DB0E78C3CA7E5FE5291906B;
IL2CPP_EXTERN_C String_t* _stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108;
IL2CPP_EXTERN_C String_t* _stringLiteralD8636892B786717541D27BD8F6B3B38B131E539B;
IL2CPP_EXTERN_C String_t* _stringLiteralD889B5F2870505224E30F45489ECB82516E08836;
IL2CPP_EXTERN_C String_t* _stringLiteralDA1E252AEA8044CB211618D6ECB68836A28617FD;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralE0C8189151B7A51FA43327E4A664875AD8C28423;
IL2CPP_EXTERN_C String_t* _stringLiteralE1D2E849A7438175301D35D30C70D6D3C9502439;
IL2CPP_EXTERN_C String_t* _stringLiteralE5E15B10AF7E0EA254F79B209F62465D2DB0E0F3;
IL2CPP_EXTERN_C String_t* _stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralE7F5EABEF5669401003B3212A08B06B9A56CC7B9;
IL2CPP_EXTERN_C String_t* _stringLiteralE86CDACEACDE5A2556F299FA4A3A694C0A3A9BA2;
IL2CPP_EXTERN_C String_t* _stringLiteralED44C067587F61201D81330CFBEC29A1A3FBBB05;
IL2CPP_EXTERN_C String_t* _stringLiteralEEA99AB89293A7EAB131A3DCE363E35F63E97A7E;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF79A4137EFAAD0A49ECD1C4081DEBC119DD91715;
IL2CPP_EXTERN_C String_t* _stringLiteralF7F62D97350D089C5494B6087685A72FAC799013;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
IL2CPP_EXTERN_C String_t* _stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5D8F5E287C3EEEF225C510E6162F39F4BBCB64A8 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


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


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// AFInAppEvents
struct AFInAppEvents_tEF325F1A66DE550F238F44FCC80923FEC06FF1CF  : public RuntimeObject
{
public:

public:
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


// AppsFlyerSDK.AppsFlyerAndroid
struct AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C  : public RuntimeObject
{
public:
	// System.Boolean AppsFlyerSDK.AppsFlyerAndroid::<isInit>k__BackingField
	bool ___U3CisInitU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CisInitU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C, ___U3CisInitU3Ek__BackingField_0)); }
	inline bool get_U3CisInitU3Ek__BackingField_0() const { return ___U3CisInitU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisInitU3Ek__BackingField_0() { return &___U3CisInitU3Ek__BackingField_0; }
	inline void set_U3CisInitU3Ek__BackingField_0(bool value)
	{
		___U3CisInitU3Ek__BackingField_0 = value;
	}
};

struct AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass AppsFlyerSDK.AppsFlyerAndroid::appsFlyerAndroid
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___appsFlyerAndroid_1;

public:
	inline static int32_t get_offset_of_appsFlyerAndroid_1() { return static_cast<int32_t>(offsetof(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields, ___appsFlyerAndroid_1)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_appsFlyerAndroid_1() const { return ___appsFlyerAndroid_1; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_appsFlyerAndroid_1() { return &___appsFlyerAndroid_1; }
	inline void set_appsFlyerAndroid_1(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___appsFlyerAndroid_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appsFlyerAndroid_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// AFMiniJSON.Json
struct Json_tADAC64C8562E4452CDEA6BDB1A174BB6D3AD2518  : public RuntimeObject
{
public:

public:
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// AFMiniJSON.Json/Parser
struct Parser_t83416D37107A3D52070D34329DE19C7C66883769  : public RuntimeObject
{
public:
	// System.IO.StringReader AFMiniJSON.Json/Parser::json
	StringReader_t74E352C280EAC22C878867444978741F19E1F895 * ___json_1;

public:
	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(Parser_t83416D37107A3D52070D34329DE19C7C66883769, ___json_1)); }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 * get_json_1() const { return ___json_1; }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 ** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(StringReader_t74E352C280EAC22C878867444978741F19E1F895 * value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_1), (void*)value);
	}
};


// AFMiniJSON.Json/Serializer
struct Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D  : public RuntimeObject
{
public:
	// System.Text.StringBuilder AFMiniJSON.Json/Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_0), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// AppsFlyerSDK.AppsFlyerRequestEventArgs
struct AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Int32 AppsFlyerSDK.AppsFlyerRequestEventArgs::<statusCode>k__BackingField
	int32_t ___U3CstatusCodeU3Ek__BackingField_1;
	// System.String AppsFlyerSDK.AppsFlyerRequestEventArgs::<errorDescription>k__BackingField
	String_t* ___U3CerrorDescriptionU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CstatusCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83, ___U3CstatusCodeU3Ek__BackingField_1)); }
	inline int32_t get_U3CstatusCodeU3Ek__BackingField_1() const { return ___U3CstatusCodeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CstatusCodeU3Ek__BackingField_1() { return &___U3CstatusCodeU3Ek__BackingField_1; }
	inline void set_U3CstatusCodeU3Ek__BackingField_1(int32_t value)
	{
		___U3CstatusCodeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CerrorDescriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83, ___U3CerrorDescriptionU3Ek__BackingField_2)); }
	inline String_t* get_U3CerrorDescriptionU3Ek__BackingField_2() const { return ___U3CerrorDescriptionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CerrorDescriptionU3Ek__BackingField_2() { return &___U3CerrorDescriptionU3Ek__BackingField_2; }
	inline void set_U3CerrorDescriptionU3Ek__BackingField_2(String_t* value)
	{
		___U3CerrorDescriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CerrorDescriptionU3Ek__BackingField_2), (void*)value);
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


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___current_3)); }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// AppsFlyerSDK.DeepLinkError
struct DeepLinkError_t9A1DE825DAC51BB16D7E1854019877FDE0673F99 
{
public:
	// System.Int32 AppsFlyerSDK.DeepLinkError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeepLinkError_t9A1DE825DAC51BB16D7E1854019877FDE0673F99, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// AppsFlyerSDK.DeepLinkStatus
struct DeepLinkStatus_t2E9B8670EE20F2F7DDF5D52D745F01ADC470A86B 
{
public:
	// System.Int32 AppsFlyerSDK.DeepLinkStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeepLinkStatus_t2E9B8670EE20F2F7DDF5D52D745F01ADC470A86B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// AppsFlyerSDK.EmailCryptType
struct EmailCryptType_tF3CA0B2A422807B8729AEA4898C3F11578EFC0F3 
{
public:
	// System.Int32 AppsFlyerSDK.EmailCryptType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EmailCryptType_tF3CA0B2A422807B8729AEA4898C3F11578EFC0F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// UnityEngine.jvalue
struct jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.jvalue::z
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte UnityEngine.jvalue::b
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.jvalue::c
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.jvalue::s
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.jvalue::i
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.jvalue::j
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.jvalue::f
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.jvalue::d
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr UnityEngine.jvalue::l
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_z_0() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___z_0)); }
	inline bool get_z_0() const { return ___z_0; }
	inline bool* get_address_of_z_0() { return &___z_0; }
	inline void set_z_0(bool value)
	{
		___z_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___b_1)); }
	inline int8_t get_b_1() const { return ___b_1; }
	inline int8_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int8_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___c_2)); }
	inline Il2CppChar get_c_2() const { return ___c_2; }
	inline Il2CppChar* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(Il2CppChar value)
	{
		___c_2 = value;
	}

	inline static int32_t get_offset_of_s_3() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___s_3)); }
	inline int16_t get_s_3() const { return ___s_3; }
	inline int16_t* get_address_of_s_3() { return &___s_3; }
	inline void set_s_3(int16_t value)
	{
		___s_3 = value;
	}

	inline static int32_t get_offset_of_i_4() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___i_4)); }
	inline int32_t get_i_4() const { return ___i_4; }
	inline int32_t* get_address_of_i_4() { return &___i_4; }
	inline void set_i_4(int32_t value)
	{
		___i_4 = value;
	}

	inline static int32_t get_offset_of_j_5() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___j_5)); }
	inline int64_t get_j_5() const { return ___j_5; }
	inline int64_t* get_address_of_j_5() { return &___j_5; }
	inline void set_j_5(int64_t value)
	{
		___j_5 = value;
	}

	inline static int32_t get_offset_of_f_6() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___f_6)); }
	inline float get_f_6() const { return ___f_6; }
	inline float* get_address_of_f_6() { return &___f_6; }
	inline void set_f_6(float value)
	{
		___f_6 = value;
	}

	inline static int32_t get_offset_of_d_7() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___d_7)); }
	inline double get_d_7() const { return ___d_7; }
	inline double* get_address_of_d_7() { return &___d_7; }
	inline void set_d_7(double value)
	{
		___d_7 = value;
	}

	inline static int32_t get_offset_of_l_8() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___l_8)); }
	inline intptr_t get_l_8() const { return ___l_8; }
	inline intptr_t* get_address_of_l_8() { return &___l_8; }
	inline void set_l_8(intptr_t value)
	{
		___l_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.jvalue
struct jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.jvalue
struct jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};

// AFMiniJSON.Json/Parser/TOKEN
struct TOKEN_t03D285CD4931BBE41EB5F95518597054ED6EF1E2 
{
public:
	// System.Int32 AFMiniJSON.Json/Parser/TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_t03D285CD4931BBE41EB5F95518597054ED6EF1E2, ___value___2)); }
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


// AppsFlyerSDK.DeepLinkEventsArgs
struct DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> AppsFlyerSDK.DeepLinkEventsArgs::deepLink
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___deepLink_1;
	// AppsFlyerSDK.DeepLinkStatus AppsFlyerSDK.DeepLinkEventsArgs::<status>k__BackingField
	int32_t ___U3CstatusU3Ek__BackingField_2;
	// AppsFlyerSDK.DeepLinkError AppsFlyerSDK.DeepLinkEventsArgs::<error>k__BackingField
	int32_t ___U3CerrorU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_deepLink_1() { return static_cast<int32_t>(offsetof(DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC, ___deepLink_1)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_deepLink_1() const { return ___deepLink_1; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_deepLink_1() { return &___deepLink_1; }
	inline void set_deepLink_1(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___deepLink_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deepLink_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstatusU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC, ___U3CstatusU3Ek__BackingField_2)); }
	inline int32_t get_U3CstatusU3Ek__BackingField_2() const { return ___U3CstatusU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CstatusU3Ek__BackingField_2() { return &___U3CstatusU3Ek__BackingField_2; }
	inline void set_U3CstatusU3Ek__BackingField_2(int32_t value)
	{
		___U3CstatusU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CerrorU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC, ___U3CerrorU3Ek__BackingField_3)); }
	inline int32_t get_U3CerrorU3Ek__BackingField_3() const { return ___U3CerrorU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CerrorU3Ek__BackingField_3() { return &___U3CerrorU3Ek__BackingField_3; }
	inline void set_U3CerrorU3Ek__BackingField_3(int32_t value)
	{
		___U3CerrorU3Ek__BackingField_3 = value;
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

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
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


// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B  : public MulticastDelegate_t
{
public:

public:
};


// AppsFlyerSDK.AppsFlyer/unityCallBack
struct unityCallBack_t92A5A0A8C398009538872E94CE2B7A9E11D6AA91  : public MulticastDelegate_t
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


// AppsFlyerSDK.AppsFlyer
struct AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields
{
public:
	// System.String AppsFlyerSDK.AppsFlyer::kAppsFlyerPluginVersion
	String_t* ___kAppsFlyerPluginVersion_4;
	// System.String AppsFlyerSDK.AppsFlyer::CallBackObjectName
	String_t* ___CallBackObjectName_5;
	// System.EventHandler AppsFlyerSDK.AppsFlyer::onRequestResponse
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___onRequestResponse_6;
	// System.EventHandler AppsFlyerSDK.AppsFlyer::onInAppResponse
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___onInAppResponse_7;
	// System.EventHandler AppsFlyerSDK.AppsFlyer::onDeepLinkReceived
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___onDeepLinkReceived_8;
	// AppsFlyerSDK.IAppsFlyerNativeBridge AppsFlyerSDK.AppsFlyer::instance
	RuntimeObject* ___instance_9;

public:
	inline static int32_t get_offset_of_kAppsFlyerPluginVersion_4() { return static_cast<int32_t>(offsetof(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields, ___kAppsFlyerPluginVersion_4)); }
	inline String_t* get_kAppsFlyerPluginVersion_4() const { return ___kAppsFlyerPluginVersion_4; }
	inline String_t** get_address_of_kAppsFlyerPluginVersion_4() { return &___kAppsFlyerPluginVersion_4; }
	inline void set_kAppsFlyerPluginVersion_4(String_t* value)
	{
		___kAppsFlyerPluginVersion_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kAppsFlyerPluginVersion_4), (void*)value);
	}

	inline static int32_t get_offset_of_CallBackObjectName_5() { return static_cast<int32_t>(offsetof(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields, ___CallBackObjectName_5)); }
	inline String_t* get_CallBackObjectName_5() const { return ___CallBackObjectName_5; }
	inline String_t** get_address_of_CallBackObjectName_5() { return &___CallBackObjectName_5; }
	inline void set_CallBackObjectName_5(String_t* value)
	{
		___CallBackObjectName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallBackObjectName_5), (void*)value);
	}

	inline static int32_t get_offset_of_onRequestResponse_6() { return static_cast<int32_t>(offsetof(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields, ___onRequestResponse_6)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_onRequestResponse_6() const { return ___onRequestResponse_6; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_onRequestResponse_6() { return &___onRequestResponse_6; }
	inline void set_onRequestResponse_6(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___onRequestResponse_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRequestResponse_6), (void*)value);
	}

	inline static int32_t get_offset_of_onInAppResponse_7() { return static_cast<int32_t>(offsetof(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields, ___onInAppResponse_7)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_onInAppResponse_7() const { return ___onInAppResponse_7; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_onInAppResponse_7() { return &___onInAppResponse_7; }
	inline void set_onInAppResponse_7(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___onInAppResponse_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onInAppResponse_7), (void*)value);
	}

	inline static int32_t get_offset_of_onDeepLinkReceived_8() { return static_cast<int32_t>(offsetof(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields, ___onDeepLinkReceived_8)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_onDeepLinkReceived_8() const { return ___onDeepLinkReceived_8; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_onDeepLinkReceived_8() { return &___onDeepLinkReceived_8; }
	inline void set_onDeepLinkReceived_8(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___onDeepLinkReceived_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDeepLinkReceived_8), (void*)value);
	}

	inline static int32_t get_offset_of_instance_9() { return static_cast<int32_t>(offsetof(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields, ___instance_9)); }
	inline RuntimeObject* get_instance_9() const { return ___instance_9; }
	inline RuntimeObject** get_address_of_instance_9() { return &___instance_9; }
	inline void set_instance_9(RuntimeObject* value)
	{
		___instance_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_9), (void*)value);
	}
};


// AppsFlyerObjectScript
struct AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String AppsFlyerObjectScript::devKey
	String_t* ___devKey_4;
	// System.String AppsFlyerObjectScript::appID
	String_t* ___appID_5;
	// System.String AppsFlyerObjectScript::UWPAppID
	String_t* ___UWPAppID_6;
	// System.String AppsFlyerObjectScript::macOSAppID
	String_t* ___macOSAppID_7;
	// System.Boolean AppsFlyerObjectScript::isDebug
	bool ___isDebug_8;
	// System.Boolean AppsFlyerObjectScript::getConversionData
	bool ___getConversionData_9;

public:
	inline static int32_t get_offset_of_devKey_4() { return static_cast<int32_t>(offsetof(AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7, ___devKey_4)); }
	inline String_t* get_devKey_4() const { return ___devKey_4; }
	inline String_t** get_address_of_devKey_4() { return &___devKey_4; }
	inline void set_devKey_4(String_t* value)
	{
		___devKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___devKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_appID_5() { return static_cast<int32_t>(offsetof(AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7, ___appID_5)); }
	inline String_t* get_appID_5() const { return ___appID_5; }
	inline String_t** get_address_of_appID_5() { return &___appID_5; }
	inline void set_appID_5(String_t* value)
	{
		___appID_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appID_5), (void*)value);
	}

	inline static int32_t get_offset_of_UWPAppID_6() { return static_cast<int32_t>(offsetof(AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7, ___UWPAppID_6)); }
	inline String_t* get_UWPAppID_6() const { return ___UWPAppID_6; }
	inline String_t** get_address_of_UWPAppID_6() { return &___UWPAppID_6; }
	inline void set_UWPAppID_6(String_t* value)
	{
		___UWPAppID_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UWPAppID_6), (void*)value);
	}

	inline static int32_t get_offset_of_macOSAppID_7() { return static_cast<int32_t>(offsetof(AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7, ___macOSAppID_7)); }
	inline String_t* get_macOSAppID_7() const { return ___macOSAppID_7; }
	inline String_t** get_address_of_macOSAppID_7() { return &___macOSAppID_7; }
	inline void set_macOSAppID_7(String_t* value)
	{
		___macOSAppID_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___macOSAppID_7), (void*)value);
	}

	inline static int32_t get_offset_of_isDebug_8() { return static_cast<int32_t>(offsetof(AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7, ___isDebug_8)); }
	inline bool get_isDebug_8() const { return ___isDebug_8; }
	inline bool* get_address_of_isDebug_8() { return &___isDebug_8; }
	inline void set_isDebug_8(bool value)
	{
		___isDebug_8 = value;
	}

	inline static int32_t get_offset_of_getConversionData_9() { return static_cast<int32_t>(offsetof(AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7, ___getConversionData_9)); }
	inline bool get_getConversionData_9() const { return ___getConversionData_9; }
	inline bool* get_address_of_getConversionData_9() { return &___getConversionData_9; }
	inline void set_getConversionData_9(bool value)
	{
		___getConversionData_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587  m_Items[1];

public:
	inline jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587  value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void AppsFlyerSDK.AppsFlyer::initSDK(System.String,System.String,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_initSDK_mC7EFE606F80713A2233A6949287366A84AABD8EC (String_t* ___devKey0, String_t* ___appID1, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___gameObject2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void AppsFlyerSDK.AppsFlyerAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid__ctor_m541C06B4021683FABF29D47C993C33D339DBE59E (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, const RuntimeMethod* method);
// System.Void AppsFlyerSDK.AppsFlyerAndroid::initSDK(System.String,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_initSDK_m941D1BB244CFBC77EFA423CFAD218CCFDF0BD118 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___devkey0, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___gameObject1, const RuntimeMethod* method);
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setSharingFilterForPartners(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setSharingFilterForPartners_mDC3A97C4C9354451E02261F3819B6101D2F7DAED (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___partners0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void AppsFlyerSDK.AppsFlyer::subscribeForDeepLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_subscribeForDeepLink_m9D3117DFBF6178C05E050EEFB437E09F97A1FCA0 (const RuntimeMethod* method);
// AppsFlyerSDK.AppsFlyerRequestEventArgs AppsFlyerSDK.AppsFlyer::parseRequestCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83 * AppsFlyer_parseRequestCallback_m6CA298B0BCE8719408EC3A6CC98D2C0335F267C6 (String_t* ___response0, const RuntimeMethod* method);
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method);
// System.Void AppsFlyerSDK.DeepLinkEventsArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeepLinkEventsArgs__ctor_m0C2E22E343F2A095C66B5857B1066CA82F340F2A (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> AppsFlyerSDK.AppsFlyer::CallbackStringToDictionary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * AppsFlyer_CallbackStringToDictionary_m0ABCD90F9C481F64D5EB3C83F07E18349651D5DE (String_t* ___str0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void AppsFlyerSDK.AppsFlyer::AFLog(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_AFLog_mC481F9C0650B29F3663556B19E4879A4E7E85C84 (String_t* ___methodName0, String_t* ___str1, const RuntimeMethod* method);
// System.Void AppsFlyerSDK.AppsFlyerRequestEventArgs::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerRequestEventArgs__ctor_m6ED3A0145E400ECA2A04A4C7C4EAE24FD1A10293 (AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83 * __this, int32_t ___code0, String_t* ___description1, const RuntimeMethod* method);
// System.Object AFMiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m8C86FD1676F5DE81FDEA04045B263AB1A06134E3 (String_t* ___json0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// UnityEngine.AndroidJavaObject AppsFlyerSDK.AppsFlyerAndroid::convertDictionaryToJavaMap(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AppsFlyerAndroid_convertDictionaryToJavaMap_mB8D01F6BBC4EE6D97D8903F22BA075D761A74320 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary0, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject AppsFlyerSDK.AppsFlyerAndroid::getEmailType(AppsFlyerSDK.EmailCryptType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AppsFlyerAndroid_getEmailType_m1C0460A347F3B3AF3452ACAAE59F9D52F87E8C56 (int32_t ___cryptType0, const RuntimeMethod* method);
// System.Void AppsFlyerSDK.AppsFlyerAndroid::sendEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_sendEvent_m63FC194518860F37CC950E3E3CDB08AB408180CD (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___eventName0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___eventValues1, bool ___shouldCallback2, String_t* ___callBackObjectName3, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_m051337FD2D7C0E765641B192D86FF4A06257836B (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDFC5066D8D09F1D8C8567065419D21015856330E (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* AndroidJNIHelper_CreateJNIArgArray_mB806BBD1920C763CCDB0BA6DE336425A45D4C361 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m09E30F9AF9DD2AE07D34CE3915BDA557E206271D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallObjectMethod_m3EBB2273B0EA84B457CBCF76A5E9F090EEA093A8 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteLocalRef_m0640E773BAD2A500DB3A70F13072B5155B855D91 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Void AppsFlyerSDK.AppsFlyer::setIsDebug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setIsDebug_m07C9FA4CE09F68DC4B6FE36BD76036B122188189 (bool ___shouldEnable0, const RuntimeMethod* method);
// System.Void AppsFlyerSDK.AppsFlyer::startSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_startSDK_mE16A7A2812CBABB237A98957F75439FD34596A75 (const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getDeepLinkParameter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getDeepLinkParameter_mE413AB47AD14054B1DB5D3CC9B2F82B23704C9EB (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Object AFMiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m8E3C79D25207BDB5DB75203549E0ECB0A8472541 (String_t* ___jsonString0, const RuntimeMethod* method);
// System.String AFMiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m7A649FF8A362A1BD8A19DD29917BF84B28E07DC3 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_mA78B7CA7BF0CA022525EA150EB6028F45E33C775 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE (StringReader_t74E352C280EAC22C878867444978741F19E1F895 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void AFMiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mC1BFFC37EDC95D36FD470F859481E9CA48D8CFFC (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Object AFMiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m51AFC86DF4BB1A26C89BC6DFE3B7D0F8F209924C (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method);
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8 (TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// AFMiniJSON.Json/Parser/TOKEN AFMiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m921C9959D590868460B0C40211C73E3FCBAA7BB6 (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method);
// System.String AFMiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mD808BB332C85F08ED3D902A583C32E30C87374E9 (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Object AFMiniJSON.Json/Parser::ParseByToken(AFMiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m32855C9107892E0BFA0FA67F2126E5C498DD0ABC (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, int32_t ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Object AFMiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_mF272D32063FA2109FE9CE232C514412F6DBBEF21 (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> AFMiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_m59C84CD5D37CEDE48934BD5F8A18F6410F6040AF (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Object> AFMiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_mDC2CE0D65199799A46335FC8D07258EC7E78E8A5 (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char AFMiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m52B2D7050DB8008DC29F4643345A9124F7688124 (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mE594AB67F7D00A94FB035F168E6F0C965C684E49 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method);
// System.String AFMiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_mB606B747C5132EBAC84AF2FF42C983732E84446E (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m13BC44BEDCE2007C95FBD252C56CDFCCFA90DADC (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m08AC1636E130EC17A72B03D3E21093AE670AD01A (String_t* ___s0, double* ___result1, const RuntimeMethod* method);
// System.Char AFMiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m26F52B24820AD0269789C4FF44E387A069DFAC73 (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m0DEF682F48A776C6432355662B171831B39DC913 (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean AFMiniJSON.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mB8CD6D42F0A62AE20F3573E0C62549D1C70B88FA (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void AFMiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m245455E14742CB7E2484B39A77EBC406C2209F63 (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method);
// System.Void AFMiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m86BC94B0BD3B46E92901B92980CACCDF1D781AF9 (Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D * __this, const RuntimeMethod* method);
// System.Void AFMiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m8214E48C89FF08882090A5AE74D7F48A13DDED62 (Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void AFMiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m0748134E115FFDCCE8A1717F4793B6990BD50663 (Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void AFMiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mE156651D66E7723B6EC041A571A6E9D678484E64 (Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method);
// System.Void AFMiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m648820A29660E7ABE229FEB7A92C4D190E5CD97D (Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D * __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Void AFMiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m289B17755B76D9DBA50EBF91704F4DC68A385153 (Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0F8328BDE34A6FD1929653C019246AE73386AAE1 (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mC228DB537BF466F8F8557664CACEA3CAE29AD87A (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C (double* __this, String_t* ___format0, const RuntimeMethod* method);
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
// System.Void AFInAppEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AFInAppEvents__ctor_mBC369C5EA44A7B2661F055638F32882C78B3733C (AFInAppEvents_tEF325F1A66DE550F238F44FCC80923FEC06FF1CF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void AppsFlyerSDK.AppsFlyer::initSDK(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_initSDK_m65E2907FF2971DD8E70CF093E8ECE0961DB30D12 (String_t* ___devKey0, String_t* ___appID1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// initSDK(devKey, appID, null);
		String_t* L_0 = ___devKey0;
		String_t* L_1 = ___appID1;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		AppsFlyer_initSDK_mC7EFE606F80713A2233A6949287366A84AABD8EC(L_0, L_1, (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::initSDK(System.String,System.String,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_initSDK_mC7EFE606F80713A2233A6949287366A84AABD8EC (String_t* ___devKey0, String_t* ___appID1, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___gameObject2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject != null)
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = ___gameObject2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// CallBackObjectName = gameObject.name;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_2 = ___gameObject2;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->set_CallBackObjectName_5(L_3);
	}

IL_0014:
	{
		// if (instance == null || !instance.isInit)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean AppsFlyerSDK.IAppsFlyerNativeBridge::get_isInit() */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_5);
		if (L_6)
		{
			goto IL_0044;
		}
	}

IL_0027:
	{
		// AppsFlyerAndroid appsFlyerAndroid = new AppsFlyerAndroid();
		AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * L_7 = (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C *)il2cpp_codegen_object_new(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AppsFlyerAndroid__ctor_m541C06B4021683FABF29D47C993C33D339DBE59E(L_7, /*hidden argument*/NULL);
		// appsFlyerAndroid.initSDK(devKey, gameObject);
		AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * L_8 = L_7;
		String_t* L_9 = ___devKey0;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_10 = ___gameObject2;
		NullCheck(L_8);
		AppsFlyerAndroid_initSDK_m941D1BB244CFBC77EFA423CFAD218CCFDF0BD118(L_8, L_9, L_10, /*hidden argument*/NULL);
		// instance = appsFlyerAndroid;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->set_instance_9(L_8);
		// instance.isInit = true;
		RuntimeObject* L_11 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		NullCheck(L_11);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::set_isInit(System.Boolean) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_11, (bool)1);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::startSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_startSDK_mE16A7A2812CBABB237A98957F75439FD34596A75 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// instance.startSDK(onRequestResponse != null, CallBackObjectName);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_onRequestResponse_6();
		String_t* L_3 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_CallBackObjectName_5();
		NullCheck(L_1);
		InterfaceActionInvoker2< bool, String_t* >::Invoke(2 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::startSDK(System.Boolean,System.String) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, (bool)((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), L_3);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::sendEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_sendEvent_mF5A4FF1E1116708D05A65BD9F8C42BB3A4A7341E (String_t* ___eventName0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___eventValues1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// instance.sendEvent(eventName, eventValues, onInAppResponse != null, CallBackObjectName);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		String_t* L_2 = ___eventName0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = ___eventValues1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_4 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_onInAppResponse_7();
		String_t* L_5 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_CallBackObjectName_5();
		NullCheck(L_1);
		InterfaceActionInvoker4< String_t*, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, bool, String_t* >::Invoke(3 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::sendEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean,System.String) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2, L_3, (bool)((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), L_5);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::stopSDK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_stopSDK_mC82230F899906DEEEEFD253ECFC806AE1A5B93E3 (bool ___isSDKStopped0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// instance.stopSDK(isSDKStopped);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		bool L_2 = ___isSDKStopped0;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::stopSDK(System.Boolean) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Boolean AppsFlyerSDK.AppsFlyer::isSDKStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppsFlyer_isSDKStopped_m4F7FDFE6234B98C933E041A576A64D214D2AA7F0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return instance.isSDKStopped();
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean AppsFlyerSDK.IAppsFlyerNativeBridge::isSDKStopped() */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0012:
	{
		// return false;
		return (bool)0;
	}
}
// System.String AppsFlyerSDK.AppsFlyer::getSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyer_getSdkVersion_m8E5822F3FA522BEF080541A1907959D7D58F1213 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return instance.getSdkVersion();
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String AppsFlyerSDK.IAppsFlyerNativeBridge::getSdkVersion() */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0012:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setIsDebug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setIsDebug_m07C9FA4CE09F68DC4B6FE36BD76036B122188189 (bool ___shouldEnable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// instance.setIsDebug(shouldEnable);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		bool L_2 = ___shouldEnable0;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(28 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::setIsDebug(System.Boolean) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2);
		// } else {
		return;
	}

IL_0013:
	{
		// instance = new AppsFlyerAndroid();
		AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * L_3 = (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C *)il2cpp_codegen_object_new(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AppsFlyerAndroid__ctor_m541C06B4021683FABF29D47C993C33D339DBE59E(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->set_instance_9(L_3);
		// instance.setIsDebug(shouldEnable);
		RuntimeObject* L_4 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		bool L_5 = ___shouldEnable0;
		NullCheck(L_4);
		InterfaceActionInvoker1< bool >::Invoke(28 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::setIsDebug(System.Boolean) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_4, L_5);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setCustomerUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setCustomerUserId_m2FD080D5D05F162FF4E96046CDD3761D639A9C13 (String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// instance.setCustomerUserId(id);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		String_t* L_2 = ___id0;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(7 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::setCustomerUserId(System.String) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setAppInviteOneLinkID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setAppInviteOneLinkID_mAE646E9232F65CD9C32944F4CC1D6FD8A71C1191 (String_t* ___oneLinkId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// instance.setAppInviteOneLinkID(oneLinkId);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		String_t* L_2 = ___oneLinkId0;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(8 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::setAppInviteOneLinkID(System.String) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setAdditionalData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setAdditionalData_mA6C4B5566C1348CAAA34562E9C36D2DCCD362300 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___customData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// instance.setAdditionalData(customData);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2 = ___customData0;
		NullCheck(L_1);
		InterfaceActionInvoker1< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(9 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::setAdditionalData(System.Collections.Generic.Dictionary`2<System.String,System.String>) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setResolveDeepLinkURLs(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setResolveDeepLinkURLs_m860DC158582F78BE5F7224DAC978A4135071269D (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___urls0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// instance.setResolveDeepLinkURLs(urls);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___urls0;
		NullCheck(L_1);
		InterfaceActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(10 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::setResolveDeepLinkURLs(System.String[]) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setOneLinkCustomDomain(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setOneLinkCustomDomain_m8A4C70C57D45076D160A6A5FE1AEAAB2E42C04E0 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___domains0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// instance.setOneLinkCustomDomain(domains);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___domains0;
		NullCheck(L_1);
		InterfaceActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(11 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::setOneLinkCustomDomain(System.String[]) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}

IL_0013:
	{
		// instance = new AppsFlyerAndroid();
		AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * L_3 = (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C *)il2cpp_codegen_object_new(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AppsFlyerAndroid__ctor_m541C06B4021683FABF29D47C993C33D339DBE59E(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->set_instance_9(L_3);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setCurrencyCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setCurrencyCode_m88539789015D63E5BFBE75DF37C97F2BEE9E5376 (String_t* ___currencyCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// instance.setCurrencyCode(currencyCode);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		String_t* L_2 = ___currencyCode0;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(12 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::setCurrencyCode(System.String) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::recordLocation(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_recordLocation_m3C73700AFD0493E927DB75C64916DC468E3C5260 (double ___latitude0, double ___longitude1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// instance.recordLocation(latitude, longitude);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		double L_2 = ___latitude0;
		double L_3 = ___longitude1;
		NullCheck(L_1);
		InterfaceActionInvoker2< double, double >::Invoke(13 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::recordLocation(System.Double,System.Double) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2, L_3);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::anonymizeUser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_anonymizeUser_m8A88B127F0FF24117AA1CDC4B58FED2FA18DD76B (bool ___shouldAnonymizeUser0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// instance.anonymizeUser(shouldAnonymizeUser);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		bool L_2 = ___shouldAnonymizeUser0;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(14 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::anonymizeUser(System.Boolean) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.String AppsFlyerSDK.AppsFlyer::getAppsFlyerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyer_getAppsFlyerId_m2584FB425B23EF617361635887FB11B8D4508A61 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return instance.getAppsFlyerId();
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(15 /* System.String AppsFlyerSDK.IAppsFlyerNativeBridge::getAppsFlyerId() */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0012:
	{
		// return string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_3;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setMinTimeBetweenSessions(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setMinTimeBetweenSessions_mDD17BA2825149240738DC6EDD631EC961EFD94B5 (int32_t ___seconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// instance.setMinTimeBetweenSessions(seconds);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		int32_t L_2 = ___seconds0;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(16 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::setMinTimeBetweenSessions(System.Int32) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setHost(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setHost_m8963B43FE3827CB900160279AF0ABFB3D6724416 (String_t* ___hostPrefixName0, String_t* ___hostName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// instance.setHost(hostPrefixName, hostName);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		String_t* L_2 = ___hostPrefixName0;
		String_t* L_3 = ___hostName1;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(17 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::setHost(System.String,System.String) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2, L_3);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setUserEmails(AppsFlyerSDK.EmailCryptType,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setUserEmails_m3B96ACA8AABC90A12C95FE0A57998E9373A33035 (int32_t ___cryptType0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___userEmails1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// instance.setUserEmails(cryptType, userEmails);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		int32_t L_2 = ___cryptType0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___userEmails1;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(26 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::setUserEmails(AppsFlyerSDK.EmailCryptType,System.String[]) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2, L_3);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::updateServerUninstallToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_updateServerUninstallToken_mC273B45EE881C9A41B7E5ABA553921A77C027A37 (String_t* ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.updateServerUninstallToken(token);
		String_t* L_3 = ___token0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void AppsFlyerSDK.IAppsFlyerAndroidBridge::updateServerUninstallToken(System.String) */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setPhoneNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setPhoneNumber_m90599257E8DF75142F67DD2DECF7D2716D7472FE (String_t* ___phoneNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// instance.setPhoneNumber(phoneNumber);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		String_t* L_2 = ___phoneNumber0;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(18 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::setPhoneNumber(System.String) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setImeiData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setImeiData_m39E3789E01743C826797447E1F8C59E1CD96B169 (String_t* ___aImei0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setImeiData(aImei);
		String_t* L_3 = ___aImei0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void AppsFlyerSDK.IAppsFlyerAndroidBridge::setImeiData(System.String) */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setSharingFilterForAllPartners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setSharingFilterForAllPartners_m08BF0C6EFE19B6E862E2BA79B3C717C657157974 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// instance.setSharingFilterForAllPartners();
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(19 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::setSharingFilterForAllPartners() */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setAndroidIdData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setAndroidIdData_mE63E93E5AE1BEA96D3956BAB9D0089EF5B131AAB (String_t* ___aAndroidId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setAndroidIdData(aAndroidId);
		String_t* L_3 = ___aAndroidId0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void AppsFlyerSDK.IAppsFlyerAndroidBridge::setAndroidIdData(System.String) */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::waitForCustomerUserId(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_waitForCustomerUserId_m1D23FC6F77221F7B0490C31BE3D3EF047C1DEB17 (bool ___wait0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.waitForCustomerUserId(wait);
		bool L_3 = ___wait0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void AppsFlyerSDK.IAppsFlyerAndroidBridge::waitForCustomerUserId(System.Boolean) */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setSharingFilter(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setSharingFilter_m78F5958B2FD51891BFD1C87D8601908A1A51A2F5 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___partners0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// instance.setSharingFilter(partners);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___partners0;
		NullCheck(L_1);
		InterfaceActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(20 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::setSharingFilter(System.String[]) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setCustomerIdAndStartSDK(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setCustomerIdAndStartSDK_m085E31CC8254A7473DD400FBA0499B14009E97C0 (String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setCustomerIdAndStartSDK(id);
		String_t* L_3 = ___id0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void AppsFlyerSDK.IAppsFlyerAndroidBridge::setCustomerIdAndStartSDK(System.String) */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setSharingFilterForPartners(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setSharingFilterForPartners_m681C29EEE4F5B26512A55336C95C1E5ED61A5EEC (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___partners0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AppsFlyerAndroid.setSharingFilterForPartners(partners);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___partners0;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AppsFlyerAndroid_setSharingFilterForPartners_mDC3A97C4C9354451E02261F3819B6101D2F7DAED(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String AppsFlyerSDK.AppsFlyer::getOutOfStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyer_getOutOfStore_m9FAAF8706AF42F0325352419199F6F794FD115FD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// return appsFlyerAndroidInstance.getOutOfStore();
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String AppsFlyerSDK.IAppsFlyerAndroidBridge::getOutOfStore() */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		return L_3;
	}

IL_0023:
	{
		// return string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_4;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setOutOfStore(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setOutOfStore_mCE2D46D7543A9B1B5CDD1BBC3F333DC99039E973 (String_t* ___sourceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setOutOfStore(sourceName);
		String_t* L_3 = ___sourceName0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< String_t* >::Invoke(6 /* System.Void AppsFlyerSDK.IAppsFlyerAndroidBridge::setOutOfStore(System.String) */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::getConversionData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_getConversionData_mFED04857A6C26A37AC28CDE98325813A14297DD0 (String_t* ___objectName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// instance.getConversionData(objectName);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		String_t* L_2 = ___objectName0;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(21 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::getConversionData(System.String) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setCollectAndroidID(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setCollectAndroidID_mA500BED02B808B3220EB05D9001FD8F0AE84B004 (bool ___isCollect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setCollectAndroidID(isCollect);
		bool L_3 = ___isCollect0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void AppsFlyerSDK.IAppsFlyerAndroidBridge::setCollectAndroidID(System.Boolean) */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setIsUpdate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setIsUpdate_mC89D1B9C52172F966310C12A2DDCCD9EE9DD3BFA (bool ___isUpdate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setIsUpdate(isUpdate);
		bool L_3 = ___isUpdate0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< bool >::Invoke(9 /* System.Void AppsFlyerSDK.IAppsFlyerAndroidBridge::setIsUpdate(System.Boolean) */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setCollectIMEI(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setCollectIMEI_mF30F6C19904474754BF3C5E4FCCDBFD8167943E6 (bool ___isCollect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setCollectIMEI(isCollect);
		bool L_3 = ___isCollect0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< bool >::Invoke(8 /* System.Void AppsFlyerSDK.IAppsFlyerAndroidBridge::setCollectIMEI(System.Boolean) */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setDisableCollectAppleAdSupport(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setDisableCollectAppleAdSupport_m9C658FA035F5AD38A00DCAD296E78EA37731F12A (bool ___disable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerIOSBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerIOSBridge appsFlyerAndroidInstance = (IAppsFlyerIOSBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setDisableCollectAppleAdSupport(disable);
		bool L_3 = ___disable0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void AppsFlyerSDK.IAppsFlyerIOSBridge::setDisableCollectAppleAdSupport(System.Boolean) */, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setShouldCollectDeviceName(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setShouldCollectDeviceName_m30D9A8268799870C1C9FE92BC95AA14ABA8B0D1E (bool ___shouldCollectDeviceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerIOSBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerIOSBridge appsFlyerAndroidInstance = (IAppsFlyerIOSBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setShouldCollectDeviceName(shouldCollectDeviceName);
		bool L_3 = ___shouldCollectDeviceName0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void AppsFlyerSDK.IAppsFlyerIOSBridge::setShouldCollectDeviceName(System.Boolean) */, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::attributeAndOpenStore(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_attributeAndOpenStore_m1A780DE86ABEBAA8A05EDC5146C22A0FC7B0851B (String_t* ___appID0, String_t* ___campaign1, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___userParams2, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___gameObject3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// instance.attributeAndOpenStore(appID, campaign, userParams, gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		String_t* L_2 = ___appID0;
		String_t* L_3 = ___campaign1;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_4 = ___userParams2;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_5 = ___gameObject3;
		NullCheck(L_1);
		InterfaceActionInvoker4< String_t*, String_t*, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * >::Invoke(22 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::attributeAndOpenStore(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.MonoBehaviour) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4, L_5);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setPreinstallAttribution(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setPreinstallAttribution_mF509C16B814DC8FF1CBD11477390C6DF2D12624A (String_t* ___mediaSource0, String_t* ___campaign1, String_t* ___siteId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setPreinstallAttribution(mediaSource, campaign, siteId);
		String_t* L_3 = ___mediaSource0;
		String_t* L_4 = ___campaign1;
		String_t* L_5 = ___siteId2;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(10 /* System.Void AppsFlyerSDK.IAppsFlyerAndroidBridge::setPreinstallAttribution(System.String,System.String,System.String) */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)), L_3, L_4, L_5);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setDisableCollectIAd(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setDisableCollectIAd_mA2920B2DD2BD062706461AB8E3181759F9BD24A3 (bool ___disableCollectIAd0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerIOSBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerIOSBridge appsFlyerAndroidInstance = (IAppsFlyerIOSBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setDisableCollectIAd(disableCollectIAd);
		bool L_3 = ___disableCollectIAd0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void AppsFlyerSDK.IAppsFlyerIOSBridge::setDisableCollectIAd(System.Boolean) */, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Boolean AppsFlyerSDK.AppsFlyer::isPreInstalledApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppsFlyer_isPreInstalledApp_mDF05B3695817F27CC66C369E02B29560C5D424F6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// return appsFlyerAndroidInstance.isPreInstalledApp();
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(11 /* System.Boolean AppsFlyerSDK.IAppsFlyerAndroidBridge::isPreInstalledApp() */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		return L_3;
	}

IL_0023:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setUseReceiptValidationSandbox(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setUseReceiptValidationSandbox_m2AE5A68A592A161D2452E99896ED9F2442F9ACD3 (bool ___useReceiptValidationSandbox0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerIOSBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerIOSBridge appsFlyerAndroidInstance = (IAppsFlyerIOSBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setUseReceiptValidationSandbox(useReceiptValidationSandbox);
		bool L_3 = ___useReceiptValidationSandbox0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void AppsFlyerSDK.IAppsFlyerIOSBridge::setUseReceiptValidationSandbox(System.Boolean) */, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::recordCrossPromoteImpression(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_recordCrossPromoteImpression_m1E8644301790219EB80535510A588568ECCEDCDF (String_t* ___appID0, String_t* ___campaign1, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___parameters2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// instance.recordCrossPromoteImpression(appID, campaign, parameters);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		String_t* L_2 = ___appID0;
		String_t* L_3 = ___campaign1;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_4 = ___parameters2;
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, String_t*, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(23 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::recordCrossPromoteImpression(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setUseUninstallSandbox(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setUseUninstallSandbox_m259BABC6A2AB18B532D0B5386E669C2D238CDA59 (bool ___useUninstallSandbox0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerIOSBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerIOSBridge appsFlyerAndroidInstance = (IAppsFlyerIOSBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setUseUninstallSandbox(useUninstallSandbox);
		bool L_3 = ___useUninstallSandbox0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void AppsFlyerSDK.IAppsFlyerIOSBridge::setUseUninstallSandbox(System.Boolean) */, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.String AppsFlyerSDK.AppsFlyer::getAttributionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyer_getAttributionId_mE46D4C5B5AF63E5E18F6219B5633CE0274D5B550 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// return appsFlyerAndroidInstance.getAttributionId();
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(12 /* System.String AppsFlyerSDK.IAppsFlyerAndroidBridge::getAttributionId() */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		return L_3;
	}

IL_0023:
	{
		// return string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_4;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::handlePushNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_handlePushNotifications_mB5A009A510BFC8146CD947132404879C962C3F3B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.handlePushNotifications();
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker0::Invoke(13 /* System.Void AppsFlyerSDK.IAppsFlyerAndroidBridge::handlePushNotifications() */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::validateAndSendInAppPurchase(System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_validateAndSendInAppPurchase_m205FB73DCD7DD4791659600269241CD6EC538DA7 (String_t* ___productIdentifier0, String_t* ___price1, String_t* ___currency2, String_t* ___tranactionId3, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___additionalParameters4, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___gameObject5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerIOSBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		// IAppsFlyerIOSBridge appsFlyerAndroidInstance = (IAppsFlyerIOSBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.validateAndSendInAppPurchase(productIdentifier, price, currency, tranactionId, additionalParameters, gameObject);
		String_t* L_3 = ___productIdentifier0;
		String_t* L_4 = ___price1;
		String_t* L_5 = ___currency2;
		String_t* L_6 = ___tranactionId3;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_7 = ___additionalParameters4;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_8 = ___gameObject5;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker6< String_t*, String_t*, String_t*, String_t*, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * >::Invoke(5 /* System.Void AppsFlyerSDK.IAppsFlyerIOSBridge::validateAndSendInAppPurchase(System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.MonoBehaviour) */, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)), L_3, L_4, L_5, L_6, L_7, L_8);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::validateAndSendInAppPurchase(System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_validateAndSendInAppPurchase_mA090E66E7C4A97F5E78B7E5AA4EC8BEFE3970F10 (String_t* ___publicKey0, String_t* ___signature1, String_t* ___purchaseData2, String_t* ___price3, String_t* ___currency4, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___additionalParameters5, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___gameObject6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_002c;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.validateAndSendInAppPurchase(publicKey, signature,purchaseData, price, currency, additionalParameters, gameObject);
		String_t* L_3 = ___publicKey0;
		String_t* L_4 = ___signature1;
		String_t* L_5 = ___purchaseData2;
		String_t* L_6 = ___price3;
		String_t* L_7 = ___currency4;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_8 = ___additionalParameters5;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_9 = ___gameObject6;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker7< String_t*, String_t*, String_t*, String_t*, String_t*, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * >::Invoke(14 /* System.Void AppsFlyerSDK.IAppsFlyerAndroidBridge::validateAndSendInAppPurchase(System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.MonoBehaviour) */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)), L_3, L_4, L_5, L_6, L_7, L_8, L_9);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::handleOpenUrl(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_handleOpenUrl_m0F1B2351066BDA8AED6E45241956E40FED0B89C9 (String_t* ___url0, String_t* ___sourceApplication1, String_t* ___annotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerIOSBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		// IAppsFlyerIOSBridge appsFlyerAndroidInstance = (IAppsFlyerIOSBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.handleOpenUrl(url, sourceApplication, annotation);
		String_t* L_3 = ___url0;
		String_t* L_4 = ___sourceApplication1;
		String_t* L_5 = ___annotation2;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(7 /* System.Void AppsFlyerSDK.IAppsFlyerIOSBridge::handleOpenUrl(System.String,System.String,System.String) */, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)), L_3, L_4, L_5);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::registerUninstall(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_registerUninstall_mD8C3199E53D0743A0FE76D188CE985BBE8FE0939 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___deviceToken0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerIOSBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerIOSBridge appsFlyerAndroidInstance = (IAppsFlyerIOSBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.registerUninstall(deviceToken);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___deviceToken0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Void AppsFlyerSDK.IAppsFlyerIOSBridge::registerUninstall(System.Byte[]) */, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::waitForATTUserAuthorizationWithTimeoutInterval(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_waitForATTUserAuthorizationWithTimeoutInterval_mBD67FBA025668984213B295DDD0761EACDB99751 (int32_t ___timeoutInterval0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerIOSBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerIOSBridge appsFlyerAndroidInstance = (IAppsFlyerIOSBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.waitForATTUserAuthorizationWithTimeoutInterval(timeoutInterval);
		int32_t L_3 = ___timeoutInterval0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< int32_t >::Invoke(8 /* System.Void AppsFlyerSDK.IAppsFlyerIOSBridge::waitForATTUserAuthorizationWithTimeoutInterval(System.Int32) */, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setCurrentDeviceLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setCurrentDeviceLanguage_m2C00C0635A5186A25DF67E69900F4E4E90C28672 (String_t* ___language0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerIOSBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerIOSBridge appsFlyerAndroidInstance = (IAppsFlyerIOSBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setCurrentDeviceLanguage(language);
		String_t* L_3 = ___language0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void AppsFlyerSDK.IAppsFlyerIOSBridge::setCurrentDeviceLanguage(System.String) */, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::generateUserInviteLink(System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_generateUserInviteLink_m211D3D8C85F3D633B6ED4A1AF591549C68108C57 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___parameters0, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___gameObject1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// instance.generateUserInviteLink(parameters, gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2 = ___parameters0;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_3 = ___gameObject1;
		NullCheck(L_1);
		InterfaceActionInvoker2< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * >::Invoke(24 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::generateUserInviteLink(System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.MonoBehaviour) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2, L_3);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::disableSKAdNetwork(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_disableSKAdNetwork_m0DF13992FEBFFCFA60E91B42A7D641CD4EE184B6 (bool ___isDisabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerIOSBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerIOSBridge appsFlyerAndroidInstance = (IAppsFlyerIOSBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.disableSKAdNetwork(isDisabled);
		bool L_3 = ___isDisabled0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< bool >::Invoke(10 /* System.Void AppsFlyerSDK.IAppsFlyerIOSBridge::disableSKAdNetwork(System.Boolean) */, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerIOSBridge_tC4366FBB014A3CFB7DD2C6A1888F300C89A348E9_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setCollectOaid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setCollectOaid_m12630A103C845A803908323EEFE4F5F0179683D5 (bool ___isCollect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setCollectOaid(isCollect);
		bool L_3 = ___isCollect0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< bool >::Invoke(15 /* System.Void AppsFlyerSDK.IAppsFlyerAndroidBridge::setCollectOaid(System.Boolean) */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::addPushNotificationDeepLinkPath(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_addPushNotificationDeepLinkPath_mB7D463C333D2B89F395E7B417431898D8F18DC7E (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paths0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// instance.addPushNotificationDeepLinkPath(paths);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___paths0;
		NullCheck(L_1);
		InterfaceActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(25 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::addPushNotificationDeepLinkPath(System.String[]) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setDisableAdvertisingIdentifiers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setDisableAdvertisingIdentifiers_mFE7CEAC649E8EA4EAE91E10A7C95804EF5D5F5AB (bool ___disable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setDisableAdvertisingIdentifiers(disable);
		bool L_3 = ___disable0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< bool >::Invoke(16 /* System.Void AppsFlyerSDK.IAppsFlyerAndroidBridge::setDisableAdvertisingIdentifiers(System.Boolean) */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::subscribeForDeepLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_subscribeForDeepLink_m9D3117DFBF6178C05E050EEFB437E09F97A1FCA0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// instance.subscribeForDeepLink(CallBackObjectName);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		String_t* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_CallBackObjectName_5();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(27 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::subscribeForDeepLink(System.String) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setPartnerData(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setPartnerData_m330618E493C8E0965B7FD4E2F0D4C6F804380A87 (String_t* ___partnerId0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___partnerInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// instance.setPartnerData(partnerId, partnerInfo);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		String_t* L_2 = ___partnerId0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = ___partnerInfo1;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(29 /* System.Void AppsFlyerSDK.IAppsFlyerNativeBridge::setPartnerData(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>) */, IAppsFlyerNativeBridge_t467D93FAD1A08D171D081D552570262A00859F44_il2cpp_TypeInfo_var, L_1, L_2, L_3);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::setDisableNetworkData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_setDisableNetworkData_m5AFD141447534655DFCD36C602AD6873DE4D9E43 (bool ___disable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance is IAppsFlyerAndroidBridge) {
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		// IAppsFlyerAndroidBridge appsFlyerAndroidInstance = (IAppsFlyerAndroidBridge)instance;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_instance_9();
		// appsFlyerAndroidInstance.setDisableNetworkData(disable);
		bool L_3 = ___disable0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< bool >::Invoke(17 /* System.Void AppsFlyerSDK.IAppsFlyerAndroidBridge::setDisableNetworkData(System.Boolean) */, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IAppsFlyerAndroidBridge_t0C1A11B26053BF9C8A93484B1D9A3D3749724B75_il2cpp_TypeInfo_var)), L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::add_OnRequestResponse(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_add_OnRequestResponse_mB5D96D4686A3F0F1F8BF7DE206CF149871718556 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onRequestResponse += value;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_onRequestResponse_6();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_0, L_1, /*hidden argument*/NULL);
		((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->set_onRequestResponse_6(((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_2, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::remove_OnRequestResponse(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_remove_OnRequestResponse_m552DF294C7758B2B331F9BA1060422306FACCC93 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onRequestResponse -= value;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_onRequestResponse_6();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_0, L_1, /*hidden argument*/NULL);
		((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->set_onRequestResponse_6(((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_2, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::add_OnInAppResponse(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_add_OnInAppResponse_mC2460980BAB9B72F33C791FFC6B00798864104EC (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onInAppResponse += value;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_onInAppResponse_7();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_0, L_1, /*hidden argument*/NULL);
		((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->set_onInAppResponse_7(((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_2, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::remove_OnInAppResponse(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_remove_OnInAppResponse_mFCC1E79AAC7492D9EA6EAAA371184985D2023369 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onInAppResponse -= value;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_onInAppResponse_7();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_0, L_1, /*hidden argument*/NULL);
		((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->set_onInAppResponse_7(((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_2, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::add_OnDeepLinkReceived(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_add_OnDeepLinkReceived_mC35CE752FF8CCA110E720514BF68D2F0E5F18E53 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onDeepLinkReceived += value;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_onDeepLinkReceived_8();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_0, L_1, /*hidden argument*/NULL);
		((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->set_onDeepLinkReceived_8(((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_2, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var)));
		// subscribeForDeepLink();
		AppsFlyer_subscribeForDeepLink_m9D3117DFBF6178C05E050EEFB437E09F97A1FCA0(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::remove_OnDeepLinkReceived(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_remove_OnDeepLinkReceived_m086733CAE273D03AB2FF64F8B28CF26A1DE28D76 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onDeepLinkReceived -= value;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_onDeepLinkReceived_8();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_0, L_1, /*hidden argument*/NULL);
		((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->set_onDeepLinkReceived_8(((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_2, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::inAppResponseReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_inAppResponseReceived_m634CA374D7BFB5BA5441B9287FF53DC0434F0037 (AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC * __this, String_t* ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onInAppResponse != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_onInAppResponse_7();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// onInAppResponse.Invoke(null, parseRequestCallback(response));
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_onInAppResponse_7();
		String_t* L_2 = ___response0;
		AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83 * L_3;
		L_3 = AppsFlyer_parseRequestCallback_m6CA298B0BCE8719408EC3A6CC98D2C0335F267C6(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_1, NULL, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::requestResponseReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_requestResponseReceived_m3E67B41C568F3AE7D27542B2A448A7EE4BC42423 (AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC * __this, String_t* ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onRequestResponse != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_onRequestResponse_6();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// onRequestResponse.Invoke(null, parseRequestCallback(response));
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_onRequestResponse_6();
		String_t* L_2 = ___response0;
		AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83 * L_3;
		L_3 = AppsFlyer_parseRequestCallback_m6CA298B0BCE8719408EC3A6CC98D2C0335F267C6(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_1, NULL, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::onDeepLinking(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_onDeepLinking_m540D395E4BBFD4FA470188E7E41DFAEBC7DADB70 (AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC * __this, String_t* ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * V_0 = NULL;
	{
		// DeepLinkEventsArgs args = new DeepLinkEventsArgs(response);
		String_t* L_0 = ___response0;
		DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * L_1 = (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC *)il2cpp_codegen_object_new(DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC_il2cpp_TypeInfo_var);
		DeepLinkEventsArgs__ctor_m0C2E22E343F2A095C66B5857B1066CA82F340F2A(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (onDeepLinkReceived != null)
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_onDeepLinkReceived_8();
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// onDeepLinkReceived.Invoke(null, args);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_onDeepLinkReceived_8();
		DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * L_4 = V_0;
		NullCheck(L_3);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_3, NULL, L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// AppsFlyerSDK.AppsFlyerRequestEventArgs AppsFlyerSDK.AppsFlyer::parseRequestCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83 * AppsFlyer_parseRequestCallback_m6CA298B0BCE8719408EC3A6CC98D2C0335F267C6 (String_t* ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral441C41FF6E93EA9C63774CA4F33832FA34B8B88D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1D2E849A7438175301D35D30C70D6D3C9502439);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	RuntimeObject * G_B4_0 = NULL;
	{
		// int responseCode = 0;
		V_0 = 0;
		// string errorDescription = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			// Dictionary<string, object> dictionary = CallbackStringToDictionary(response);
			String_t* L_0 = ___response0;
			IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1;
			L_1 = AppsFlyer_CallbackStringToDictionary_m0ABCD90F9C481F64D5EB3C83F07E18349651D5DE(L_0, /*hidden argument*/NULL);
			V_2 = L_1;
			// var errorResponse = dictionary.ContainsKey("errorDescription") ? dictionary["errorDescription"] : "";
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2 = V_2;
			NullCheck(L_2);
			bool L_3;
			L_3 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_2, _stringLiteralE1D2E849A7438175301D35D30C70D6D3C9502439, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_0023;
			}
		}

IL_001c:
		{
			G_B4_0 = ((RuntimeObject *)(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709));
			goto IL_002e;
		}

IL_0023:
		{
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject * L_5;
			L_5 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_4, _stringLiteralE1D2E849A7438175301D35D30C70D6D3C9502439, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			G_B4_0 = L_5;
		}

IL_002e:
		{
			// errorDescription = (string)errorResponse;
			V_1 = ((String_t*)CastclassSealed((RuntimeObject*)G_B4_0, String_t_il2cpp_TypeInfo_var));
			// responseCode = (int)(long) dictionary["statusCode"];
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = V_2;
			NullCheck(L_6);
			RuntimeObject * L_7;
			L_7 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_6, _stringLiteral441C41FF6E93EA9C63774CA4F33832FA34B8B88D, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			V_0 = ((int32_t)((int32_t)((*(int64_t*)((int64_t*)UnBox(L_7, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))));
			// }
			goto IL_0060;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0048;
		}
		throw e;
	}

CATCH_0048:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// AFLog("parseRequestCallback", String.Format("{0} Exception caught.", e));
		Exception_t * L_8 = V_3;
		String_t* L_9;
		L_9 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE86CDACEACDE5A2556F299FA4A3A694C0A3A9BA2)), L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var)));
		AppsFlyer_AFLog_mC481F9C0650B29F3663556B19E4879A4E7E85C84(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18FFE0A95B599D7BBDCCF1565B4C1B250799CF43)), L_9, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0060;
	} // end catch (depth: 1)

IL_0060:
	{
		// return new AppsFlyerRequestEventArgs(responseCode, errorDescription);
		int32_t L_10 = V_0;
		String_t* L_11 = V_1;
		AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83 * L_12 = (AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83 *)il2cpp_codegen_object_new(AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83_il2cpp_TypeInfo_var);
		AppsFlyerRequestEventArgs__ctor_m6ED3A0145E400ECA2A04A4C7C4EAE24FD1A10293(L_12, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> AppsFlyerSDK.AppsFlyer::CallbackStringToDictionary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * AppsFlyer_CallbackStringToDictionary_m0ABCD90F9C481F64D5EB3C83F07E18349651D5DE (String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AFMiniJSON.Json.Deserialize(str) as Dictionary<string, object>;
		String_t* L_0 = ___str0;
		RuntimeObject * L_1;
		L_1 = Json_Deserialize_m8C86FD1676F5DE81FDEA04045B263AB1A06134E3(L_0, /*hidden argument*/NULL);
		return ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_1, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::AFLog(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer_AFLog_mC481F9C0650B29F3663556B19E4879A4E7E85C84 (String_t* ___methodName0, String_t* ___str1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05A9361873F8DF19119260FBA14633082BF234ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("AppsFlyer_Unity_v{0} {1} called with {2}", kAppsFlyerPluginVersion, methodName, str));
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		String_t* L_0 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_kAppsFlyerPluginVersion_4();
		String_t* L_1 = ___methodName0;
		String_t* L_2 = ___str1;
		String_t* L_3;
		L_3 = String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED(_stringLiteral05A9361873F8DF19119260FBA14633082BF234ED, L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer__ctor_mF60C8FC986C8A1CF1C504AAF5B42F01A50E0DCCB (AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyer__cctor_mE05FE2A9A37FB09A01D08E2FB9E8C81435B276A1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral519589080837BE020633F437BB3490F7E0C4EFF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string kAppsFlyerPluginVersion = "6.8.4";
		((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->set_kAppsFlyerPluginVersion_4(_stringLiteral519589080837BE020633F437BB3490F7E0C4EFF3);
		// public static string CallBackObjectName = null;
		((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->set_CallBackObjectName_5((String_t*)NULL);
		// public static IAppsFlyerNativeBridge instance = null;
		((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->set_instance_9((RuntimeObject*)NULL);
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
// System.Boolean AppsFlyerSDK.AppsFlyerAndroid::get_isInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppsFlyerAndroid_get_isInit_m3D7CE0413D9B9463A7B3BF0891BCE1D6A9550B58 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, const RuntimeMethod* method)
{
	{
		// public bool isInit { get; set; }
		bool L_0 = __this->get_U3CisInitU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::set_isInit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_set_isInit_mDD6BD8EC9A4120DC1C1E8E1F15038B14D88D9A31 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isInit { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CisInitU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid__ctor_m541C06B4021683FABF29D47C993C33D339DBE59E (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, const RuntimeMethod* method)
{
	{
		// public AppsFlyerAndroid() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public AppsFlyerAndroid() { }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::initSDK(System.String,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_initSDK_m941D1BB244CFBC77EFA423CFAD218CCFDF0BD118 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___devkey0, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___gameObject1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE900A4791E737247188C56C6458FDB92AA0BCF7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B3_5 = NULL;
	{
		// appsFlyerAndroid.CallStatic("initSDK", devkey, gameObject ? gameObject.name : null);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___devkey0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_5 = ___gameObject1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_5, /*hidden argument*/NULL);
		G_B1_0 = 1;
		G_B1_1 = L_4;
		G_B1_2 = L_4;
		G_B1_3 = _stringLiteralCE900A4791E737247188C56C6458FDB92AA0BCF7;
		G_B1_4 = L_0;
		if (L_6)
		{
			G_B2_0 = 1;
			G_B2_1 = L_4;
			G_B2_2 = L_4;
			G_B2_3 = _stringLiteralCE900A4791E737247188C56C6458FDB92AA0BCF7;
			G_B2_4 = L_0;
			goto IL_0021;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0027;
	}

IL_0021:
	{
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_7 = ___gameObject1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0027:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		NullCheck(G_B3_5);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(G_B3_5, G_B3_4, G_B3_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::startSDK(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_startSDK_mCF6C91F9E6D438ABADAB9AEE9C8E6373A2895B78 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, bool ___onRequestResponse0, String_t* ___CallBackObjectName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2099A07A9756CE763F45096ED122941A5502F4A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("startTracking", onRequestResponse, CallBackObjectName);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___onRequestResponse0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_2;
		String_t* L_7 = ___CallBackObjectName1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral2099A07A9756CE763F45096ED122941A5502F4A2, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::stopSDK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_stopSDK_mA64B5B3EF94E28E48EA8DC6CA25CA440877A0455 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, bool ___isSDKStopped0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD889B5F2870505224E30F45489ECB82516E08836);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("stopTracking", isSDKStopped);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___isSDKStopped0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralD889B5F2870505224E30F45489ECB82516E08836, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String AppsFlyerSDK.AppsFlyerAndroid::getSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyerAndroid_getSdkVersion_m5C03C6B7F899947C4D37D3DE356A4170BDAC759F (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEFECBD00DD90A3EB3AAD067FAFE35456CDA5EAD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return appsFlyerAndroid.CallStatic<string>("getSdkVersion");
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_0, _stringLiteralBEFECBD00DD90A3EB3AAD067FAFE35456CDA5EAD, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::updateServerUninstallToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_updateServerUninstallToken_m46070CB937605748D4CDB5F869C78E0FF5757488 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral764101B7160DBC377EBAF6B41B91DE5F7CDEEBE5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("updateServerUninstallToken", token);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___token0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral764101B7160DBC377EBAF6B41B91DE5F7CDEEBE5, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setIsDebug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setIsDebug_m1876B4FF6C4AD1C17B7AE0F6185BDAC0EBAAF5A1 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, bool ___shouldEnable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8BD247A0DBD876062405ABFAFDFD135A1C478B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setIsDebug", shouldEnable);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___shouldEnable0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralC8BD247A0DBD876062405ABFAFDFD135A1C478B4, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setImeiData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setImeiData_mFEDB689854F32C1153CA3F64B174CF4E6809A35F (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___aImei0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02E144D0DB3ED32BAD9132BAD38278E7E1F94CF6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setImeiData", aImei);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___aImei0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral02E144D0DB3ED32BAD9132BAD38278E7E1F94CF6, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setAndroidIdData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setAndroidIdData_m0DFEB87803599A9937C84206375BB731DAE1ABB9 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___aAndroidId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1E252AEA8044CB211618D6ECB68836A28617FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setAndroidIdData", aAndroidId);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___aAndroidId0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralDA1E252AEA8044CB211618D6ECB68836A28617FD, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setCustomerUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setCustomerUserId_m93DCC9404AF6CE6AD04658EB891E9F792BEA83F3 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B5A08040822A9A5BF7079E79513108DDA959E44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setCustomerUserId", id);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___id0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral2B5A08040822A9A5BF7079E79513108DDA959E44, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::waitForCustomerUserId(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_waitForCustomerUserId_m4E1868BA6D755EA9B54B8BE91E47A89111E5FB1D (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, bool ___wait0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C46B975D5704BA005EB63970310B3E22538994);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("waitForCustomerUserId", wait);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___wait0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral23C46B975D5704BA005EB63970310B3E22538994, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setCustomerIdAndStartSDK(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setCustomerIdAndStartSDK_m1DD6F1A4D501B544500876567B736706D8E92A14 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED44C067587F61201D81330CFBEC29A1A3FBBB05);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setCustomerIdAndTrack", id);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___id0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralED44C067587F61201D81330CFBEC29A1A3FBBB05, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String AppsFlyerSDK.AppsFlyerAndroid::getOutOfStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyerAndroid_getOutOfStore_m8E42EBDD7196F54756364859F8764EA61929798F (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8636892B786717541D27BD8F6B3B38B131E539B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return appsFlyerAndroid.CallStatic<string>("getOutOfStore");
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_0, _stringLiteralD8636892B786717541D27BD8F6B3B38B131E539B, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setOutOfStore(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setOutOfStore_m1E209BE992AA8CEA908FA56795C4C19B40AD95B7 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___sourceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CDAF50098C5C8647B302AF7AF4C17AD062496E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setOutOfStore", sourceName);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___sourceName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral1CDAF50098C5C8647B302AF7AF4C17AD062496E6, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setAppInviteOneLinkID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setAppInviteOneLinkID_mF45B275B443E7919B6432AEB65BB9FD990E52862 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___oneLinkId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57B0C096BC76C2A14272B0CA02FB1542B7A062D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setAppInviteOneLinkID", oneLinkId);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___oneLinkId0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral57B0C096BC76C2A14272B0CA02FB1542B7A062D4, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setAdditionalData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setAdditionalData_m086BF8CBF1E256253E475B35770B3DB946D47415 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___customData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F022F1FD861D8F0D797833011CEACA8B68D6278);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setAdditionalData", convertDictionaryToJavaMap(customData));
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = ___customData0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4;
		L_4 = AppsFlyerAndroid_convertDictionaryToJavaMap_mB8D01F6BBC4EE6D97D8903F22BA075D761A74320(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral8F022F1FD861D8F0D797833011CEACA8B68D6278, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setUserEmails(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setUserEmails_m295F210F9150DB1E2365392482C416187A2E0AAC (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___userEmails0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B6D68694D821D56389DC2E2926D715CF4601A34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setUserEmails", (object)userEmails);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___userEmails0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral4B6D68694D821D56389DC2E2926D715CF4601A34, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setPhoneNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setPhoneNumber_m6A67ACA486F0C430DEDBB89DFA04A4559CDB9AF3 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___phoneNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7F5EABEF5669401003B3212A08B06B9A56CC7B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setPhoneNumber", phoneNumber);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___phoneNumber0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralE7F5EABEF5669401003B3212A08B06B9A56CC7B9, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setUserEmails(AppsFlyerSDK.EmailCryptType,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setUserEmails_m2B313012BEC244F5BB9C97D409AA7DA37865F4ED (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, int32_t ___cryptMethod0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___emails1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B6D68694D821D56389DC2E2926D715CF4601A34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setUserEmails", getEmailType(cryptMethod), (object)emails);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		int32_t L_3 = ___cryptMethod0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4;
		L_4 = AppsFlyerAndroid_getEmailType_m1C0460A347F3B3AF3452ACAAE59F9D52F87E8C56(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = ___emails1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral4B6D68694D821D56389DC2E2926D715CF4601A34, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setCollectAndroidID(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setCollectAndroidID_m9017880393F50F8BD538AABBDBF91ED73B8A9C34 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, bool ___isCollect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8B612FAFB5026ABFF93AFC18FDF41ED875A4A8D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setCollectAndroidID", isCollect);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___isCollect0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralB8B612FAFB5026ABFF93AFC18FDF41ED875A4A8D, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setCollectIMEI(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setCollectIMEI_mB5807BA0941B97562D165CF90B6285C6428587C8 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, bool ___isCollect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47CA7AF3AA31AB5DEDA911EBB9D31F1B1101A251);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setCollectIMEI", isCollect);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___isCollect0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral47CA7AF3AA31AB5DEDA911EBB9D31F1B1101A251, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setResolveDeepLinkURLs(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setResolveDeepLinkURLs_m608C8BF9F4C1AA2E783FC0E4F03DFA07D477873B (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___urls0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral040BC968D13C27DDE7EDD7C41E01CC04BCB1E424);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setResolveDeepLinkURLs", (object)urls);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___urls0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral040BC968D13C27DDE7EDD7C41E01CC04BCB1E424, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setOneLinkCustomDomain(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setOneLinkCustomDomain_mA8955911DD8D82F94395C3C8A8BAFC10124DC097 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___domains0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07232168B08FAFB9EEFDEE7B0ECB21C9C0464670);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setOneLinkCustomDomain", (object)domains);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___domains0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral07232168B08FAFB9EEFDEE7B0ECB21C9C0464670, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setIsUpdate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setIsUpdate_mB7A7FE500DA93D1A9E3B5E2FF42B7571E597525D (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, bool ___isUpdate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD218455EF3FDCD4B6E5440AB419563C0D63A72B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setIsUpdate", isUpdate);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___isUpdate0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralD218455EF3FDCD4B6E5440AB419563C0D63A72B1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setCurrencyCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setCurrencyCode_m762ABC0416326A2C704482DFCF17A2B41928F181 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___currencyCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral626BD6414D5625772020727C7E3A76743A1C7353);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setCurrencyCode", currencyCode);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___currencyCode0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral626BD6414D5625772020727C7E3A76743A1C7353, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::recordLocation(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_recordLocation_mAADDA0837B8F40809A6571A22A6DA3C193E4B697 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, double ___latitude0, double ___longitude1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9374A095C984B79D0B67F2A2F61445D48F4110EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("trackLocation", latitude, longitude);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		double L_3 = ___latitude0;
		double L_4 = L_3;
		RuntimeObject * L_5 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_2;
		double L_7 = ___longitude1;
		double L_8 = L_7;
		RuntimeObject * L_9 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral9374A095C984B79D0B67F2A2F61445D48F4110EE, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::sendEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_sendEvent_m089776B49FD7EE13476316F1CBEA1333E0CE69CD (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___eventName0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___eventValues1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sendEvent(eventName, eventValues, false, AppsFlyer.CallBackObjectName);
		String_t* L_0 = ___eventName0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = ___eventValues1;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		String_t* L_2 = ((AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var))->get_CallBackObjectName_5();
		AppsFlyerAndroid_sendEvent_m63FC194518860F37CC950E3E3CDB08AB408180CD(__this, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::sendEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_sendEvent_m63FC194518860F37CC950E3E3CDB08AB408180CD (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___eventName0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___eventValues1, bool ___shouldCallback2, String_t* ___callBackObjectName3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C98C0756A33C8EFDFB681374340D99FD56A2B06);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("trackEvent", eventName, convertDictionaryToJavaMap(eventValues), shouldCallback, callBackObjectName);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___eventName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5 = ___eventValues1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6;
		L_6 = AppsFlyerAndroid_convertDictionaryToJavaMap_mB8D01F6BBC4EE6D97D8903F22BA075D761A74320(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		bool L_8 = ___shouldCallback2;
		bool L_9 = L_8;
		RuntimeObject * L_10 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		String_t* L_12 = ___callBackObjectName3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral2C98C0756A33C8EFDFB681374340D99FD56A2B06, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::anonymizeUser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_anonymizeUser_m16C984AA39EC90EBA015361DF33A7BECF25D97C5 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, bool ___isDisabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EBABF2AFA57499234547483D4C9347AA07DAE90);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setDeviceTrackingDisabled", isDisabled);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___isDisabled0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral6EBABF2AFA57499234547483D4C9347AA07DAE90, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::enableFacebookDeferredApplinks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_enableFacebookDeferredApplinks_mDD8B8C4468F5E81E97B61CECC9A2632CB65A3A0E (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, bool ___isEnabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB04809CAEA4C98545BADDEEAF210B3BC2E683DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("enableFacebookDeferredApplinks", isEnabled);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___isEnabled0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralBB04809CAEA4C98545BADDEEAF210B3BC2E683DD, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setConsumeAFDeepLinks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setConsumeAFDeepLinks_m894C3DAB38C8E12CDD887C9C68689ABA6CC8675B (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, bool ___doConsume0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2339F28E8BA6A6AABFB30A14CC4FD89DCC6DA2BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setConsumeAFDeepLinks", doConsume);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___doConsume0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral2339F28E8BA6A6AABFB30A14CC4FD89DCC6DA2BB, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setPreinstallAttribution(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setPreinstallAttribution_m3B77609B9989031B8B59A9CC598F1D6D9B558572 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___mediaSource0, String_t* ___campaign1, String_t* ___siteId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C334DF8E3B019BAFD6F999810AC74BBD61701E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setPreinstallAttribution", mediaSource, campaign, siteId);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___mediaSource0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___campaign1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		String_t* L_7 = ___siteId2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral5C334DF8E3B019BAFD6F999810AC74BBD61701E0, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean AppsFlyerSDK.AppsFlyerAndroid::isPreInstalledApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppsFlyerAndroid_isPreInstalledApp_m388A1057A956D5292B39F7B11DF6BD24FA6AA7CF (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2A76D4105D5F7EC31FB47296BCB16C15EA1D1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return appsFlyerAndroid.CallStatic<bool>("isPreInstalledApp");
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB(L_0, _stringLiteral3B2A76D4105D5F7EC31FB47296BCB16C15EA1D1E, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AppsFlyerSDK.AppsFlyerAndroid::getAttributionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyerAndroid_getAttributionId_mBF09924D4D8E0EF2BBC83F6C4F9E10CE233C04F3 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3383C8D690C3E5266179C6A2643D5D417456266);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return appsFlyerAndroid.CallStatic<string>("getAttributionId");
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_0, _stringLiteralD3383C8D690C3E5266179C6A2643D5D417456266, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AppsFlyerSDK.AppsFlyerAndroid::getAppsFlyerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyerAndroid_getAppsFlyerId_m4370C466E378DEFBBBA468CC10019BF86A32C0FE (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28F69B1250EDC34ABBA2F702081D3EDBCD393A9F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return appsFlyerAndroid.CallStatic<string>("getAppsFlyerId");
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_0, _stringLiteral28F69B1250EDC34ABBA2F702081D3EDBCD393A9F, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::validateAndSendInAppPurchase(System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_validateAndSendInAppPurchase_mEC6ABDB66ECE26C38E07BA7FB9778BCA4BE2DE80 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___publicKey0, String_t* ___signature1, String_t* ___purchaseData2, String_t* ___price3, String_t* ___currency4, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___additionalParameters5, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___gameObject6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1E3E9ED6772FFC4AF4A9FC864ACF22E5BB03F0C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B3_5 = NULL;
	{
		// appsFlyerAndroid.CallStatic("validateAndTrackInAppPurchase", publicKey, signature, purchaseData, price, currency, convertDictionaryToJavaMap(additionalParameters), gameObject ? gameObject.name : null);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___publicKey0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___signature1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		String_t* L_7 = ___purchaseData2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_6;
		String_t* L_9 = ___price3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_8;
		String_t* L_11 = ___currency4;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_10;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_13 = ___additionalParameters5;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_14;
		L_14 = AppsFlyerAndroid_convertDictionaryToJavaMap_mB8D01F6BBC4EE6D97D8903F22BA075D761A74320(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_12;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_16 = ___gameObject6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_16, /*hidden argument*/NULL);
		G_B1_0 = 6;
		G_B1_1 = L_15;
		G_B1_2 = L_15;
		G_B1_3 = _stringLiteralD1E3E9ED6772FFC4AF4A9FC864ACF22E5BB03F0C;
		G_B1_4 = L_0;
		if (L_17)
		{
			G_B2_0 = 6;
			G_B2_1 = L_15;
			G_B2_2 = L_15;
			G_B2_3 = _stringLiteralD1E3E9ED6772FFC4AF4A9FC864ACF22E5BB03F0C;
			G_B2_4 = L_0;
			goto IL_003e;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0045;
	}

IL_003e:
	{
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_18 = ___gameObject6;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_18, /*hidden argument*/NULL);
		G_B3_0 = L_19;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0045:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		NullCheck(G_B3_5);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(G_B3_5, G_B3_4, G_B3_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean AppsFlyerSDK.AppsFlyerAndroid::isSDKStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppsFlyerAndroid_isSDKStopped_mB91AEAB6F0C8675D8CC47290D89FFCB9179E07D2 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral537DCE44ECD89031F1AAD55D87498A64090B02EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return appsFlyerAndroid.CallStatic<bool>("isTrackingStopped");
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB(L_0, _stringLiteral537DCE44ECD89031F1AAD55D87498A64090B02EF, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setMinTimeBetweenSessions(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setMinTimeBetweenSessions_mD83D814935DC75B3C1CEFF03C471C6C097DC071E (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, int32_t ___seconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67657C4F1B8F10CE28FE667A9FC97B18921F70FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setMinTimeBetweenSessions", seconds);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		int32_t L_3 = ___seconds0;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral67657C4F1B8F10CE28FE667A9FC97B18921F70FC, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setHost(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setHost_mA0BD3C62ACC8ACAD978EE64B523EAB4B5A69A2E5 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___hostPrefixName0, String_t* ___hostName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D0FAF3658B65273D1DC74F0E2AE442991EFD881);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setHost", hostPrefixName, hostName);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___hostPrefixName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___hostName1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral9D0FAF3658B65273D1DC74F0E2AE442991EFD881, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String AppsFlyerSDK.AppsFlyerAndroid::getHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyerAndroid_getHostName_mDDEA72D2BD1BF2EC13727E20981A1C482DE68FAC (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0899C0CC6437FDB854B1FD864B75D539CED816E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return appsFlyerAndroid.CallStatic<string>("getHostName");
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_0, _stringLiteral0899C0CC6437FDB854B1FD864B75D539CED816E3, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AppsFlyerSDK.AppsFlyerAndroid::getHostPrefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyerAndroid_getHostPrefix_m55F03FD474CAEB18ECCB27EC99A53AA14FC286F7 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3C457E89DFBA2FF6ECA7FF5FBCA406118FA6CC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return appsFlyerAndroid.CallStatic<string>("getHostPrefix");
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_0, _stringLiteralD3C457E89DFBA2FF6ECA7FF5FBCA406118FA6CC7, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setSharingFilterForAllPartners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setSharingFilterForAllPartners_mBEC73729BFD1D48D098EEE91E85FF1CE6C3947C4 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84BADEC5B05C73D2CCE6340D05EC49EA323FA28A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setSharingFilterForAllPartners");
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral84BADEC5B05C73D2CCE6340D05EC49EA323FA28A, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setSharingFilter(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setSharingFilter_mADE79211A99CC08B10633CAF095904D79BBADA82 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___partners0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B9ECB1352368E293763D7833EE64283ACD370DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setSharingFilter", (object)partners);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___partners0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral7B9ECB1352368E293763D7833EE64283ACD370DD, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setSharingFilterForPartners(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setSharingFilterForPartners_mDC3A97C4C9354451E02261F3819B6101D2F7DAED (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___partners0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2F13DB47076BB6959BB34D94AC259D426BCDF4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setSharingFilterForPartners", (object)partners);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___partners0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral3B2F13DB47076BB6959BB34D94AC259D426BCDF4, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::getConversionData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_getConversionData_m1628CA584FFF9A0E1E9D3A0B6A20940E1846FEA8 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___objectName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2095A4A05C95774A092312D4FB8B42EE93FF3DAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("getConversionData", objectName);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___objectName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral2095A4A05C95774A092312D4FB8B42EE93FF3DAC, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::initInAppPurchaseValidatorListener(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_initInAppPurchaseValidatorListener_m02EC60CA0D56526C6990586B513C00CDCBB1B563 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___gameObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83D0D9BD8D49B321C723B024A8387FA243347596);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B3_5 = NULL;
	{
		// appsFlyerAndroid.CallStatic("initInAppPurchaseValidatorListener", gameObject ? gameObject.name : null);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_3 = ___gameObject0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_3, /*hidden argument*/NULL);
		G_B1_0 = 0;
		G_B1_1 = L_2;
		G_B1_2 = L_2;
		G_B1_3 = _stringLiteral83D0D9BD8D49B321C723B024A8387FA243347596;
		G_B1_4 = L_0;
		if (L_4)
		{
			G_B2_0 = 0;
			G_B2_1 = L_2;
			G_B2_2 = L_2;
			G_B2_3 = _stringLiteral83D0D9BD8D49B321C723B024A8387FA243347596;
			G_B2_4 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0023;
	}

IL_001d:
	{
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_5 = ___gameObject0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0023:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		NullCheck(G_B3_5);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(G_B3_5, G_B3_4, G_B3_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setCollectOaid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setCollectOaid_m3BB01AE5A447E39FD7209AC001FB44F82375FD89 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, bool ___isCollect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D91CC901D762D092AA3C0272FAD67B12955456);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setCollectOaid", isCollect);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___isCollect0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral63D91CC901D762D092AA3C0272FAD67B12955456, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::attributeAndOpenStore(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_attributeAndOpenStore_m435BE07F57821347C302F4647DA8CF26BCC44C16 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___promoted_app_id0, String_t* ___campaign1, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___userParams2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3D4A417BC8782670DB0E78C3CA7E5FE5291906B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("attributeAndOpenStore", promoted_app_id, campaign, convertDictionaryToJavaMap(userParams));
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___promoted_app_id0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___campaign1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_7 = ___userParams2;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8;
		L_8 = AppsFlyerAndroid_convertDictionaryToJavaMap_mB8D01F6BBC4EE6D97D8903F22BA075D761A74320(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralD3D4A417BC8782670DB0E78C3CA7E5FE5291906B, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::recordCrossPromoteImpression(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_recordCrossPromoteImpression_mD484983D3B39F33EA2FBF34904F63D7B64F830AF (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___appID0, String_t* ___campaign1, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___parameters2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3269A41F619751C67FA42687D061C73E9A23E7A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("recordCrossPromoteImpression", appID, campaign, convertDictionaryToJavaMap(parameters));
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___appID0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___campaign1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_7 = ___parameters2;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8;
		L_8 = AppsFlyerAndroid_convertDictionaryToJavaMap_mB8D01F6BBC4EE6D97D8903F22BA075D761A74320(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralD3269A41F619751C67FA42687D061C73E9A23E7A, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::generateUserInviteLink(System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_generateUserInviteLink_m52F74C2A294AFD8BF625C58B91436C51244A5E18 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___parameters0, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___gameObject1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD75758D19772B49DD8F613B685E0426D4C44121);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B3_5 = NULL;
	{
		// appsFlyerAndroid.CallStatic("createOneLinkInviteListener", convertDictionaryToJavaMap(parameters), gameObject ? gameObject.name : null);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = ___parameters0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4;
		L_4 = AppsFlyerAndroid_convertDictionaryToJavaMap_mB8D01F6BBC4EE6D97D8903F22BA075D761A74320(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_2;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_6 = ___gameObject1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_6, /*hidden argument*/NULL);
		G_B1_0 = 1;
		G_B1_1 = L_5;
		G_B1_2 = L_5;
		G_B1_3 = _stringLiteralCD75758D19772B49DD8F613B685E0426D4C44121;
		G_B1_4 = L_0;
		if (L_7)
		{
			G_B2_0 = 1;
			G_B2_1 = L_5;
			G_B2_2 = L_5;
			G_B2_3 = _stringLiteralCD75758D19772B49DD8F613B685E0426D4C44121;
			G_B2_4 = L_0;
			goto IL_0026;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_002c;
	}

IL_0026:
	{
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_8 = ___gameObject1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_8, /*hidden argument*/NULL);
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_002c:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		NullCheck(G_B3_5);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(G_B3_5, G_B3_4, G_B3_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::handlePushNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_handlePushNotifications_m374C41EEFC52021F2C4E4CFD34B522561373BC81 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5674B818A84C598AD302905844F0F57B3E85B1FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("handlePushNotifications");
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral5674B818A84C598AD302905844F0F57B3E85B1FC, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::addPushNotificationDeepLinkPath(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_addPushNotificationDeepLinkPath_mFFAD582EA770034D4D47401C3F7C58DA7FBC2F9A (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paths0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD826D30DAEB7EFC5FD945C16FB01FDD091BDF97);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("addPushNotificationDeepLinkPath", (object)paths);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___paths0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralCD826D30DAEB7EFC5FD945C16FB01FDD091BDF97, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::subscribeForDeepLink(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_subscribeForDeepLink_m2CCDC5668F1D71377D2FEB728830F6E7F61166DB (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___objectName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05CC334A1D5B52C140EA7E7E8C38E6987CF9AFEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("subscribeForDeepLink", objectName);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___objectName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral05CC334A1D5B52C140EA7E7E8C38E6987CF9AFEB, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setDisableAdvertisingIdentifiers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setDisableAdvertisingIdentifiers_mD903944A5020E4DEA079FE01431721B156CDB14A (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, bool ___disable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EDD3065EFD13B1C8856E99397C76A8490518392);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setDisableAdvertisingIdentifiers", disable);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___disable0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral6EDD3065EFD13B1C8856E99397C76A8490518392, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setPartnerData(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setPartnerData_mB7C945927637788689DA6374C28D45465F38C99E (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___partnerId0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___partnerInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF79A4137EFAAD0A49ECD1C4081DEBC119DD91715);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setPartnerData", partnerId, convertDictionaryToJavaMap(partnerInfo));
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___partnerId0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5 = ___partnerInfo1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6;
		L_6 = AppsFlyerAndroid_convertDictionaryToJavaMap_mB8D01F6BBC4EE6D97D8903F22BA075D761A74320(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralF79A4137EFAAD0A49ECD1C4081DEBC119DD91715, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::setDisableNetworkData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_setDisableNetworkData_mEEB5BA40E293D224168E11BB6E33F35C2445B551 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, bool ___disable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB52EF5DFFF38ED3B405F71A7369FA36466D6F30E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appsFlyerAndroid.CallStatic("setDisableNetworkData", disable);
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->get_appsFlyerAndroid_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___disable0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralB52EF5DFFF38ED3B405F71A7369FA36466D6F30E, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject AppsFlyerSDK.AppsFlyerAndroid::getEmailType(AppsFlyerSDK.EmailCryptType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AppsFlyerAndroid_getEmailType_m1C0460A347F3B3AF3452ACAAE59F9D52F87E8C56 (int32_t ___cryptType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68D4CB98723592275118ADD8147AD8B23271D821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
	{
		// AndroidJavaClass emailsCryptTypeEnum = new AndroidJavaClass("com.appsflyer.AppsFlyerProperties$EmailsCryptType");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral68D4CB98723592275118ADD8147AD8B23271D821, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___cryptType0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		// emailsCryptType = emailsCryptTypeEnum.GetStatic<AndroidJavaObject>("SHA256");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2 = V_0;
		NullCheck(L_2);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_2, _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		V_1 = L_3;
		// break;
		goto IL_0029;
	}

IL_001d:
	{
		// emailsCryptType = emailsCryptTypeEnum.GetStatic<AndroidJavaObject>("NONE");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_4 = V_0;
		NullCheck(L_4);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5;
		L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_4, _stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_0029:
	{
		// return emailsCryptType;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.AndroidJavaObject AppsFlyerSDK.AppsFlyerAndroid::convertDictionaryToJavaMap(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AppsFlyerAndroid_convertDictionaryToJavaMap_mB8D01F6BBC4EE6D97D8903F22BA075D761A74320 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41AC34D8DBAF5CBA43F03167FBED01262D39AFDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEA99AB89293A7EAB131A3DCE363E35F63E97A7E);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* V_2 = NULL;
	Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// AndroidJavaObject map = new AndroidJavaObject("java.util.HashMap");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_1, _stringLiteral41AC34D8DBAF5CBA43F03167FBED01262D39AFDA, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// IntPtr putMethod = AndroidJNIHelper.GetMethodID(map.GetRawClass(), "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = V_0;
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = AndroidJavaObject_GetRawClass_m051337FD2D7C0E765641B192D86FF4A06257836B(L_2, /*hidden argument*/NULL);
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_mDFC5066D8D09F1D8C8567065419D21015856330E((intptr_t)L_3, _stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA, _stringLiteralEEA99AB89293A7EAB131A3DCE363E35F63E97A7E, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_4;
		// if (dictionary != null)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5 = ___dictionary0;
		if (!L_5)
		{
			goto IL_00a4;
		}
	}
	{
		// foreach (var entry in dictionary)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_6 = ___dictionary0;
		NullCheck(L_6);
		Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  L_7;
		L_7 = Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5(L_6, /*hidden argument*/Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		V_3 = L_7;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008b;
		}

IL_0032:
		{
			// foreach (var entry in dictionary)
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_8;
			L_8 = Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_3), /*hidden argument*/Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
			V_4 = L_8;
			// val = AndroidJNIHelper.CreateJNIArgArray(new object[] { entry.Key, entry.Value });
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
			String_t* L_11;
			L_11 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, L_11);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_10;
			String_t* L_13;
			L_13 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			NullCheck(L_12);
			ArrayElementTypeCheck (L_12, L_13);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
			jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_14;
			L_14 = AndroidJNIHelper_CreateJNIArgArray_mB806BBD1920C763CCDB0BA6DE336425A45D4C361(L_12, /*hidden argument*/NULL);
			V_2 = L_14;
			// AndroidJNI.CallObjectMethod(map.GetRawObject(), putMethod,val);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_15 = V_0;
			NullCheck(L_15);
			intptr_t L_16;
			L_16 = AndroidJavaObject_GetRawObject_m09E30F9AF9DD2AE07D34CE3915BDA557E206271D(L_15, /*hidden argument*/NULL);
			intptr_t L_17 = V_1;
			jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_18 = V_2;
			intptr_t L_19;
			L_19 = AndroidJNI_CallObjectMethod_m3EBB2273B0EA84B457CBCF76A5E9F090EEA093A8((intptr_t)L_16, (intptr_t)L_17, L_18, /*hidden argument*/NULL);
			// AndroidJNI.DeleteLocalRef(val[0].l);
			jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_20 = V_2;
			NullCheck(L_20);
			intptr_t L_21 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_l_8();
			AndroidJNI_DeleteLocalRef_m0640E773BAD2A500DB3A70F13072B5155B855D91((intptr_t)L_21, /*hidden argument*/NULL);
			// AndroidJNI.DeleteLocalRef(val[1].l);
			jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_22 = V_2;
			NullCheck(L_22);
			intptr_t L_23 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_l_8();
			AndroidJNI_DeleteLocalRef_m0640E773BAD2A500DB3A70F13072B5155B855D91((intptr_t)L_23, /*hidden argument*/NULL);
		}

IL_008b:
		{
			// foreach (var entry in dictionary)
			bool L_24;
			L_24 = Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_0032;
			}
		}

IL_0094:
		{
			IL2CPP_LEAVE(0xA4, FINALLY_0096);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0096;
	}

FINALLY_0096:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_3), /*hidden argument*/Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		IL2CPP_END_FINALLY(150)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA4, IL_00a4)
	}

IL_00a4:
	{
		// return map;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_25 = V_0;
		return L_25;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::attributeAndOpenStore(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid_attributeAndOpenStore_mCA750EB9413827E6B034FB0494F2E49E077C2847 (AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C * __this, String_t* ___appID0, String_t* ___campaign1, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___userParams2, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___gameObject3, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AppsFlyerSDK.AppsFlyerAndroid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerAndroid__cctor_m43387625B8BF1197B596902D62CD6BE70C7A9E0C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BAD3ACBCCBECBC692D1B13C58A5A57DA672F3FB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static AndroidJavaClass appsFlyerAndroid = new AndroidJavaClass("com.appsflyer.unity.AppsFlyerAndroidWrapper");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral9BAD3ACBCCBECBC692D1B13C58A5A57DA672F3FB, /*hidden argument*/NULL);
		((AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_StaticFields*)il2cpp_codegen_static_fields_for(AppsFlyerAndroid_t6E40D4EA091843B61CC74D7B4C775E63FC9B1F5C_il2cpp_TypeInfo_var))->set_appsFlyerAndroid_1(L_0);
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
// System.Void AppsFlyerObjectScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerObjectScript_Start_m2034496B717B7536346E40D2B2ABFDAA6C31D997 (AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7 * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		// AppsFlyer.setIsDebug(isDebug);
		bool L_0 = __this->get_isDebug_8();
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		AppsFlyer_setIsDebug_m07C9FA4CE09F68DC4B6FE36BD76036B122188189(L_0, /*hidden argument*/NULL);
		// AppsFlyer.initSDK(devKey, appID, getConversionData ? this : null);
		String_t* L_1 = __this->get_devKey_4();
		String_t* L_2 = __this->get_appID_5();
		bool L_3 = __this->get_getConversionData_9();
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			goto IL_0022;
		}
	}
	{
		G_B3_0 = ((AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7 *)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = __this;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		AppsFlyer_initSDK_mC7EFE606F80713A2233A6949287366A84AABD8EC(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// AppsFlyer.startSDK();
		AppsFlyer_startSDK_mE16A7A2812CBABB237A98957F75439FD34596A75(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerObjectScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerObjectScript_Update_mD569C70C09B799640ADC22A5DCE772D1FA84176C (AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AppsFlyerObjectScript::onConversionDataSuccess(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerObjectScript_onConversionDataSuccess_mB6AD90D1D4A483CA6C03101DA193B7649B9B2AAB (AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7 * __this, String_t* ___conversionData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D2C5BAAC864FF8EAB5A482091D545B7C900BEB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AppsFlyer.AFLog("didReceiveConversionData", conversionData);
		String_t* L_0 = ___conversionData0;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		AppsFlyer_AFLog_mC481F9C0650B29F3663556B19E4879A4E7E85C84(_stringLiteral9D2C5BAAC864FF8EAB5A482091D545B7C900BEB0, L_0, /*hidden argument*/NULL);
		// Dictionary<string, object> conversionDataDictionary = AppsFlyer.CallbackStringToDictionary(conversionData);
		String_t* L_1 = ___conversionData0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2;
		L_2 = AppsFlyer_CallbackStringToDictionary_m0ABCD90F9C481F64D5EB3C83F07E18349651D5DE(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerObjectScript::onConversionDataFail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerObjectScript_onConversionDataFail_mB851B6F473A9BF5D5FA38D37AB7CD01BC41925CC (AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7 * __this, String_t* ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2195737597038930129AAB41E250EB47C49171B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AppsFlyer.AFLog("didReceiveConversionDataWithError", error);
		String_t* L_0 = ___error0;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		AppsFlyer_AFLog_mC481F9C0650B29F3663556B19E4879A4E7E85C84(_stringLiteral2195737597038930129AAB41E250EB47C49171B1, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerObjectScript::onAppOpenAttribution(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerObjectScript_onAppOpenAttribution_m1E62A1339DEF6FA2D42F5562000A68062310B3A2 (AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7 * __this, String_t* ___attributionData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0C8189151B7A51FA43327E4A664875AD8C28423);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AppsFlyer.AFLog("onAppOpenAttribution", attributionData);
		String_t* L_0 = ___attributionData0;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		AppsFlyer_AFLog_mC481F9C0650B29F3663556B19E4879A4E7E85C84(_stringLiteralE0C8189151B7A51FA43327E4A664875AD8C28423, L_0, /*hidden argument*/NULL);
		// Dictionary<string, object> attributionDataDictionary = AppsFlyer.CallbackStringToDictionary(attributionData);
		String_t* L_1 = ___attributionData0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2;
		L_2 = AppsFlyer_CallbackStringToDictionary_m0ABCD90F9C481F64D5EB3C83F07E18349651D5DE(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerObjectScript::onAppOpenAttributionFailure(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerObjectScript_onAppOpenAttributionFailure_mC8DEE70F2AA1DC95412FED8EA9CC115B189ED87F (AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7 * __this, String_t* ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8C2FCBAE0759C7ECF1390B1C66A2118E4DC2CDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AppsFlyer.AFLog("onAppOpenAttributionFailure", error);
		String_t* L_0 = ___error0;
		IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		AppsFlyer_AFLog_mC481F9C0650B29F3663556B19E4879A4E7E85C84(_stringLiteralC8C2FCBAE0759C7ECF1390B1C66A2118E4DC2CDE, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppsFlyerObjectScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerObjectScript__ctor_m5D90DA5382F7011D63EF453801FE8491F36F6DC4 (AppsFlyerObjectScript_tA16FC9241BB28F24FE8E640BD6AD160F4117EBD7 * __this, const RuntimeMethod* method)
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
// System.Void AppsFlyerSDK.AppsFlyerRequestEventArgs::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppsFlyerRequestEventArgs__ctor_m6ED3A0145E400ECA2A04A4C7C4EAE24FD1A10293 (AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83 * __this, int32_t ___code0, String_t* ___description1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AppsFlyerRequestEventArgs(int code, string description)
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		// statusCode = code;
		int32_t L_0 = ___code0;
		__this->set_U3CstatusCodeU3Ek__BackingField_1(L_0);
		// errorDescription = description;
		String_t* L_1 = ___description1;
		__this->set_U3CerrorDescriptionU3Ek__BackingField_2(L_1);
		// }
		return;
	}
}
// System.Int32 AppsFlyerSDK.AppsFlyerRequestEventArgs::get_statusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppsFlyerRequestEventArgs_get_statusCode_m175871A288F57FDA31E4C8DEFA32204F01F86C36 (AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83 * __this, const RuntimeMethod* method)
{
	{
		// public int statusCode { get; }
		int32_t L_0 = __this->get_U3CstatusCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.String AppsFlyerSDK.AppsFlyerRequestEventArgs::get_errorDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppsFlyerRequestEventArgs_get_errorDescription_m6633A300C24F88919B65A1F8B40EB2098D94FD23 (AppsFlyerRequestEventArgs_t160820DFFD84BA9004ACF4703F190C2E09838D83 * __this, const RuntimeMethod* method)
{
	{
		// public string errorDescription { get; }
		String_t* L_0 = __this->get_U3CerrorDescriptionU3Ek__BackingField_2();
		return L_0;
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
// AppsFlyerSDK.DeepLinkStatus AppsFlyerSDK.DeepLinkEventsArgs::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeepLinkEventsArgs_get_status_mA2FB7A14BF85CFF847F7E2E739B5ED1E87014220 (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, const RuntimeMethod* method)
{
	{
		// public DeepLinkStatus status { get; }
		int32_t L_0 = __this->get_U3CstatusU3Ek__BackingField_2();
		return L_0;
	}
}
// AppsFlyerSDK.DeepLinkError AppsFlyerSDK.DeepLinkEventsArgs::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeepLinkEventsArgs_get_error_mE59CBFC2222FEE2C0C891E3E81CFB40EDF0824CE (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, const RuntimeMethod* method)
{
	{
		// public DeepLinkError error { get; }
		int32_t L_0 = __this->get_U3CerrorU3Ek__BackingField_3();
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getMatchType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getMatchType_mE9E435F674D6DDBA3589185A749EFF97A799D9DA (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D491D6C3C9342A8E0A1580F17094732F0EDC3FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return getDeepLinkParameter("match_type");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mE413AB47AD14054B1DB5D3CC9B2F82B23704C9EB(__this, _stringLiteral4D491D6C3C9342A8E0A1580F17094732F0EDC3FE, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getDeepLinkValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getDeepLinkValue_m155182687D5454E137A2EB75EA3897EA2B9155B2 (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E9F40059822C86B8AEF125F7D1AC7639E4825B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return getDeepLinkParameter("deep_link_value");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mE413AB47AD14054B1DB5D3CC9B2F82B23704C9EB(__this, _stringLiteral1E9F40059822C86B8AEF125F7D1AC7639E4825B2, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getClickHttpReferrer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getClickHttpReferrer_m2864C267769622B3C3DCC86BBF5281BECBF701ED (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral757ED47D942E9A6A71748FEC5AAF9230FDDC2F97);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return getDeepLinkParameter("click_http_referrer");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mE413AB47AD14054B1DB5D3CC9B2F82B23704C9EB(__this, _stringLiteral757ED47D942E9A6A71748FEC5AAF9230FDDC2F97, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getMediaSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getMediaSource_mD2828C3F72FFD1F2681AC1E14DE61766F679BB0C (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BE966B394D2DCC26589F616D3CDD4614BC8A367);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return getDeepLinkParameter("media_source");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mE413AB47AD14054B1DB5D3CC9B2F82B23704C9EB(__this, _stringLiteral1BE966B394D2DCC26589F616D3CDD4614BC8A367, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getCampaign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getCampaign_mA5D37391BFBC8345166623551AD0CC3BBB29F452 (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return getDeepLinkParameter("campaign");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mE413AB47AD14054B1DB5D3CC9B2F82B23704C9EB(__this, _stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getCampaignId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getCampaignId_m4D6BBFEA75B61D04D77B11D11BD486AFC78E3B98 (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD476ACE1A706D5850371865BFAD794B13476417);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return getDeepLinkParameter("campaign_id");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mE413AB47AD14054B1DB5D3CC9B2F82B23704C9EB(__this, _stringLiteralAD476ACE1A706D5850371865BFAD794B13476417, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getAfSub1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getAfSub1_m596E7D645E9CA3F341410E904A6B6F6644AD936B (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A34F8DA3692071AC220CF18A87B33AAFF37CAB7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return getDeepLinkParameter("af_sub1");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mE413AB47AD14054B1DB5D3CC9B2F82B23704C9EB(__this, _stringLiteral8A34F8DA3692071AC220CF18A87B33AAFF37CAB7, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getAfSub2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getAfSub2_mA2D9FC89B061A880CE203D6694784469009709D5 (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AB25F8F9A918211E403469C2C851819036CD0AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return getDeepLinkParameter("af_sub2");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mE413AB47AD14054B1DB5D3CC9B2F82B23704C9EB(__this, _stringLiteral1AB25F8F9A918211E403469C2C851819036CD0AA, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getAfSub3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getAfSub3_m1641323F3B062ABDD1912ED6639F24417FC847D1 (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41BAF1C183A1066A16559AFAB0507F5743FF6DEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return getDeepLinkParameter("af_sub3");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mE413AB47AD14054B1DB5D3CC9B2F82B23704C9EB(__this, _stringLiteral41BAF1C183A1066A16559AFAB0507F5743FF6DEB, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getAfSub4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getAfSub4_mEAF3A996E2848A3C2A7F08616A05F9696584F0E6 (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral832B94CF33F6E5DED6AE43E3E65AB4CC7FFEF547);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return getDeepLinkParameter("af_sub4");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mE413AB47AD14054B1DB5D3CC9B2F82B23704C9EB(__this, _stringLiteral832B94CF33F6E5DED6AE43E3E65AB4CC7FFEF547, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getAfSub5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getAfSub5_m17F3503B4CF7BA123E31CDFE51F6E5407DA6CA5A (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FBCC5FD07D69F0DD3F15FD6B2E8C56BF9AB706A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return getDeepLinkParameter("af_sub5");
		String_t* L_0;
		L_0 = DeepLinkEventsArgs_getDeepLinkParameter_mE413AB47AD14054B1DB5D3CC9B2F82B23704C9EB(__this, _stringLiteral4FBCC5FD07D69F0DD3F15FD6B2E8C56BF9AB706A, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean AppsFlyerSDK.DeepLinkEventsArgs::isDeferred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeepLinkEventsArgs_isDeferred_m113727F733AA9D9B23E17C2017F00534BC4D155B (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF541C1F76B0F286AE19538DFD602009F3477C6D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (deepLink != null && deepLink.ContainsKey("is_deferred"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = __this->get_deepLink_1();
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = __this->get_deepLink_1();
		NullCheck(L_1);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_1, _stringLiteralBF541C1F76B0F286AE19538DFD602009F3477C6D, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_004a;
		}
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		// return (bool)deepLink["is_deferred"];
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3 = __this->get_deepLink_1();
		NullCheck(L_3);
		RuntimeObject * L_4;
		L_4 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_3, _stringLiteralBF541C1F76B0F286AE19538DFD602009F3477C6D, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		V_0 = ((*(bool*)((bool*)UnBox(L_4, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
		goto IL_004c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// AppsFlyer.AFLog("DeepLinkEventsArgs.isDeferred", String.Format("{0} Exception caught.", e));
		Exception_t * L_5 = V_1;
		String_t* L_6;
		L_6 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE86CDACEACDE5A2556F299FA4A3A694C0A3A9BA2)), L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var)));
		AppsFlyer_AFLog_mC481F9C0650B29F3663556B19E4879A4E7E85C84(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F947CE6F90CAAF1930C6E71DF2D95DC8E236CB7)), L_6, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004a;
	} // end catch (depth: 1)

IL_004a:
	{
		// return false;
		return (bool)0;
	}

IL_004c:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> AppsFlyerSDK.DeepLinkEventsArgs::getDeepLinkDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * DeepLinkEventsArgs_getDeepLinkDictionary_mE6AF3F00857A55CB8636FEA254D233C8F6A072F4 (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, const RuntimeMethod* method)
{
	{
		// return deepLink;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = __this->get_deepLink_1();
		return L_0;
	}
}
// System.Void AppsFlyerSDK.DeepLinkEventsArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeepLinkEventsArgs__ctor_m0C2E22E343F2A095C66B5857B1066CA82F340F2A (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23E39D5D880B50D49547323043FBE1EEEEC28913);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58F56EF1C778163989CC86F225EC53D6F42EAF38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68F0F963C02E4993D85C3AC03FBBD8380C05D1CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E8C3941B89408B33EFE91225B91AC36EBD1F87F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF541C1F76B0F286AE19538DFD602009F3477C6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5E15B10AF7E0EA254F79B209F62465D2DB0E0F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7F62D97350D089C5494B6087685A72FAC799013);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// public DeepLinkEventsArgs(string str)
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			// Dictionary<string, object> dictionary = AppsFlyer.CallbackStringToDictionary(str);
			String_t* L_0 = ___str0;
			IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1;
			L_1 = AppsFlyer_CallbackStringToDictionary_m0ABCD90F9C481F64D5EB3C83F07E18349651D5DE(L_0, /*hidden argument*/NULL);
			V_0 = L_1;
			// string status = "";
			V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// string error = "";
			V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// if (dictionary.ContainsKey("status") && dictionary["status"] != null)
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2 = V_0;
			NullCheck(L_2);
			bool L_3;
			L_3 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_2, _stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
			if (!L_3)
			{
				goto IL_0044;
			}
		}

IL_0026:
		{
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = V_0;
			NullCheck(L_4);
			RuntimeObject * L_5;
			L_5 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_4, _stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_0044;
			}
		}

IL_0033:
		{
			// status = dictionary["status"].ToString();
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = V_0;
			NullCheck(L_6);
			RuntimeObject * L_7;
			L_7 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_6, _stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			NullCheck(L_7);
			String_t* L_8;
			L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
			V_1 = L_8;
		}

IL_0044:
		{
			// if (dictionary.ContainsKey("error") && dictionary["error"] != null)
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = V_0;
			NullCheck(L_9);
			bool L_10;
			L_10 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_9, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_006f;
			}
		}

IL_0051:
		{
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_11 = V_0;
			NullCheck(L_11);
			RuntimeObject * L_12;
			L_12 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_11, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			if (!L_12)
			{
				goto IL_006f;
			}
		}

IL_005e:
		{
			// error = dictionary["error"].ToString();
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_13 = V_0;
			NullCheck(L_13);
			RuntimeObject * L_14;
			L_14 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_13, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			NullCheck(L_14);
			String_t* L_15;
			L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
			V_2 = L_15;
		}

IL_006f:
		{
			// if (dictionary.ContainsKey("deepLink") && dictionary["deepLink"] != null)
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_16 = V_0;
			NullCheck(L_16);
			bool L_17;
			L_17 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_16, _stringLiteral6E8C3941B89408B33EFE91225B91AC36EBD1F87F, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
			if (!L_17)
			{
				goto IL_00a4;
			}
		}

IL_007c:
		{
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_18 = V_0;
			NullCheck(L_18);
			RuntimeObject * L_19;
			L_19 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_18, _stringLiteral6E8C3941B89408B33EFE91225B91AC36EBD1F87F, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			if (!L_19)
			{
				goto IL_00a4;
			}
		}

IL_0089:
		{
			// this.deepLink = AppsFlyer.CallbackStringToDictionary(dictionary["deepLink"].ToString());
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_20 = V_0;
			NullCheck(L_20);
			RuntimeObject * L_21;
			L_21 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_20, _stringLiteral6E8C3941B89408B33EFE91225B91AC36EBD1F87F, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			NullCheck(L_21);
			String_t* L_22;
			L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
			IL2CPP_RUNTIME_CLASS_INIT(AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var);
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_23;
			L_23 = AppsFlyer_CallbackStringToDictionary_m0ABCD90F9C481F64D5EB3C83F07E18349651D5DE(L_22, /*hidden argument*/NULL);
			__this->set_deepLink_1(L_23);
		}

IL_00a4:
		{
			// if (dictionary.ContainsKey("is_deferred"))
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_24 = V_0;
			NullCheck(L_24);
			bool L_25;
			L_25 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_24, _stringLiteralBF541C1F76B0F286AE19538DFD602009F3477C6D, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
			if (!L_25)
			{
				goto IL_00cc;
			}
		}

IL_00b1:
		{
			// this.deepLink["is_deferred"] = dictionary["is_deferred"];
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_26 = __this->get_deepLink_1();
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_27 = V_0;
			NullCheck(L_27);
			RuntimeObject * L_28;
			L_28 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_27, _stringLiteralBF541C1F76B0F286AE19538DFD602009F3477C6D, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			NullCheck(L_26);
			Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_26, _stringLiteralBF541C1F76B0F286AE19538DFD602009F3477C6D, L_28, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		}

IL_00cc:
		{
			String_t* L_29 = V_1;
			if (!L_29)
			{
				goto IL_00fd;
			}
		}

IL_00cf:
		{
			String_t* L_30 = V_1;
			bool L_31;
			L_31 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_30, _stringLiteral68F0F963C02E4993D85C3AC03FBBD8380C05D1CB, /*hidden argument*/NULL);
			if (L_31)
			{
				goto IL_00eb;
			}
		}

IL_00dc:
		{
			String_t* L_32 = V_1;
			bool L_33;
			L_33 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_32, _stringLiteral23E39D5D880B50D49547323043FBE1EEEEC28913, /*hidden argument*/NULL);
			if (L_33)
			{
				goto IL_00f4;
			}
		}

IL_00e9:
		{
			goto IL_00fd;
		}

IL_00eb:
		{
			// this.status = DeepLinkStatus.FOUND;
			__this->set_U3CstatusU3Ek__BackingField_2(0);
			// break;
			goto IL_0104;
		}

IL_00f4:
		{
			// this.status = DeepLinkStatus.NOT_FOUND;
			__this->set_U3CstatusU3Ek__BackingField_2(1);
			// break;
			goto IL_0104;
		}

IL_00fd:
		{
			// this.status = DeepLinkStatus.ERROR;
			__this->set_U3CstatusU3Ek__BackingField_2(2);
		}

IL_0104:
		{
			String_t* L_34 = V_2;
			if (!L_34)
			{
				goto IL_014b;
			}
		}

IL_0107:
		{
			String_t* L_35 = V_2;
			bool L_36;
			L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_35, _stringLiteral58F56EF1C778163989CC86F225EC53D6F42EAF38, /*hidden argument*/NULL);
			if (L_36)
			{
				goto IL_0130;
			}
		}

IL_0114:
		{
			String_t* L_37 = V_2;
			bool L_38;
			L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_37, _stringLiteralE5E15B10AF7E0EA254F79B209F62465D2DB0E0F3, /*hidden argument*/NULL);
			if (L_38)
			{
				goto IL_0139;
			}
		}

IL_0121:
		{
			String_t* L_39 = V_2;
			bool L_40;
			L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_39, _stringLiteralF7F62D97350D089C5494B6087685A72FAC799013, /*hidden argument*/NULL);
			if (L_40)
			{
				goto IL_0142;
			}
		}

IL_012e:
		{
			goto IL_014b;
		}

IL_0130:
		{
			// this.error = DeepLinkError.TIMEOUT;
			__this->set_U3CerrorU3Ek__BackingField_3(0);
			// break;
			goto IL_0152;
		}

IL_0139:
		{
			// this.error = DeepLinkError.NETWORK;
			__this->set_U3CerrorU3Ek__BackingField_3(1);
			// break;
			goto IL_0152;
		}

IL_0142:
		{
			// this.error = DeepLinkError.HTTP_STATUS_CODE;
			__this->set_U3CerrorU3Ek__BackingField_3(2);
			// break;
			goto IL_0152;
		}

IL_014b:
		{
			// this.error = DeepLinkError.UNEXPECTED;
			__this->set_U3CerrorU3Ek__BackingField_3(3);
		}

IL_0152:
		{
			// }
			goto IL_016c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0154;
		}
		throw e;
	}

CATCH_0154:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// AppsFlyer.AFLog("DeepLinkEventsArgs.parseDeepLink", String.Format("{0} Exception caught.", e));
		Exception_t * L_41 = V_3;
		String_t* L_42;
		L_42 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE86CDACEACDE5A2556F299FA4A3A694C0A3A9BA2)), L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppsFlyer_t6B9A42CF47DA722389E3284EBFBF1577BAF53CAC_il2cpp_TypeInfo_var)));
		AppsFlyer_AFLog_mC481F9C0650B29F3663556B19E4879A4E7E85C84(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1300E98B4A07E137D38D108CC70CCD80E1159D31)), L_42, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_016c;
	} // end catch (depth: 1)

IL_016c:
	{
		// }
		return;
	}
}
// System.String AppsFlyerSDK.DeepLinkEventsArgs::getDeepLinkParameter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeepLinkEventsArgs_getDeepLinkParameter_mE413AB47AD14054B1DB5D3CC9B2F82B23704C9EB (DeepLinkEventsArgs_t5BA8F51A63BE24FC59CAF215968CF9BCF668A4DC * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (deepLink != null && deepLink.ContainsKey(name) && deepLink[name] != null)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = __this->get_deepLink_1();
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = __this->get_deepLink_1();
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = __this->get_deepLink_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		RuntimeObject * L_6;
		L_6 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// return deepLink[name].ToString();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7 = __this->get_deepLink_1();
		String_t* L_8 = ___name0;
		NullCheck(L_7);
		RuntimeObject * L_9;
		L_9 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_7, L_8, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		return L_10;
	}

IL_0036:
	{
		// return null;
		return (String_t*)NULL;
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
// System.Object AFMiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m8C86FD1676F5DE81FDEA04045B263AB1A06134E3 (String_t* ___json0, const RuntimeMethod* method)
{
	{
		// if (json == null) {
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0005:
	{
		// return Parser.Parse(json);
		String_t* L_1 = ___json0;
		RuntimeObject * L_2;
		L_2 = Parser_Parse_m8E3C79D25207BDB5DB75203549E0ECB0A8472541(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String AFMiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_mFC66FE3B372D0D75B17A427CF0E83B014D6198F4 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// return Serializer.Serialize(obj);
		RuntimeObject * L_0 = ___obj0;
		String_t* L_1;
		L_1 = Serializer_Serialize_m7A649FF8A362A1BD8A19DD29917BF84B28E07DC3(L_0, /*hidden argument*/NULL);
		return L_1;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unityCallBack_t92A5A0A8C398009538872E94CE2B7A9E11D6AA91 (unityCallBack_t92A5A0A8C398009538872E94CE2B7A9E11D6AA91 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void AppsFlyerSDK.AppsFlyer/unityCallBack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityCallBack__ctor_mE22DD6A69B57A7C08E8DE472BC54DB9F81278B85 (unityCallBack_t92A5A0A8C398009538872E94CE2B7A9E11D6AA91 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void AppsFlyerSDK.AppsFlyer/unityCallBack::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityCallBack_Invoke_m65A7E081A5AA5415DF776B40DA16C6740D769B3F (unityCallBack_t92A5A0A8C398009538872E94CE2B7A9E11D6AA91 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult AppsFlyerSDK.AppsFlyer/unityCallBack::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unityCallBack_BeginInvoke_m9973EF5A3A8B0252D566C401E1B362B9949AA752 (unityCallBack_t92A5A0A8C398009538872E94CE2B7A9E11D6AA91 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void AppsFlyerSDK.AppsFlyer/unityCallBack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityCallBack_EndInvoke_m2FDE17ADA6D479450D95B5A44DC37194815F0B6D (unityCallBack_t92A5A0A8C398009538872E94CE2B7A9E11D6AA91 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean AFMiniJSON.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mB8CD6D42F0A62AE20F3573E0C62549D1C70B88FA (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Char.IsWhiteSpace(c) || WORD_BREAK.IndexOf(c) != -1;
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsWhiteSpace_mA78B7CA7BF0CA022525EA150EB6028F45E33C775(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		int32_t L_3;
		L_3 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Void AFMiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mC1BFFC37EDC95D36FD470F859481E9CA48D8CFFC (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Parser(string jsonString) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// json = new StringReader(jsonString);
		String_t* L_0 = ___jsonString0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = (StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)il2cpp_codegen_object_new(StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_1(L_1);
		// }
		return;
	}
}
// System.Object AFMiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m8E3C79D25207BDB5DB75203549E0ECB0A8472541 (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t83416D37107A3D52070D34329DE19C7C66883769_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t83416D37107A3D52070D34329DE19C7C66883769 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (var instance = new Parser(jsonString)) {
		String_t* L_0 = ___jsonString0;
		Parser_t83416D37107A3D52070D34329DE19C7C66883769 * L_1 = (Parser_t83416D37107A3D52070D34329DE19C7C66883769 *)il2cpp_codegen_object_new(Parser_t83416D37107A3D52070D34329DE19C7C66883769_il2cpp_TypeInfo_var);
		Parser__ctor_mC1BFFC37EDC95D36FD470F859481E9CA48D8CFFC(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		// return instance.ParseValue();
		Parser_t83416D37107A3D52070D34329DE19C7C66883769 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = Parser_ParseValue_m51AFC86DF4BB1A26C89BC6DFE3B7D0F8F209924C(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x1A, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		{
			Parser_t83416D37107A3D52070D34329DE19C7C66883769 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0019;
			}
		}

IL_0013:
		{
			Parser_t83416D37107A3D52070D34329DE19C7C66883769 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_5);
		}

IL_0019:
		{
			IL2CPP_END_FINALLY(16)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		// }
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void AFMiniJSON.Json/Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_m69AC02B2C298DEFD31B067B901396AFCB68B96E7 (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method)
{
	{
		// json.Dispose();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8(L_0, /*hidden argument*/NULL);
		// json = null;
		__this->set_json_1((StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> AFMiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_m59C84CD5D37CEDE48934BD5F8A18F6410F6040AF (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Dictionary<string, object> table = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		// switch (NextToken) {
		int32_t L_3;
		L_3 = Parser_get_NextToken_m921C9959D590868460B0C40211C73E3FCBAA7BB6(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0028:
	{
		// return table;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7 = V_0;
		return L_7;
	}

IL_002a:
	{
		// string name = ParseString();
		String_t* L_8;
		L_8 = Parser_ParseString_mD808BB332C85F08ED3D902A583C32E30C87374E9(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (name == null) {
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0036:
	{
		// if (NextToken != TOKEN.COLON) {
		int32_t L_10;
		L_10 = Parser_get_NextToken_m921C9959D590868460B0C40211C73E3FCBAA7BB6(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)5)))
		{
			goto IL_0041;
		}
	}
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0041:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_11 = __this->get_json_1();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// table[name] = ParseValue();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_13 = V_0;
		String_t* L_14 = V_1;
		RuntimeObject * L_15;
		L_15 = Parser_ParseValue_m51AFC86DF4BB1A26C89BC6DFE3B7D0F8F209924C(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		// break;
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> AFMiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_mDC2CE0D65199799A46335FC8D07258EC7E78E8A5 (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		// List<object> array = new List<object>();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_0, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// var parsing = true;
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		// TOKEN nextToken = NextToken;
		int32_t L_3;
		L_3 = Parser_get_NextToken_m921C9959D590868460B0C40211C73E3FCBAA7BB6(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		// return null;
		return (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)NULL;
	}

IL_002c:
	{
		// parsing = false;
		V_1 = (bool)0;
		// break;
		goto IL_003f;
	}

IL_0030:
	{
		// object value = ParseByToken(nextToken);
		int32_t L_7 = V_2;
		RuntimeObject * L_8;
		L_8 = Parser_ParseByToken_m32855C9107892E0BFA0FA67F2126E5C498DD0ABC(__this, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// array.Add(value);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_9 = V_0;
		RuntimeObject * L_10 = V_3;
		NullCheck(L_9);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_9, L_10, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
	}

IL_003f:
	{
		// while (parsing) {
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0016;
		}
	}
	{
		// return array;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_12 = V_0;
		return L_12;
	}
}
// System.Object AFMiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m51AFC86DF4BB1A26C89BC6DFE3B7D0F8F209924C (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// TOKEN nextToken = NextToken;
		int32_t L_0;
		L_0 = Parser_get_NextToken_m921C9959D590868460B0C40211C73E3FCBAA7BB6(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// return ParseByToken(nextToken);
		int32_t L_1 = V_0;
		RuntimeObject * L_2;
		L_2 = Parser_ParseByToken_m32855C9107892E0BFA0FA67F2126E5C498DD0ABC(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object AFMiniJSON.Json/Parser::ParseByToken(AFMiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m32855C9107892E0BFA0FA67F2126E5C498DD0ABC (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0052;
			}
			case 9:
			{
				goto IL_0059;
			}
			case 10:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0036:
	{
		// return ParseString();
		String_t* L_1;
		L_1 = Parser_ParseString_mD808BB332C85F08ED3D902A583C32E30C87374E9(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_003d:
	{
		// return ParseNumber();
		RuntimeObject * L_2;
		L_2 = Parser_ParseNumber_mF272D32063FA2109FE9CE232C514412F6DBBEF21(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0044:
	{
		// return ParseObject();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3;
		L_3 = Parser_ParseObject_m59C84CD5D37CEDE48934BD5F8A18F6410F6040AF(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_004b:
	{
		// return ParseArray();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4;
		L_4 = Parser_ParseArray_mDC2CE0D65199799A46335FC8D07258EC7E78E8A5(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0052:
	{
		// return true;
		bool L_5 = ((bool)1);
		RuntimeObject * L_6 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		// return false;
		bool L_7 = ((bool)0);
		RuntimeObject * L_8 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		// return null;
		return NULL;
	}

IL_0062:
	{
		// return null;
		return NULL;
	}
}
// System.String AFMiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mD808BB332C85F08ED3D902A583C32E30C87374E9 (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// StringBuilder s = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// bool parsing = true;
		V_2 = (bool)1;
		goto IL_0137;
	}

IL_0019:
	{
		// if (json.Peek() == -1) {
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_3 = __this->get_json_1();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_013d;
	}

IL_002e:
	{
		// c = NextChar;
		Il2CppChar L_5;
		L_5 = Parser_get_NextChar_m52B2D7050DB8008DC29F4643345A9124F7688124(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_012f;
	}

IL_0044:
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0137;
	}

IL_004b:
	{
		// if (json.Peek() == -1) {
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_8 = __this->get_json_1();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0137;
	}

IL_0060:
	{
		// c = NextChar;
		Il2CppChar L_10;
		L_10 = Parser_get_NextChar_m52B2D7050DB8008DC29F4643345A9124F7688124(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		Il2CppChar L_11 = V_1;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)47))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0137;
	}

IL_0080:
	{
		Il2CppChar L_15 = V_1;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)98))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)102))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0137;
	}

IL_0094:
	{
		Il2CppChar L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)110))))
		{
			goto IL_00d6;
		}
	}
	{
		Il2CppChar L_19 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_00e1;
			}
			case 1:
			{
				goto IL_0137;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0137;
	}

IL_00b7:
	{
		// s.Append(c);
		StringBuilder_t * L_20 = V_0;
		Il2CppChar L_21 = V_1;
		NullCheck(L_20);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_20, L_21, /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00c1:
	{
		// s.Append('\b');
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_23, 8, /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00cb:
	{
		// s.Append('\f');
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t * L_26;
		L_26 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_25, ((int32_t)12), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00d6:
	{
		// s.Append('\n');
		StringBuilder_t * L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_27, ((int32_t)10), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00e1:
	{
		// s.Append('\r');
		StringBuilder_t * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t * L_30;
		L_30 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, ((int32_t)13), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00ec:
	{
		// s.Append('\t');
		StringBuilder_t * L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_31, ((int32_t)9), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00f7:
	{
		// var hex = new char[4];
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_33 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_33;
		// for (int i=0; i< 4; i++) {
		V_4 = 0;
		goto IL_0113;
	}

IL_0103:
	{
		// hex[i] = NextChar;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_34 = V_3;
		int32_t L_35 = V_4;
		Il2CppChar L_36;
		L_36 = Parser_get_NextChar_m52B2D7050DB8008DC29F4643345A9124F7688124(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Il2CppChar)L_36);
		// for (int i=0; i< 4; i++) {
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_0113:
	{
		// for (int i=0; i< 4; i++) {
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) < ((int32_t)4)))
		{
			goto IL_0103;
		}
	}
	{
		// s.Append((char) Convert.ToInt32(new string(hex), 16));
		StringBuilder_t * L_39 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_40 = V_3;
		String_t* L_41;
		L_41 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Convert_ToInt32_mE594AB67F7D00A94FB035F168E6F0C965C684E49(L_41, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_39);
		StringBuilder_t * L_43;
		L_43 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_39, ((int32_t)((uint16_t)L_42)), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_012f:
	{
		// s.Append(c);
		StringBuilder_t * L_44 = V_0;
		Il2CppChar L_45 = V_1;
		NullCheck(L_44);
		StringBuilder_t * L_46;
		L_46 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_44, L_45, /*hidden argument*/NULL);
	}

IL_0137:
	{
		// while (parsing) {
		bool L_47 = V_2;
		if (L_47)
		{
			goto IL_0019;
		}
	}

IL_013d:
	{
		// return s.ToString();
		StringBuilder_t * L_48 = V_0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		return L_49;
	}
}
// System.Object AFMiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_mF272D32063FA2109FE9CE232C514412F6DBBEF21 (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	{
		// string number = NextWord;
		String_t* L_0;
		L_0 = Parser_get_NextWord_mB606B747C5132EBAC84AF2FF42C983732E84446E(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (number.IndexOf('.') == -1) {
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0022;
		}
	}
	{
		// Int64.TryParse(number, out parsedInt);
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = Int64_TryParse_m13BC44BEDCE2007C95FBD252C56CDFCCFA90DADC(L_3, (int64_t*)(&V_2), /*hidden argument*/NULL);
		// return parsedInt;
		int64_t L_5 = V_2;
		int64_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0022:
	{
		// Double.TryParse(number, out parsedDouble);
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Double_TryParse_m08AC1636E130EC17A72B03D3E21093AE670AD01A(L_8, (double*)(&V_1), /*hidden argument*/NULL);
		// return parsedDouble;
		double L_10 = V_1;
		double L_11 = L_10;
		RuntimeObject * L_12 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Void AFMiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m245455E14742CB7E2484B39A77EBC406C2209F63 (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001c;
	}

IL_0002:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		// if (json.Peek() == -1) {
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_2 = __this->get_json_1();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		// while (Char.IsWhiteSpace(PeekChar)) {
		Il2CppChar L_4;
		L_4 = Parser_get_PeekChar_m26F52B24820AD0269789C4FF44E387A069DFAC73(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Char_IsWhiteSpace_mA78B7CA7BF0CA022525EA150EB6028F45E33C775(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0002;
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Char AFMiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m26F52B24820AD0269789C4FF44E387A069DFAC73 (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Peek());
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m0DEF682F48A776C6432355662B171831B39DC913(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char AFMiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m52B2D7050DB8008DC29F4643345A9124F7688124 (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Read());
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m0DEF682F48A776C6432355662B171831B39DC913(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String AFMiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_mB606B747C5132EBAC84AF2FF42C983732E84446E (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		// StringBuilder word = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0023;
	}

IL_0008:
	{
		// word.Append(NextChar);
		StringBuilder_t * L_1 = V_0;
		Il2CppChar L_2;
		L_2 = Parser_get_NextChar_m52B2D7050DB8008DC29F4643345A9124F7688124(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, L_2, /*hidden argument*/NULL);
		// if (json.Peek() == -1) {
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_4 = __this->get_json_1();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_4);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0030;
		}
	}

IL_0023:
	{
		// while (!IsWordBreak(PeekChar)) {
		Il2CppChar L_6;
		L_6 = Parser_get_PeekChar_m26F52B24820AD0269789C4FF44E387A069DFAC73(__this, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Parser_IsWordBreak_mB8CD6D42F0A62AE20F3573E0C62549D1C70B88FA(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0008;
		}
	}

IL_0030:
	{
		// return word.ToString();
		StringBuilder_t * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// AFMiniJSON.Json/Parser/TOKEN AFMiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m921C9959D590868460B0C40211C73E3FCBAA7BB6 (Parser_t83416D37107A3D52070D34329DE19C7C66883769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		// EatWhitespace();
		Parser_EatWhitespace_m245455E14742CB7E2484B39A77EBC406C2209F63(__this, /*hidden argument*/NULL);
		// if (json.Peek() == -1) {
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
	}

IL_0016:
	{
		// switch (PeekChar) {
		Il2CppChar L_2;
		L_2 = Parser_get_PeekChar_m26F52B24820AD0269789C4FF44E387A069DFAC73(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00db;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00db;
			}
			case 8:
			{
				goto IL_00db;
			}
			case 9:
			{
				goto IL_00db;
			}
			case 10:
			{
				goto IL_00c7;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00db;
			}
			case 13:
			{
				goto IL_00db;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00d9;
			}
			case 16:
			{
				goto IL_00d9;
			}
			case 17:
			{
				goto IL_00d9;
			}
			case 18:
			{
				goto IL_00d9;
			}
			case 19:
			{
				goto IL_00d9;
			}
			case 20:
			{
				goto IL_00d9;
			}
			case 21:
			{
				goto IL_00d9;
			}
			case 22:
			{
				goto IL_00d9;
			}
			case 23:
			{
				goto IL_00d9;
			}
			case 24:
			{
				goto IL_00d7;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00db;
	}

IL_00a7:
	{
		// return TOKEN.CURLY_OPEN;
		return (int32_t)(1);
	}

IL_00a9:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_9 = __this->get_json_1();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		// return TOKEN.CURLY_CLOSE;
		return (int32_t)(2);
	}

IL_00b7:
	{
		// return TOKEN.SQUARED_OPEN;
		return (int32_t)(3);
	}

IL_00b9:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_11 = __this->get_json_1();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// return TOKEN.SQUARED_CLOSE;
		return (int32_t)(4);
	}

IL_00c7:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_13 = __this->get_json_1();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_13);
		// return TOKEN.COMMA;
		return (int32_t)(6);
	}

IL_00d5:
	{
		// return TOKEN.STRING;
		return (int32_t)(7);
	}

IL_00d7:
	{
		// return TOKEN.COLON;
		return (int32_t)(5);
	}

IL_00d9:
	{
		// return TOKEN.NUMBER;
		return (int32_t)(8);
	}

IL_00db:
	{
		// switch (NextWord) {
		String_t* L_15;
		L_15 = Parser_get_NextWord_mB606B747C5132EBAC84AF2FF42C983732E84446E(__this, /*hidden argument*/NULL);
		V_1 = L_15;
		String_t* L_16 = V_1;
		if (!L_16)
		{
			goto IL_0117;
		}
	}
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_17, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_19, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0111;
		}
	}
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_21, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0117;
	}

IL_010e:
	{
		// return TOKEN.FALSE;
		return (int32_t)(((int32_t)10));
	}

IL_0111:
	{
		// return TOKEN.TRUE;
		return (int32_t)(((int32_t)9));
	}

IL_0114:
	{
		// return TOKEN.NULL;
		return (int32_t)(((int32_t)11));
	}

IL_0117:
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
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
// System.Void AFMiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m86BC94B0BD3B46E92901B92980CACCDF1D781AF9 (Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Serializer() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// builder = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		// }
		return;
	}
}
// System.String AFMiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m7A649FF8A362A1BD8A19DD29917BF84B28E07DC3 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var instance = new Serializer();
		Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D * L_0 = (Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D *)il2cpp_codegen_object_new(Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D_il2cpp_TypeInfo_var);
		Serializer__ctor_m86BC94B0BD3B46E92901B92980CACCDF1D781AF9(L_0, /*hidden argument*/NULL);
		// instance.SerializeValue(obj);
		Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D * L_1 = L_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m8214E48C89FF08882090A5AE74D7F48A13DDED62(L_1, L_2, /*hidden argument*/NULL);
		// return instance.builder.ToString();
		NullCheck(L_1);
		StringBuilder_t * L_3 = L_1->get_builder_0();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void AFMiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m8214E48C89FF08882090A5AE74D7F48A13DDED62 (Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		// if (value == null) {
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// builder.Append("null");
		StringBuilder_t * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		// } else if ((asStr = value as string) != null) {
		return;
	}

IL_0015:
	{
		// } else if ((asStr = value as string) != null) {
		RuntimeObject * L_3 = ___value0;
		String_t* L_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		V_2 = L_4;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// SerializeString(asStr);
		String_t* L_5 = V_2;
		Serializer_SerializeString_m0748134E115FFDCCE8A1717F4793B6990BD50663(__this, L_5, /*hidden argument*/NULL);
		// } else if (value is bool) {
		return;
	}

IL_0027:
	{
		// } else if (value is bool) {
		RuntimeObject * L_6 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		// builder.Append((bool) value ? "true" : "false");
		StringBuilder_t * L_7 = __this->get_builder_0();
		RuntimeObject * L_8 = ___value0;
		G_B6_0 = L_7;
		if (((*(bool*)((bool*)UnBox(L_8, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_7;
			goto IL_0044;
		}
	}
	{
		G_B8_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B8_1 = G_B6_0;
		goto IL_0049;
	}

IL_0044:
	{
		G_B8_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B8_1 = G_B7_0;
	}

IL_0049:
	{
		NullCheck(G_B8_1);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		// } else if ((asList = value as IList) != null) {
		return;
	}

IL_0050:
	{
		// } else if ((asList = value as IList) != null) {
		RuntimeObject * L_10 = ___value0;
		RuntimeObject* L_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		V_0 = L_11;
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		// SerializeArray(asList);
		RuntimeObject* L_12 = V_0;
		Serializer_SerializeArray_mE156651D66E7723B6EC041A571A6E9D678484E64(__this, L_12, /*hidden argument*/NULL);
		// } else if ((asDict = value as IDictionary) != null) {
		return;
	}

IL_0062:
	{
		// } else if ((asDict = value as IDictionary) != null) {
		RuntimeObject * L_13 = ___value0;
		RuntimeObject* L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
		V_1 = L_14;
		if (!L_14)
		{
			goto IL_0074;
		}
	}
	{
		// SerializeObject(asDict);
		RuntimeObject* L_15 = V_1;
		Serializer_SerializeObject_m648820A29660E7ABE229FEB7A92C4D190E5CD97D(__this, L_15, /*hidden argument*/NULL);
		// } else if (value is char) {
		return;
	}

IL_0074:
	{
		// } else if (value is char) {
		RuntimeObject * L_16 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_16, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		// SerializeString(new string((char) value, 1));
		RuntimeObject * L_17 = ___value0;
		String_t* L_18;
		L_18 = String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_17, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_m0748134E115FFDCCE8A1717F4793B6990BD50663(__this, L_18, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_008f:
	{
		// SerializeOther(value);
		RuntimeObject * L_19 = ___value0;
		Serializer_SerializeOther_m289B17755B76D9DBA50EBF91704F4DC68A385153(__this, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AFMiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m648820A29660E7ABE229FEB7A92C4D190E5CD97D (Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// bool first = true;
		V_0 = (bool)1;
		// builder.Append('{');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)123), /*hidden argument*/NULL);
		// foreach (object e in obj.Keys) {
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_001e:
		{
			// foreach (object e in obj.Keys) {
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject * L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			V_2 = L_6;
			// if (!first) {
			bool L_7 = V_0;
			if (L_7)
			{
				goto IL_0036;
			}
		}

IL_0028:
		{
			// builder.Append(',');
			StringBuilder_t * L_8 = __this->get_builder_0();
			NullCheck(L_8);
			StringBuilder_t * L_9;
			L_9 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_8, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0036:
		{
			// SerializeString(e.ToString());
			RuntimeObject * L_10 = V_2;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
			Serializer_SerializeString_m0748134E115FFDCCE8A1717F4793B6990BD50663(__this, L_11, /*hidden argument*/NULL);
			// builder.Append(':');
			StringBuilder_t * L_12 = __this->get_builder_0();
			NullCheck(L_12);
			StringBuilder_t * L_13;
			L_13 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_12, ((int32_t)58), /*hidden argument*/NULL);
			// SerializeValue(obj[e]);
			RuntimeObject* L_14 = ___obj0;
			RuntimeObject * L_15 = V_2;
			NullCheck(L_14);
			RuntimeObject * L_16;
			L_16 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_14, L_15);
			Serializer_SerializeValue_m8214E48C89FF08882090A5AE74D7F48A13DDED62(__this, L_16, /*hidden argument*/NULL);
			// first = false;
			V_0 = (bool)0;
		}

IL_005f:
		{
			// foreach (object e in obj.Keys) {
			RuntimeObject* L_17 = V_1;
			NullCheck(L_17);
			bool L_18;
			L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_001e;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_20 = V_3;
			if (!L_20)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			RuntimeObject* L_21 = V_3;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_21);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(105)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
	}

IL_007a:
	{
		// builder.Append('}');
		StringBuilder_t * L_22 = __this->get_builder_0();
		NullCheck(L_22);
		StringBuilder_t * L_23;
		L_23 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_22, ((int32_t)125), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AFMiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mE156651D66E7723B6EC041A571A6E9D678484E64 (Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// builder.Append('[');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)91), /*hidden argument*/NULL);
		// bool first = true;
		V_0 = (bool)1;
		// foreach (object obj in anArray) {
		RuntimeObject* L_2 = ___anArray0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0019:
		{
			// foreach (object obj in anArray) {
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			// if (!first) {
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_0031;
			}
		}

IL_0023:
		{
			// builder.Append(',');
			StringBuilder_t * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_t * L_8;
			L_8 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0031:
		{
			// SerializeValue(obj);
			RuntimeObject * L_9 = V_2;
			Serializer_SerializeValue_m8214E48C89FF08882090A5AE74D7F48A13DDED62(__this, L_9, /*hidden argument*/NULL);
			// first = false;
			V_0 = (bool)0;
		}

IL_003a:
		{
			// foreach (object obj in anArray) {
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0019;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_13 = V_3;
			if (!L_13)
			{
				goto IL_0054;
			}
		}

IL_004e:
		{
			RuntimeObject* L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		// builder.Append(']');
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_15, ((int32_t)93), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AFMiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m0748134E115FFDCCE8A1717F4793B6990BD50663 (Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727BF366E3CC855B808D806440542BF7152AF19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		// builder.Append('\"');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)34), /*hidden argument*/NULL);
		// char[] charArray = str.ToCharArray();
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3;
		L_3 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_2, /*hidden argument*/NULL);
		// foreach (var c in charArray) {
		V_0 = L_3;
		V_1 = 0;
		goto IL_012d;
	}

IL_001c:
	{
		// foreach (var c in charArray) {
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_00a7;
			}
			case 3:
			{
				goto IL_00e0;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00ba;
			}
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00e0;
	}

IL_004f:
	{
		// builder.Append("\\\"");
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_0065:
	{
		// builder.Append("\\\\");
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_007b:
	{
		// builder.Append("\\b");
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_0091:
	{
		// builder.Append("\\f");
		StringBuilder_t * L_17 = __this->get_builder_0();
		NullCheck(L_17);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00a7:
	{
		// builder.Append("\\n");
		StringBuilder_t * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00ba:
	{
		// builder.Append("\\r");
		StringBuilder_t * L_21 = __this->get_builder_0();
		NullCheck(L_21);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00cd:
	{
		// builder.Append("\\t");
		StringBuilder_t * L_23 = __this->get_builder_0();
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_23, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00e0:
	{
		// int codepoint = Convert.ToInt32(c);
		Il2CppChar L_25 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Convert_ToInt32_m0F8328BDE34A6FD1929653C019246AE73386AAE1(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		// if ((codepoint >= 32) && (codepoint <= 126)) {
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)32))))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)126))))
		{
			goto IL_0100;
		}
	}
	{
		// builder.Append(c);
		StringBuilder_t * L_29 = __this->get_builder_0();
		Il2CppChar L_30 = V_2;
		NullCheck(L_29);
		StringBuilder_t * L_31;
		L_31 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, L_30, /*hidden argument*/NULL);
		// } else {
		goto IL_0129;
	}

IL_0100:
	{
		// builder.Append("\\u");
		StringBuilder_t * L_32 = __this->get_builder_0();
		NullCheck(L_32);
		StringBuilder_t * L_33;
		L_33 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_32, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, /*hidden argument*/NULL);
		// builder.Append(codepoint.ToString("x4"));
		StringBuilder_t * L_34 = __this->get_builder_0();
		String_t* L_35;
		L_35 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_3), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, /*hidden argument*/NULL);
		NullCheck(L_34);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_34, L_35, /*hidden argument*/NULL);
	}

IL_0129:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_012d:
	{
		// foreach (var c in charArray) {
		int32_t L_38 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_39 = V_0;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		// builder.Append('\"');
		StringBuilder_t * L_40 = __this->get_builder_0();
		NullCheck(L_40);
		StringBuilder_t * L_41;
		L_41 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_40, ((int32_t)34), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AFMiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m289B17755B76D9DBA50EBF91704F4DC68A385153 (Serializer_t0A0D9CFE5C8CA8B4C2F7AF9DCD3B0E2051340C9D * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		// if (value is float) {
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		// builder.Append(((float) value).ToString("R"));
		StringBuilder_t * L_1 = __this->get_builder_0();
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(float*)((float*)UnBox(L_2, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))));
		String_t* L_3;
		L_3 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_0), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, L_3, /*hidden argument*/NULL);
		// } else if (value is int
		return;
	}

IL_0028:
	{
		// } else if (value is int
		//     || value is uint
		//     || value is long
		//     || value is sbyte
		//     || value is byte
		//     || value is short
		//     || value is ushort
		//     || value is ulong) {
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_11 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_12 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))
		{
			goto IL_0076;
		}
	}

IL_0068:
	{
		// builder.Append(value);
		StringBuilder_t * L_13 = __this->get_builder_0();
		RuntimeObject * L_14 = ___value0;
		NullCheck(L_13);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_13, L_14, /*hidden argument*/NULL);
		// } else if (value is double
		return;
	}

IL_0076:
	{
		// } else if (value is double
		//     || value is decimal) {
		RuntimeObject * L_16 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_16, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject * L_17 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_17, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))
		{
			goto IL_00a6;
		}
	}

IL_0086:
	{
		// builder.Append(Convert.ToDouble(value).ToString("R"));
		StringBuilder_t * L_18 = __this->get_builder_0();
		RuntimeObject * L_19 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = Convert_ToDouble_mC228DB537BF466F8F8557664CACEA3CAE29AD87A(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		String_t* L_21;
		L_21 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)(&V_1), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, /*hidden argument*/NULL);
		NullCheck(L_18);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_18, L_21, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_00a6:
	{
		// SerializeString(value.ToString());
		RuntimeObject * L_23 = ___value0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		Serializer_SerializeString_m0748134E115FFDCCE8A1717F4793B6990BD50663(__this, L_24, /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
