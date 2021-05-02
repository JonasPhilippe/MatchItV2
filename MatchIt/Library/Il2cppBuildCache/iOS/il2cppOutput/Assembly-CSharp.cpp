#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioLowPassFilter
struct AudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// Color_Script
struct Color_Script_t8EED4907EB4D76C246389CD457C5DD05636E7D71;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuManager
struct MenuManager_tD52BB657312ED53913E423A985CACC86F900124C;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Move2
struct Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9;
// Move3
struct Move3_t04BF64354B0596A593F5C489E2B01982722E3624;
// Move4
struct Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E;
// Move5
struct Move5_tEACA69657BAC4A8BB7329D9AC6F9188A30A6EEFC;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityEngine.PlayerPrefs
struct PlayerPrefs_t824ACC0AC83EEBE49FEF7FE37E477129232D7050;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Settingsmanager
struct Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F;
// SpawnScript
struct SpawnScript_t4AB21AEC053EF306685CF2B58C3FFDC2408C2D23;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// TargetScript
struct TargetScript_t08836AA5554CD41C0CA340C13057714795FD4044;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// White_Script
struct White_Script_t7057F81EA3856E4564D92B9AAB1FB657A01C4E22;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Move4/<MovePlayer>d__18
struct U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC;

IL2CPP_EXTERN_C RuntimeClass* Advertisement_t5D30EC9BAF8E3739BAACB609C0034C01B9958E3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00E785D525A1939C2B3F42477DCA1EE1C4BFE687;
IL2CPP_EXTERN_C String_t* _stringLiteral07B0D72E60D1DCCF27747782B68197ECAAAB754B;
IL2CPP_EXTERN_C String_t* _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA;
IL2CPP_EXTERN_C String_t* _stringLiteral1C1FD5B632BD065200428794FE3FAA533A29BF38;
IL2CPP_EXTERN_C String_t* _stringLiteral22186B2AA4D80E60A74847E554FC8CF3817496BA;
IL2CPP_EXTERN_C String_t* _stringLiteral24AF3BE808F40FDA02AF68475B41A693500D036A;
IL2CPP_EXTERN_C String_t* _stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22;
IL2CPP_EXTERN_C String_t* _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
IL2CPP_EXTERN_C String_t* _stringLiteral3DA3B3F9419DEFA543527EDEF953E71B0C03948A;
IL2CPP_EXTERN_C String_t* _stringLiteral41C6521ECE23EDE17320219E10B518BE098FD02D;
IL2CPP_EXTERN_C String_t* _stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673;
IL2CPP_EXTERN_C String_t* _stringLiteral57090FFFD1D0EAA0B4EFB91612F4AE39D26BE660;
IL2CPP_EXTERN_C String_t* _stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792;
IL2CPP_EXTERN_C String_t* _stringLiteral648CBFB921B6A9293FFBFF3E55A66995306BF9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6;
IL2CPP_EXTERN_C String_t* _stringLiteral77E939D830A276F4D384740AD2ECC3AA4D71D746;
IL2CPP_EXTERN_C String_t* _stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4;
IL2CPP_EXTERN_C String_t* _stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral84C8BF6DDBDDEC3A92AEA77ABF46CD671944B758;
IL2CPP_EXTERN_C String_t* _stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A;
IL2CPP_EXTERN_C String_t* _stringLiteral9B1CF05486392B109EE5E1C6F8F3769A8C65518F;
IL2CPP_EXTERN_C String_t* _stringLiteral9D354CA1036DDA6F701F800C5C1B3A4235D2EDD7;
IL2CPP_EXTERN_C String_t* _stringLiteralA4A446C044FE71EFE756EAD7C98EE2AF607DEF10;
IL2CPP_EXTERN_C String_t* _stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3;
IL2CPP_EXTERN_C String_t* _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C;
IL2CPP_EXTERN_C String_t* _stringLiteralB62A6279BAC2671EC47564022B9FD24B0A1F5317;
IL2CPP_EXTERN_C String_t* _stringLiteralB9DD54B96EAE784BBC38DA92CCA02F3CC909F121;
IL2CPP_EXTERN_C String_t* _stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406;
IL2CPP_EXTERN_C String_t* _stringLiteralBDF97164FD84937DC6C483744DF688EBB1859B29;
IL2CPP_EXTERN_C String_t* _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA;
IL2CPP_EXTERN_C String_t* _stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5;
IL2CPP_EXTERN_C String_t* _stringLiteralD626056928D707B05883423ACC06740ECF8D945E;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralDFC096353AA07572BB01163C70B6B66EFC4FB412;
IL2CPP_EXTERN_C String_t* _stringLiteralEC043BDF35BA28A840570B47FE5A82FE6A74F111;
IL2CPP_EXTERN_C String_t* _stringLiteralFDBA5BACC04EB714520C84625FC9F1F1440CC111;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06_m5014510BCA25449D1DA7FAAD5C429473366986B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMovePlayerU3Ed__18_System_Collections_IEnumerator_Reset_m0F2C460D1BCB4C3F8D3AADD269D620B873E87F9A_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
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
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  IntPtr_t 
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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
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

// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.TouchPhase
struct  TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Move4/<MovePlayer>d__18
struct  U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC  : public RuntimeObject
{
public:
	// System.Int32 Move4/<MovePlayer>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Move4/<MovePlayer>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Move4 Move4/<MovePlayer>d__18::<>4__this
	Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Move4/<MovePlayer>d__18::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_3;
	// System.Single Move4/<MovePlayer>d__18::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC, ___U3CU3E4__this_2)); }
	inline Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_direction_3() { return static_cast<int32_t>(offsetof(U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC, ___direction_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_3() const { return ___direction_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_3() { return &___direction_3; }
	inline void set_direction_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_3 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC, ___U3CelapsedTimeU3E5__2_4)); }
	inline float get_U3CelapsedTimeU3E5__2_4() const { return ___U3CelapsedTimeU3E5__2_4; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_4() { return &___U3CelapsedTimeU3E5__2_4; }
	inline void set_U3CelapsedTimeU3E5__2_4(float value)
	{
		___U3CelapsedTimeU3E5__2_4 = value;
	}
};


// UnityEngine.AudioClip
struct  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Touch
struct  Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.ParticleSystem
struct  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioLowPassFilter
struct  AudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Color_Script
struct  Color_Script_t8EED4907EB4D76C246389CD457C5DD05636E7D71  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image Color_Script::square
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___square_4;
	// UnityEngine.GameObject Color_Script::MatchSystem
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MatchSystem_5;

public:
	inline static int32_t get_offset_of_square_4() { return static_cast<int32_t>(offsetof(Color_Script_t8EED4907EB4D76C246389CD457C5DD05636E7D71, ___square_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_square_4() const { return ___square_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_square_4() { return &___square_4; }
	inline void set_square_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___square_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___square_4), (void*)value);
	}

	inline static int32_t get_offset_of_MatchSystem_5() { return static_cast<int32_t>(offsetof(Color_Script_t8EED4907EB4D76C246389CD457C5DD05636E7D71, ___MatchSystem_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MatchSystem_5() const { return ___MatchSystem_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MatchSystem_5() { return &___MatchSystem_5; }
	inline void set_MatchSystem_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MatchSystem_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MatchSystem_5), (void*)value);
	}
};


// MenuManager
struct  MenuManager_tD52BB657312ED53913E423A985CACC86F900124C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.ParticleSystem MenuManager::ps
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___ps_4;
	// UnityEngine.GameObject[] MenuManager::Tutorials
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Tutorials_5;
	// UnityEngine.Animation MenuManager::logoOut
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___logoOut_6;
	// System.Int32 MenuManager::currentLevel
	int32_t ___currentLevel_7;
	// UnityEngine.UI.Text MenuManager::levelText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___levelText_8;
	// UnityEngine.GameObject[] MenuManager::Levels
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Levels_9;
	// System.String MenuManager::gameId
	String_t* ___gameId_10;
	// System.Boolean MenuManager::testMode
	bool ___testMode_11;
	// System.Int32 MenuManager::adCounter
	int32_t ___adCounter_12;
	// UnityEngine.GameObject MenuManager::SpawnScript
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SpawnScript_13;
	// System.Int32 MenuManager::PlayerRank
	int32_t ___PlayerRank_14;

public:
	inline static int32_t get_offset_of_ps_4() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___ps_4)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_ps_4() const { return ___ps_4; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_ps_4() { return &___ps_4; }
	inline void set_ps_4(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___ps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ps_4), (void*)value);
	}

	inline static int32_t get_offset_of_Tutorials_5() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___Tutorials_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Tutorials_5() const { return ___Tutorials_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Tutorials_5() { return &___Tutorials_5; }
	inline void set_Tutorials_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Tutorials_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tutorials_5), (void*)value);
	}

	inline static int32_t get_offset_of_logoOut_6() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___logoOut_6)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_logoOut_6() const { return ___logoOut_6; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_logoOut_6() { return &___logoOut_6; }
	inline void set_logoOut_6(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___logoOut_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logoOut_6), (void*)value);
	}

	inline static int32_t get_offset_of_currentLevel_7() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___currentLevel_7)); }
	inline int32_t get_currentLevel_7() const { return ___currentLevel_7; }
	inline int32_t* get_address_of_currentLevel_7() { return &___currentLevel_7; }
	inline void set_currentLevel_7(int32_t value)
	{
		___currentLevel_7 = value;
	}

	inline static int32_t get_offset_of_levelText_8() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___levelText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_levelText_8() const { return ___levelText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_levelText_8() { return &___levelText_8; }
	inline void set_levelText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___levelText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelText_8), (void*)value);
	}

	inline static int32_t get_offset_of_Levels_9() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___Levels_9)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Levels_9() const { return ___Levels_9; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Levels_9() { return &___Levels_9; }
	inline void set_Levels_9(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Levels_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Levels_9), (void*)value);
	}

	inline static int32_t get_offset_of_gameId_10() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___gameId_10)); }
	inline String_t* get_gameId_10() const { return ___gameId_10; }
	inline String_t** get_address_of_gameId_10() { return &___gameId_10; }
	inline void set_gameId_10(String_t* value)
	{
		___gameId_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameId_10), (void*)value);
	}

	inline static int32_t get_offset_of_testMode_11() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___testMode_11)); }
	inline bool get_testMode_11() const { return ___testMode_11; }
	inline bool* get_address_of_testMode_11() { return &___testMode_11; }
	inline void set_testMode_11(bool value)
	{
		___testMode_11 = value;
	}

	inline static int32_t get_offset_of_adCounter_12() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___adCounter_12)); }
	inline int32_t get_adCounter_12() const { return ___adCounter_12; }
	inline int32_t* get_address_of_adCounter_12() { return &___adCounter_12; }
	inline void set_adCounter_12(int32_t value)
	{
		___adCounter_12 = value;
	}

	inline static int32_t get_offset_of_SpawnScript_13() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___SpawnScript_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SpawnScript_13() const { return ___SpawnScript_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SpawnScript_13() { return &___SpawnScript_13; }
	inline void set_SpawnScript_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SpawnScript_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpawnScript_13), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerRank_14() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___PlayerRank_14)); }
	inline int32_t get_PlayerRank_14() const { return ___PlayerRank_14; }
	inline int32_t* get_address_of_PlayerRank_14() { return &___PlayerRank_14; }
	inline void set_PlayerRank_14(int32_t value)
	{
		___PlayerRank_14 = value;
	}
};


// Move2
struct  Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 Move2::startTouchPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___startTouchPosition_4;
	// UnityEngine.Vector2 Move2::currentPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___currentPosition_5;
	// UnityEngine.Vector2 Move2::endTouchPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___endTouchPosition_6;
	// System.Boolean Move2::stopTouch
	bool ___stopTouch_7;
	// System.Single Move2::swipeRange
	float ___swipeRange_8;
	// System.Single Move2::tapRange
	float ___tapRange_9;
	// UnityEngine.Transform Move2::currentPlatform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___currentPlatform_11;
	// UnityEngine.Rigidbody2D Move2::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_12;

public:
	inline static int32_t get_offset_of_startTouchPosition_4() { return static_cast<int32_t>(offsetof(Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9, ___startTouchPosition_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_startTouchPosition_4() const { return ___startTouchPosition_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_startTouchPosition_4() { return &___startTouchPosition_4; }
	inline void set_startTouchPosition_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___startTouchPosition_4 = value;
	}

	inline static int32_t get_offset_of_currentPosition_5() { return static_cast<int32_t>(offsetof(Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9, ___currentPosition_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_currentPosition_5() const { return ___currentPosition_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_currentPosition_5() { return &___currentPosition_5; }
	inline void set_currentPosition_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___currentPosition_5 = value;
	}

	inline static int32_t get_offset_of_endTouchPosition_6() { return static_cast<int32_t>(offsetof(Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9, ___endTouchPosition_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_endTouchPosition_6() const { return ___endTouchPosition_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_endTouchPosition_6() { return &___endTouchPosition_6; }
	inline void set_endTouchPosition_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___endTouchPosition_6 = value;
	}

	inline static int32_t get_offset_of_stopTouch_7() { return static_cast<int32_t>(offsetof(Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9, ___stopTouch_7)); }
	inline bool get_stopTouch_7() const { return ___stopTouch_7; }
	inline bool* get_address_of_stopTouch_7() { return &___stopTouch_7; }
	inline void set_stopTouch_7(bool value)
	{
		___stopTouch_7 = value;
	}

	inline static int32_t get_offset_of_swipeRange_8() { return static_cast<int32_t>(offsetof(Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9, ___swipeRange_8)); }
	inline float get_swipeRange_8() const { return ___swipeRange_8; }
	inline float* get_address_of_swipeRange_8() { return &___swipeRange_8; }
	inline void set_swipeRange_8(float value)
	{
		___swipeRange_8 = value;
	}

	inline static int32_t get_offset_of_tapRange_9() { return static_cast<int32_t>(offsetof(Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9, ___tapRange_9)); }
	inline float get_tapRange_9() const { return ___tapRange_9; }
	inline float* get_address_of_tapRange_9() { return &___tapRange_9; }
	inline void set_tapRange_9(float value)
	{
		___tapRange_9 = value;
	}

	inline static int32_t get_offset_of_currentPlatform_11() { return static_cast<int32_t>(offsetof(Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9, ___currentPlatform_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_currentPlatform_11() const { return ___currentPlatform_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_currentPlatform_11() { return &___currentPlatform_11; }
	inline void set_currentPlatform_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___currentPlatform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPlatform_11), (void*)value);
	}

	inline static int32_t get_offset_of_rb_12() { return static_cast<int32_t>(offsetof(Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9, ___rb_12)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_12() const { return ___rb_12; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_12() { return &___rb_12; }
	inline void set_rb_12(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_12), (void*)value);
	}
};

struct Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9_StaticFields
{
public:
	// Move2 Move2::mInstance
	Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9 * ___mInstance_10;

public:
	inline static int32_t get_offset_of_mInstance_10() { return static_cast<int32_t>(offsetof(Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9_StaticFields, ___mInstance_10)); }
	inline Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9 * get_mInstance_10() const { return ___mInstance_10; }
	inline Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9 ** get_address_of_mInstance_10() { return &___mInstance_10; }
	inline void set_mInstance_10(Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9 * value)
	{
		___mInstance_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInstance_10), (void*)value);
	}
};


// Move3
struct  Move3_t04BF64354B0596A593F5C489E2B01982722E3624  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.PlayerPrefs Move3::player
	PlayerPrefs_t824ACC0AC83EEBE49FEF7FE37E477129232D7050 * ___player_4;
	// UnityEngine.Vector2 Move3::startPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___startPos_5;
	// System.Int32 Move3::pixelDistToDetect
	int32_t ___pixelDistToDetect_6;
	// System.Boolean Move3::fingerDown
	bool ___fingerDown_7;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(Move3_t04BF64354B0596A593F5C489E2B01982722E3624, ___player_4)); }
	inline PlayerPrefs_t824ACC0AC83EEBE49FEF7FE37E477129232D7050 * get_player_4() const { return ___player_4; }
	inline PlayerPrefs_t824ACC0AC83EEBE49FEF7FE37E477129232D7050 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(PlayerPrefs_t824ACC0AC83EEBE49FEF7FE37E477129232D7050 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_startPos_5() { return static_cast<int32_t>(offsetof(Move3_t04BF64354B0596A593F5C489E2B01982722E3624, ___startPos_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_startPos_5() const { return ___startPos_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_startPos_5() { return &___startPos_5; }
	inline void set_startPos_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___startPos_5 = value;
	}

	inline static int32_t get_offset_of_pixelDistToDetect_6() { return static_cast<int32_t>(offsetof(Move3_t04BF64354B0596A593F5C489E2B01982722E3624, ___pixelDistToDetect_6)); }
	inline int32_t get_pixelDistToDetect_6() const { return ___pixelDistToDetect_6; }
	inline int32_t* get_address_of_pixelDistToDetect_6() { return &___pixelDistToDetect_6; }
	inline void set_pixelDistToDetect_6(int32_t value)
	{
		___pixelDistToDetect_6 = value;
	}

	inline static int32_t get_offset_of_fingerDown_7() { return static_cast<int32_t>(offsetof(Move3_t04BF64354B0596A593F5C489E2B01982722E3624, ___fingerDown_7)); }
	inline bool get_fingerDown_7() const { return ___fingerDown_7; }
	inline bool* get_address_of_fingerDown_7() { return &___fingerDown_7; }
	inline void set_fingerDown_7(bool value)
	{
		___fingerDown_7 = value;
	}
};


// Move4
struct  Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Move4::RaycastRange
	float ___RaycastRange_4;
	// System.Boolean Move4::isMoving
	bool ___isMoving_5;
	// UnityEngine.Vector3 Move4::origPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origPos_6;
	// UnityEngine.Vector3 Move4::targetPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPos_7;
	// System.Single Move4::timeToMove
	float ___timeToMove_8;
	// System.String Move4::up
	String_t* ___up_9;
	// System.String Move4::down
	String_t* ___down_10;
	// System.String Move4::left
	String_t* ___left_11;
	// System.String Move4::right
	String_t* ___right_12;
	// System.String Move4::Object_Color
	String_t* ___Object_Color_13;
	// UnityEngine.GameObject Move4::SpawnScript
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SpawnScript_14;
	// Settingsmanager Move4::sm
	Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * ___sm_15;
	// UnityEngine.Vector2 Move4::firstPressPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___firstPressPos_16;
	// UnityEngine.Vector2 Move4::secondPressPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___secondPressPos_17;
	// UnityEngine.Vector2 Move4::currentSwipe
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___currentSwipe_18;

public:
	inline static int32_t get_offset_of_RaycastRange_4() { return static_cast<int32_t>(offsetof(Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E, ___RaycastRange_4)); }
	inline float get_RaycastRange_4() const { return ___RaycastRange_4; }
	inline float* get_address_of_RaycastRange_4() { return &___RaycastRange_4; }
	inline void set_RaycastRange_4(float value)
	{
		___RaycastRange_4 = value;
	}

	inline static int32_t get_offset_of_isMoving_5() { return static_cast<int32_t>(offsetof(Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E, ___isMoving_5)); }
	inline bool get_isMoving_5() const { return ___isMoving_5; }
	inline bool* get_address_of_isMoving_5() { return &___isMoving_5; }
	inline void set_isMoving_5(bool value)
	{
		___isMoving_5 = value;
	}

	inline static int32_t get_offset_of_origPos_6() { return static_cast<int32_t>(offsetof(Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E, ___origPos_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_origPos_6() const { return ___origPos_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_origPos_6() { return &___origPos_6; }
	inline void set_origPos_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___origPos_6 = value;
	}

	inline static int32_t get_offset_of_targetPos_7() { return static_cast<int32_t>(offsetof(Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E, ___targetPos_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPos_7() const { return ___targetPos_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPos_7() { return &___targetPos_7; }
	inline void set_targetPos_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPos_7 = value;
	}

	inline static int32_t get_offset_of_timeToMove_8() { return static_cast<int32_t>(offsetof(Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E, ___timeToMove_8)); }
	inline float get_timeToMove_8() const { return ___timeToMove_8; }
	inline float* get_address_of_timeToMove_8() { return &___timeToMove_8; }
	inline void set_timeToMove_8(float value)
	{
		___timeToMove_8 = value;
	}

	inline static int32_t get_offset_of_up_9() { return static_cast<int32_t>(offsetof(Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E, ___up_9)); }
	inline String_t* get_up_9() const { return ___up_9; }
	inline String_t** get_address_of_up_9() { return &___up_9; }
	inline void set_up_9(String_t* value)
	{
		___up_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___up_9), (void*)value);
	}

	inline static int32_t get_offset_of_down_10() { return static_cast<int32_t>(offsetof(Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E, ___down_10)); }
	inline String_t* get_down_10() const { return ___down_10; }
	inline String_t** get_address_of_down_10() { return &___down_10; }
	inline void set_down_10(String_t* value)
	{
		___down_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___down_10), (void*)value);
	}

	inline static int32_t get_offset_of_left_11() { return static_cast<int32_t>(offsetof(Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E, ___left_11)); }
	inline String_t* get_left_11() const { return ___left_11; }
	inline String_t** get_address_of_left_11() { return &___left_11; }
	inline void set_left_11(String_t* value)
	{
		___left_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___left_11), (void*)value);
	}

	inline static int32_t get_offset_of_right_12() { return static_cast<int32_t>(offsetof(Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E, ___right_12)); }
	inline String_t* get_right_12() const { return ___right_12; }
	inline String_t** get_address_of_right_12() { return &___right_12; }
	inline void set_right_12(String_t* value)
	{
		___right_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___right_12), (void*)value);
	}

	inline static int32_t get_offset_of_Object_Color_13() { return static_cast<int32_t>(offsetof(Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E, ___Object_Color_13)); }
	inline String_t* get_Object_Color_13() const { return ___Object_Color_13; }
	inline String_t** get_address_of_Object_Color_13() { return &___Object_Color_13; }
	inline void set_Object_Color_13(String_t* value)
	{
		___Object_Color_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Object_Color_13), (void*)value);
	}

	inline static int32_t get_offset_of_SpawnScript_14() { return static_cast<int32_t>(offsetof(Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E, ___SpawnScript_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SpawnScript_14() const { return ___SpawnScript_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SpawnScript_14() { return &___SpawnScript_14; }
	inline void set_SpawnScript_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SpawnScript_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpawnScript_14), (void*)value);
	}

	inline static int32_t get_offset_of_sm_15() { return static_cast<int32_t>(offsetof(Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E, ___sm_15)); }
	inline Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * get_sm_15() const { return ___sm_15; }
	inline Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F ** get_address_of_sm_15() { return &___sm_15; }
	inline void set_sm_15(Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * value)
	{
		___sm_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sm_15), (void*)value);
	}

	inline static int32_t get_offset_of_firstPressPos_16() { return static_cast<int32_t>(offsetof(Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E, ___firstPressPos_16)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_firstPressPos_16() const { return ___firstPressPos_16; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_firstPressPos_16() { return &___firstPressPos_16; }
	inline void set_firstPressPos_16(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___firstPressPos_16 = value;
	}

	inline static int32_t get_offset_of_secondPressPos_17() { return static_cast<int32_t>(offsetof(Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E, ___secondPressPos_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_secondPressPos_17() const { return ___secondPressPos_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_secondPressPos_17() { return &___secondPressPos_17; }
	inline void set_secondPressPos_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___secondPressPos_17 = value;
	}

	inline static int32_t get_offset_of_currentSwipe_18() { return static_cast<int32_t>(offsetof(Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E, ___currentSwipe_18)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_currentSwipe_18() const { return ___currentSwipe_18; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_currentSwipe_18() { return &___currentSwipe_18; }
	inline void set_currentSwipe_18(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___currentSwipe_18 = value;
	}
};


// Move5
struct  Move5_tEACA69657BAC4A8BB7329D9AC6F9188A30A6EEFC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Settingsmanager
struct  Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioLowPassFilter Settingsmanager::lowPass
	AudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06 * ___lowPass_4;
	// UnityEngine.AudioSource Settingsmanager::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_5;
	// UnityEngine.AudioSource Settingsmanager::e_audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___e_audioSource_6;
	// System.Boolean Settingsmanager::audio_Mute
	bool ___audio_Mute_7;
	// UnityEngine.GameObject Settingsmanager::Mute
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Mute_8;
	// UnityEngine.GameObject Settingsmanager::Unmute
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Unmute_9;
	// UnityEngine.AudioClip Settingsmanager::click
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___click_10;
	// UnityEngine.AudioClip Settingsmanager::plop
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___plop_11;

public:
	inline static int32_t get_offset_of_lowPass_4() { return static_cast<int32_t>(offsetof(Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F, ___lowPass_4)); }
	inline AudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06 * get_lowPass_4() const { return ___lowPass_4; }
	inline AudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06 ** get_address_of_lowPass_4() { return &___lowPass_4; }
	inline void set_lowPass_4(AudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06 * value)
	{
		___lowPass_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lowPass_4), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F, ___audioSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_e_audioSource_6() { return static_cast<int32_t>(offsetof(Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F, ___e_audioSource_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_e_audioSource_6() const { return ___e_audioSource_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_e_audioSource_6() { return &___e_audioSource_6; }
	inline void set_e_audioSource_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___e_audioSource_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___e_audioSource_6), (void*)value);
	}

	inline static int32_t get_offset_of_audio_Mute_7() { return static_cast<int32_t>(offsetof(Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F, ___audio_Mute_7)); }
	inline bool get_audio_Mute_7() const { return ___audio_Mute_7; }
	inline bool* get_address_of_audio_Mute_7() { return &___audio_Mute_7; }
	inline void set_audio_Mute_7(bool value)
	{
		___audio_Mute_7 = value;
	}

	inline static int32_t get_offset_of_Mute_8() { return static_cast<int32_t>(offsetof(Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F, ___Mute_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Mute_8() const { return ___Mute_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Mute_8() { return &___Mute_8; }
	inline void set_Mute_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Mute_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mute_8), (void*)value);
	}

	inline static int32_t get_offset_of_Unmute_9() { return static_cast<int32_t>(offsetof(Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F, ___Unmute_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Unmute_9() const { return ___Unmute_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Unmute_9() { return &___Unmute_9; }
	inline void set_Unmute_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Unmute_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Unmute_9), (void*)value);
	}

	inline static int32_t get_offset_of_click_10() { return static_cast<int32_t>(offsetof(Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F, ___click_10)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_click_10() const { return ___click_10; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_click_10() { return &___click_10; }
	inline void set_click_10(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___click_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___click_10), (void*)value);
	}

	inline static int32_t get_offset_of_plop_11() { return static_cast<int32_t>(offsetof(Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F, ___plop_11)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_plop_11() const { return ___plop_11; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_plop_11() { return &___plop_11; }
	inline void set_plop_11(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___plop_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___plop_11), (void*)value);
	}
};


// SpawnScript
struct  SpawnScript_t4AB21AEC053EF306685CF2B58C3FFDC2408C2D23  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject SpawnScript::Sprite_Prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Sprite_Prefab_4;
	// System.Collections.Generic.List`1<System.String> SpawnScript::collisionList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___collisionList_5;
	// System.Int32 SpawnScript::num
	int32_t ___num_6;
	// UnityEngine.GameObject SpawnScript::currentLvl
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentLvl_7;
	// UnityEngine.UI.Text SpawnScript::currentNum
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___currentNum_8;
	// System.Single SpawnScript::x
	float ___x_9;
	// System.Single SpawnScript::y
	float ___y_10;

public:
	inline static int32_t get_offset_of_Sprite_Prefab_4() { return static_cast<int32_t>(offsetof(SpawnScript_t4AB21AEC053EF306685CF2B58C3FFDC2408C2D23, ___Sprite_Prefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Sprite_Prefab_4() const { return ___Sprite_Prefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Sprite_Prefab_4() { return &___Sprite_Prefab_4; }
	inline void set_Sprite_Prefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Sprite_Prefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sprite_Prefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_collisionList_5() { return static_cast<int32_t>(offsetof(SpawnScript_t4AB21AEC053EF306685CF2B58C3FFDC2408C2D23, ___collisionList_5)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_collisionList_5() const { return ___collisionList_5; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_collisionList_5() { return &___collisionList_5; }
	inline void set_collisionList_5(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___collisionList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collisionList_5), (void*)value);
	}

	inline static int32_t get_offset_of_num_6() { return static_cast<int32_t>(offsetof(SpawnScript_t4AB21AEC053EF306685CF2B58C3FFDC2408C2D23, ___num_6)); }
	inline int32_t get_num_6() const { return ___num_6; }
	inline int32_t* get_address_of_num_6() { return &___num_6; }
	inline void set_num_6(int32_t value)
	{
		___num_6 = value;
	}

	inline static int32_t get_offset_of_currentLvl_7() { return static_cast<int32_t>(offsetof(SpawnScript_t4AB21AEC053EF306685CF2B58C3FFDC2408C2D23, ___currentLvl_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentLvl_7() const { return ___currentLvl_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentLvl_7() { return &___currentLvl_7; }
	inline void set_currentLvl_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentLvl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentLvl_7), (void*)value);
	}

	inline static int32_t get_offset_of_currentNum_8() { return static_cast<int32_t>(offsetof(SpawnScript_t4AB21AEC053EF306685CF2B58C3FFDC2408C2D23, ___currentNum_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_currentNum_8() const { return ___currentNum_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_currentNum_8() { return &___currentNum_8; }
	inline void set_currentNum_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___currentNum_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentNum_8), (void*)value);
	}

	inline static int32_t get_offset_of_x_9() { return static_cast<int32_t>(offsetof(SpawnScript_t4AB21AEC053EF306685CF2B58C3FFDC2408C2D23, ___x_9)); }
	inline float get_x_9() const { return ___x_9; }
	inline float* get_address_of_x_9() { return &___x_9; }
	inline void set_x_9(float value)
	{
		___x_9 = value;
	}

	inline static int32_t get_offset_of_y_10() { return static_cast<int32_t>(offsetof(SpawnScript_t4AB21AEC053EF306685CF2B58C3FFDC2408C2D23, ___y_10)); }
	inline float get_y_10() const { return ___y_10; }
	inline float* get_address_of_y_10() { return &___y_10; }
	inline void set_y_10(float value)
	{
		___y_10 = value;
	}
};


// TargetScript
struct  TargetScript_t08836AA5554CD41C0CA340C13057714795FD4044  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text TargetScript::target_Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___target_Text_4;
	// System.String TargetScript::Target
	String_t* ___Target_5;
	// UnityEngine.GameObject[] TargetScript::lastLeft
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___lastLeft_6;
	// MenuManager TargetScript::MM
	MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * ___MM_7;
	// UnityEngine.GameObject[] TargetScript::Purple
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Purple_8;
	// UnityEngine.GameObject[] TargetScript::Green
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Green_9;
	// UnityEngine.GameObject[] TargetScript::Orange
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Orange_10;
	// UnityEngine.GameObject[] TargetScript::Red
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Red_11;
	// UnityEngine.GameObject[] TargetScript::Blue
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Blue_12;
	// UnityEngine.GameObject[] TargetScript::Yellow
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Yellow_13;

public:
	inline static int32_t get_offset_of_target_Text_4() { return static_cast<int32_t>(offsetof(TargetScript_t08836AA5554CD41C0CA340C13057714795FD4044, ___target_Text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_target_Text_4() const { return ___target_Text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_target_Text_4() { return &___target_Text_4; }
	inline void set_target_Text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___target_Text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_Text_4), (void*)value);
	}

	inline static int32_t get_offset_of_Target_5() { return static_cast<int32_t>(offsetof(TargetScript_t08836AA5554CD41C0CA340C13057714795FD4044, ___Target_5)); }
	inline String_t* get_Target_5() const { return ___Target_5; }
	inline String_t** get_address_of_Target_5() { return &___Target_5; }
	inline void set_Target_5(String_t* value)
	{
		___Target_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_5), (void*)value);
	}

	inline static int32_t get_offset_of_lastLeft_6() { return static_cast<int32_t>(offsetof(TargetScript_t08836AA5554CD41C0CA340C13057714795FD4044, ___lastLeft_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_lastLeft_6() const { return ___lastLeft_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_lastLeft_6() { return &___lastLeft_6; }
	inline void set_lastLeft_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___lastLeft_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastLeft_6), (void*)value);
	}

	inline static int32_t get_offset_of_MM_7() { return static_cast<int32_t>(offsetof(TargetScript_t08836AA5554CD41C0CA340C13057714795FD4044, ___MM_7)); }
	inline MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * get_MM_7() const { return ___MM_7; }
	inline MenuManager_tD52BB657312ED53913E423A985CACC86F900124C ** get_address_of_MM_7() { return &___MM_7; }
	inline void set_MM_7(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * value)
	{
		___MM_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MM_7), (void*)value);
	}

	inline static int32_t get_offset_of_Purple_8() { return static_cast<int32_t>(offsetof(TargetScript_t08836AA5554CD41C0CA340C13057714795FD4044, ___Purple_8)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Purple_8() const { return ___Purple_8; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Purple_8() { return &___Purple_8; }
	inline void set_Purple_8(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Purple_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Purple_8), (void*)value);
	}

	inline static int32_t get_offset_of_Green_9() { return static_cast<int32_t>(offsetof(TargetScript_t08836AA5554CD41C0CA340C13057714795FD4044, ___Green_9)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Green_9() const { return ___Green_9; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Green_9() { return &___Green_9; }
	inline void set_Green_9(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Green_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Green_9), (void*)value);
	}

	inline static int32_t get_offset_of_Orange_10() { return static_cast<int32_t>(offsetof(TargetScript_t08836AA5554CD41C0CA340C13057714795FD4044, ___Orange_10)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Orange_10() const { return ___Orange_10; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Orange_10() { return &___Orange_10; }
	inline void set_Orange_10(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Orange_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Orange_10), (void*)value);
	}

	inline static int32_t get_offset_of_Red_11() { return static_cast<int32_t>(offsetof(TargetScript_t08836AA5554CD41C0CA340C13057714795FD4044, ___Red_11)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Red_11() const { return ___Red_11; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Red_11() { return &___Red_11; }
	inline void set_Red_11(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Red_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Red_11), (void*)value);
	}

	inline static int32_t get_offset_of_Blue_12() { return static_cast<int32_t>(offsetof(TargetScript_t08836AA5554CD41C0CA340C13057714795FD4044, ___Blue_12)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Blue_12() const { return ___Blue_12; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Blue_12() { return &___Blue_12; }
	inline void set_Blue_12(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Blue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Blue_12), (void*)value);
	}

	inline static int32_t get_offset_of_Yellow_13() { return static_cast<int32_t>(offsetof(TargetScript_t08836AA5554CD41C0CA340C13057714795FD4044, ___Yellow_13)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Yellow_13() const { return ___Yellow_13; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Yellow_13() { return &___Yellow_13; }
	inline void set_Yellow_13(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Yellow_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Yellow_13), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// White_Script
struct  White_Script_t7057F81EA3856E4564D92B9AAB1FB657A01C4E22  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image White_Script::square
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___square_4;

public:
	inline static int32_t get_offset_of_square_4() { return static_cast<int32_t>(offsetof(White_Script_t7057F81EA3856E4564D92B9AAB1FB657A01C4E22, ___square_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_square_4() const { return ___square_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_square_4() { return &___square_4; }
	inline void set_square_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___square_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___square_4), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  m_Items[1];

public:
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
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
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___methodName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m8F2ABAB453573E6362BD024CA6284AB99549510D (String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void MenuManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Reset_m0F098FE04B31D322AEDDCB8506B6DCF91A7D6404 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void MenuManager::ShowInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ShowInterstitialAd_m9AEDE887899E877DB3C7D33117491A233D402F43 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsReady_m3FC8B4BB7F123559BF144F4BCB910B2DCA7B5B63 (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_mC3B5FFDC5FA848C88C6460EF18CBD67B56456779 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Move2::Swipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move2_Swipe_m8B39BA7CF41D72430406F427360980F3B5EC1AA6 (Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Void Move4::Swipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move4_Swipe_mC64BAD1F993AC8F41A2EE285DA69443F47451036 (Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void Move4::Matchable_UP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move4_Matchable_UP_mCC3EDD2EA15C5960F4661BE5121BC50EAE5E7202 (Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * __this, const RuntimeMethod* method);
// System.Void Move4::Matchable_LEFT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move4_Matchable_LEFT_m470B1E4307EBA65C6BBE48A4E10DFD6A478BB008 (Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * __this, const RuntimeMethod* method);
// System.Void Move4::Matchable_DOWN()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move4_Matchable_DOWN_m58B1E368DCCFF5A8EDEFA97976441A2BA651BBAF (Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * __this, const RuntimeMethod* method);
// System.Void Move4::Matchable_RIGHT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move4_Matchable_RIGHT_mA5B3450BBEB6DC42CDC71EE8FBD723DE234CB115 (Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2_Normalize_m0F1341493AD5F0B7DA4D504A44F52A1E2FFCCEC3 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void Move4/<MovePlayer>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMovePlayerU3Ed__18__ctor_mC4875D7F0932A3B6AD2B8383EA16B03014727F16 (U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_Raycast_m684AD52FAD1E3BF5AE53F8E48AF92202114053C2 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction1, float ___distance2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Move4::MovePlayer(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Move4_MovePlayer_mB7CF66C3FB9C47AB2D00B66C6A22FF4ACBB320F2 (Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Settingsmanager::OnPlop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settingsmanager_OnPlop_m04AAFF668C3ADEFBA230AD9E99595D8622A2C14C (Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * __this, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioLowPassFilter>()
inline AudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06 * Component_GetComponent_TisAudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06_m5014510BCA25449D1DA7FAAD5C429473366986B4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::UnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_UnPause_m17BEE2B5A9607757EF0635450D210E4FD5E3EAF2 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioLowPassFilter::set_cutoffFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_cutoffFrequency_m41DA5E0DC3CE2DC8B1AE7D5ABF49FA98A24BC0A8 (AudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, float ___volumeScale1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E (String_t* ___url0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void SpawnScript::Spawn(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnScript_Spawn_m3E4DB576A5450772D2A0E0EB626A6262C92AA04C (SpawnScript_t4AB21AEC053EF306685CF2B58C3FFDC2408C2D23 * __this, String_t* ___color0, String_t* ___position1, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F (String_t* ___s0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// System.Void MenuManager::OnSucceed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_OnSucceed_m251E278AE5E54A929BEDEE4FD7EC5900FB82646A (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
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
// System.Void Color_Script::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color_Script_Start_mC475A772030A203E75A9B4DDC47564585ADCBECE (Color_Script_t8EED4907EB4D76C246389CD457C5DD05636E7D71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9DD54B96EAE784BBC38DA92CCA02F3CC909F121);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// square = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0;
		L_0 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set_square_4(L_0);
		// MatchSystem = GameObject.FindGameObjectWithTag("MatchSystem");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralB9DD54B96EAE784BBC38DA92CCA02F3CC909F121, /*hidden argument*/NULL);
		__this->set_MatchSystem_5(L_1);
		// if (gameObject.tag == "White")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		// square.color = new Color(1, 1, 1, 1);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = __this->get_square_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_6), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
	}

IL_0057:
	{
		// if (gameObject.tag == "Blue")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0092;
		}
	}
	{
		// square.color = new Color(0.4764151f, 1, 0.9606738f, 1);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = __this->get_square_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_11), (0.476415098f), (1.0f), (0.960673809f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
	}

IL_0092:
	{
		// if (gameObject.tag == "Red")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_12, /*hidden argument*/NULL);
		bool L_14;
		L_14 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_13, _stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00cd;
		}
	}
	{
		// square.color = new Color(1, 0.08962262f, 0.08962262f, 1);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = __this->get_square_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_16), (1.0f), (0.0896226168f), (0.0896226168f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
	}

IL_00cd:
	{
		// if (gameObject.tag == "Yellow")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0108;
		}
	}
	{
		// square.color = new Color(1, 0.9354294f, 0.2311321f, 1);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_20 = __this->get_square_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_21), (1.0f), (0.935429394f), (0.231132105f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_21);
	}

IL_0108:
	{
		// if (gameObject.tag == "Green")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_23, _stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0143;
		}
	}
	{
		// square.color = new Color(0.3180013f, 1, 0.25f, 1);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_25 = __this->get_square_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_26), (0.3180013f), (1.0f), (0.25f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_25, L_26);
	}

IL_0143:
	{
		// if(gameObject.tag == "Purple")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_27, /*hidden argument*/NULL);
		bool L_29;
		L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_28, _stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_017e;
		}
	}
	{
		// square.color = new Color(1, 0.1933962f, 0.9347395f, 1);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30 = __this->get_square_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_31), (1.0f), (0.193396196f), (0.93473947f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_30, L_31);
	}

IL_017e:
	{
		// if (gameObject.tag == "Orange")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		String_t* L_33;
		L_33 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_32, /*hidden argument*/NULL);
		bool L_34;
		L_34 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_33, _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_01b9;
		}
	}
	{
		// square.color = new Color(0.8901961f, 0.5372549f, 0.02745098f, 1);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_square_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_36), (0.890196085f), (0.53725493f), (0.0274509806f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_35);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_36);
	}

IL_01b9:
	{
		// }
		return;
	}
}
// System.Void Color_Script::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color_Script_OnTriggerEnter2D_mD73E9CE116254F40766069FFF651BE4A8CD94072 (Color_Script_t8EED4907EB4D76C246389CD457C5DD05636E7D71 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57090FFFD1D0EAA0B4EFB91612F4AE39D26BE660);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag != "Cell")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_2, _stringLiteral57090FFFD1D0EAA0B4EFB91612F4AE39D26BE660, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Color_Script::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color_Script__ctor_mD203318E768365FC4A334358BD547BA5DB205D02 (Color_Script_t8EED4907EB4D76C246389CD457C5DD05636E7D71 * __this, const RuntimeMethod* method)
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
// System.Void MenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Start_m4E4A5EF33C27448D7F34FD29B93589635F1B2EE2 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_t5D30EC9BAF8E3739BAACB609C0034C01B9958E3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07B0D72E60D1DCCF27747782B68197ECAAAB754B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DA3B3F9419DEFA543527EDEF953E71B0C03948A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD626056928D707B05883423ACC06740ECF8D945E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1.0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// currentLevel = PlayerPrefs.GetInt("lvl");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792, /*hidden argument*/NULL);
		__this->set_currentLevel_7(L_0);
		// SpawnScript.SendMessage("current", Levels[currentLevel]);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_SpawnScript_13();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_Levels_9();
		int32_t L_3 = __this->get_currentLevel_7();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_1, _stringLiteral07B0D72E60D1DCCF27747782B68197ECAAAB754B, L_5, /*hidden argument*/NULL);
		// Levels[currentLevel].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_Levels_9();
		int32_t L_7 = __this->get_currentLevel_7();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// Advertisement.Initialize(gameId, testMode);
		String_t* L_10 = __this->get_gameId_10();
		bool L_11 = __this->get_testMode_11();
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t5D30EC9BAF8E3739BAACB609C0034C01B9958E3E_il2cpp_TypeInfo_var);
		Advertisement_Initialize_m8F2ABAB453573E6362BD024CA6284AB99549510D(L_10, L_11, /*hidden argument*/NULL);
		// adCounter = PlayerPrefs.GetInt("adCounter", adCounter);
		int32_t L_12 = __this->get_adCounter_12();
		int32_t L_13;
		L_13 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralD626056928D707B05883423ACC06740ECF8D945E, L_12, /*hidden argument*/NULL);
		__this->set_adCounter_12(L_13);
		// PlayerRank = PlayerPrefs.GetInt("Rank");
		int32_t L_14;
		L_14 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral3DA3B3F9419DEFA543527EDEF953E71B0C03948A, /*hidden argument*/NULL);
		__this->set_PlayerRank_14(L_14);
		// }
		return;
	}
}
// System.Void MenuManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Update_m732CF78C4240CF880048E66B580BE32A72FB8779 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// levelText.text = "Level " + currentLevel;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_levelText_8();
		int32_t* L_1 = __this->get_address_of_currentLevel_7();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void MenuManager::OnPressStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_OnPressStart_m40DB89C98052847253B75EE6215B17DE1C6B3E65 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		// if (currentLevel == 0 && PlayerRank == 0)
		int32_t L_0 = __this->get_currentLevel_7();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = __this->get_PlayerRank_14();
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Tutorials[0].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_Tutorials_5();
		NullCheck(L_2);
		int32_t L_3 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void MenuManager::OnSucceed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_OnSucceed_m251E278AE5E54A929BEDEE4FD7EC5900FB82646A (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07B0D72E60D1DCCF27747782B68197ECAAAB754B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DA3B3F9419DEFA543527EDEF953E71B0C03948A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD626056928D707B05883423ACC06740ECF8D945E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// if (currentLevel == Levels.Length - 1)
		int32_t L_0 = __this->get_currentLevel_7();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_Levels_9();
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)1))))))
		{
			goto IL_0041;
		}
	}
	{
		// Reset();
		MenuManager_Reset_m0F098FE04B31D322AEDDCB8506B6DCF91A7D6404(__this, /*hidden argument*/NULL);
		// PlayerRank += 1;
		int32_t L_2 = __this->get_PlayerRank_14();
		__this->set_PlayerRank_14(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// PlayerPrefs.SetInt("Rank", PlayerRank);
		int32_t L_3 = __this->get_PlayerRank_14();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral3DA3B3F9419DEFA543527EDEF953E71B0C03948A, L_3, /*hidden argument*/NULL);
		// SceneManager.LoadScene("SampleScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0041:
	{
		// if (adCounter >= 8)
		int32_t L_4 = __this->get_adCounter_12();
		if ((((int32_t)L_4) < ((int32_t)8)))
		{
			goto IL_0057;
		}
	}
	{
		// ShowInterstitialAd();
		MenuManager_ShowInterstitialAd_m9AEDE887899E877DB3C7D33117491A233D402F43(__this, /*hidden argument*/NULL);
		// adCounter = 0;
		__this->set_adCounter_12(0);
	}

IL_0057:
	{
		// adCounter += 1;
		int32_t L_5 = __this->get_adCounter_12();
		__this->set_adCounter_12(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// PlayerPrefs.SetInt("adCounter", adCounter);
		int32_t L_6 = __this->get_adCounter_12();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralD626056928D707B05883423ACC06740ECF8D945E, L_6, /*hidden argument*/NULL);
		// ps.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_7 = __this->get_ps_4();
		NullCheck(L_7);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_7, /*hidden argument*/NULL);
		// currentLevel += 1;
		int32_t L_8 = __this->get_currentLevel_7();
		__this->set_currentLevel_7(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		// PlayerPrefs.SetInt("lvl", currentLevel);
		int32_t L_9 = __this->get_currentLevel_7();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792, L_9, /*hidden argument*/NULL);
		// SpawnScript.SendMessage("current", Levels[currentLevel]);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_SpawnScript_13();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get_Levels_9();
		int32_t L_12 = __this->get_currentLevel_7();
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_10, _stringLiteral07B0D72E60D1DCCF27747782B68197ECAAAB754B, L_14, /*hidden argument*/NULL);
		// Levels[currentLevel].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get_Levels_9();
		int32_t L_16 = __this->get_currentLevel_7();
		NullCheck(L_15);
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// foreach (GameObject x in Levels)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_19 = __this->get_Levels_9();
		V_0 = L_19;
		V_1 = 0;
		goto IL_00fd;
	}

IL_00d9:
	{
		// foreach (GameObject x in Levels)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = L_23;
		// if (x != Levels[currentLevel])
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_2;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_25 = __this->get_Levels_9();
		int32_t L_26 = __this->get_currentLevel_7();
		NullCheck(L_25);
		int32_t L_27 = L_26;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_24, L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00f9;
		}
	}
	{
		// x.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = V_2;
		NullCheck(L_30);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)0, /*hidden argument*/NULL);
	}

IL_00f9:
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00fd:
	{
		// foreach (GameObject x in Levels)
		int32_t L_32 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_33 = V_0;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		// if(currentLevel == 1 && PlayerRank == 0)
		int32_t L_34 = __this->get_currentLevel_7();
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_0132;
		}
	}
	{
		int32_t L_35 = __this->get_PlayerRank_14();
		if (L_35)
		{
			goto IL_0132;
		}
	}
	{
		// Tutorials[0].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_36 = __this->get_Tutorials_5();
		NullCheck(L_36);
		int32_t L_37 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_38, (bool)0, /*hidden argument*/NULL);
		// Tutorials[1].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_39 = __this->get_Tutorials_5();
		NullCheck(L_39);
		int32_t L_40 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_41, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_018e;
	}

IL_0132:
	{
		// else if (currentLevel == 2 && PlayerRank == 0)
		int32_t L_42 = __this->get_currentLevel_7();
		if ((!(((uint32_t)L_42) == ((uint32_t)2))))
		{
			goto IL_0161;
		}
	}
	{
		int32_t L_43 = __this->get_PlayerRank_14();
		if (L_43)
		{
			goto IL_0161;
		}
	}
	{
		// Tutorials[1].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_44 = __this->get_Tutorials_5();
		NullCheck(L_44);
		int32_t L_45 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_46, (bool)0, /*hidden argument*/NULL);
		// Tutorials[2].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_47 = __this->get_Tutorials_5();
		NullCheck(L_47);
		int32_t L_48 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_49, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_018e;
	}

IL_0161:
	{
		// else if (currentLevel == 3 && PlayerRank == 0)
		int32_t L_50 = __this->get_currentLevel_7();
		if ((!(((uint32_t)L_50) == ((uint32_t)3))))
		{
			goto IL_018e;
		}
	}
	{
		int32_t L_51 = __this->get_PlayerRank_14();
		if (L_51)
		{
			goto IL_018e;
		}
	}
	{
		// Tutorials[2].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_52 = __this->get_Tutorials_5();
		NullCheck(L_52);
		int32_t L_53 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_54, (bool)0, /*hidden argument*/NULL);
		// Tutorials[3].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_55 = __this->get_Tutorials_5();
		NullCheck(L_55);
		int32_t L_56 = 3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_57, (bool)1, /*hidden argument*/NULL);
	}

IL_018e:
	{
		// if (currentLevel == 4 && PlayerRank == 0)
		int32_t L_58 = __this->get_currentLevel_7();
		if ((!(((uint32_t)L_58) == ((uint32_t)4))))
		{
			goto IL_01ad;
		}
	}
	{
		int32_t L_59 = __this->get_PlayerRank_14();
		if (L_59)
		{
			goto IL_01ad;
		}
	}
	{
		// Tutorials[3].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_60 = __this->get_Tutorials_5();
		NullCheck(L_60);
		int32_t L_61 = 3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_62, (bool)0, /*hidden argument*/NULL);
	}

IL_01ad:
	{
		// }
		return;
	}
}
// System.Void MenuManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Reset_m0F098FE04B31D322AEDDCB8506B6DCF91A7D6404 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DA3B3F9419DEFA543527EDEF953E71B0C03948A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentLevel = 0;
		__this->set_currentLevel_7(0);
		// PlayerPrefs.SetInt("lvl", currentLevel);
		int32_t L_0 = __this->get_currentLevel_7();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792, L_0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Rank", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral3DA3B3F9419DEFA543527EDEF953E71B0C03948A, 0, /*hidden argument*/NULL);
		// SceneManager.LoadScene("SampleScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::ShowInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ShowInterstitialAd_m9AEDE887899E877DB3C7D33117491A233D402F43 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_t5D30EC9BAF8E3739BAACB609C0034C01B9958E3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFC096353AA07572BB01163C70B6B66EFC4FB412);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Advertisement.IsReady())
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t5D30EC9BAF8E3739BAACB609C0034C01B9958E3E_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Advertisement_IsReady_m3FC8B4BB7F123559BF144F4BCB910B2DCA7B5B63(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// Advertisement.Show();
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t5D30EC9BAF8E3739BAACB609C0034C01B9958E3E_il2cpp_TypeInfo_var);
		Advertisement_Show_mC3B5FFDC5FA848C88C6460EF18CBD67B56456779(/*hidden argument*/NULL);
		// }
		return;
	}

IL_000d:
	{
		// Debug.Log("Interstitial ad not ready at the moment! Please try again later!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDFC096353AA07572BB01163C70B6B66EFC4FB412, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager__ctor_m8F61CC885B72291B54C1C6EC368AE303EA856529 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		// public bool testMode = true;
		__this->set_testMode_11((bool)1);
		// public int adCounter = 1;
		__this->set_adCounter_12(1);
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
// System.Void Move2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move2_Start_mB6E2DAC947C88572DA0FA4B6026E5466EB1FD069 (Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mInstance = this;
		((Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9_StaticFields*)il2cpp_codegen_static_fields_for(Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9_il2cpp_TypeInfo_var))->set_mInstance_10(__this);
		// }
		return;
	}
}
// System.Void Move2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move2_Update_m8109C3CCECB374F960F6CC03DDA20932847D208D (Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9 * __this, const RuntimeMethod* method)
{
	{
		// Swipe();
		Move2_Swipe_m8B39BA7CF41D72430406F427360980F3B5EC1AA6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Move2::Swipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move2_Swipe_m8B39BA7CF41D72430406F427360980F3B5EC1AA6 (Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C8BF6DDBDDEC3A92AEA77ABF46CD671944B758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D354CA1036DDA6F701F800C5C1B3A4235D2EDD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// currentPlatform = EventSystem.current.currentSelectedGameObject.transform;
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0;
		L_0 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		__this->set_currentPlatform_11(L_2);
		// if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
		int32_t L_3;
		L_3 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_4;
		L_4 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		// startTouchPosition = Input.GetTouch(0).position;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_6;
		L_6 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		__this->set_startTouchPosition_4(L_7);
	}

IL_0041:
	{
		// if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved)
		int32_t L_8;
		L_8 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0203;
		}
	}
	{
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_9;
		L_9 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10;
		L_10 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0203;
		}
	}
	{
		// currentPosition = Input.GetTouch(0).position;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_11;
		L_11 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		__this->set_currentPosition_5(L_12);
		// Vector2 Distance = currentPosition - startTouchPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = __this->get_currentPosition_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = __this->get_startTouchPosition_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		// if (!stopTouch)
		bool L_16 = __this->get_stopTouch_7();
		if (L_16)
		{
			goto IL_0203;
		}
	}
	{
		// if(Distance.x < -swipeRange)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_1;
		float L_18 = L_17.get_x_0();
		float L_19 = __this->get_swipeRange_8();
		if ((!(((float)L_18) < ((float)((-L_19))))))
		{
			goto IL_0144;
		}
	}
	{
		// Debug.Log("Left");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, /*hidden argument*/NULL);
		// currentPlatform.transform.position = Vector3.Lerp(currentPlatform.transform.position, new Vector3(currentPlatform.transform.position.x - 175f, currentPlatform.transform.position.y, currentPlatform.transform.position.z), 1f * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = __this->get_currentPlatform_11();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get_currentPlatform_11();
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = __this->get_currentPlatform_11();
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = __this->get_currentPlatform_11();
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = __this->get_currentPlatform_11();
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), ((float)il2cpp_codegen_subtract((float)L_28, (float)(175.0f))), L_32, L_36, /*hidden argument*/NULL);
		float L_38;
		L_38 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_24, L_37, ((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_38)), /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_39, /*hidden argument*/NULL);
		// stopTouch = true;
		__this->set_stopTouch_7((bool)1);
		// rb = currentPlatform.GetComponent<Rigidbody2D>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40 = __this->get_currentPlatform_11();
		NullCheck(L_40);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_41;
		L_41 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(L_40, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_12(L_41);
		// }
		goto IL_0203;
	}

IL_0144:
	{
		// else if (Distance.x > swipeRange)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42 = V_1;
		float L_43 = L_42.get_x_0();
		float L_44 = __this->get_swipeRange_8();
		if ((!(((float)L_43) > ((float)L_44))))
		{
			goto IL_0184;
		}
	}
	{
		// Debug.Log("Right");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, /*hidden argument*/NULL);
		// currentPlatform.transform.Translate(1.25f, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45 = __this->get_currentPlatform_11();
		NullCheck(L_45);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_46, (1.25f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// stopTouch = true;
		__this->set_stopTouch_7((bool)1);
		// }
		goto IL_0203;
	}

IL_0184:
	{
		// else if (Distance.y > swipeRange)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47 = V_1;
		float L_48 = L_47.get_y_1();
		float L_49 = __this->get_swipeRange_8();
		if ((!(((float)L_48) > ((float)L_49))))
		{
			goto IL_01c4;
		}
	}
	{
		// Debug.Log("Up");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9D354CA1036DDA6F701F800C5C1B3A4235D2EDD7, /*hidden argument*/NULL);
		// currentPlatform.transform.Translate(0, 1.25f, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50 = __this->get_currentPlatform_11();
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_51, (0.0f), (1.25f), (0.0f), /*hidden argument*/NULL);
		// stopTouch = true;
		__this->set_stopTouch_7((bool)1);
		// }
		goto IL_0203;
	}

IL_01c4:
	{
		// else if (Distance.y < -swipeRange)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52 = V_1;
		float L_53 = L_52.get_y_1();
		float L_54 = __this->get_swipeRange_8();
		if ((!(((float)L_53) < ((float)((-L_54))))))
		{
			goto IL_0203;
		}
	}
	{
		// Debug.Log("Down");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673, /*hidden argument*/NULL);
		// currentPlatform.transform.Translate(0, -1.25f, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55 = __this->get_currentPlatform_11();
		NullCheck(L_55);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_56, (0.0f), (-1.25f), (0.0f), /*hidden argument*/NULL);
		// stopTouch = true;
		__this->set_stopTouch_7((bool)1);
	}

IL_0203:
	{
		// if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended)
		int32_t L_57;
		L_57 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_57) <= ((int32_t)0)))
		{
			goto IL_0279;
		}
	}
	{
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_58;
		L_58 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_58;
		int32_t L_59;
		L_59 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_59) == ((uint32_t)3))))
		{
			goto IL_0279;
		}
	}
	{
		// stopTouch = false;
		__this->set_stopTouch_7((bool)0);
		// endTouchPosition = Input.GetTouch(0).position;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_60;
		L_60 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_60;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_61;
		L_61 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		__this->set_endTouchPosition_6(L_61);
		// Vector2 Distance = endTouchPosition - startTouchPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_62 = __this->get_endTouchPosition_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_63 = __this->get_startTouchPosition_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_64;
		L_64 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_62, L_63, /*hidden argument*/NULL);
		V_2 = L_64;
		// if (Mathf.Abs(Distance.x) < tapRange && Mathf.Abs(Distance.y) < tapRange)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65 = V_2;
		float L_66 = L_65.get_x_0();
		float L_67;
		L_67 = fabsf(L_66);
		float L_68 = __this->get_tapRange_9();
		if ((!(((float)L_67) < ((float)L_68))))
		{
			goto IL_0279;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_69 = V_2;
		float L_70 = L_69.get_y_1();
		float L_71;
		L_71 = fabsf(L_70);
		float L_72 = __this->get_tapRange_9();
		if ((!(((float)L_71) < ((float)L_72))))
		{
			goto IL_0279;
		}
	}
	{
		// Debug.Log("Tap");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral84C8BF6DDBDDEC3A92AEA77ABF46CD671944B758, /*hidden argument*/NULL);
	}

IL_0279:
	{
		// }
		return;
	}
}
// System.Void Move2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move2__ctor_m5DC379085137AA996CB53A230D713394CB48A480 (Move2_t9A715A084071E3281CF3BBDEC66EB892757C09E9 * __this, const RuntimeMethod* method)
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
// System.Void Move3::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move3_Update_m6430AABC27167C5EF0FA987F18BA04A4F5868AA0 (Move3_t04BF64354B0596A593F5C489E2B01982722E3624 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B1CF05486392B109EE5E1C6F8F3769A8C65518F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB62A6279BAC2671EC47564022B9FD24B0A1F5317);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDBA5BACC04EB714520C84625FC9F1F1440CC111);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(fingerDown == false && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
		bool L_0 = __this->get_fingerDown_7();
		if (L_0)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_1;
		L_1 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_2;
		L_2 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		// startPos = Input.touches[0].position;
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_4;
		L_4 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		__this->set_startPos_5(L_5);
		// fingerDown = true;
		__this->set_fingerDown_7((bool)1);
	}

IL_003f:
	{
		// if (fingerDown)
		bool L_6 = __this->get_fingerDown_7();
		if (!L_6)
		{
			goto IL_00ff;
		}
	}
	{
		// if(Input.touches[0].position.y >= startPos.y + pixelDistToDetect)
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_7;
		L_7 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		NullCheck(L_7);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		float L_9 = L_8.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_10 = __this->get_address_of_startPos_5();
		float L_11 = L_10->get_y_1();
		int32_t L_12 = __this->get_pixelDistToDetect_6();
		if ((!(((float)L_9) >= ((float)((float)il2cpp_codegen_add((float)L_11, (float)((float)((float)L_12))))))))
		{
			goto IL_0087;
		}
	}
	{
		// fingerDown = false;
		__this->set_fingerDown_7((bool)0);
		// Debug.Log("Swipe up");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFDBA5BACC04EB714520C84625FC9F1F1440CC111, /*hidden argument*/NULL);
		// }else if(Input.touches[0].position.x <= startPos.x - pixelDistToDetect)
		goto IL_00ff;
	}

IL_0087:
	{
		// }else if(Input.touches[0].position.x <= startPos.x - pixelDistToDetect)
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_13;
		L_13 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		NullCheck(L_13);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		float L_15 = L_14.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of_startPos_5();
		float L_17 = L_16->get_x_0();
		int32_t L_18 = __this->get_pixelDistToDetect_6();
		if ((!(((float)L_15) <= ((float)((float)il2cpp_codegen_subtract((float)L_17, (float)((float)((float)L_18))))))))
		{
			goto IL_00c4;
		}
	}
	{
		// fingerDown = false;
		__this->set_fingerDown_7((bool)0);
		// Debug.Log("Swipe left");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB62A6279BAC2671EC47564022B9FD24B0A1F5317, /*hidden argument*/NULL);
		// }
		goto IL_00ff;
	}

IL_00c4:
	{
		// else if (Input.touches[0].position.x >= startPos.x + pixelDistToDetect)
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_19;
		L_19 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		NullCheck(L_19);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		float L_21 = L_20.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_22 = __this->get_address_of_startPos_5();
		float L_23 = L_22->get_x_0();
		int32_t L_24 = __this->get_pixelDistToDetect_6();
		if ((!(((float)L_21) >= ((float)((float)il2cpp_codegen_add((float)L_23, (float)((float)((float)L_24))))))))
		{
			goto IL_00ff;
		}
	}
	{
		// fingerDown = false;
		__this->set_fingerDown_7((bool)0);
		// Debug.Log("Swipe Right");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9B1CF05486392B109EE5E1C6F8F3769A8C65518F, /*hidden argument*/NULL);
	}

IL_00ff:
	{
		// if(fingerDown && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Ended)
		bool L_25 = __this->get_fingerDown_7();
		if (!L_25)
		{
			goto IL_0129;
		}
	}
	{
		int32_t L_26;
		L_26 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_0129;
		}
	}
	{
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_27;
		L_27 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)3))))
		{
			goto IL_0129;
		}
	}
	{
		// fingerDown = false;
		__this->set_fingerDown_7((bool)0);
	}

IL_0129:
	{
		// if (fingerDown == false && Input.GetMouseButtonDown(0))
		bool L_29 = __this->get_fingerDown_7();
		if (L_29)
		{
			goto IL_0150;
		}
	}
	{
		bool L_30;
		L_30 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0150;
		}
	}
	{
		// startPos = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		L_32 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_31, /*hidden argument*/NULL);
		__this->set_startPos_5(L_32);
		// fingerDown = true;
		__this->set_fingerDown_7((bool)1);
	}

IL_0150:
	{
		// if (fingerDown)
		bool L_33 = __this->get_fingerDown_7();
		if (!L_33)
		{
			goto IL_01ef;
		}
	}
	{
		// if (Input.mousePosition.y >= startPos.y + pixelDistToDetect)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_35 = L_34.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_36 = __this->get_address_of_startPos_5();
		float L_37 = L_36->get_y_1();
		int32_t L_38 = __this->get_pixelDistToDetect_6();
		if ((!(((float)L_35) >= ((float)((float)il2cpp_codegen_add((float)L_37, (float)((float)((float)L_38))))))))
		{
			goto IL_018d;
		}
	}
	{
		// fingerDown = false;
		__this->set_fingerDown_7((bool)0);
		// Debug.Log("Swipe up");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFDBA5BACC04EB714520C84625FC9F1F1440CC111, /*hidden argument*/NULL);
		// }
		goto IL_01ef;
	}

IL_018d:
	{
		// else if (Input.mousePosition.x <= startPos.x - pixelDistToDetect)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_40 = L_39.get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_41 = __this->get_address_of_startPos_5();
		float L_42 = L_41->get_x_0();
		int32_t L_43 = __this->get_pixelDistToDetect_6();
		if ((!(((float)L_40) <= ((float)((float)il2cpp_codegen_subtract((float)L_42, (float)((float)((float)L_43))))))))
		{
			goto IL_01bf;
		}
	}
	{
		// fingerDown = false;
		__this->set_fingerDown_7((bool)0);
		// Debug.Log("Swipe left");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB62A6279BAC2671EC47564022B9FD24B0A1F5317, /*hidden argument*/NULL);
		// }
		goto IL_01ef;
	}

IL_01bf:
	{
		// else if (Input.mousePosition.x >= startPos.x + pixelDistToDetect)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_45 = L_44.get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_46 = __this->get_address_of_startPos_5();
		float L_47 = L_46->get_x_0();
		int32_t L_48 = __this->get_pixelDistToDetect_6();
		if ((!(((float)L_45) >= ((float)((float)il2cpp_codegen_add((float)L_47, (float)((float)((float)L_48))))))))
		{
			goto IL_01ef;
		}
	}
	{
		// fingerDown = false;
		__this->set_fingerDown_7((bool)0);
		// Debug.Log("Swipe Right");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9B1CF05486392B109EE5E1C6F8F3769A8C65518F, /*hidden argument*/NULL);
	}

IL_01ef:
	{
		// if (fingerDown && Input.GetMouseButtonUp(0))
		bool L_49 = __this->get_fingerDown_7();
		if (!L_49)
		{
			goto IL_0206;
		}
	}
	{
		bool L_50;
		L_50 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0206;
		}
	}
	{
		// fingerDown = false;
		__this->set_fingerDown_7((bool)0);
	}

IL_0206:
	{
		// }
		return;
	}
}
// System.Void Move3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move3__ctor_m32BB0F11A748421FC86C3F9951D2A3D0FC63C83A (Move3_t04BF64354B0596A593F5C489E2B01982722E3624 * __this, const RuntimeMethod* method)
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
// System.Void Move4::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move4_Start_m1A038371219EC31A00705A47EF2BF452C2FEB22E (Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77E939D830A276F4D384740AD2ECC3AA4D71D746);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Object_Color = gameObject.tag;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_0, /*hidden argument*/NULL);
		__this->set_Object_Color_13(L_1);
		// SpawnScript = GameObject.FindGameObjectWithTag("SpawnScript");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral77E939D830A276F4D384740AD2ECC3AA4D71D746, /*hidden argument*/NULL);
		__this->set_SpawnScript_14(L_2);
		// }
		return;
	}
}
// System.Void Move4::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move4_Update_mD0B6247B6CBD62D18A71BD0ADDCFEF95681511B2 (Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * __this, const RuntimeMethod* method)
{
	{
		// Swipe();
		Move4_Swipe_mC64BAD1F993AC8F41A2EE285DA69443F47451036(__this, /*hidden argument*/NULL);
		// if (Input.GetKeyDown(KeyCode.W) && !isMoving)
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)119), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		bool L_1 = __this->get_isMoving_5();
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Matchable_UP();
		Move4_Matchable_UP_mCC3EDD2EA15C5960F4661BE5121BC50EAE5E7202(__this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// if (Input.GetKeyDown(KeyCode.A) && !isMoving)
		bool L_2;
		L_2 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)97), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		bool L_3 = __this->get_isMoving_5();
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		// Matchable_LEFT();
		Move4_Matchable_LEFT_m470B1E4307EBA65C6BBE48A4E10DFD6A478BB008(__this, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// if (Input.GetKeyDown(KeyCode.S) && !isMoving)
		bool L_4;
		L_4 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)115), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		bool L_5 = __this->get_isMoving_5();
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		// Matchable_DOWN();
		Move4_Matchable_DOWN_m58B1E368DCCFF5A8EDEFA97976441A2BA651BBAF(__this, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// if (Input.GetKeyDown(KeyCode.D) && !isMoving)
		bool L_6;
		L_6 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)100), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		bool L_7 = __this->get_isMoving_5();
		if (L_7)
		{
			goto IL_0062;
		}
	}
	{
		// Matchable_RIGHT();
		Move4_Matchable_RIGHT_mA5B3450BBEB6DC42CDC71EE8FBD723DE234CB115(__this, /*hidden argument*/NULL);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void Move4::Swipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move4_Swipe_mC64BAD1F993AC8F41A2EE285DA69443F47451036 (Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41C6521ECE23EDE17320219E10B518BE098FD02D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4A446C044FE71EFE756EAD7C98EE2AF607DEF10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDF97164FD84937DC6C483744DF688EBB1859B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC043BDF35BA28A840570B47FE5A82FE6A74F111);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.touches.Length > 0)
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_0;
		L_0 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_01f7;
		}
	}
	{
		// Touch t = Input.GetTouch(0);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_1;
		L_1 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (t.phase == TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		// firstPressPos = new Vector2(t.position.x, t.position.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		float L_6 = L_5.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), L_4, L_6, /*hidden argument*/NULL);
		__this->set_firstPressPos_16(L_7);
	}

IL_003e:
	{
		// if (t.phase == TouchPhase.Ended)
		int32_t L_8;
		L_8 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_01f7;
		}
	}
	{
		// secondPressPos = new Vector2(t.position.x, t.position.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		float L_10 = L_9.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		float L_12 = L_11.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_13), L_10, L_12, /*hidden argument*/NULL);
		__this->set_secondPressPos_17(L_13);
		// currentSwipe = new Vector3(secondPressPos.x - firstPressPos.x, secondPressPos.y - firstPressPos.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_14 = __this->get_address_of_secondPressPos_17();
		float L_15 = L_14->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of_firstPressPos_16();
		float L_17 = L_16->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_18 = __this->get_address_of_secondPressPos_17();
		float L_19 = L_18->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_20 = __this->get_address_of_firstPressPos_16();
		float L_21 = L_20->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_22), ((float)il2cpp_codegen_subtract((float)L_15, (float)L_17)), ((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_22, /*hidden argument*/NULL);
		__this->set_currentSwipe_18(L_23);
		// currentSwipe.Normalize();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_24 = __this->get_address_of_currentSwipe_18();
		Vector2_Normalize_m0F1341493AD5F0B7DA4D504A44F52A1E2FFCCEC3((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_24, /*hidden argument*/NULL);
		// if (currentSwipe.y > 0 && currentSwipe.x > -0.5f && currentSwipe.x < 0.5f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_25 = __this->get_address_of_currentSwipe_18();
		float L_26 = L_25->get_y_1();
		if ((!(((float)L_26) > ((float)(0.0f)))))
		{
			goto IL_0107;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_27 = __this->get_address_of_currentSwipe_18();
		float L_28 = L_27->get_x_0();
		if ((!(((float)L_28) > ((float)(-0.5f)))))
		{
			goto IL_0107;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_29 = __this->get_address_of_currentSwipe_18();
		float L_30 = L_29->get_x_0();
		if ((!(((float)L_30) < ((float)(0.5f)))))
		{
			goto IL_0107;
		}
	}
	{
		// Debug.Log("up swipe");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralEC043BDF35BA28A840570B47FE5A82FE6A74F111, /*hidden argument*/NULL);
		// Matchable_UP();
		Move4_Matchable_UP_mCC3EDD2EA15C5960F4661BE5121BC50EAE5E7202(__this, /*hidden argument*/NULL);
		// Time.timeScale = 1.0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
	}

IL_0107:
	{
		// if (currentSwipe.y < 0 && currentSwipe.x > -0.5f && currentSwipe.x < 0.5f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_31 = __this->get_address_of_currentSwipe_18();
		float L_32 = L_31->get_y_1();
		if ((!(((float)L_32) < ((float)(0.0f)))))
		{
			goto IL_0157;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_33 = __this->get_address_of_currentSwipe_18();
		float L_34 = L_33->get_x_0();
		if ((!(((float)L_34) > ((float)(-0.5f)))))
		{
			goto IL_0157;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_35 = __this->get_address_of_currentSwipe_18();
		float L_36 = L_35->get_x_0();
		if ((!(((float)L_36) < ((float)(0.5f)))))
		{
			goto IL_0157;
		}
	}
	{
		// Debug.Log("down swipe");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBDF97164FD84937DC6C483744DF688EBB1859B29, /*hidden argument*/NULL);
		// Matchable_DOWN();
		Move4_Matchable_DOWN_m58B1E368DCCFF5A8EDEFA97976441A2BA651BBAF(__this, /*hidden argument*/NULL);
		// Time.timeScale = 1.0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
	}

IL_0157:
	{
		// if (currentSwipe.x < 0 && currentSwipe.y > -0.5f && currentSwipe.y < 0.5f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_37 = __this->get_address_of_currentSwipe_18();
		float L_38 = L_37->get_x_0();
		if ((!(((float)L_38) < ((float)(0.0f)))))
		{
			goto IL_01a7;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_39 = __this->get_address_of_currentSwipe_18();
		float L_40 = L_39->get_y_1();
		if ((!(((float)L_40) > ((float)(-0.5f)))))
		{
			goto IL_01a7;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_41 = __this->get_address_of_currentSwipe_18();
		float L_42 = L_41->get_y_1();
		if ((!(((float)L_42) < ((float)(0.5f)))))
		{
			goto IL_01a7;
		}
	}
	{
		// Debug.Log("left swipe");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA4A446C044FE71EFE756EAD7C98EE2AF607DEF10, /*hidden argument*/NULL);
		// Matchable_LEFT();
		Move4_Matchable_LEFT_m470B1E4307EBA65C6BBE48A4E10DFD6A478BB008(__this, /*hidden argument*/NULL);
		// Time.timeScale = 1.0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
	}

IL_01a7:
	{
		// if (currentSwipe.x > 0 && currentSwipe.y > -0.5f && currentSwipe.y < 0.5f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_43 = __this->get_address_of_currentSwipe_18();
		float L_44 = L_43->get_x_0();
		if ((!(((float)L_44) > ((float)(0.0f)))))
		{
			goto IL_01f7;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_45 = __this->get_address_of_currentSwipe_18();
		float L_46 = L_45->get_y_1();
		if ((!(((float)L_46) > ((float)(-0.5f)))))
		{
			goto IL_01f7;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_47 = __this->get_address_of_currentSwipe_18();
		float L_48 = L_47->get_y_1();
		if ((!(((float)L_48) < ((float)(0.5f)))))
		{
			goto IL_01f7;
		}
	}
	{
		// Debug.Log("right swipe");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral41C6521ECE23EDE17320219E10B518BE098FD02D, /*hidden argument*/NULL);
		// Matchable_RIGHT();
		Move4_Matchable_RIGHT_mA5B3450BBEB6DC42CDC71EE8FBD723DE234CB115(__this, /*hidden argument*/NULL);
		// Time.timeScale = 1.0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
	}

IL_01f7:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Move4::MovePlayer(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Move4_MovePlayer_mB7CF66C3FB9C47AB2D00B66C6A22FF4ACBB320F2 (Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC * L_0 = (U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC *)il2cpp_codegen_object_new(U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC_il2cpp_TypeInfo_var);
		U3CMovePlayerU3Ed__18__ctor_mC4875D7F0932A3B6AD2B8383EA16B03014727F16(L_0, 0, /*hidden argument*/NULL);
		U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC * L_2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___direction0;
		NullCheck(L_2);
		L_2->set_direction_3(L_3);
		return L_2;
	}
}
// System.Void Move4::Matchable_UP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move4_Matchable_UP_mCC3EDD2EA15C5960F4661BE5121BC50EAE5E7202 (Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57090FFFD1D0EAA0B4EFB91612F4AE39D26BE660);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// RaycastHit2D hit_up = Physics2D.Raycast(transform.position, Vector3.up, RaycastRange);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_RaycastRange_4();
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_6;
		L_6 = Physics2D_Raycast_m684AD52FAD1E3BF5AE53F8E48AF92202114053C2(L_2, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// Debug.DrawRay(transform.position, Vector3.up * RaycastRange, Color.white);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_10 = __this->get_RaycastRange_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121(L_8, L_11, L_12, /*hidden argument*/NULL);
		// string tag = hit_up.transform.tag;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// if (tag != "Border")
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_15, _stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_01a2;
		}
	}
	{
		// if (tag != Object_Color)
		String_t* L_17 = V_1;
		String_t* L_18 = __this->get_Object_Color_13();
		bool L_19;
		L_19 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0173;
		}
	}
	{
		// if (Object_Color == "Yellow" || Object_Color == "Blue" || Object_Color == "Red")
		String_t* L_20 = __this->get_Object_Color_13();
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_00af;
		}
	}
	{
		String_t* L_22 = __this->get_Object_Color_13();
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00af;
		}
	}
	{
		String_t* L_24 = __this->get_Object_Color_13();
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0101;
		}
	}

IL_00af:
	{
		// if (tag != "Purple" && tag != "Orange" && tag != "Green")
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_26, _stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_01a2;
		}
	}
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_28, _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_01a2;
		}
	}
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_30, _stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_01a2;
		}
	}
	{
		// StartCoroutine(MovePlayer(new Vector3(0, 175, 0)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_32), (0.0f), (175.0f), (0.0f), /*hidden argument*/NULL);
		RuntimeObject* L_33;
		L_33 = Move4_MovePlayer_mB7CF66C3FB9C47AB2D00B66C6A22FF4ACBB320F2(__this, L_32, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_34;
		L_34 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_33, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0101:
	{
		// else if (Object_Color == "Purple" || Object_Color == "Orange" || Object_Color == "Green")
		String_t* L_35 = __this->get_Object_Color_13();
		bool L_36;
		L_36 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_35, _stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0137;
		}
	}
	{
		String_t* L_37 = __this->get_Object_Color_13();
		bool L_38;
		L_38 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_37, _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0137;
		}
	}
	{
		String_t* L_39 = __this->get_Object_Color_13();
		bool L_40;
		L_40 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_39, _stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_01a2;
		}
	}

IL_0137:
	{
		// if(tag == "Cell" || tag == "White")
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_41, _stringLiteral57090FFFD1D0EAA0B4EFB91612F4AE39D26BE660, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_0151;
		}
	}
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_43, _stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_01a2;
		}
	}

IL_0151:
	{
		// StartCoroutine(MovePlayer(new Vector3(0, 175, 0)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_45), (0.0f), (175.0f), (0.0f), /*hidden argument*/NULL);
		RuntimeObject* L_46;
		L_46 = Move4_MovePlayer_mB7CF66C3FB9C47AB2D00B66C6A22FF4ACBB320F2(__this, L_45, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_47;
		L_47 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_46, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0173:
	{
		// else if (tag == Object_Color)
		String_t* L_48 = V_1;
		String_t* L_49 = __this->get_Object_Color_13();
		bool L_50;
		L_50 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_48, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_01a2;
		}
	}
	{
		// StartCoroutine(MovePlayer(new Vector3(0, 175, 0)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_51), (0.0f), (175.0f), (0.0f), /*hidden argument*/NULL);
		RuntimeObject* L_52;
		L_52 = Move4_MovePlayer_mB7CF66C3FB9C47AB2D00B66C6A22FF4ACBB320F2(__this, L_51, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_53;
		L_53 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_52, /*hidden argument*/NULL);
	}

IL_01a2:
	{
		// }
		return;
	}
}
// System.Void Move4::Matchable_DOWN()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move4_Matchable_DOWN_m58B1E368DCCFF5A8EDEFA97976441A2BA651BBAF (Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57090FFFD1D0EAA0B4EFB91612F4AE39D26BE660);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// RaycastHit2D hit_down = Physics2D.Raycast(transform.position, Vector3.down, RaycastRange);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_RaycastRange_4();
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_6;
		L_6 = Physics2D_Raycast_m684AD52FAD1E3BF5AE53F8E48AF92202114053C2(L_2, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// Debug.DrawRay(transform.position, Vector3.down * RaycastRange, Color.white);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		float L_10 = __this->get_RaycastRange_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121(L_8, L_11, L_12, /*hidden argument*/NULL);
		// string tag = hit_down.transform.tag;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// if (tag != "Border")
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_15, _stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_01a2;
		}
	}
	{
		// if (tag != Object_Color)
		String_t* L_17 = V_1;
		String_t* L_18 = __this->get_Object_Color_13();
		bool L_19;
		L_19 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0173;
		}
	}
	{
		// if (Object_Color == "Yellow" || Object_Color == "Blue" || Object_Color == "Red")
		String_t* L_20 = __this->get_Object_Color_13();
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_00af;
		}
	}
	{
		String_t* L_22 = __this->get_Object_Color_13();
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00af;
		}
	}
	{
		String_t* L_24 = __this->get_Object_Color_13();
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0101;
		}
	}

IL_00af:
	{
		// if (tag != "Purple" && tag != "Orange" && tag != "Green")
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_26, _stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_01a2;
		}
	}
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_28, _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_01a2;
		}
	}
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_30, _stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_01a2;
		}
	}
	{
		// StartCoroutine(MovePlayer(new Vector3(0, -175, 0)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_32), (0.0f), (-175.0f), (0.0f), /*hidden argument*/NULL);
		RuntimeObject* L_33;
		L_33 = Move4_MovePlayer_mB7CF66C3FB9C47AB2D00B66C6A22FF4ACBB320F2(__this, L_32, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_34;
		L_34 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_33, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0101:
	{
		// else if (Object_Color == "Purple" || Object_Color == "Orange" || Object_Color == "Green")
		String_t* L_35 = __this->get_Object_Color_13();
		bool L_36;
		L_36 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_35, _stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0137;
		}
	}
	{
		String_t* L_37 = __this->get_Object_Color_13();
		bool L_38;
		L_38 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_37, _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0137;
		}
	}
	{
		String_t* L_39 = __this->get_Object_Color_13();
		bool L_40;
		L_40 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_39, _stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_01a2;
		}
	}

IL_0137:
	{
		// if (tag == "Cell" || tag == "White")
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_41, _stringLiteral57090FFFD1D0EAA0B4EFB91612F4AE39D26BE660, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_0151;
		}
	}
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_43, _stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_01a2;
		}
	}

IL_0151:
	{
		// StartCoroutine(MovePlayer(new Vector3(0, -175, 0)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_45), (0.0f), (-175.0f), (0.0f), /*hidden argument*/NULL);
		RuntimeObject* L_46;
		L_46 = Move4_MovePlayer_mB7CF66C3FB9C47AB2D00B66C6A22FF4ACBB320F2(__this, L_45, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_47;
		L_47 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_46, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0173:
	{
		// else if (tag == Object_Color)
		String_t* L_48 = V_1;
		String_t* L_49 = __this->get_Object_Color_13();
		bool L_50;
		L_50 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_48, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_01a2;
		}
	}
	{
		// StartCoroutine(MovePlayer(new Vector3(0, -175, 0)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_51), (0.0f), (-175.0f), (0.0f), /*hidden argument*/NULL);
		RuntimeObject* L_52;
		L_52 = Move4_MovePlayer_mB7CF66C3FB9C47AB2D00B66C6A22FF4ACBB320F2(__this, L_51, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_53;
		L_53 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_52, /*hidden argument*/NULL);
	}

IL_01a2:
	{
		// }
		return;
	}
}
// System.Void Move4::Matchable_RIGHT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move4_Matchable_RIGHT_mA5B3450BBEB6DC42CDC71EE8FBD723DE234CB115 (Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57090FFFD1D0EAA0B4EFB91612F4AE39D26BE660);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// RaycastHit2D hit_right = Physics2D.Raycast(transform.position, Vector3.right, RaycastRange);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_RaycastRange_4();
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_6;
		L_6 = Physics2D_Raycast_m684AD52FAD1E3BF5AE53F8E48AF92202114053C2(L_2, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// Debug.DrawRay(transform.position, Vector3.right * RaycastRange, Color.white);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		float L_10 = __this->get_RaycastRange_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121(L_8, L_11, L_12, /*hidden argument*/NULL);
		// string tag = hit_right.transform.tag;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// if (tag != "Border")
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_15, _stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_01a2;
		}
	}
	{
		// if (tag != Object_Color)
		String_t* L_17 = V_1;
		String_t* L_18 = __this->get_Object_Color_13();
		bool L_19;
		L_19 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0173;
		}
	}
	{
		// if (Object_Color == "Yellow" || Object_Color == "Blue" || Object_Color == "Red")
		String_t* L_20 = __this->get_Object_Color_13();
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_00af;
		}
	}
	{
		String_t* L_22 = __this->get_Object_Color_13();
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00af;
		}
	}
	{
		String_t* L_24 = __this->get_Object_Color_13();
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0101;
		}
	}

IL_00af:
	{
		// if (tag != "Purple" && tag != "Orange" && tag != "Green")
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_26, _stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_01a2;
		}
	}
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_28, _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_01a2;
		}
	}
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_30, _stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_01a2;
		}
	}
	{
		// StartCoroutine(MovePlayer(new Vector3(175, 0, 0)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_32), (175.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		RuntimeObject* L_33;
		L_33 = Move4_MovePlayer_mB7CF66C3FB9C47AB2D00B66C6A22FF4ACBB320F2(__this, L_32, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_34;
		L_34 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_33, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0101:
	{
		// else if (Object_Color == "Purple" || Object_Color == "Orange" || Object_Color == "Green")
		String_t* L_35 = __this->get_Object_Color_13();
		bool L_36;
		L_36 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_35, _stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0137;
		}
	}
	{
		String_t* L_37 = __this->get_Object_Color_13();
		bool L_38;
		L_38 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_37, _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0137;
		}
	}
	{
		String_t* L_39 = __this->get_Object_Color_13();
		bool L_40;
		L_40 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_39, _stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_01a2;
		}
	}

IL_0137:
	{
		// if (tag == "Cell" || tag == "White")
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_41, _stringLiteral57090FFFD1D0EAA0B4EFB91612F4AE39D26BE660, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_0151;
		}
	}
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_43, _stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_01a2;
		}
	}

IL_0151:
	{
		// StartCoroutine(MovePlayer(new Vector3(175, 0, 0)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_45), (175.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		RuntimeObject* L_46;
		L_46 = Move4_MovePlayer_mB7CF66C3FB9C47AB2D00B66C6A22FF4ACBB320F2(__this, L_45, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_47;
		L_47 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_46, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0173:
	{
		// else if (tag == Object_Color)
		String_t* L_48 = V_1;
		String_t* L_49 = __this->get_Object_Color_13();
		bool L_50;
		L_50 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_48, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_01a2;
		}
	}
	{
		// StartCoroutine(MovePlayer(new Vector3(175, 0, 0)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_51), (175.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		RuntimeObject* L_52;
		L_52 = Move4_MovePlayer_mB7CF66C3FB9C47AB2D00B66C6A22FF4ACBB320F2(__this, L_51, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_53;
		L_53 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_52, /*hidden argument*/NULL);
	}

IL_01a2:
	{
		// }
		return;
	}
}
// System.Void Move4::Matchable_LEFT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move4_Matchable_LEFT_m470B1E4307EBA65C6BBE48A4E10DFD6A478BB008 (Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57090FFFD1D0EAA0B4EFB91612F4AE39D26BE660);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// RaycastHit2D hit_left = Physics2D.Raycast(transform.position, Vector3.left, RaycastRange);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_RaycastRange_4();
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_6;
		L_6 = Physics2D_Raycast_m684AD52FAD1E3BF5AE53F8E48AF92202114053C2(L_2, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// Debug.DrawRay(transform.position, Vector3.left * RaycastRange, Color.white);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		float L_10 = __this->get_RaycastRange_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121(L_8, L_11, L_12, /*hidden argument*/NULL);
		// string tag = hit_left.transform.tag;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// if (tag != "Border")
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_15, _stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_01a2;
		}
	}
	{
		// if (tag != Object_Color)
		String_t* L_17 = V_1;
		String_t* L_18 = __this->get_Object_Color_13();
		bool L_19;
		L_19 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0173;
		}
	}
	{
		// if (Object_Color == "Yellow" || Object_Color == "Blue" || Object_Color == "Red")
		String_t* L_20 = __this->get_Object_Color_13();
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_00af;
		}
	}
	{
		String_t* L_22 = __this->get_Object_Color_13();
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00af;
		}
	}
	{
		String_t* L_24 = __this->get_Object_Color_13();
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0101;
		}
	}

IL_00af:
	{
		// if (tag != "Purple" && tag != "Orange" && tag != "Green")
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_26, _stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_01a2;
		}
	}
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_28, _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_01a2;
		}
	}
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_30, _stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_01a2;
		}
	}
	{
		// StartCoroutine(MovePlayer(new Vector3(-175, 0, 0)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_32), (-175.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		RuntimeObject* L_33;
		L_33 = Move4_MovePlayer_mB7CF66C3FB9C47AB2D00B66C6A22FF4ACBB320F2(__this, L_32, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_34;
		L_34 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_33, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0101:
	{
		// else if (Object_Color == "Purple" || Object_Color == "Orange" || Object_Color == "Green")
		String_t* L_35 = __this->get_Object_Color_13();
		bool L_36;
		L_36 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_35, _stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0137;
		}
	}
	{
		String_t* L_37 = __this->get_Object_Color_13();
		bool L_38;
		L_38 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_37, _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0137;
		}
	}
	{
		String_t* L_39 = __this->get_Object_Color_13();
		bool L_40;
		L_40 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_39, _stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_01a2;
		}
	}

IL_0137:
	{
		// if (tag == "Cell" || tag == "White")
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_41, _stringLiteral57090FFFD1D0EAA0B4EFB91612F4AE39D26BE660, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_0151;
		}
	}
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_43, _stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_01a2;
		}
	}

IL_0151:
	{
		// StartCoroutine(MovePlayer(new Vector3(-175, 0, 0)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_45), (-175.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		RuntimeObject* L_46;
		L_46 = Move4_MovePlayer_mB7CF66C3FB9C47AB2D00B66C6A22FF4ACBB320F2(__this, L_45, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_47;
		L_47 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_46, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0173:
	{
		// else if (tag == Object_Color)
		String_t* L_48 = V_1;
		String_t* L_49 = __this->get_Object_Color_13();
		bool L_50;
		L_50 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_48, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_01a2;
		}
	}
	{
		// StartCoroutine(MovePlayer(new Vector3(-175, 0, 0)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_51), (-175.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		RuntimeObject* L_52;
		L_52 = Move4_MovePlayer_mB7CF66C3FB9C47AB2D00B66C6A22FF4ACBB320F2(__this, L_51, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_53;
		L_53 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_52, /*hidden argument*/NULL);
	}

IL_01a2:
	{
		// }
		return;
	}
}
// System.Void Move4::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move4_OnTriggerEnter2D_m8AA9E4051237AC320CA8EA52D849B832D341E861 (Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral648CBFB921B6A9293FFBFF3E55A66995306BF9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Object_Color != collision.gameObject.tag)
		String_t* L_0 = __this->get_Object_Color_13();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1 = ___collision0;
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_0, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_04cb;
		}
	}
	{
		// Vector3 currentPos = new Vector3(0, 0, 0);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// if(collision.transform.localPosition.x < 50 && collision.transform.localPosition.x > -50)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = ___collision0;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		if ((!(((float)L_8) < ((float)(50.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9 = ___collision0;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		if ((!(((float)L_12) > ((float)(-50.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		// currentPos.x = 0;
		(&V_0)->set_x_2((0.0f));
		// }
		goto IL_00b5;
	}

IL_006d:
	{
		// else if (collision.transform.localPosition.x > 160)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___collision0;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		if ((!(((float)L_16) > ((float)(160.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		// currentPos.x = 175;
		(&V_0)->set_x_2((175.0f));
		// }
		goto IL_00b5;
	}

IL_0092:
	{
		// else if (collision.transform.localPosition.x < 160)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_17 = ___collision0;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		if ((!(((float)L_20) < ((float)(160.0f)))))
		{
			goto IL_00b5;
		}
	}
	{
		// currentPos.x = -175;
		(&V_0)->set_x_2((-175.0f));
	}

IL_00b5:
	{
		// if (collision.transform.localPosition.y < 50 && collision.transform.localPosition.y > -50)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_21 = ___collision0;
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_y_3();
		if ((!(((float)L_24) < ((float)(50.0f)))))
		{
			goto IL_00f1;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_25 = ___collision0;
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_y_3();
		if ((!(((float)L_28) > ((float)(-50.0f)))))
		{
			goto IL_00f1;
		}
	}
	{
		// currentPos.y = 0;
		(&V_0)->set_y_3((0.0f));
		// }
		goto IL_0139;
	}

IL_00f1:
	{
		// else if (collision.transform.localPosition.y > 160)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_29 = ___collision0;
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_y_3();
		if ((!(((float)L_32) > ((float)(160.0f)))))
		{
			goto IL_0116;
		}
	}
	{
		// currentPos.y = 175;
		(&V_0)->set_y_3((175.0f));
		// }
		goto IL_0139;
	}

IL_0116:
	{
		// else if (collision.transform.localPosition.y < 160)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_33 = ___collision0;
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_y_3();
		if ((!(((float)L_36) < ((float)(160.0f)))))
		{
			goto IL_0139;
		}
	}
	{
		// currentPos.y = -175;
		(&V_0)->set_y_3((-175.0f));
	}

IL_0139:
	{
		// if (Object_Color == "Yellow")
		String_t* L_37 = __this->get_Object_Color_13();
		bool L_38;
		L_38 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_37, _stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_022d;
		}
	}
	{
		// if (collision.gameObject.tag == "Red")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_39 = ___collision0;
		NullCheck(L_39);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		String_t* L_41;
		L_41 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_40, /*hidden argument*/NULL);
		bool L_42;
		L_42 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_41, _stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_01a5;
		}
	}
	{
		// sm.OnPlop();
		Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * L_43 = __this->get_sm_15();
		NullCheck(L_43);
		Settingsmanager_OnPlop_m04AAFF668C3ADEFBA230AD9E99595D8622A2C14C(L_43, /*hidden argument*/NULL);
		// SpawnScript.SendMessage("CoPo", "Orange" + currentPos);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = __this->get_SpawnScript_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_0;
		V_1 = L_45;
		String_t* L_46;
		L_46 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		String_t* L_47;
		L_47 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_44, _stringLiteral648CBFB921B6A9293FFBFF3E55A66995306BF9BE, L_47, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
		L_48 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_48, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01a5:
	{
		// else if (collision.gameObject.tag == "Blue")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_49 = ___collision0;
		NullCheck(L_49);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50;
		L_50 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		String_t* L_51;
		L_51 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_50, /*hidden argument*/NULL);
		bool L_52;
		L_52 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_51, _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_01fc;
		}
	}
	{
		// sm.OnPlop();
		Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * L_53 = __this->get_sm_15();
		NullCheck(L_53);
		Settingsmanager_OnPlop_m04AAFF668C3ADEFBA230AD9E99595D8622A2C14C(L_53, /*hidden argument*/NULL);
		// SpawnScript.SendMessage("CoPo", "Green" + currentPos);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54 = __this->get_SpawnScript_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_0;
		V_1 = L_55;
		String_t* L_56;
		L_56 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		String_t* L_57;
		L_57 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5, L_56, /*hidden argument*/NULL);
		NullCheck(L_54);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_54, _stringLiteral648CBFB921B6A9293FFBFF3E55A66995306BF9BE, L_57, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58;
		L_58 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_58, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01fc:
	{
		// else if (collision.gameObject.tag == "White")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_59 = ___collision0;
		NullCheck(L_59);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60;
		L_60 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		String_t* L_61;
		L_61 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_60, /*hidden argument*/NULL);
		bool L_62;
		L_62 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_61, _stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_04f9;
		}
	}
	{
		// sm.OnPlop();
		Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * L_63 = __this->get_sm_15();
		NullCheck(L_63);
		Settingsmanager_OnPlop_m04AAFF668C3ADEFBA230AD9E99595D8622A2C14C(L_63, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_64 = ___collision0;
		NullCheck(L_64);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65;
		L_65 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_65, /*hidden argument*/NULL);
		// }
		return;
	}

IL_022d:
	{
		// else if (Object_Color == "Red")
		String_t* L_66 = __this->get_Object_Color_13();
		bool L_67;
		L_67 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_66, _stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_0321;
		}
	}
	{
		// if (collision.gameObject.tag == "Yellow")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_68 = ___collision0;
		NullCheck(L_68);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69;
		L_69 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		String_t* L_70;
		L_70 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_69, /*hidden argument*/NULL);
		bool L_71;
		L_71 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_70, _stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6, /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_0299;
		}
	}
	{
		// sm.OnPlop();
		Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * L_72 = __this->get_sm_15();
		NullCheck(L_72);
		Settingsmanager_OnPlop_m04AAFF668C3ADEFBA230AD9E99595D8622A2C14C(L_72, /*hidden argument*/NULL);
		// SpawnScript.SendMessage("CoPo", "Orange" + currentPos);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = __this->get_SpawnScript_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74 = V_0;
		V_1 = L_74;
		String_t* L_75;
		L_75 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		String_t* L_76;
		L_76 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C, L_75, /*hidden argument*/NULL);
		NullCheck(L_73);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_73, _stringLiteral648CBFB921B6A9293FFBFF3E55A66995306BF9BE, L_76, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77;
		L_77 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_77, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0299:
	{
		// else if (collision.gameObject.tag == "Blue")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_78 = ___collision0;
		NullCheck(L_78);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79;
		L_79 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_78, /*hidden argument*/NULL);
		NullCheck(L_79);
		String_t* L_80;
		L_80 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_79, /*hidden argument*/NULL);
		bool L_81;
		L_81 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_80, _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA, /*hidden argument*/NULL);
		if (!L_81)
		{
			goto IL_02f0;
		}
	}
	{
		// sm.OnPlop();
		Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * L_82 = __this->get_sm_15();
		NullCheck(L_82);
		Settingsmanager_OnPlop_m04AAFF668C3ADEFBA230AD9E99595D8622A2C14C(L_82, /*hidden argument*/NULL);
		// SpawnScript.SendMessage("CoPo", "Purple" + currentPos);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83 = __this->get_SpawnScript_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84 = V_0;
		V_1 = L_84;
		String_t* L_85;
		L_85 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		String_t* L_86;
		L_86 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A, L_85, /*hidden argument*/NULL);
		NullCheck(L_83);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_83, _stringLiteral648CBFB921B6A9293FFBFF3E55A66995306BF9BE, L_86, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87;
		L_87 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_87, /*hidden argument*/NULL);
		// }
		return;
	}

IL_02f0:
	{
		// else if (collision.gameObject.tag == "White")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_88 = ___collision0;
		NullCheck(L_88);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_89;
		L_89 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_88, /*hidden argument*/NULL);
		NullCheck(L_89);
		String_t* L_90;
		L_90 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_89, /*hidden argument*/NULL);
		bool L_91;
		L_91 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_90, _stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22, /*hidden argument*/NULL);
		if (!L_91)
		{
			goto IL_04f9;
		}
	}
	{
		// sm.OnPlop();
		Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * L_92 = __this->get_sm_15();
		NullCheck(L_92);
		Settingsmanager_OnPlop_m04AAFF668C3ADEFBA230AD9E99595D8622A2C14C(L_92, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_93 = ___collision0;
		NullCheck(L_93);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_94;
		L_94 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_93, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_94, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0321:
	{
		// else if (Object_Color == "Blue")
		String_t* L_95 = __this->get_Object_Color_13();
		bool L_96;
		L_96 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_95, _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA, /*hidden argument*/NULL);
		if (!L_96)
		{
			goto IL_0415;
		}
	}
	{
		// if (collision.gameObject.tag == "Yellow")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_97 = ___collision0;
		NullCheck(L_97);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_98;
		L_98 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_97, /*hidden argument*/NULL);
		NullCheck(L_98);
		String_t* L_99;
		L_99 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_98, /*hidden argument*/NULL);
		bool L_100;
		L_100 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_99, _stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6, /*hidden argument*/NULL);
		if (!L_100)
		{
			goto IL_038d;
		}
	}
	{
		// sm.OnPlop();
		Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * L_101 = __this->get_sm_15();
		NullCheck(L_101);
		Settingsmanager_OnPlop_m04AAFF668C3ADEFBA230AD9E99595D8622A2C14C(L_101, /*hidden argument*/NULL);
		// SpawnScript.SendMessage("CoPo", "Green" + currentPos);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_102 = __this->get_SpawnScript_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103 = V_0;
		V_1 = L_103;
		String_t* L_104;
		L_104 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		String_t* L_105;
		L_105 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5, L_104, /*hidden argument*/NULL);
		NullCheck(L_102);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_102, _stringLiteral648CBFB921B6A9293FFBFF3E55A66995306BF9BE, L_105, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_106;
		L_106 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_106, /*hidden argument*/NULL);
		// }
		return;
	}

IL_038d:
	{
		// else if (collision.gameObject.tag == "Red")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_107 = ___collision0;
		NullCheck(L_107);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_108;
		L_108 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_107, /*hidden argument*/NULL);
		NullCheck(L_108);
		String_t* L_109;
		L_109 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_108, /*hidden argument*/NULL);
		bool L_110;
		L_110 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_109, _stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4, /*hidden argument*/NULL);
		if (!L_110)
		{
			goto IL_03e4;
		}
	}
	{
		// sm.OnPlop();
		Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * L_111 = __this->get_sm_15();
		NullCheck(L_111);
		Settingsmanager_OnPlop_m04AAFF668C3ADEFBA230AD9E99595D8622A2C14C(L_111, /*hidden argument*/NULL);
		// SpawnScript.SendMessage("CoPo", "Purple" + currentPos);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_112 = __this->get_SpawnScript_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113 = V_0;
		V_1 = L_113;
		String_t* L_114;
		L_114 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		String_t* L_115;
		L_115 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A, L_114, /*hidden argument*/NULL);
		NullCheck(L_112);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_112, _stringLiteral648CBFB921B6A9293FFBFF3E55A66995306BF9BE, L_115, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_116;
		L_116 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_116, /*hidden argument*/NULL);
		// }
		return;
	}

IL_03e4:
	{
		// else if (collision.gameObject.tag == "White")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_117 = ___collision0;
		NullCheck(L_117);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_118;
		L_118 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_117, /*hidden argument*/NULL);
		NullCheck(L_118);
		String_t* L_119;
		L_119 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_118, /*hidden argument*/NULL);
		bool L_120;
		L_120 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_119, _stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22, /*hidden argument*/NULL);
		if (!L_120)
		{
			goto IL_04f9;
		}
	}
	{
		// sm.OnPlop();
		Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * L_121 = __this->get_sm_15();
		NullCheck(L_121);
		Settingsmanager_OnPlop_m04AAFF668C3ADEFBA230AD9E99595D8622A2C14C(L_121, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_122 = ___collision0;
		NullCheck(L_122);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_123;
		L_123 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_122, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_123, /*hidden argument*/NULL);
		// }else if(Object_Color == "White")
		return;
	}

IL_0415:
	{
		// }else if(Object_Color == "White")
		String_t* L_124 = __this->get_Object_Color_13();
		bool L_125;
		L_125 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_124, _stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22, /*hidden argument*/NULL);
		if (!L_125)
		{
			goto IL_04f9;
		}
	}
	{
		// if (collision.gameObject.tag == "Yellow" || collision.gameObject.tag == "Red" || collision.gameObject.tag == "Blue" || collision.gameObject.tag == "Orange" || collision.gameObject.tag == "Green" || collision.gameObject.tag == "Purple")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_126 = ___collision0;
		NullCheck(L_126);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_127;
		L_127 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_126, /*hidden argument*/NULL);
		NullCheck(L_127);
		String_t* L_128;
		L_128 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_127, /*hidden argument*/NULL);
		bool L_129;
		L_129 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_128, _stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6, /*hidden argument*/NULL);
		if (L_129)
		{
			goto IL_04b4;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_130 = ___collision0;
		NullCheck(L_130);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_131;
		L_131 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_130, /*hidden argument*/NULL);
		NullCheck(L_131);
		String_t* L_132;
		L_132 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_131, /*hidden argument*/NULL);
		bool L_133;
		L_133 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_132, _stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4, /*hidden argument*/NULL);
		if (L_133)
		{
			goto IL_04b4;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_134 = ___collision0;
		NullCheck(L_134);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_135;
		L_135 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_134, /*hidden argument*/NULL);
		NullCheck(L_135);
		String_t* L_136;
		L_136 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_135, /*hidden argument*/NULL);
		bool L_137;
		L_137 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_136, _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA, /*hidden argument*/NULL);
		if (L_137)
		{
			goto IL_04b4;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_138 = ___collision0;
		NullCheck(L_138);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_139;
		L_139 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_138, /*hidden argument*/NULL);
		NullCheck(L_139);
		String_t* L_140;
		L_140 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_139, /*hidden argument*/NULL);
		bool L_141;
		L_141 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_140, _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C, /*hidden argument*/NULL);
		if (L_141)
		{
			goto IL_04b4;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_142 = ___collision0;
		NullCheck(L_142);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_143;
		L_143 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_142, /*hidden argument*/NULL);
		NullCheck(L_143);
		String_t* L_144;
		L_144 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_143, /*hidden argument*/NULL);
		bool L_145;
		L_145 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_144, _stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5, /*hidden argument*/NULL);
		if (L_145)
		{
			goto IL_04b4;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_146 = ___collision0;
		NullCheck(L_146);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_147;
		L_147 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_146, /*hidden argument*/NULL);
		NullCheck(L_147);
		String_t* L_148;
		L_148 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_147, /*hidden argument*/NULL);
		bool L_149;
		L_149 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_148, _stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A, /*hidden argument*/NULL);
		if (!L_149)
		{
			goto IL_04f9;
		}
	}

IL_04b4:
	{
		// sm.OnPlop();
		Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * L_150 = __this->get_sm_15();
		NullCheck(L_150);
		Settingsmanager_OnPlop_m04AAFF668C3ADEFBA230AD9E99595D8622A2C14C(L_150, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_151;
		L_151 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_151, /*hidden argument*/NULL);
		// }
		return;
	}

IL_04cb:
	{
		// else if (Object_Color == collision.gameObject.tag)
		String_t* L_152 = __this->get_Object_Color_13();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_153 = ___collision0;
		NullCheck(L_153);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_154;
		L_154 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_153, /*hidden argument*/NULL);
		NullCheck(L_154);
		String_t* L_155;
		L_155 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_154, /*hidden argument*/NULL);
		bool L_156;
		L_156 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_152, L_155, /*hidden argument*/NULL);
		if (!L_156)
		{
			goto IL_04f9;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_157;
		L_157 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_157, /*hidden argument*/NULL);
		// sm.OnPlop();
		Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * L_158 = __this->get_sm_15();
		NullCheck(L_158);
		Settingsmanager_OnPlop_m04AAFF668C3ADEFBA230AD9E99595D8622A2C14C(L_158, /*hidden argument*/NULL);
	}

IL_04f9:
	{
		// }
		return;
	}
}
// System.Void Move4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move4__ctor_m683023A20931FD09A59D9A5DF9D3ABAE81DD3A1D (Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * __this, const RuntimeMethod* method)
{
	{
		// private float RaycastRange = 2f; 
		__this->set_RaycastRange_4((2.0f));
		// private float timeToMove = 0.1f;
		__this->set_timeToMove_8((0.100000001f));
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
// System.Void Move5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move5__ctor_m5A312E328826D5B4A2C65D17F1573B0EA2FAF67A (Move5_tEACA69657BAC4A8BB7329D9AC6F9188A30A6EEFC * __this, const RuntimeMethod* method)
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
// System.Void Settingsmanager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settingsmanager_Start_m861D0A7103638B55F0905C986DBB107BEF5B35F9 (Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06_m5014510BCA25449D1DA7FAAD5C429473366986B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24AF3BE808F40FDA02AF68475B41A693500D036A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// lowPass = GetComponent<AudioLowPassFilter>();
		AudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06 * L_0;
		L_0 = Component_GetComponent_TisAudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06_m5014510BCA25449D1DA7FAAD5C429473366986B4(__this, /*hidden argument*/Component_GetComponent_TisAudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06_m5014510BCA25449D1DA7FAAD5C429473366986B4_RuntimeMethod_var);
		__this->set_lowPass_4(L_0);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_5(L_1);
		// GameObject obj = GameObject.Find("SoundEffectmanager");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral24AF3BE808F40FDA02AF68475B41A693500D036A, /*hidden argument*/NULL);
		V_0 = L_2;
		// e_audioSource = obj.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		NullCheck(L_3);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4;
		L_4 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_3, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		__this->set_e_audioSource_6(L_4);
		// if (PlayerPrefs.GetInt("Mute") == 1)
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0044;
		}
	}
	{
		// audio_Mute = true;
		__this->set_audio_Mute_7((bool)1);
		// }
		return;
	}

IL_0044:
	{
		// audio_Mute = false;
		__this->set_audio_Mute_7((bool)0);
		// }
		return;
	}
}
// System.Void Settingsmanager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settingsmanager_Update_mFF3F8E964CB2F10844842E81DE69BAE31FDCE561 (Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * __this, const RuntimeMethod* method)
{
	{
		// if(audio_Mute == true)
		bool L_0 = __this->get_audio_Mute_7();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// audioSource.Pause();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_5();
		NullCheck(L_1);
		AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D(L_1, /*hidden argument*/NULL);
		// Unmute.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Unmute_9();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0020:
	{
		// audioSource.UnPause();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_audioSource_5();
		NullCheck(L_3);
		AudioSource_UnPause_m17BEE2B5A9607757EF0635450D210E4FD5E3EAF2(L_3, /*hidden argument*/NULL);
		// Unmute.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Unmute_9();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Settingsmanager::OnOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settingsmanager_OnOpenSettings_m8F2CC0F612DF0A324EE23FFE4B433EC0E7288A40 (Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 0.5f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.5f), /*hidden argument*/NULL);
		// lowPass.cutoffFrequency = 500;
		AudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06 * L_0 = __this->get_lowPass_4();
		NullCheck(L_0);
		AudioLowPassFilter_set_cutoffFrequency_m41DA5E0DC3CE2DC8B1AE7D5ABF49FA98A24BC0A8(L_0, (500.0f), /*hidden argument*/NULL);
		// e_audioSource.PlayOneShot(click, 1F);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_e_audioSource_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_click_10();
		NullCheck(L_1);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_1, L_2, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Settingsmanager::OnExitSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settingsmanager_OnExitSettings_m7E567BEBEF2DE5BB1048FAB87B22998068B89557 (Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 1.0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// lowPass.cutoffFrequency = 5007.7f;
		AudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06 * L_0 = __this->get_lowPass_4();
		NullCheck(L_0);
		AudioLowPassFilter_set_cutoffFrequency_m41DA5E0DC3CE2DC8B1AE7D5ABF49FA98A24BC0A8(L_0, (5007.7002f), /*hidden argument*/NULL);
		// e_audioSource.PlayOneShot(click, 1F);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_e_audioSource_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_click_10();
		NullCheck(L_1);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_1, L_2, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Settingsmanager::OnMute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settingsmanager_OnMute_mBD7BD01B7C042C9BA47EDBBF7B483834486F91B4 (Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audio_Mute = true;
		__this->set_audio_Mute_7((bool)1);
		// PlayerPrefs.SetInt("Mute", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D, 1, /*hidden argument*/NULL);
		// e_audioSource.PlayOneShot(click, 1F);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_e_audioSource_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_click_10();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_0, L_1, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Settingsmanager::OnUnmute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settingsmanager_OnUnmute_m60415EBDA5FDC07816C6C3EA36D37AABDD617BCC (Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audio_Mute = false;
		__this->set_audio_Mute_7((bool)0);
		// PlayerPrefs.SetInt("Mute", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D, 0, /*hidden argument*/NULL);
		// e_audioSource.PlayOneShot(click, 1F);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_e_audioSource_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_click_10();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_0, L_1, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Settingsmanager::ReloadLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settingsmanager_ReloadLevel_m369F8FCBC694CE03D839D0F0AE13AE7941A158FB (Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("SampleScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Settingsmanager::OnOpenInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settingsmanager_OnOpenInfo_m60CC09A5ACEB17DC8D42DFA30CF8A8A70C014BA1 (Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 0.5f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.5f), /*hidden argument*/NULL);
		// lowPass.cutoffFrequency = 500;
		AudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06 * L_0 = __this->get_lowPass_4();
		NullCheck(L_0);
		AudioLowPassFilter_set_cutoffFrequency_m41DA5E0DC3CE2DC8B1AE7D5ABF49FA98A24BC0A8(L_0, (500.0f), /*hidden argument*/NULL);
		// e_audioSource.PlayOneShot(click, 1F);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_e_audioSource_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_click_10();
		NullCheck(L_1);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_1, L_2, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Settingsmanager::OnCloseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settingsmanager_OnCloseInfo_m69C8CEBEF488A899BDD841A2A6392DF05C0743C6 (Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 1.0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// lowPass.cutoffFrequency = 5007.7f;
		AudioLowPassFilter_t5FFDAD1A328004D17DD5E28FEA2F5468E6C2AC06 * L_0 = __this->get_lowPass_4();
		NullCheck(L_0);
		AudioLowPassFilter_set_cutoffFrequency_m41DA5E0DC3CE2DC8B1AE7D5ABF49FA98A24BC0A8(L_0, (5007.7002f), /*hidden argument*/NULL);
		// e_audioSource.PlayOneShot(click, 1F);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_e_audioSource_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_click_10();
		NullCheck(L_1);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_1, L_2, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Settingsmanager::Instagram()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settingsmanager_Instagram_m54F2C31A8ECBFDC2A54B1FD9BD079ABA9F160689 (Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00E785D525A1939C2B3F42477DCA1EE1C4BFE687);
		s_Il2CppMethodInitialized = true;
	}
	{
		// e_audioSource.PlayOneShot(click, 1F);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_e_audioSource_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_click_10();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_0, L_1, (1.0f), /*hidden argument*/NULL);
		// Application.OpenURL("https:
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(_stringLiteral00E785D525A1939C2B3F42477DCA1EE1C4BFE687, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Settingsmanager::Discord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settingsmanager_Discord_m6B8A04555336ABBBF97A8804E012A86478529292 (Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22186B2AA4D80E60A74847E554FC8CF3817496BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// e_audioSource.PlayOneShot(click, 1F);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_e_audioSource_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_click_10();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_0, L_1, (1.0f), /*hidden argument*/NULL);
		// Application.OpenURL("https:
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(_stringLiteral22186B2AA4D80E60A74847E554FC8CF3817496BA, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Settingsmanager::CursedDog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settingsmanager_CursedDog_m18D48010867A6283EC7A6D21699ACD812103E4BA (Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C1FD5B632BD065200428794FE3FAA533A29BF38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// e_audioSource.PlayOneShot(click, 1F);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_e_audioSource_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_click_10();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_0, L_1, (1.0f), /*hidden argument*/NULL);
		// Application.OpenURL("http:
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(_stringLiteral1C1FD5B632BD065200428794FE3FAA533A29BF38, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Settingsmanager::OnPlop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settingsmanager_OnPlop_m04AAFF668C3ADEFBA230AD9E99595D8622A2C14C (Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * __this, const RuntimeMethod* method)
{
	{
		// e_audioSource.PlayOneShot(plop, 1F);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_e_audioSource_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_plop_11();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_0, L_1, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Settingsmanager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settingsmanager__ctor_m34D39A6848AAFEABF645334E4CB7E683DB4CBFFD (Settingsmanager_t74DF74629879D8014C38BB89916C8BCC02C0A07F * __this, const RuntimeMethod* method)
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
// System.Void SpawnScript::CoPo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnScript_CoPo_mA35C9D7491474F30EA54DAE040558AD50A25E4DC (SpawnScript_t4AB21AEC053EF306685CF2B58C3FFDC2408C2D23 * __this, String_t* ___spawnPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	{
		// num += 1;
		int32_t L_0 = __this->get_num_6();
		__this->set_num_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (num % 2 == 1)
		int32_t L_1 = __this->get_num_6();
		if ((!(((uint32_t)((int32_t)((int32_t)L_1%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_0043;
		}
	}
	{
		// collisionList.Add(spawnPos);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = __this->get_collisionList_5();
		String_t* L_3 = ___spawnPos0;
		NullCheck(L_2);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_2, L_3, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// string[] Color = spawnPos.Split('(');
		String_t* L_4 = ___spawnPos0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)40));
		NullCheck(L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7;
		L_7 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// Spawn(Color[0], Color[1]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 1;
		String_t* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		SpawnScript_Spawn_m3E4DB576A5450772D2A0E0EB626A6262C92AA04C(__this, L_10, L_13, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void SpawnScript::Spawn(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnScript_Spawn_m3E4DB576A5450772D2A0E0EB626A6262C92AA04C (SpawnScript_t4AB21AEC053EF306685CF2B58C3FFDC2408C2D23 * __this, String_t* ___color0, String_t* ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Debug.Log(color);
		String_t* L_0 = ___color0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
		// string[] sArray = position.Split(',');
		String_t* L_1 = ___position1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4;
		L_4 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (float.Parse(sArray[0]) == 1750)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		float L_8;
		L_8 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_7, /*hidden argument*/NULL);
		if ((!(((float)L_8) == ((float)(1750.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		// x = 175f;
		__this->set_x_9((175.0f));
		// }
		goto IL_005e;
	}

IL_0034:
	{
		// else if (float.Parse(sArray[0]) == -1750)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		float L_12;
		L_12 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_11, /*hidden argument*/NULL);
		if ((!(((float)L_12) == ((float)(-1750.0f)))))
		{
			goto IL_0050;
		}
	}
	{
		// x = -175f;
		__this->set_x_9((-175.0f));
		// }
		goto IL_005e;
	}

IL_0050:
	{
		// x = float.Parse(sArray[0]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		float L_16;
		L_16 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_15, /*hidden argument*/NULL);
		__this->set_x_9(L_16);
	}

IL_005e:
	{
		// if (float.Parse(sArray[1]) == 1750)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 1;
		String_t* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		float L_20;
		L_20 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_19, /*hidden argument*/NULL);
		if ((!(((float)L_20) == ((float)(1750.0f)))))
		{
			goto IL_007a;
		}
	}
	{
		// y = 175f;
		__this->set_y_10((175.0f));
		// }
		goto IL_00a4;
	}

IL_007a:
	{
		// else if (float.Parse(sArray[1]) == -1750)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 1;
		String_t* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		float L_24;
		L_24 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_23, /*hidden argument*/NULL);
		if ((!(((float)L_24) == ((float)(-1750.0f)))))
		{
			goto IL_0096;
		}
	}
	{
		// y = -175f;
		__this->set_y_10((-175.0f));
		// }
		goto IL_00a4;
	}

IL_0096:
	{
		// y = float.Parse(sArray[1]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = 1;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		float L_28;
		L_28 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_27, /*hidden argument*/NULL);
		__this->set_y_10(L_28);
	}

IL_00a4:
	{
		// Vector3 finalPos = new Vector3(x, y, 0);
		float L_29 = __this->get_x_9();
		float L_30 = __this->get_y_10();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), L_29, L_30, (0.0f), /*hidden argument*/NULL);
		// Debug.Log(finalPos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = L_31;
		RuntimeObject * L_33 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_32);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_33, /*hidden argument*/NULL);
		// currentNum.text = position;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_34 = __this->get_currentNum_8();
		String_t* L_35 = ___position1;
		NullCheck(L_34);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_34, L_35);
		// GameObject NewColor = Instantiate(Sprite_Prefab, finalPos, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_Sprite_Prefab_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38;
		L_38 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_36, L_37, L_38, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// NewColor.transform.SetParent(currentLvl.transform, false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = L_39;
		NullCheck(L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_40, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = __this->get_currentLvl_7();
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
		NullCheck(L_41);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_41, L_43, (bool)0, /*hidden argument*/NULL);
		// NewColor.tag = color;
		String_t* L_44 = ___color0;
		NullCheck(L_40);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_40, L_44, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpawnScript::current(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnScript_current_mB203F03DEF550BCEFB3CDF072C1927C6BF67A2F3 (SpawnScript_t4AB21AEC053EF306685CF2B58C3FFDC2408C2D23 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___lvl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(lvl.transform.name);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___lvl0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// currentLvl = lvl;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___lvl0;
		__this->set_currentLvl_7(L_3);
		// }
		return;
	}
}
// System.Void SpawnScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnScript__ctor_m884B5A8EF76CF03F723CAF95212261CA915EF3AB (SpawnScript_t4AB21AEC053EF306685CF2B58C3FFDC2408C2D23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> collisionList = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_collisionList_5(L_0);
		// public int num = 1;
		__this->set_num_6(1);
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
// System.Void TargetScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetScript_Start_mE06F418AF45C7FAD8EFBBACA680F725F3C91F75B (TargetScript_t08836AA5554CD41C0CA340C13057714795FD4044 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target_Text = gameObject.GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_target_Text_4(L_1);
		// Target = target_Text.text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_target_Text_4();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		__this->set_Target_5(L_3);
		// lastLeft = GameObject.FindGameObjectsWithTag(Target);
		String_t* L_4 = __this->get_Target_5();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5;
		L_5 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(L_4, /*hidden argument*/NULL);
		__this->set_lastLeft_6(L_5);
		// }
		return;
	}
}
// System.Void TargetScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetScript_Update_m43BE00CADF87DFAE1D8169302687255C84495971 (TargetScript_t08836AA5554CD41C0CA340C13057714795FD4044 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Purple = GameObject.FindGameObjectsWithTag("Purple");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral8E68E9FAEC7150DBFFF4198365BD772DE872934A, /*hidden argument*/NULL);
		__this->set_Purple_8(L_0);
		// Green = GameObject.FindGameObjectsWithTag("Green");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5, /*hidden argument*/NULL);
		__this->set_Green_9(L_1);
		// Orange = GameObject.FindGameObjectsWithTag("Orange");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2;
		L_2 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C, /*hidden argument*/NULL);
		__this->set_Orange_10(L_2);
		// Red = GameObject.FindGameObjectsWithTag("Red");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3;
		L_3 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4, /*hidden argument*/NULL);
		__this->set_Red_11(L_3);
		// Blue = GameObject.FindGameObjectsWithTag("Blue");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4;
		L_4 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA, /*hidden argument*/NULL);
		__this->set_Blue_12(L_4);
		// Yellow = GameObject.FindGameObjectsWithTag("Yellow");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5;
		L_5 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6, /*hidden argument*/NULL);
		__this->set_Yellow_13(L_5);
		// int nine = Purple.Length + Green.Length + Orange.Length + Red.Length + Blue.Length + Yellow.Length;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_Purple_8();
		NullCheck(L_6);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_Green_9();
		NullCheck(L_7);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = __this->get_Orange_10();
		NullCheck(L_8);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = __this->get_Red_11();
		NullCheck(L_9);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get_Blue_12();
		NullCheck(L_10);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get_Yellow_13();
		NullCheck(L_11);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))));
		// if(Target != "Empty")
		String_t* L_12 = __this->get_Target_5();
		bool L_13;
		L_13 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_12, _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00d8;
		}
	}
	{
		// if (GameObject.FindGameObjectsWithTag(Target).Length == 1 && nine == 1)
		String_t* L_14 = __this->get_Target_5();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15;
		L_15 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_00e6;
		}
	}
	{
		// Destroy(GameObject.FindGameObjectWithTag(Target));
		String_t* L_17 = __this->get_Target_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_18, /*hidden argument*/NULL);
		// MM.OnSucceed();
		MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * L_19 = __this->get_MM_7();
		NullCheck(L_19);
		MenuManager_OnSucceed_m251E278AE5E54A929BEDEE4FD7EC5900FB82646A(L_19, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00d8:
	{
		// if(nine == 0)
		int32_t L_20 = V_0;
		if (L_20)
		{
			goto IL_00e6;
		}
	}
	{
		// MM.OnSucceed();
		MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * L_21 = __this->get_MM_7();
		NullCheck(L_21);
		MenuManager_OnSucceed_m251E278AE5E54A929BEDEE4FD7EC5900FB82646A(L_21, /*hidden argument*/NULL);
	}

IL_00e6:
	{
		// }
		return;
	}
}
// System.Void TargetScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetScript__ctor_m93A9ACBB15A4AE2F03C6BB4F3AF877BEBD8CF95A (TargetScript_t08836AA5554CD41C0CA340C13057714795FD4044 * __this, const RuntimeMethod* method)
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
// System.Void White_Script::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void White_Script_Start_mA3D269301E979CF4678B04DD92AF63A95ED22400 (White_Script_t7057F81EA3856E4564D92B9AAB1FB657A01C4E22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// square = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0;
		L_0 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set_square_4(L_0);
		// }
		return;
	}
}
// System.Void White_Script::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void White_Script_OnTriggerEnter2D_m61031EB3A1C3497B6C60DBC203CBC49968271378 (White_Script_t7057F81EA3856E4564D92B9AAB1FB657A01C4E22 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "White")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral271DE06C3125CB3D128E9B0C31D9A30DC59CAE22, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// square.color = Color.white;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_square_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// }else if (collision.gameObject.tag == "Blue")
		return;
	}

IL_0028:
	{
		// }else if (collision.gameObject.tag == "Blue")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6 = ___collision0;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		// square.color = Color.blue;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = __this->get_square_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// }else if (collision.gameObject.tag == "Red")
		return;
	}

IL_0050:
	{
		// }else if (collision.gameObject.tag == "Red")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12 = ___collision0;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0078;
		}
	}
	{
		// square.color = Color.red;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_16 = __this->get_square_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		L_17 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
		// }else if (collision.gameObject.tag == "Yellow")
		return;
	}

IL_0078:
	{
		// }else if (collision.gameObject.tag == "Yellow")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_18 = ___collision0;
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_19, /*hidden argument*/NULL);
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteral75DAD94535A79F2149221C6619F899F4BDE2C7F6, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00a0;
		}
	}
	{
		// square.color = Color.yellow;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_22 = __this->get_square_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23;
		L_23 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_23);
		// }
		return;
	}

IL_00a0:
	{
		// else if (collision.gameObject.tag == "Green")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_24 = ___collision0;
		NullCheck(L_24);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_25, /*hidden argument*/NULL);
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00c7;
		}
	}
	{
		// square.color = Color.green;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_square_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_29;
		L_29 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		NullCheck(L_28);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_28, L_29);
	}

IL_00c7:
	{
		// }
		return;
	}
}
// System.Void White_Script::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void White_Script__ctor_m40C51B22BAF82402B2B2F17C7891521DC824EB94 (White_Script_t7057F81EA3856E4564D92B9AAB1FB657A01C4E22 * __this, const RuntimeMethod* method)
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
// System.Void Move4/<MovePlayer>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMovePlayerU3Ed__18__ctor_mC4875D7F0932A3B6AD2B8383EA16B03014727F16 (U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Move4/<MovePlayer>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMovePlayerU3Ed__18_System_IDisposable_Dispose_mB7D2E438F5F138973AB1D96CA7FE1CF55B74C9C4 (U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Move4/<MovePlayer>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMovePlayerU3Ed__18_MoveNext_m5E165800B5732CA2E285C2645BE8BB4CDD0AC8FA (U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ad;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isMoving = true;
		Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_isMoving_5((bool)1);
		// float elapsedTime = 0;
		__this->set_U3CelapsedTimeU3E5__2_4((0.0f));
		// origPos = gameObject.transform.localPosition;
		Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * L_5 = V_1;
		Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * L_6 = V_1;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_origPos_6(L_9);
		// targetPos = origPos + direction;
		Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * L_10 = V_1;
		Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * L_11 = V_1;
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = L_11->get_origPos_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_direction_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_targetPos_7(L_14);
		goto IL_00b4;
	}

IL_0062:
	{
		// transform.localPosition = Vector3.Lerp(origPos, targetPos, (elapsedTime / timeToMove));
		Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * L_15 = V_1;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * L_17 = V_1;
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = L_17->get_origPos_6();
		Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * L_19 = V_1;
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = L_19->get_targetPos_7();
		float L_21 = __this->get_U3CelapsedTimeU3E5__2_4();
		Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->get_timeToMove_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_18, L_20, ((float)((float)L_21/(float)L_23)), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_16, L_24, /*hidden argument*/NULL);
		// elapsedTime += Time.deltaTime;
		float L_25 = __this->get_U3CelapsedTimeU3E5__2_4();
		float L_26;
		L_26 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CelapsedTimeU3E5__2_4(((float)il2cpp_codegen_add((float)L_25, (float)L_26)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ad:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00b4:
	{
		// while(elapsedTime < timeToMove)
		float L_27 = __this->get_U3CelapsedTimeU3E5__2_4();
		Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * L_28 = V_1;
		NullCheck(L_28);
		float L_29 = L_28->get_timeToMove_8();
		if ((((float)L_27) < ((float)L_29)))
		{
			goto IL_0062;
		}
	}
	{
		// transform.localPosition = targetPos;
		Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * L_30 = V_1;
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_30, /*hidden argument*/NULL);
		Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * L_32 = V_1;
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = L_32->get_targetPos_7();
		NullCheck(L_31);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_31, L_33, /*hidden argument*/NULL);
		// isMoving = false;
		Move4_tE49DBBB7833B38A679B45D88213B74EFC70FE46E * L_34 = V_1;
		NullCheck(L_34);
		L_34->set_isMoving_5((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object Move4/<MovePlayer>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMovePlayerU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7F1B6F6DDFAA371D65479F4BD9452FC1293CBAEF (U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Move4/<MovePlayer>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMovePlayerU3Ed__18_System_Collections_IEnumerator_Reset_m0F2C460D1BCB4C3F8D3AADD269D620B873E87F9A (U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMovePlayerU3Ed__18_System_Collections_IEnumerator_Reset_m0F2C460D1BCB4C3F8D3AADD269D620B873E87F9A_RuntimeMethod_var)));
	}
}
// System.Object Move4/<MovePlayer>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMovePlayerU3Ed__18_System_Collections_IEnumerator_get_Current_mF8475A6A245E27EFB5A6259C1F8B71D67C33327B (U3CMovePlayerU3Ed__18_t09B15C696158F07915AD804636AE2E94313AAFBC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CurrentSelected; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_CurrentSelected_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
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
