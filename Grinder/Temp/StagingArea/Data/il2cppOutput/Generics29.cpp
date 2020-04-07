﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Rewired.ControllerMap
struct ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB;
// Rewired.ControllerMap[]
struct ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E;
// Rewired.InputCategory
struct InputCategory_t775B2399E2070EF82BBA5D9676BD00C30159D918;
// Rewired.InputMapCategory
struct InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602;
// Rewired.ReInput/MappingHelper
struct MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6;
// Rewired.Utils.Classes.Data.AList`1<Rewired.ActionElementMap>
struct AList_1_t3CE454271698B03A6EA53DA068272454E1A22108;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>[]
struct EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A;
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerMap>
struct IEnumerable_1_t06A83164121EF2D4BC775427918CA10743B9E150;
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerMap>
struct IEnumerator_1_tE4594D4F4247CA1E6C800101476D4854FC0747E0;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_tDDB69E91697CCB64C7993B651487CEEC287DB7E8;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.IList`1<Rewired.ControllerMap>
struct IList_1_t0AA780B699DC47233A67CE0B7A7905781C4E78B4;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_tE09735A322C3B17000EF4E4BC8026FEDEB7B0D9B;
// System.Collections.Generic.List`1<Rewired.ControllerMap>
struct List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Int32>>
struct Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>
struct Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ActionElementMap>
struct ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ControllerMap>
struct ReadOnlyCollection_1_t42C6EC4956F81037B0696DDF4310EEAD899406F9;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t0B2A88F2C4A2D26A4E1526F7063F654FAA26CB2A;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50;
// System.Comparison`1<System.Object>
struct Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.Security.Principal.IPrincipal
struct IPrincipal_t63FD7F58FBBE134C8FE4D31710AAEA00B000F0BF;
// System.String
struct String_t;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A;
// System.Threading.ExecutionContext
struct ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70;
// System.Threading.InternalThread
struct InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>
struct UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct UnityEvent_3_t2806FFBD49F1501D6C532F2520EFAB143233B6D9;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3;
// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback
struct ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0;
// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54;
// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;
// oFErIGnUOtKvpAjUHiwEjencvj/EventFunction`2<System.Object,System.Boolean>
struct EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86;
// oFErIGnUOtKvpAjUHiwEjencvj/EventFunction`2<System.Object,System.Object>
struct EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A;
// oFErIGnUOtKvpAjUHiwEjencvj/EventFunction`2<System.Object,UnityEngine.Vector2>
struct EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE;
// oFErIGnUOtKvpAjUHiwEjencvj/HierarchyEventHelper`2<System.Object,System.Boolean>
struct HierarchyEventHelper_2_t037A59395A5642605AE7490E2F03D0B4227D887B;
// oFErIGnUOtKvpAjUHiwEjencvj/HierarchyEventHelper`2<System.Object,System.Object>
struct HierarchyEventHelper_2_t18B254FE947ECC2BD44F93BEA15EC167A0946208;
// oFErIGnUOtKvpAjUHiwEjencvj/HierarchyEventHelper`2<System.Object,UnityEngine.Vector2>
struct HierarchyEventHelper_2_t998ABFF4A3E42CB0A10135007EAD9148BA58D4E8;
// wtAIYQJbruDURiMwCNDuBBwhWhcj/TDCosqKINLgUYAoCxRDHyVIHdUO<System.Object>
struct TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931;
// wtAIYQJbruDURiMwCNDuBBwhWhcj/WZbPtpKKYGdcVDnIgmQrRjHJzGE<System.Object>
struct WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF;
// wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>
struct wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReInput_t660C845029E93C5E11722938F53BCA3AED33D0BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyCollection_1_t42C6EC4956F81037B0696DDF4310EEAD899406F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityTools_t6854B0D1F5B4AD5CC66C40436BEAA1EF5FB9314E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC;
IL2CPP_EXTERN_C String_t* _stringLiteral52934C29CA4A1A7572C6905BD6AB705A2C135973;
IL2CPP_EXTERN_C String_t* _stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9;
IL2CPP_EXTERN_C String_t* _stringLiteralDFADDFA065E9D92CFE8B8F06444DD5652DFC1D58;
IL2CPP_EXTERN_C const RuntimeMethod* HierarchyEventHelper_2__ctor_m5A61DC6A36AFC872D101B175BD28B5FA27E3CEC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HierarchyEventHelper_2__ctor_m66F2E1EB815E695F09C836416E9134CC28D13D6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HierarchyEventHelper_2__ctor_mE29A50F32EFE1F91E0357A86592BC2AA3D57867D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBB024C6A0C23217B87FABE55861D2532378BEE1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m88D5862BAF30335E7FEA486544F28FA5CECFF6DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m7016ACAC4680B5067B4C91DF77A292D8E8D427A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m89A219C1A47D8F7CEDA4FAD3FD848DBCC009D28C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m57FD5A381EAD73CDC168FFEC93C5D22EEA7CCC7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0839F8110366CBDBC753D441E962E51A20E93E14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB87AFEFB187F15D3B2B41BA3C4919E74A8256840_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mADF483DC22F60B179F834797734DFFBAE6123F5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m86D714200344F5D83977C34422287C90AC3DFD80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1__ctor_m43F319804F61EAF5B1BA3BEE99D5EC8F37B473DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TDCosqKINLgUYAoCxRDHyVIHdUO_System_Collections_IEnumerator_Reset_m00BCEB427500F7955BCD2F2D498710E8DF202DF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WZbPtpKKYGdcVDnIgmQrRjHJzGE_System_Collections_IEnumerator_Reset_m2C16CBCBB78BB4471AA7295DB8FE50C6B4E84141_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t EventFunction_2_BeginInvoke_m9CE857458DB6FD99EAA10142A67DF0173E018307_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EventFunction_2_BeginInvoke_mA6C03F209DE941F3C4ED8BD0E6B93EADBBD69F97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HierarchyEventHelper_2_GetHandlers_m2411F2AB7DCA0F465B0D8A54BDFB9E5209B07E82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HierarchyEventHelper_2_GetHandlers_m5F1EEEA70975B9F19F2F8AFAC12A7384DCA3C78B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HierarchyEventHelper_2_GetHandlers_mBBE9493B2C365ADD3B086EA23757B3DF492486FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HierarchyEventHelper_2__ctor_m5A61DC6A36AFC872D101B175BD28B5FA27E3CEC5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HierarchyEventHelper_2__ctor_m66F2E1EB815E695F09C836416E9134CC28D13D6B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HierarchyEventHelper_2__ctor_mE29A50F32EFE1F91E0357A86592BC2AA3D57867D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectPool_1_Release_mC1D66E968E7A04252A79426F4F2D45ED0F292B86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TDCosqKINLgUYAoCxRDHyVIHdUO_System_Collections_IEnumerator_Reset_m00BCEB427500F7955BCD2F2D498710E8DF202DF6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenRunner_1_StartTween_mA10B864FF4FF1D68D8B117B94B06FF35F5373FA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenRunner_1_StartTween_mCD6A38F2A78EADA8BFD4D710333E6263D32DAEFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_MoveNext_m0EE17EEE1FD4E844C9CDA2AA8815CBECBB0DBA9F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_MoveNext_m60167073DFDFFC72E0494F1178A8927098A64D12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_3_FindMethod_Impl_mDEE1409662BC040478ADF5E0ABF95B8E381D32C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_3_Invoke_m012D72FFB78BAC1A48A2B8C027CC180D96E963DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_3_Invoke_mFBD41665482064D8F8909DB9828D3946C57EEA1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WZbPtpKKYGdcVDnIgmQrRjHJzGE_MoveNext_m541B9D00F4AE12ADD49B8547C10D34B7387A329E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WZbPtpKKYGdcVDnIgmQrRjHJzGE_System_Collections_IEnumerator_Reset_m2C16CBCBB78BB4471AA7295DB8FE50C6B4E84141_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_ClearByLayout_m275B8931865040BEFBEF30BC6479182B51C0676D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_Clear_mA3839D45E591E8E478026026DC3B9516F2B82FB9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_Clear_mA79DE837B0320519EA54C5C16672E1702ACED59E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_OCQLCPgJbQjMqWPVWEfCRJKblgH_m3288294CFA3F08959F1ECA3A4961DC9644A36C0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_RemoveById_m4D8AD3FAD5ABBFBDC1ED1F6926E23F3F9F880B12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_Remove_m5DB88283FBA05050ADB72F99DD62EA968B515947_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_Remove_m94451D7EE09B511DB511A3751498512D6A739883_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_GetMapsByCategory_m6CFC473AF2F845299A1E8D93C1E603F51E33B0D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_GetMapsByCategory_mE91C982BA314DB0674980608580A2D71FF5139FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_GetMaps_m898224AD0F9D6C80E85608077B20A6D09C50FAA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_GetMaps_mC9A682F6A987262108305229206C2DD3E91ED6D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_get_Item_m23E008868933FF7FDB2CCEAE0D045974985DB294_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t wtAIYQJbruDURiMwCNDuBBwhWhcj__ctor_m1BFBDC3207A65507048B5CCA4E8E62BE5BDA2F89_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_lfujFXPVFbtvCcmSQQbFKFeHefT_mDED8B55B15EE919FDE109B520BEC9FA7BBFE3C40_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_set_Item_mA5ABC8E6C730D56BE216497341CCE8A1DAA435D5_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Rewired.InputCategory
struct  InputCategory_t775B2399E2070EF82BBA5D9676BD00C30159D918  : public RuntimeObject
{
public:
	// System.String Rewired.InputCategory::_name
	String_t* ____name_0;
	// System.String Rewired.InputCategory::_descriptiveName
	String_t* ____descriptiveName_1;
	// System.String Rewired.InputCategory::_tag
	String_t* ____tag_2;
	// System.Int32 Rewired.InputCategory::_id
	int32_t ____id_3;
	// System.Boolean Rewired.InputCategory::_userAssignable
	bool ____userAssignable_4;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(InputCategory_t775B2399E2070EF82BBA5D9676BD00C30159D918, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_0), (void*)value);
	}

	inline static int32_t get_offset_of__descriptiveName_1() { return static_cast<int32_t>(offsetof(InputCategory_t775B2399E2070EF82BBA5D9676BD00C30159D918, ____descriptiveName_1)); }
	inline String_t* get__descriptiveName_1() const { return ____descriptiveName_1; }
	inline String_t** get_address_of__descriptiveName_1() { return &____descriptiveName_1; }
	inline void set__descriptiveName_1(String_t* value)
	{
		____descriptiveName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____descriptiveName_1), (void*)value);
	}

	inline static int32_t get_offset_of__tag_2() { return static_cast<int32_t>(offsetof(InputCategory_t775B2399E2070EF82BBA5D9676BD00C30159D918, ____tag_2)); }
	inline String_t* get__tag_2() const { return ____tag_2; }
	inline String_t** get_address_of__tag_2() { return &____tag_2; }
	inline void set__tag_2(String_t* value)
	{
		____tag_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tag_2), (void*)value);
	}

	inline static int32_t get_offset_of__id_3() { return static_cast<int32_t>(offsetof(InputCategory_t775B2399E2070EF82BBA5D9676BD00C30159D918, ____id_3)); }
	inline int32_t get__id_3() const { return ____id_3; }
	inline int32_t* get_address_of__id_3() { return &____id_3; }
	inline void set__id_3(int32_t value)
	{
		____id_3 = value;
	}

	inline static int32_t get_offset_of__userAssignable_4() { return static_cast<int32_t>(offsetof(InputCategory_t775B2399E2070EF82BBA5D9676BD00C30159D918, ____userAssignable_4)); }
	inline bool get__userAssignable_4() const { return ____userAssignable_4; }
	inline bool* get_address_of__userAssignable_4() { return &____userAssignable_4; }
	inline void set__userAssignable_4(bool value)
	{
		____userAssignable_4 = value;
	}
};


// Rewired.Utils.Classes.CodeHelper
struct  CodeHelper_t8618ECFBF040A78FEDA26D398742608E1AA036AB  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct  Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___entries_1)); }
	inline EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___keys_7)); }
	inline KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___values_8)); }
	inline ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Rewired.ControllerMap>
struct  List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E, ____items_1)); }
	inline ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E* get__items_1() const { return ____items_1; }
	inline ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E_StaticFields, ____emptyArray_5)); }
	inline ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Color32>
struct  List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____items_1)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5_StaticFields, ____emptyArray_5)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct  List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694_StaticFields, ____emptyArray_5)); }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct  List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____items_1)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get__items_1() const { return ____items_1; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554_StaticFields, ____emptyArray_5)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____items_1)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____items_1)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955_StaticFields, ____emptyArray_5)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ControllerMap>
struct  ReadOnlyCollection_1_t42C6EC4956F81037B0696DDF4310EEAD899406F9  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t42C6EC4956F81037B0696DDF4310EEAD899406F9, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t42C6EC4956F81037B0696DDF4310EEAD899406F9, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct  ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
{
public:

public:
};


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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct  IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.UI.Collections.IndexedSet`1::m_List
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___m_List_0;
	// System.Collections.Generic.Dictionary`2<T,System.Int32> UnityEngine.UI.Collections.IndexedSet`1::m_Dictionary
	Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * ___m_Dictionary_1;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3, ___m_List_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_List_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Dictionary_1() { return static_cast<int32_t>(offsetof(IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3, ___m_Dictionary_1)); }
	inline Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * get_m_Dictionary_1() const { return ___m_Dictionary_1; }
	inline Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A ** get_address_of_m_Dictionary_1() { return &___m_Dictionary_1; }
	inline void set_m_Dictionary_1(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * value)
	{
		___m_Dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dictionary_1), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct  TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineContainer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tween_1), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct  TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineContainer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tween_1), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<System.Int32>
struct  ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<System.Object>
struct  ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Color32>
struct  ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>
struct  ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector2>
struct  ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector3>
struct  ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector4>
struct  ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct  ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A, ___m_Stack_0)); }
	inline Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct  ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E, ___m_Stack_0)); }
	inline Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99, ___m_Stack_0)); }
	inline Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99, ___m_ActionOnGet_1)); }
	inline UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1, ___m_Stack_0)); }
	inline Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1, ___m_Stack_0)); }
	inline Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49, ___m_Stack_0)); }
	inline Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54, ___m_Stack_0)); }
	inline Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Object>
struct  ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9, ___m_Stack_0)); }
	inline Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// wtAIYQJbruDURiMwCNDuBBwhWhcj_TDCosqKINLgUYAoCxRDHyVIHdUO<System.Object>
struct  TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931  : public RuntimeObject
{
public:
	// T wtAIYQJbruDURiMwCNDuBBwhWhcj_TDCosqKINLgUYAoCxRDHyVIHdUO::YpBGzuanHZCByIoQXMkPVdLDafd
	RuntimeObject * ___YpBGzuanHZCByIoQXMkPVdLDafd_0;
	// System.Int32 wtAIYQJbruDURiMwCNDuBBwhWhcj_TDCosqKINLgUYAoCxRDHyVIHdUO::UkDptJuixhQRQVBOsbSmZnhgjYoa
	int32_t ___UkDptJuixhQRQVBOsbSmZnhgjYoa_1;
	// wtAIYQJbruDURiMwCNDuBBwhWhcj<T> wtAIYQJbruDURiMwCNDuBBwhWhcj_TDCosqKINLgUYAoCxRDHyVIHdUO::UMfawUAeNCfAFpSlXTgCRWFLdSBg
	wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * ___UMfawUAeNCfAFpSlXTgCRWFLdSBg_2;
	// System.Int32 wtAIYQJbruDURiMwCNDuBBwhWhcj_TDCosqKINLgUYAoCxRDHyVIHdUO::lMsVdmHiBvoxbQCfJcEGbnxifutA
	int32_t ___lMsVdmHiBvoxbQCfJcEGbnxifutA_3;

public:
	inline static int32_t get_offset_of_YpBGzuanHZCByIoQXMkPVdLDafd_0() { return static_cast<int32_t>(offsetof(TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931, ___YpBGzuanHZCByIoQXMkPVdLDafd_0)); }
	inline RuntimeObject * get_YpBGzuanHZCByIoQXMkPVdLDafd_0() const { return ___YpBGzuanHZCByIoQXMkPVdLDafd_0; }
	inline RuntimeObject ** get_address_of_YpBGzuanHZCByIoQXMkPVdLDafd_0() { return &___YpBGzuanHZCByIoQXMkPVdLDafd_0; }
	inline void set_YpBGzuanHZCByIoQXMkPVdLDafd_0(RuntimeObject * value)
	{
		___YpBGzuanHZCByIoQXMkPVdLDafd_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___YpBGzuanHZCByIoQXMkPVdLDafd_0), (void*)value);
	}

	inline static int32_t get_offset_of_UkDptJuixhQRQVBOsbSmZnhgjYoa_1() { return static_cast<int32_t>(offsetof(TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931, ___UkDptJuixhQRQVBOsbSmZnhgjYoa_1)); }
	inline int32_t get_UkDptJuixhQRQVBOsbSmZnhgjYoa_1() const { return ___UkDptJuixhQRQVBOsbSmZnhgjYoa_1; }
	inline int32_t* get_address_of_UkDptJuixhQRQVBOsbSmZnhgjYoa_1() { return &___UkDptJuixhQRQVBOsbSmZnhgjYoa_1; }
	inline void set_UkDptJuixhQRQVBOsbSmZnhgjYoa_1(int32_t value)
	{
		___UkDptJuixhQRQVBOsbSmZnhgjYoa_1 = value;
	}

	inline static int32_t get_offset_of_UMfawUAeNCfAFpSlXTgCRWFLdSBg_2() { return static_cast<int32_t>(offsetof(TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931, ___UMfawUAeNCfAFpSlXTgCRWFLdSBg_2)); }
	inline wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * get_UMfawUAeNCfAFpSlXTgCRWFLdSBg_2() const { return ___UMfawUAeNCfAFpSlXTgCRWFLdSBg_2; }
	inline wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 ** get_address_of_UMfawUAeNCfAFpSlXTgCRWFLdSBg_2() { return &___UMfawUAeNCfAFpSlXTgCRWFLdSBg_2; }
	inline void set_UMfawUAeNCfAFpSlXTgCRWFLdSBg_2(wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * value)
	{
		___UMfawUAeNCfAFpSlXTgCRWFLdSBg_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UMfawUAeNCfAFpSlXTgCRWFLdSBg_2), (void*)value);
	}

	inline static int32_t get_offset_of_lMsVdmHiBvoxbQCfJcEGbnxifutA_3() { return static_cast<int32_t>(offsetof(TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931, ___lMsVdmHiBvoxbQCfJcEGbnxifutA_3)); }
	inline int32_t get_lMsVdmHiBvoxbQCfJcEGbnxifutA_3() const { return ___lMsVdmHiBvoxbQCfJcEGbnxifutA_3; }
	inline int32_t* get_address_of_lMsVdmHiBvoxbQCfJcEGbnxifutA_3() { return &___lMsVdmHiBvoxbQCfJcEGbnxifutA_3; }
	inline void set_lMsVdmHiBvoxbQCfJcEGbnxifutA_3(int32_t value)
	{
		___lMsVdmHiBvoxbQCfJcEGbnxifutA_3 = value;
	}
};


// wtAIYQJbruDURiMwCNDuBBwhWhcj_WZbPtpKKYGdcVDnIgmQrRjHJzGE<System.Object>
struct  WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF  : public RuntimeObject
{
public:
	// Rewired.ControllerMap wtAIYQJbruDURiMwCNDuBBwhWhcj_WZbPtpKKYGdcVDnIgmQrRjHJzGE::YpBGzuanHZCByIoQXMkPVdLDafd
	ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * ___YpBGzuanHZCByIoQXMkPVdLDafd_0;
	// System.Int32 wtAIYQJbruDURiMwCNDuBBwhWhcj_WZbPtpKKYGdcVDnIgmQrRjHJzGE::UkDptJuixhQRQVBOsbSmZnhgjYoa
	int32_t ___UkDptJuixhQRQVBOsbSmZnhgjYoa_1;
	// System.Int32 wtAIYQJbruDURiMwCNDuBBwhWhcj_WZbPtpKKYGdcVDnIgmQrRjHJzGE::pVCoyNNrXTDCfKppNCZNLPbQFYP
	int32_t ___pVCoyNNrXTDCfKppNCZNLPbQFYP_2;
	// wtAIYQJbruDURiMwCNDuBBwhWhcj<T> wtAIYQJbruDURiMwCNDuBBwhWhcj_WZbPtpKKYGdcVDnIgmQrRjHJzGE::UMfawUAeNCfAFpSlXTgCRWFLdSBg
	wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * ___UMfawUAeNCfAFpSlXTgCRWFLdSBg_3;
	// System.Int32 wtAIYQJbruDURiMwCNDuBBwhWhcj_WZbPtpKKYGdcVDnIgmQrRjHJzGE::BpSxZpxGKUEIhVYzCYLbbiAyBRR
	int32_t ___BpSxZpxGKUEIhVYzCYLbbiAyBRR_4;
	// System.Int32 wtAIYQJbruDURiMwCNDuBBwhWhcj_WZbPtpKKYGdcVDnIgmQrRjHJzGE::wVTfhFOJixFiphUqDCHizdrBLpIh
	int32_t ___wVTfhFOJixFiphUqDCHizdrBLpIh_5;
	// System.Int32 wtAIYQJbruDURiMwCNDuBBwhWhcj_WZbPtpKKYGdcVDnIgmQrRjHJzGE::xHDodAOCcSEKMbxrMCcdPKBgZIo
	int32_t ___xHDodAOCcSEKMbxrMCcdPKBgZIo_6;

public:
	inline static int32_t get_offset_of_YpBGzuanHZCByIoQXMkPVdLDafd_0() { return static_cast<int32_t>(offsetof(WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF, ___YpBGzuanHZCByIoQXMkPVdLDafd_0)); }
	inline ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * get_YpBGzuanHZCByIoQXMkPVdLDafd_0() const { return ___YpBGzuanHZCByIoQXMkPVdLDafd_0; }
	inline ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB ** get_address_of_YpBGzuanHZCByIoQXMkPVdLDafd_0() { return &___YpBGzuanHZCByIoQXMkPVdLDafd_0; }
	inline void set_YpBGzuanHZCByIoQXMkPVdLDafd_0(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * value)
	{
		___YpBGzuanHZCByIoQXMkPVdLDafd_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___YpBGzuanHZCByIoQXMkPVdLDafd_0), (void*)value);
	}

	inline static int32_t get_offset_of_UkDptJuixhQRQVBOsbSmZnhgjYoa_1() { return static_cast<int32_t>(offsetof(WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF, ___UkDptJuixhQRQVBOsbSmZnhgjYoa_1)); }
	inline int32_t get_UkDptJuixhQRQVBOsbSmZnhgjYoa_1() const { return ___UkDptJuixhQRQVBOsbSmZnhgjYoa_1; }
	inline int32_t* get_address_of_UkDptJuixhQRQVBOsbSmZnhgjYoa_1() { return &___UkDptJuixhQRQVBOsbSmZnhgjYoa_1; }
	inline void set_UkDptJuixhQRQVBOsbSmZnhgjYoa_1(int32_t value)
	{
		___UkDptJuixhQRQVBOsbSmZnhgjYoa_1 = value;
	}

	inline static int32_t get_offset_of_pVCoyNNrXTDCfKppNCZNLPbQFYP_2() { return static_cast<int32_t>(offsetof(WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF, ___pVCoyNNrXTDCfKppNCZNLPbQFYP_2)); }
	inline int32_t get_pVCoyNNrXTDCfKppNCZNLPbQFYP_2() const { return ___pVCoyNNrXTDCfKppNCZNLPbQFYP_2; }
	inline int32_t* get_address_of_pVCoyNNrXTDCfKppNCZNLPbQFYP_2() { return &___pVCoyNNrXTDCfKppNCZNLPbQFYP_2; }
	inline void set_pVCoyNNrXTDCfKppNCZNLPbQFYP_2(int32_t value)
	{
		___pVCoyNNrXTDCfKppNCZNLPbQFYP_2 = value;
	}

	inline static int32_t get_offset_of_UMfawUAeNCfAFpSlXTgCRWFLdSBg_3() { return static_cast<int32_t>(offsetof(WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF, ___UMfawUAeNCfAFpSlXTgCRWFLdSBg_3)); }
	inline wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * get_UMfawUAeNCfAFpSlXTgCRWFLdSBg_3() const { return ___UMfawUAeNCfAFpSlXTgCRWFLdSBg_3; }
	inline wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 ** get_address_of_UMfawUAeNCfAFpSlXTgCRWFLdSBg_3() { return &___UMfawUAeNCfAFpSlXTgCRWFLdSBg_3; }
	inline void set_UMfawUAeNCfAFpSlXTgCRWFLdSBg_3(wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * value)
	{
		___UMfawUAeNCfAFpSlXTgCRWFLdSBg_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UMfawUAeNCfAFpSlXTgCRWFLdSBg_3), (void*)value);
	}

	inline static int32_t get_offset_of_BpSxZpxGKUEIhVYzCYLbbiAyBRR_4() { return static_cast<int32_t>(offsetof(WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF, ___BpSxZpxGKUEIhVYzCYLbbiAyBRR_4)); }
	inline int32_t get_BpSxZpxGKUEIhVYzCYLbbiAyBRR_4() const { return ___BpSxZpxGKUEIhVYzCYLbbiAyBRR_4; }
	inline int32_t* get_address_of_BpSxZpxGKUEIhVYzCYLbbiAyBRR_4() { return &___BpSxZpxGKUEIhVYzCYLbbiAyBRR_4; }
	inline void set_BpSxZpxGKUEIhVYzCYLbbiAyBRR_4(int32_t value)
	{
		___BpSxZpxGKUEIhVYzCYLbbiAyBRR_4 = value;
	}

	inline static int32_t get_offset_of_wVTfhFOJixFiphUqDCHizdrBLpIh_5() { return static_cast<int32_t>(offsetof(WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF, ___wVTfhFOJixFiphUqDCHizdrBLpIh_5)); }
	inline int32_t get_wVTfhFOJixFiphUqDCHizdrBLpIh_5() const { return ___wVTfhFOJixFiphUqDCHizdrBLpIh_5; }
	inline int32_t* get_address_of_wVTfhFOJixFiphUqDCHizdrBLpIh_5() { return &___wVTfhFOJixFiphUqDCHizdrBLpIh_5; }
	inline void set_wVTfhFOJixFiphUqDCHizdrBLpIh_5(int32_t value)
	{
		___wVTfhFOJixFiphUqDCHizdrBLpIh_5 = value;
	}

	inline static int32_t get_offset_of_xHDodAOCcSEKMbxrMCcdPKBgZIo_6() { return static_cast<int32_t>(offsetof(WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF, ___xHDodAOCcSEKMbxrMCcdPKBgZIo_6)); }
	inline int32_t get_xHDodAOCcSEKMbxrMCcdPKBgZIo_6() const { return ___xHDodAOCcSEKMbxrMCcdPKBgZIo_6; }
	inline int32_t* get_address_of_xHDodAOCcSEKMbxrMCcdPKBgZIo_6() { return &___xHDodAOCcSEKMbxrMCcdPKBgZIo_6; }
	inline void set_xHDodAOCcSEKMbxrMCcdPKBgZIo_6(int32_t value)
	{
		___xHDodAOCcSEKMbxrMCcdPKBgZIo_6 = value;
	}
};


// Rewired.InputMapCategory
struct  InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602  : public InputCategory_t775B2399E2070EF82BBA5D9676BD00C30159D918
{
public:
	// System.Boolean Rewired.InputMapCategory::_checkConflictsWithAllCategories
	bool ____checkConflictsWithAllCategories_5;
	// System.Collections.Generic.List`1<System.Int32> Rewired.InputMapCategory::_checkConflictsCategoryIds
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ____checkConflictsCategoryIds_6;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32> Rewired.InputMapCategory::_checkConflictsCategoryIds_readOnly
	ReadOnlyCollection_1_t0B2A88F2C4A2D26A4E1526F7063F654FAA26CB2A * ____checkConflictsCategoryIds_readOnly_7;

public:
	inline static int32_t get_offset_of__checkConflictsWithAllCategories_5() { return static_cast<int32_t>(offsetof(InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602, ____checkConflictsWithAllCategories_5)); }
	inline bool get__checkConflictsWithAllCategories_5() const { return ____checkConflictsWithAllCategories_5; }
	inline bool* get_address_of__checkConflictsWithAllCategories_5() { return &____checkConflictsWithAllCategories_5; }
	inline void set__checkConflictsWithAllCategories_5(bool value)
	{
		____checkConflictsWithAllCategories_5 = value;
	}

	inline static int32_t get_offset_of__checkConflictsCategoryIds_6() { return static_cast<int32_t>(offsetof(InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602, ____checkConflictsCategoryIds_6)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get__checkConflictsCategoryIds_6() const { return ____checkConflictsCategoryIds_6; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of__checkConflictsCategoryIds_6() { return &____checkConflictsCategoryIds_6; }
	inline void set__checkConflictsCategoryIds_6(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		____checkConflictsCategoryIds_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____checkConflictsCategoryIds_6), (void*)value);
	}

	inline static int32_t get_offset_of__checkConflictsCategoryIds_readOnly_7() { return static_cast<int32_t>(offsetof(InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602, ____checkConflictsCategoryIds_readOnly_7)); }
	inline ReadOnlyCollection_1_t0B2A88F2C4A2D26A4E1526F7063F654FAA26CB2A * get__checkConflictsCategoryIds_readOnly_7() const { return ____checkConflictsCategoryIds_readOnly_7; }
	inline ReadOnlyCollection_1_t0B2A88F2C4A2D26A4E1526F7063F654FAA26CB2A ** get_address_of__checkConflictsCategoryIds_readOnly_7() { return &____checkConflictsCategoryIds_readOnly_7; }
	inline void set__checkConflictsCategoryIds_readOnly_7(ReadOnlyCollection_1_t0B2A88F2C4A2D26A4E1526F7063F654FAA26CB2A * value)
	{
		____checkConflictsCategoryIds_readOnly_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____checkConflictsCategoryIds_readOnly_7), (void*)value);
	}
};


// Rewired.ReInput_MappingHelper
struct  MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6  : public CodeHelper_t8618ECFBF040A78FEDA26D398742608E1AA036AB
{
public:

public:
};

struct MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6_StaticFields
{
public:
	// Rewired.ReInput_MappingHelper Rewired.ReInput_MappingHelper::SDmDXbZxZwVdUCghumFTwjmxDTa
	MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 * ___SDmDXbZxZwVdUCghumFTwjmxDTa_0;

public:
	inline static int32_t get_offset_of_SDmDXbZxZwVdUCghumFTwjmxDTa_0() { return static_cast<int32_t>(offsetof(MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6_StaticFields, ___SDmDXbZxZwVdUCghumFTwjmxDTa_0)); }
	inline MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 * get_SDmDXbZxZwVdUCghumFTwjmxDTa_0() const { return ___SDmDXbZxZwVdUCghumFTwjmxDTa_0; }
	inline MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 ** get_address_of_SDmDXbZxZwVdUCghumFTwjmxDTa_0() { return &___SDmDXbZxZwVdUCghumFTwjmxDTa_0; }
	inline void set_SDmDXbZxZwVdUCghumFTwjmxDTa_0(MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 * value)
	{
		___SDmDXbZxZwVdUCghumFTwjmxDTa_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SDmDXbZxZwVdUCghumFTwjmxDTa_0), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
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


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.Thread
struct  Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___internal_thread_6)); }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Events.InvokableCall
struct  InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC, ___Delegate_0)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`3<System.Object,System.Int32,System.Int32>
struct  InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED, ___Delegate_0)); }
	inline UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct  InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D, ___Delegate_0)); }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct  InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6, ___Delegate_0)); }
	inline UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct  UnityEvent_3_t2806FFBD49F1501D6C532F2520EFAB143233B6D9  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_t2806FFBD49F1501D6C532F2520EFAB143233B6D9, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct  UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.FloatTween
struct  FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A 
{
public:
	// UnityEngine.UI.CoroutineTween.FloatTween_FloatTweenCallback UnityEngine.UI.CoroutineTween.FloatTween::m_Target
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_Target_0)); }
	inline FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartValue_1() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_StartValue_1)); }
	inline float get_m_StartValue_1() const { return ___m_StartValue_1; }
	inline float* get_address_of_m_StartValue_1() { return &___m_StartValue_1; }
	inline void set_m_StartValue_1(float value)
	{
		___m_StartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_2() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_TargetValue_2)); }
	inline float get_m_TargetValue_2() const { return ___m_TargetValue_2; }
	inline float* get_address_of_m_TargetValue_2() { return &___m_TargetValue_2; }
	inline void set_m_TargetValue_2(float value)
	{
		___m_TargetValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_IgnoreTimeScale_4)); }
	inline bool get_m_IgnoreTimeScale_4() const { return ___m_IgnoreTimeScale_4; }
	inline bool* get_address_of_m_IgnoreTimeScale_4() { return &___m_IgnoreTimeScale_4; }
	inline void set_m_IgnoreTimeScale_4(bool value)
	{
		___m_IgnoreTimeScale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshaled_pinvoke
{
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshaled_com
{
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// Rewired.BoolOption
struct  BoolOption_t00F82CEAED2D32551FA96C1F943DC65E517DA4FB 
{
public:
	// System.Int32 Rewired.BoolOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoolOption_t00F82CEAED2D32551FA96C1F943DC65E517DA4FB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.ControllerType
struct  ControllerType_t5D12288D0D40A6917EAF01DB5DE37090A586B2D4 
{
public:
	// System.Int32 Rewired.ControllerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControllerType_t5D12288D0D40A6917EAF01DB5DE37090A586B2D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode
struct  ColorTweenMode_tDCE018D37330F576ACCD00D16CAF91AE55315F2F 
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorTweenMode_tDCE018D37330F576ACCD00D16CAF91AE55315F2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct  U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::tweenInfo
	FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___tweenInfo_2)); }
	inline FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2_mbRUjyPckYjvEffDpeqMsidmRJOV<System.Object,System.Boolean>
struct  mbRUjyPckYjvEffDpeqMsidmRJOV_t41AD6DCB6981791E069836FBF1BB04D92137B460 
{
public:
	// System.Int32 oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2_mbRUjyPckYjvEffDpeqMsidmRJOV::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(mbRUjyPckYjvEffDpeqMsidmRJOV_t41AD6DCB6981791E069836FBF1BB04D92137B460, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2_mbRUjyPckYjvEffDpeqMsidmRJOV<System.Object,System.Object>
struct  mbRUjyPckYjvEffDpeqMsidmRJOV_tC4DE0E68244CCC80663D3CFA5FE461276510FDC3 
{
public:
	// System.Int32 oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2_mbRUjyPckYjvEffDpeqMsidmRJOV::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(mbRUjyPckYjvEffDpeqMsidmRJOV_tC4DE0E68244CCC80663D3CFA5FE461276510FDC3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2_mbRUjyPckYjvEffDpeqMsidmRJOV<System.Object,UnityEngine.Vector2>
struct  mbRUjyPckYjvEffDpeqMsidmRJOV_t0C7C9EA330C263C88E245E9015CDAA94C053FBB5 
{
public:
	// System.Int32 oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2_mbRUjyPckYjvEffDpeqMsidmRJOV::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(mbRUjyPckYjvEffDpeqMsidmRJOV_t0C7C9EA330C263C88E245E9015CDAA94C053FBB5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.ControllerMap
struct  ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ControllerMap::_id
	int32_t ____id_0;
	// System.Int32 Rewired.ControllerMap::_sourceMapId
	int32_t ____sourceMapId_1;
	// System.Int32 Rewired.ControllerMap::_categoryId
	int32_t ____categoryId_2;
	// System.Int32 Rewired.ControllerMap::_layoutId
	int32_t ____layoutId_3;
	// System.String Rewired.ControllerMap::_name
	String_t* ____name_4;
	// System.Guid Rewired.ControllerMap::_hardwareGuid
	Guid_t  ____hardwareGuid_5;
	// System.Boolean Rewired.ControllerMap::_enabled
	bool ____enabled_6;
	// System.Int32 Rewired.ControllerMap::XGsLUjMvRJoBxNjmVDLuzHlNeUP
	int32_t ___XGsLUjMvRJoBxNjmVDLuzHlNeUP_7;
	// Rewired.Utils.Classes.Data.AList`1<Rewired.ActionElementMap> Rewired.ControllerMap::CUZqcuVYOkLmhdEVsWeLSOBdDIS
	AList_1_t3CE454271698B03A6EA53DA068272454E1A22108 * ___CUZqcuVYOkLmhdEVsWeLSOBdDIS_8;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ActionElementMap> Rewired.ControllerMap::GBetWxKFPuCsTxYskMeNhaUYgcfd
	ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 * ___GBetWxKFPuCsTxYskMeNhaUYgcfd_9;
	// Rewired.Utils.Classes.Data.AList`1<Rewired.ActionElementMap> Rewired.ControllerMap::rRJxQhPqtKSKzYRMgwXRvZlQWcU
	AList_1_t3CE454271698B03A6EA53DA068272454E1A22108 * ___rRJxQhPqtKSKzYRMgwXRvZlQWcU_10;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ActionElementMap> Rewired.ControllerMap::nrFjoNgROFSYYEHfXLkINDdyYds
	ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 * ___nrFjoNgROFSYYEHfXLkINDdyYds_11;
	// System.Int32 Rewired.ControllerMap::_playerId
	int32_t ____playerId_12;
	// System.Int32 Rewired.ControllerMap::_controllerId
	int32_t ____controllerId_13;
	// Rewired.ControllerType Rewired.ControllerMap::_controllerType
	int32_t ____controllerType_14;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____id_0)); }
	inline int32_t get__id_0() const { return ____id_0; }
	inline int32_t* get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(int32_t value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__sourceMapId_1() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____sourceMapId_1)); }
	inline int32_t get__sourceMapId_1() const { return ____sourceMapId_1; }
	inline int32_t* get_address_of__sourceMapId_1() { return &____sourceMapId_1; }
	inline void set__sourceMapId_1(int32_t value)
	{
		____sourceMapId_1 = value;
	}

	inline static int32_t get_offset_of__categoryId_2() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____categoryId_2)); }
	inline int32_t get__categoryId_2() const { return ____categoryId_2; }
	inline int32_t* get_address_of__categoryId_2() { return &____categoryId_2; }
	inline void set__categoryId_2(int32_t value)
	{
		____categoryId_2 = value;
	}

	inline static int32_t get_offset_of__layoutId_3() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____layoutId_3)); }
	inline int32_t get__layoutId_3() const { return ____layoutId_3; }
	inline int32_t* get_address_of__layoutId_3() { return &____layoutId_3; }
	inline void set__layoutId_3(int32_t value)
	{
		____layoutId_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_4), (void*)value);
	}

	inline static int32_t get_offset_of__hardwareGuid_5() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____hardwareGuid_5)); }
	inline Guid_t  get__hardwareGuid_5() const { return ____hardwareGuid_5; }
	inline Guid_t * get_address_of__hardwareGuid_5() { return &____hardwareGuid_5; }
	inline void set__hardwareGuid_5(Guid_t  value)
	{
		____hardwareGuid_5 = value;
	}

	inline static int32_t get_offset_of__enabled_6() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____enabled_6)); }
	inline bool get__enabled_6() const { return ____enabled_6; }
	inline bool* get_address_of__enabled_6() { return &____enabled_6; }
	inline void set__enabled_6(bool value)
	{
		____enabled_6 = value;
	}

	inline static int32_t get_offset_of_XGsLUjMvRJoBxNjmVDLuzHlNeUP_7() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ___XGsLUjMvRJoBxNjmVDLuzHlNeUP_7)); }
	inline int32_t get_XGsLUjMvRJoBxNjmVDLuzHlNeUP_7() const { return ___XGsLUjMvRJoBxNjmVDLuzHlNeUP_7; }
	inline int32_t* get_address_of_XGsLUjMvRJoBxNjmVDLuzHlNeUP_7() { return &___XGsLUjMvRJoBxNjmVDLuzHlNeUP_7; }
	inline void set_XGsLUjMvRJoBxNjmVDLuzHlNeUP_7(int32_t value)
	{
		___XGsLUjMvRJoBxNjmVDLuzHlNeUP_7 = value;
	}

	inline static int32_t get_offset_of_CUZqcuVYOkLmhdEVsWeLSOBdDIS_8() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ___CUZqcuVYOkLmhdEVsWeLSOBdDIS_8)); }
	inline AList_1_t3CE454271698B03A6EA53DA068272454E1A22108 * get_CUZqcuVYOkLmhdEVsWeLSOBdDIS_8() const { return ___CUZqcuVYOkLmhdEVsWeLSOBdDIS_8; }
	inline AList_1_t3CE454271698B03A6EA53DA068272454E1A22108 ** get_address_of_CUZqcuVYOkLmhdEVsWeLSOBdDIS_8() { return &___CUZqcuVYOkLmhdEVsWeLSOBdDIS_8; }
	inline void set_CUZqcuVYOkLmhdEVsWeLSOBdDIS_8(AList_1_t3CE454271698B03A6EA53DA068272454E1A22108 * value)
	{
		___CUZqcuVYOkLmhdEVsWeLSOBdDIS_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CUZqcuVYOkLmhdEVsWeLSOBdDIS_8), (void*)value);
	}

	inline static int32_t get_offset_of_GBetWxKFPuCsTxYskMeNhaUYgcfd_9() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ___GBetWxKFPuCsTxYskMeNhaUYgcfd_9)); }
	inline ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 * get_GBetWxKFPuCsTxYskMeNhaUYgcfd_9() const { return ___GBetWxKFPuCsTxYskMeNhaUYgcfd_9; }
	inline ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 ** get_address_of_GBetWxKFPuCsTxYskMeNhaUYgcfd_9() { return &___GBetWxKFPuCsTxYskMeNhaUYgcfd_9; }
	inline void set_GBetWxKFPuCsTxYskMeNhaUYgcfd_9(ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 * value)
	{
		___GBetWxKFPuCsTxYskMeNhaUYgcfd_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GBetWxKFPuCsTxYskMeNhaUYgcfd_9), (void*)value);
	}

	inline static int32_t get_offset_of_rRJxQhPqtKSKzYRMgwXRvZlQWcU_10() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ___rRJxQhPqtKSKzYRMgwXRvZlQWcU_10)); }
	inline AList_1_t3CE454271698B03A6EA53DA068272454E1A22108 * get_rRJxQhPqtKSKzYRMgwXRvZlQWcU_10() const { return ___rRJxQhPqtKSKzYRMgwXRvZlQWcU_10; }
	inline AList_1_t3CE454271698B03A6EA53DA068272454E1A22108 ** get_address_of_rRJxQhPqtKSKzYRMgwXRvZlQWcU_10() { return &___rRJxQhPqtKSKzYRMgwXRvZlQWcU_10; }
	inline void set_rRJxQhPqtKSKzYRMgwXRvZlQWcU_10(AList_1_t3CE454271698B03A6EA53DA068272454E1A22108 * value)
	{
		___rRJxQhPqtKSKzYRMgwXRvZlQWcU_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rRJxQhPqtKSKzYRMgwXRvZlQWcU_10), (void*)value);
	}

	inline static int32_t get_offset_of_nrFjoNgROFSYYEHfXLkINDdyYds_11() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ___nrFjoNgROFSYYEHfXLkINDdyYds_11)); }
	inline ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 * get_nrFjoNgROFSYYEHfXLkINDdyYds_11() const { return ___nrFjoNgROFSYYEHfXLkINDdyYds_11; }
	inline ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 ** get_address_of_nrFjoNgROFSYYEHfXLkINDdyYds_11() { return &___nrFjoNgROFSYYEHfXLkINDdyYds_11; }
	inline void set_nrFjoNgROFSYYEHfXLkINDdyYds_11(ReadOnlyCollection_1_t9214700BD46997461FA87658077EA4003B3D9A24 * value)
	{
		___nrFjoNgROFSYYEHfXLkINDdyYds_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nrFjoNgROFSYYEHfXLkINDdyYds_11), (void*)value);
	}

	inline static int32_t get_offset_of__playerId_12() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____playerId_12)); }
	inline int32_t get__playerId_12() const { return ____playerId_12; }
	inline int32_t* get_address_of__playerId_12() { return &____playerId_12; }
	inline void set__playerId_12(int32_t value)
	{
		____playerId_12 = value;
	}

	inline static int32_t get_offset_of__controllerId_13() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____controllerId_13)); }
	inline int32_t get__controllerId_13() const { return ____controllerId_13; }
	inline int32_t* get_address_of__controllerId_13() { return &____controllerId_13; }
	inline void set__controllerId_13(int32_t value)
	{
		____controllerId_13 = value;
	}

	inline static int32_t get_offset_of__controllerType_14() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB, ____controllerType_14)); }
	inline int32_t get__controllerType_14() const { return ____controllerType_14; }
	inline int32_t* get_address_of__controllerType_14() { return &____controllerType_14; }
	inline void set__controllerType_14(int32_t value)
	{
		____controllerType_14 = value;
	}
};

struct ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB_StaticFields
{
public:
	// System.Int32 Rewired.ControllerMap::QtqtNRZYNZskqScBdBiIlQNqxDM
	int32_t ___QtqtNRZYNZskqScBdBiIlQNqxDM_15;

public:
	inline static int32_t get_offset_of_QtqtNRZYNZskqScBdBiIlQNqxDM_15() { return static_cast<int32_t>(offsetof(ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB_StaticFields, ___QtqtNRZYNZskqScBdBiIlQNqxDM_15)); }
	inline int32_t get_QtqtNRZYNZskqScBdBiIlQNqxDM_15() const { return ___QtqtNRZYNZskqScBdBiIlQNqxDM_15; }
	inline int32_t* get_address_of_QtqtNRZYNZskqScBdBiIlQNqxDM_15() { return &___QtqtNRZYNZskqScBdBiIlQNqxDM_15; }
	inline void set_QtqtNRZYNZskqScBdBiIlQNqxDM_15(int32_t value)
	{
		___QtqtNRZYNZskqScBdBiIlQNqxDM_15 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
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
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.UI.CoroutineTween.ColorTween
struct  ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 
{
public:
	// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenCallback UnityEngine.UI.CoroutineTween.ColorTween::m_Target
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_StartColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_TargetColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode UnityEngine.UI.CoroutineTween.ColorTween::m_TweenMode
	int32_t ___m_TweenMode_3;
	// System.Single UnityEngine.UI.CoroutineTween.ColorTween::m_Duration
	float ___m_Duration_4;
	// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_5;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_Target_0)); }
	inline ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * get_m_Target_0() const { return ___m_Target_0; }
	inline ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartColor_1() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_StartColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_StartColor_1() const { return ___m_StartColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_StartColor_1() { return &___m_StartColor_1; }
	inline void set_m_StartColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_StartColor_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetColor_2() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_TargetColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_TargetColor_2() const { return ___m_TargetColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_TargetColor_2() { return &___m_TargetColor_2; }
	inline void set_m_TargetColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_TargetColor_2 = value;
	}

	inline static int32_t get_offset_of_m_TweenMode_3() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_TweenMode_3)); }
	inline int32_t get_m_TweenMode_3() const { return ___m_TweenMode_3; }
	inline int32_t* get_address_of_m_TweenMode_3() { return &___m_TweenMode_3; }
	inline void set_m_TweenMode_3(int32_t value)
	{
		___m_TweenMode_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_5() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_IgnoreTimeScale_5)); }
	inline bool get_m_IgnoreTimeScale_5() const { return ___m_IgnoreTimeScale_5; }
	inline bool* get_address_of_m_IgnoreTimeScale_5() { return &___m_IgnoreTimeScale_5; }
	inline void set_m_IgnoreTimeScale_5(bool value)
	{
		___m_IgnoreTimeScale_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshaled_pinvoke
{
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshaled_com
{
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};

// oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2<System.Object,System.Boolean>
struct  HierarchyEventHelper_2_t037A59395A5642605AE7490E2F03D0B4227D887B  : public RuntimeObject
{
public:
	// oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<THandler,TValue> oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2::xpKiYdnflLFXhfjHjpPugtbIToQF
	EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 * ___xpKiYdnflLFXhfjHjpPugtbIToQF_0;
	// System.Collections.Generic.List`1<THandler> oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2::DtBBgiVUhVBQCqpOSYaPHlZLtwr
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1;
	// oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2_mbRUjyPckYjvEffDpeqMsidmRJOV<THandler,TValue> oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2::LYvZsNQoceuNpVjLBiiGdwcfXHnQ
	int32_t ___LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2;

public:
	inline static int32_t get_offset_of_xpKiYdnflLFXhfjHjpPugtbIToQF_0() { return static_cast<int32_t>(offsetof(HierarchyEventHelper_2_t037A59395A5642605AE7490E2F03D0B4227D887B, ___xpKiYdnflLFXhfjHjpPugtbIToQF_0)); }
	inline EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 * get_xpKiYdnflLFXhfjHjpPugtbIToQF_0() const { return ___xpKiYdnflLFXhfjHjpPugtbIToQF_0; }
	inline EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 ** get_address_of_xpKiYdnflLFXhfjHjpPugtbIToQF_0() { return &___xpKiYdnflLFXhfjHjpPugtbIToQF_0; }
	inline void set_xpKiYdnflLFXhfjHjpPugtbIToQF_0(EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 * value)
	{
		___xpKiYdnflLFXhfjHjpPugtbIToQF_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xpKiYdnflLFXhfjHjpPugtbIToQF_0), (void*)value);
	}

	inline static int32_t get_offset_of_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1() { return static_cast<int32_t>(offsetof(HierarchyEventHelper_2_t037A59395A5642605AE7490E2F03D0B4227D887B, ___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1() const { return ___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1() { return &___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1; }
	inline void set_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1), (void*)value);
	}

	inline static int32_t get_offset_of_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2() { return static_cast<int32_t>(offsetof(HierarchyEventHelper_2_t037A59395A5642605AE7490E2F03D0B4227D887B, ___LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2)); }
	inline int32_t get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2() const { return ___LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2; }
	inline int32_t* get_address_of_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2() { return &___LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2; }
	inline void set_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2(int32_t value)
	{
		___LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2 = value;
	}
};


// oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2<System.Object,System.Object>
struct  HierarchyEventHelper_2_t18B254FE947ECC2BD44F93BEA15EC167A0946208  : public RuntimeObject
{
public:
	// oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<THandler,TValue> oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2::xpKiYdnflLFXhfjHjpPugtbIToQF
	EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A * ___xpKiYdnflLFXhfjHjpPugtbIToQF_0;
	// System.Collections.Generic.List`1<THandler> oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2::DtBBgiVUhVBQCqpOSYaPHlZLtwr
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1;
	// oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2_mbRUjyPckYjvEffDpeqMsidmRJOV<THandler,TValue> oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2::LYvZsNQoceuNpVjLBiiGdwcfXHnQ
	int32_t ___LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2;

public:
	inline static int32_t get_offset_of_xpKiYdnflLFXhfjHjpPugtbIToQF_0() { return static_cast<int32_t>(offsetof(HierarchyEventHelper_2_t18B254FE947ECC2BD44F93BEA15EC167A0946208, ___xpKiYdnflLFXhfjHjpPugtbIToQF_0)); }
	inline EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A * get_xpKiYdnflLFXhfjHjpPugtbIToQF_0() const { return ___xpKiYdnflLFXhfjHjpPugtbIToQF_0; }
	inline EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A ** get_address_of_xpKiYdnflLFXhfjHjpPugtbIToQF_0() { return &___xpKiYdnflLFXhfjHjpPugtbIToQF_0; }
	inline void set_xpKiYdnflLFXhfjHjpPugtbIToQF_0(EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A * value)
	{
		___xpKiYdnflLFXhfjHjpPugtbIToQF_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xpKiYdnflLFXhfjHjpPugtbIToQF_0), (void*)value);
	}

	inline static int32_t get_offset_of_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1() { return static_cast<int32_t>(offsetof(HierarchyEventHelper_2_t18B254FE947ECC2BD44F93BEA15EC167A0946208, ___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1() const { return ___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1() { return &___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1; }
	inline void set_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1), (void*)value);
	}

	inline static int32_t get_offset_of_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2() { return static_cast<int32_t>(offsetof(HierarchyEventHelper_2_t18B254FE947ECC2BD44F93BEA15EC167A0946208, ___LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2)); }
	inline int32_t get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2() const { return ___LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2; }
	inline int32_t* get_address_of_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2() { return &___LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2; }
	inline void set_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2(int32_t value)
	{
		___LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2 = value;
	}
};


// oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2<System.Object,UnityEngine.Vector2>
struct  HierarchyEventHelper_2_t998ABFF4A3E42CB0A10135007EAD9148BA58D4E8  : public RuntimeObject
{
public:
	// oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<THandler,TValue> oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2::xpKiYdnflLFXhfjHjpPugtbIToQF
	EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE * ___xpKiYdnflLFXhfjHjpPugtbIToQF_0;
	// System.Collections.Generic.List`1<THandler> oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2::DtBBgiVUhVBQCqpOSYaPHlZLtwr
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1;
	// oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2_mbRUjyPckYjvEffDpeqMsidmRJOV<THandler,TValue> oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2::LYvZsNQoceuNpVjLBiiGdwcfXHnQ
	int32_t ___LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2;

public:
	inline static int32_t get_offset_of_xpKiYdnflLFXhfjHjpPugtbIToQF_0() { return static_cast<int32_t>(offsetof(HierarchyEventHelper_2_t998ABFF4A3E42CB0A10135007EAD9148BA58D4E8, ___xpKiYdnflLFXhfjHjpPugtbIToQF_0)); }
	inline EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE * get_xpKiYdnflLFXhfjHjpPugtbIToQF_0() const { return ___xpKiYdnflLFXhfjHjpPugtbIToQF_0; }
	inline EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE ** get_address_of_xpKiYdnflLFXhfjHjpPugtbIToQF_0() { return &___xpKiYdnflLFXhfjHjpPugtbIToQF_0; }
	inline void set_xpKiYdnflLFXhfjHjpPugtbIToQF_0(EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE * value)
	{
		___xpKiYdnflLFXhfjHjpPugtbIToQF_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xpKiYdnflLFXhfjHjpPugtbIToQF_0), (void*)value);
	}

	inline static int32_t get_offset_of_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1() { return static_cast<int32_t>(offsetof(HierarchyEventHelper_2_t998ABFF4A3E42CB0A10135007EAD9148BA58D4E8, ___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1() const { return ___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1() { return &___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1; }
	inline void set_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DtBBgiVUhVBQCqpOSYaPHlZLtwr_1), (void*)value);
	}

	inline static int32_t get_offset_of_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2() { return static_cast<int32_t>(offsetof(HierarchyEventHelper_2_t998ABFF4A3E42CB0A10135007EAD9148BA58D4E8, ___LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2)); }
	inline int32_t get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2() const { return ___LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2; }
	inline int32_t* get_address_of_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2() { return &___LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2; }
	inline void set_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2(int32_t value)
	{
		___LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2 = value;
	}
};


// wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>
struct  wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Rewired.ControllerMap> wtAIYQJbruDURiMwCNDuBBwhWhcj::MAfCHjHywJfLSUSXXqCDKGEIAal
	List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * ___MAfCHjHywJfLSUSXXqCDKGEIAal_0;
	// System.Collections.Generic.IList`1<Rewired.ControllerMap> wtAIYQJbruDURiMwCNDuBBwhWhcj::qRcwQAtBbdpCSRwppVNzGupRSCs
	RuntimeObject* ___qRcwQAtBbdpCSRwppVNzGupRSCs_1;
	// Rewired.ControllerType wtAIYQJbruDURiMwCNDuBBwhWhcj::wdIPOFeBVkomQchMraJtdqhtdMq
	int32_t ___wdIPOFeBVkomQchMraJtdqhtdMq_2;
	// System.Int32 wtAIYQJbruDURiMwCNDuBBwhWhcj::iHAfgamgEVxFqNaJMMCkqIZsTTm
	int32_t ___iHAfgamgEVxFqNaJMMCkqIZsTTm_3;
	// System.Collections.Generic.List`1<T> wtAIYQJbruDURiMwCNDuBBwhWhcj::SvoFXvkVjivbUiJpktrOTCTwHYJ
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___SvoFXvkVjivbUiJpktrOTCTwHYJ_4;
	// System.Collections.Generic.IList`1<T> wtAIYQJbruDURiMwCNDuBBwhWhcj::YokeXcugyJlvrfeeUClybMrYfoIY
	RuntimeObject* ___YokeXcugyJlvrfeeUClybMrYfoIY_5;

public:
	inline static int32_t get_offset_of_MAfCHjHywJfLSUSXXqCDKGEIAal_0() { return static_cast<int32_t>(offsetof(wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075, ___MAfCHjHywJfLSUSXXqCDKGEIAal_0)); }
	inline List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * get_MAfCHjHywJfLSUSXXqCDKGEIAal_0() const { return ___MAfCHjHywJfLSUSXXqCDKGEIAal_0; }
	inline List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E ** get_address_of_MAfCHjHywJfLSUSXXqCDKGEIAal_0() { return &___MAfCHjHywJfLSUSXXqCDKGEIAal_0; }
	inline void set_MAfCHjHywJfLSUSXXqCDKGEIAal_0(List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * value)
	{
		___MAfCHjHywJfLSUSXXqCDKGEIAal_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MAfCHjHywJfLSUSXXqCDKGEIAal_0), (void*)value);
	}

	inline static int32_t get_offset_of_qRcwQAtBbdpCSRwppVNzGupRSCs_1() { return static_cast<int32_t>(offsetof(wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075, ___qRcwQAtBbdpCSRwppVNzGupRSCs_1)); }
	inline RuntimeObject* get_qRcwQAtBbdpCSRwppVNzGupRSCs_1() const { return ___qRcwQAtBbdpCSRwppVNzGupRSCs_1; }
	inline RuntimeObject** get_address_of_qRcwQAtBbdpCSRwppVNzGupRSCs_1() { return &___qRcwQAtBbdpCSRwppVNzGupRSCs_1; }
	inline void set_qRcwQAtBbdpCSRwppVNzGupRSCs_1(RuntimeObject* value)
	{
		___qRcwQAtBbdpCSRwppVNzGupRSCs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qRcwQAtBbdpCSRwppVNzGupRSCs_1), (void*)value);
	}

	inline static int32_t get_offset_of_wdIPOFeBVkomQchMraJtdqhtdMq_2() { return static_cast<int32_t>(offsetof(wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075, ___wdIPOFeBVkomQchMraJtdqhtdMq_2)); }
	inline int32_t get_wdIPOFeBVkomQchMraJtdqhtdMq_2() const { return ___wdIPOFeBVkomQchMraJtdqhtdMq_2; }
	inline int32_t* get_address_of_wdIPOFeBVkomQchMraJtdqhtdMq_2() { return &___wdIPOFeBVkomQchMraJtdqhtdMq_2; }
	inline void set_wdIPOFeBVkomQchMraJtdqhtdMq_2(int32_t value)
	{
		___wdIPOFeBVkomQchMraJtdqhtdMq_2 = value;
	}

	inline static int32_t get_offset_of_iHAfgamgEVxFqNaJMMCkqIZsTTm_3() { return static_cast<int32_t>(offsetof(wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075, ___iHAfgamgEVxFqNaJMMCkqIZsTTm_3)); }
	inline int32_t get_iHAfgamgEVxFqNaJMMCkqIZsTTm_3() const { return ___iHAfgamgEVxFqNaJMMCkqIZsTTm_3; }
	inline int32_t* get_address_of_iHAfgamgEVxFqNaJMMCkqIZsTTm_3() { return &___iHAfgamgEVxFqNaJMMCkqIZsTTm_3; }
	inline void set_iHAfgamgEVxFqNaJMMCkqIZsTTm_3(int32_t value)
	{
		___iHAfgamgEVxFqNaJMMCkqIZsTTm_3 = value;
	}

	inline static int32_t get_offset_of_SvoFXvkVjivbUiJpktrOTCTwHYJ_4() { return static_cast<int32_t>(offsetof(wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075, ___SvoFXvkVjivbUiJpktrOTCTwHYJ_4)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4() const { return ___SvoFXvkVjivbUiJpktrOTCTwHYJ_4; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_SvoFXvkVjivbUiJpktrOTCTwHYJ_4() { return &___SvoFXvkVjivbUiJpktrOTCTwHYJ_4; }
	inline void set_SvoFXvkVjivbUiJpktrOTCTwHYJ_4(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___SvoFXvkVjivbUiJpktrOTCTwHYJ_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SvoFXvkVjivbUiJpktrOTCTwHYJ_4), (void*)value);
	}

	inline static int32_t get_offset_of_YokeXcugyJlvrfeeUClybMrYfoIY_5() { return static_cast<int32_t>(offsetof(wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075, ___YokeXcugyJlvrfeeUClybMrYfoIY_5)); }
	inline RuntimeObject* get_YokeXcugyJlvrfeeUClybMrYfoIY_5() const { return ___YokeXcugyJlvrfeeUClybMrYfoIY_5; }
	inline RuntimeObject** get_address_of_YokeXcugyJlvrfeeUClybMrYfoIY_5() { return &___YokeXcugyJlvrfeeUClybMrYfoIY_5; }
	inline void set_YokeXcugyJlvrfeeUClybMrYfoIY_5(RuntimeObject* value)
	{
		___YokeXcugyJlvrfeeUClybMrYfoIY_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___YokeXcugyJlvrfeeUClybMrYfoIY_5), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Comparison`1<System.Object>
struct  Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4  : public MulticastDelegate_t
{
public:

public:
};


// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Predicate`1<System.Object>
struct  Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct  UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct  UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct  U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::tweenInfo
	ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___tweenInfo_2)); }
	inline ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<System.Object,System.Boolean>
struct  EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86  : public MulticastDelegate_t
{
public:

public:
};


// oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<System.Object,System.Object>
struct  EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A  : public MulticastDelegate_t
{
public:

public:
};


// oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<System.Object,UnityEngine.Vector2>
struct  EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
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
// Rewired.ControllerMap[]
struct ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * m_Items[1];

public:
	inline ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m451452782977192583A6374A799099FCCD9BD83E_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m8F7880F43C4E281DBF7CA5A9431D5E6DD3797B7E_gshared (ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * __this, RuntimeObject* ___list0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m50D861A91F15E3169935F47FB656C3ED5486E74E_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5 (RuntimeObject * ___obj0, String_t* ___functionName1, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394 (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::ValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorTween_ValidTarget_mA5469658CB631C87CF97FC5AE2B9089A06678696 (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::get_ignoreTimeScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_mF935C53CA27D67D47AE0021A0DB8D92C392EF56B_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2 (const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.ColorTween::get_duration()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float ColorTween_get_duration_m7E952A00A8A606D7886422812EFB24A6D5BFB508_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorTween_TweenValue_m4EF3CDDDDC3986BA6D06D4DB785310B131958749 (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::ValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatTween_ValidTarget_m7DFE9AC7C8C0EBEF441D80472635CF4F38632E5E (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::get_ignoreTimeScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_m8281CB2B12F1697A512D2E2515F5DA058B429FD0_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.FloatTween::get_duration()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float FloatTween_get_duration_m17CD4518038CD642D714B3633236133D309EF13B_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.FloatTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_m78FEB902E18BE0882BC487BC29B6EA3905E4F05C (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Rewired.ControllerMap>::get_Item(System.Int32)
inline ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * List_1_get_Item_mADF483DC22F60B179F834797734DFFBAE6123F5A_inline (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * (*) (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Int32 Rewired.ControllerMap::get_categoryId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ControllerMap_get_categoryId_m1B05E24F82D8DED46B2BAFBCD9D8629328CFBA2B (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Rewired.ControllerMap>::get_Count()
inline int32_t List_1_get_Count_mB87AFEFB187F15D3B2B41BA3C4919E74A8256840_inline (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// !0[] System.Collections.Generic.List`1<Rewired.ControllerMap>::ToArray()
inline ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E* List_1_ToArray_m57FD5A381EAD73CDC168FFEC93C5D22EEA7CCC7C (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * __this, const RuntimeMethod* method)
{
	return ((  ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E* (*) (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Rewired.ControllerMap>::Clear()
inline void List_1_Clear_m88D5862BAF30335E7FEA486544F28FA5CECFF6DE (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Rewired.ControllerMap>::Add(!0)
inline void List_1_Add_mBB024C6A0C23217B87FABE55861D2532378BEE1B (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * __this, ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *, ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Rewired.ControllerMap>::.ctor()
inline void List_1__ctor_m0839F8110366CBDBC753D441E962E51A20E93E14 (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Rewired.ControllerMap>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m86D714200344F5D83977C34422287C90AC3DFD80 (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * __this, int32_t ___index0, ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *, int32_t, ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *, const RuntimeMethod*))List_1_set_Item_m451452782977192583A6374A799099FCCD9BD83E_gshared)(__this, ___index0, ___value1, method);
}
// Rewired.ControllerType HhmSRaAkgKoaczmkzwICaItBTdG::uTFkWvePdrBGenwUMKFIehUOOiR(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HhmSRaAkgKoaczmkzwICaItBTdG_uTFkWvePdrBGenwUMKFIehUOOiR_mD0590BDDAB5D27C94F63BA708E905A4956431D82 (Type_t * p0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ControllerMap>::.ctor(System.Collections.Generic.IList`1<!0>)
inline void ReadOnlyCollection_1__ctor_m43F319804F61EAF5B1BA3BEE99D5EC8F37B473DA (ReadOnlyCollection_1_t42C6EC4956F81037B0696DDF4310EEAD899406F9 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t42C6EC4956F81037B0696DDF4310EEAD899406F9 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m8F7880F43C4E281DBF7CA5A9431D5E6DD3797B7E_gshared)(__this, ___list0, method);
}
// System.Int32 Rewired.ControllerMap::get_layoutId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ControllerMap_get_layoutId_m1B90CB02DDE635CA339BA98082FD4F9480DF0EF7 (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * __this, const RuntimeMethod* method);
// System.Boolean Rewired.ControllerMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerMap_get_enabled_m454281A8B80828B120C4F7EDF2BC52028AD35C6F (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * __this, const RuntimeMethod* method);
// System.Void Rewired.ControllerMap::set_enabled(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ControllerMap_set_enabled_m4A347FEEC7D6FF51515C88121C4F2A0437B472A8_inline (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Rewired.ControllerMap>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m7016ACAC4680B5067B4C91DF77A292D8E8D427A5 (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m50D861A91F15E3169935F47FB656C3ED5486E74E_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<Rewired.ControllerMap>::Remove(!0)
inline bool List_1_Remove_m89A219C1A47D8F7CEDA4FAD3FD848DBCC009D28C (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * __this, ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *, ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Int32 Rewired.ControllerMap::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ControllerMap_get_id_m6FA8319C62C718FE081C3D490348B1235840E336 (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * __this, const RuntimeMethod* method);
// System.Boolean Rewired.InputCategory::get_userAssignable()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool InputCategory_get_userAssignable_m6F4B367A66B6F94277FB20F851F2280FB6059B64_inline (InputCategory_t775B2399E2070EF82BBA5D9676BD00C30159D918 * __this, const RuntimeMethod* method);
// Rewired.ReInput/MappingHelper Rewired.ReInput::get_mapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 * ReInput_get_mapping_m57CBC64F23235AA736D4C057ED17A85421F00D5C (const RuntimeMethod* method);
// Rewired.InputMapCategory Rewired.ReInput/MappingHelper::GetMapCategory(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602 * MappingHelper_GetMapCategory_mBC62128856B61C97B7AD00A9739EABA209EEFDD0 (MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 * __this, int32_t ___mapCategoryId0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m548CD03D315CD41D7A6EF3242515CAF0D6C158C3_gshared (UnityEvent_3_t2806FFBD49F1501D6C532F2520EFAB143233B6D9 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_mDEE1409662BC040478ADF5E0ABF95B8E381D32C4_gshared (UnityEvent_3_t2806FFBD49F1501D6C532F2520EFAB143233B6D9 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_mDEE1409662BC040478ADF5E0ABF95B8E381D32C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_0038;
	}

IL_0038:
	{
		MethodInfo_t * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_3_GetDelegate_m86F79543DFE31A25A4BBA5B165DF42922D30619B_gshared (UnityEvent_3_t2806FFBD49F1501D6C532F2520EFAB143233B6D9 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED * L_2 = (InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_mFBD41665482064D8F8909DB9828D3946C57EEA1E_gshared (UnityEvent_3_t2806FFBD49F1501D6C532F2520EFAB143233B6D9 * __this, RuntimeObject * ___arg00, int32_t ___arg11, int32_t ___arg22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_Invoke_mFBD41665482064D8F8909DB9828D3946C57EEA1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_00bc;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *)((InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED * L_6 = V_2;
		RuntimeObject * L_7 = ___arg00;
		int32_t L_8 = ___arg11;
		int32_t L_9 = ___arg22;
		((  void (*) (InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *, RuntimeObject *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *)L_6, (RuntimeObject *)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_00b7;
	}

IL_0034:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_10 = V_0;
		int32_t L_11 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_12 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_10, (int32_t)L_11, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_12, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_13 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_15 = V_4;
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_15, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_0058:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_16 = V_0;
		int32_t L_17 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_18 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_16, (int32_t)L_17, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_18;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_19) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_m_InvokeArray_3(L_21);
	}

IL_007d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_23 = ___arg00;
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		int32_t L_25 = ___arg11;
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_26);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_27);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		int32_t L_29 = ___arg22;
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), &L_30);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_31);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_32 = V_6;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_32, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_33);
	}

IL_00b6:
	{
	}

IL_00b7:
	{
		int32_t L_34 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00bc:
	{
		int32_t L_35 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_36 = V_0;
		int32_t L_37 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_36, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_35) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_8;
		if (L_38)
		{
			goto IL_000f;
		}
	}
	{
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
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_mF7A53B951222BC66BE6F471036270FC66C36FAA2_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_0038;
	}

IL_0038:
	{
		MethodInfo_t * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_3_GetDelegate_mDD941B02CC78310DE703586880CD8C926CF5EC2C_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * L_2 = (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_m012D72FFB78BAC1A48A2B8C027CC180D96E963DA_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_Invoke_m012D72FFB78BAC1A48A2B8C027CC180D96E963DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_00bc;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)((InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * L_6 = V_2;
		RuntimeObject * L_7 = ___arg00;
		RuntimeObject * L_8 = ___arg11;
		RuntimeObject * L_9 = ___arg22;
		((  void (*) (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)L_6, (RuntimeObject *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_00b7;
	}

IL_0034:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_10 = V_0;
		int32_t L_11 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_12 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_10, (int32_t)L_11, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_12, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_13 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_15 = V_4;
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_15, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_0058:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_16 = V_0;
		int32_t L_17 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_18 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_16, (int32_t)L_17, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_18;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_19) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_m_InvokeArray_3(L_21);
	}

IL_007d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_23 = ___arg00;
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_25 = ___arg11;
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_27 = ___arg22;
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_27);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_28 = V_6;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_28, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_29);
	}

IL_00b6:
	{
	}

IL_00b7:
	{
		int32_t L_30 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00bc:
	{
		int32_t L_31 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_32 = V_0;
		int32_t L_33 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_32, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_31) < ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_8;
		if (L_34)
		{
			goto IL_000f;
		}
	}
	{
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
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_m04FBFD537FBAF349F05C24B6EB9360FF08685819_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_12 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_14 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_13, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_14);
		MethodInfo_t * L_15 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_12, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_15;
		goto IL_0045;
	}

IL_0045:
	{
		MethodInfo_t * L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_4_GetDelegate_mAD2A7239ECF210269A5974AE66F1CFDB13977F54_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * L_2 = (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
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
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Add_m0DBD135B8F3890966228AD853997DDA56594BBB5_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// m_List.Add(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		RuntimeObject * L_1 = ___item0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// m_Dictionary.Add(item, m_List.Count - 1);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_2 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_3 = ___item0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_5 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_2, (RuntimeObject *)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::AddUnique(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_AddUnique_m90A07ACAD8A4E562C11674ED9598E5DE3AFE5F48_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// if (m_Dictionary.ContainsKey(item))
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// m_List.Add(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		RuntimeObject * L_4 = ___item0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// m_Dictionary.Add(item, m_List.Count - 1);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_5 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = ___item0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_7 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_8 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5, (RuntimeObject *)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_Remove_m8C62E0808CB2D9452B58F1CB736C431F04CA1F4B_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int index = -1;
		V_0 = (int32_t)(-1);
		// if (!m_Dictionary.TryGetValue(item, out index))
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// RemoveAt(index);
		int32_t L_3 = V_0;
		((  void (*) (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// return true;
		return (bool)1;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_mCF3FE522F4B06100050E73BCDE298D8F8D7A3EE8_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_0;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Clear_m689CFB50CED51E5F519BEEF51B8D8C6FFBF41FB9_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		// m_List.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// m_Dictionary.Clear();
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_1 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// }
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_Contains_mCA290D982CEDEE20068188B38AC28A45CDDC9D13_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// return m_Dictionary.ContainsKey(item);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_CopyTo_m4254FBBA5B5B56B791828D193E5F4CA665CF7852_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		// m_List.CopyTo(array, arrayIndex);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// }
		return;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedSet_1_get_Count_mA8B3EBDB71AD001C6D39FA35D79D7516C1C267E4_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		// public int Count { get { return m_List.Count; } }
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_get_IsReadOnly_m01297860A8BC8B4B6C66DC72C406933ED9D9937D_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReadOnly { get { return false; } }
		return (bool)0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedSet_1_IndexOf_m6BB93EC59B8E7F835F15A3340E9884CAB29401AB_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int index = -1;
		V_0 = (int32_t)(-1);
		// if (m_Dictionary.TryGetValue(item, out index))
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return index;
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0014:
	{
		// return -1;
		return (-1);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("Random Insertion is semantically invalid, since this structure does not guarantee ordering.");
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_0, (String_t*)_stringLiteralDFADDFA065E9D92CFE8B8F06444DD5652DFC1D58, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAt_mBFCEF1CBBC140206B5DFCAE8205161429441E0EA_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		// T item = m_List[index];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_2;
		// m_Dictionary.Remove(item);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_3 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// if (index == m_List.Count - 1)
		int32_t L_5 = ___index0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_6 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_7 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1))))))
		{
			goto IL_0037;
		}
	}
	{
		// m_List.RemoveAt(index);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_9 = ___index0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return;
	}

IL_0037:
	{
		// int replaceItemIndex = m_List.Count - 1;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_11 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		// T replaceItem = m_List[replaceItemIndex];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_12 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_13 = V_1;
		RuntimeObject * L_14 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_12, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_2 = (RuntimeObject *)L_14;
		// m_List[index] = replaceItem;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_15 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_16 = ___index0;
		RuntimeObject * L_17 = V_2;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15, (int32_t)L_16, (RuntimeObject *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		// m_Dictionary[replaceItem] = index;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_18 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_19 = V_2;
		int32_t L_20 = ___index0;
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_18, (RuntimeObject *)L_19, (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		// m_List.RemoveAt(replaceItemIndex);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_21 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_22 = V_1;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21, (int32_t)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		// }
		return;
	}
}
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IndexedSet_1_get_Item_m982CBDB4CDA1A497EC25A60EC17AB8F7B2D51BC0_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// get { return m_List[index]; }
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_set_Item_m507562D8C316C7A1C0E521284172D4DB5D8A46BA_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// T item = m_List[index];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_2;
		// m_Dictionary.Remove(item);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_3 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// m_List[index] = value;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_6 = ___index0;
		RuntimeObject * L_7 = ___value1;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, (int32_t)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		// m_Dictionary.Add(item, index);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_8 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_9 = V_0;
		int32_t L_10 = ___index0;
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_8, (RuntimeObject *)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAll_m2215BF66C8BA3D7439D16985AD52B0A6A66AD541_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		// int i = 0;
		V_0 = (int32_t)0;
		goto IL_0028;
	}

IL_0004:
	{
		// T item = m_List[i];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = V_0;
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_1 = (RuntimeObject *)L_2;
		// if (match(item))
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_3 = ___match0;
		RuntimeObject * L_4 = V_1;
		bool L_5 = ((  bool (*) (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// Remove(item);
		RuntimeObject * L_6 = V_1;
		((  bool (*) (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		goto IL_0028;
	}

IL_0024:
	{
		// i++;
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0028:
	{
		// while (i < m_List.Count)
		int32_t L_8 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_10 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Sort_m0365BC9CE6449DBD358C479FB244D07FE72F36E7_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * ___sortLayoutFunction0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		// m_List.Sort(sortLayoutFunction);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * L_1 = ___sortLayoutFunction0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		// for (int i = 0; i < m_List.Count; ++i)
		V_0 = (int32_t)0;
		goto IL_002e;
	}

IL_0010:
	{
		// T item = m_List[i];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_3 = V_0;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_1 = (RuntimeObject *)L_4;
		// m_Dictionary[item] = i;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_5 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = V_1;
		int32_t L_7 = V_0;
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5, (RuntimeObject *)L_6, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		// for (int i = 0; i < m_List.Count; ++i)
		int32_t L_8 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002e:
	{
		// for (int i = 0; i < m_List.Count; ++i)
		int32_t L_9 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_11 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1__ctor_mA9E3CAA05341D4863E3080C31170AB64AAED0573_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		// readonly List<T> m_List = new List<T>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		__this->set_m_List_0(L_0);
		// Dictionary<T, int> m_Dictionary = new Dictionary<T, int>();
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_1 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Dictionary_1(L_1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m6FC80299A2464A5F19E422273392ADBEE6805533_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_m3AFD56D8AAA6B170D4C5FEF021CC672C2F885C9A_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m60167073DFDFFC72E0494F1178A8927098A64D12_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_MoveNext_m60167073DFDFFC72E0494F1178A8927098A64D12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float G_B8_0 = 0.0f;
	U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * G_B9_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00a8;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!tweenInfo.ValidTarget())
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_3 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		bool L_4 = ColorTween_ValidTarget_mA5469658CB631C87CF97FC5AE2B9089A06678696((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_002f:
	{
		// var elapsedTime = 0.0f;
		__this->set_U3CelapsedTimeU3E5__2_3((0.0f));
		goto IL_00af;
	}

IL_003c:
	{
		// elapsedTime += tweenInfo.ignoreTimeScale ? Time.unscaledDeltaTime : Time.deltaTime;
		float L_5 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_6 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		bool L_7 = ColorTween_get_ignoreTimeScale_mF935C53CA27D67D47AE0021A0DB8D92C392EF56B_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_6, /*hidden argument*/NULL);
		G_B7_0 = L_5;
		G_B7_1 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(__this));
		if (L_7)
		{
			G_B8_0 = L_5;
			G_B8_1 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(__this));
			goto IL_005d;
		}
	}
	{
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		G_B9_0 = L_8;
		G_B9_1 = G_B7_0;
		G_B9_2 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(G_B7_1));
		goto IL_0062;
	}

IL_005d:
	{
		float L_9 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
		G_B9_2 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(G_B8_1));
	}

IL_0062:
	{
		G_B9_2->set_U3CelapsedTimeU3E5__2_3(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		// var percentage = Mathf.Clamp01(elapsedTime / tweenInfo.duration);
		float L_10 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_11 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		float L_12 = ColorTween_get_duration_m7E952A00A8A606D7886422812EFB24A6D5BFB508_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B((float)((float)((float)L_10/(float)L_12)), /*hidden argument*/NULL);
		V_1 = (float)L_13;
		// tweenInfo.TweenValue(percentage);
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_14 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		float L_15 = V_1;
		ColorTween_TweenValue_m4EF3CDDDDC3986BA6D06D4DB785310B131958749((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_14, (float)L_15, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00af:
	{
		// while (elapsedTime < tweenInfo.duration)
		float L_16 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_17 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		float L_18 = ColorTween_get_duration_m7E952A00A8A606D7886422812EFB24A6D5BFB508_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_003c;
		}
	}
	{
		// tweenInfo.TweenValue(1.0f);
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_19 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		ColorTween_TweenValue_m4EF3CDDDDC3986BA6D06D4DB785310B131958749((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF79BB0AA7D52BC685ED74FE04086C3155BE46893_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_mC5F1F242C0EE5549C75A5721204FD9207EB716A6_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m2AE86242B5268C78D780861B343B1227E2479CE2_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_mBD909D28E90E3EB5172683C41EDB69A5CEC3B29A_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m0EE17EEE1FD4E844C9CDA2AA8815CBECBB0DBA9F_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_MoveNext_m0EE17EEE1FD4E844C9CDA2AA8815CBECBB0DBA9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float G_B8_0 = 0.0f;
	U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * G_B9_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00a8;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!tweenInfo.ValidTarget())
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_3 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		bool L_4 = FloatTween_ValidTarget_m7DFE9AC7C8C0EBEF441D80472635CF4F38632E5E((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_002f:
	{
		// var elapsedTime = 0.0f;
		__this->set_U3CelapsedTimeU3E5__2_3((0.0f));
		goto IL_00af;
	}

IL_003c:
	{
		// elapsedTime += tweenInfo.ignoreTimeScale ? Time.unscaledDeltaTime : Time.deltaTime;
		float L_5 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_6 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		bool L_7 = FloatTween_get_ignoreTimeScale_m8281CB2B12F1697A512D2E2515F5DA058B429FD0_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_6, /*hidden argument*/NULL);
		G_B7_0 = L_5;
		G_B7_1 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(__this));
		if (L_7)
		{
			G_B8_0 = L_5;
			G_B8_1 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(__this));
			goto IL_005d;
		}
	}
	{
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		G_B9_0 = L_8;
		G_B9_1 = G_B7_0;
		G_B9_2 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(G_B7_1));
		goto IL_0062;
	}

IL_005d:
	{
		float L_9 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
		G_B9_2 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(G_B8_1));
	}

IL_0062:
	{
		G_B9_2->set_U3CelapsedTimeU3E5__2_3(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		// var percentage = Mathf.Clamp01(elapsedTime / tweenInfo.duration);
		float L_10 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_11 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		float L_12 = FloatTween_get_duration_m17CD4518038CD642D714B3633236133D309EF13B_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B((float)((float)((float)L_10/(float)L_12)), /*hidden argument*/NULL);
		V_1 = (float)L_13;
		// tweenInfo.TweenValue(percentage);
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_14 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		float L_15 = V_1;
		FloatTween_TweenValue_m78FEB902E18BE0882BC487BC29B6EA3905E4F05C((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_14, (float)L_15, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00af:
	{
		// while (elapsedTime < tweenInfo.duration)
		float L_16 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_17 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		float L_18 = FloatTween_get_duration_m17CD4518038CD642D714B3633236133D309EF13B_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_003c;
		}
	}
	{
		// tweenInfo.TweenValue(1.0f);
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_19 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		FloatTween_TweenValue_m78FEB902E18BE0882BC487BC29B6EA3905E4F05C((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD32BEE6827A03105EAE2BB0DD9D3D46620BD131C_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_mD96F6DCD598679604A87A46CC51E64FD2B23019A_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
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
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Start(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_mC2568158E444C4708AB2AE4A41715412B27675D4_gshared (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___tweenInfo0, const RuntimeMethod* method)
{
	{
		U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * L_0 = (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * L_1 = (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)L_0;
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  L_2 = ___tweenInfo0;
		L_1->set_tweenInfo_2(L_2);
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Init(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_mB9D1917305679C4620D9F3D8DEE2215DFCAB3057_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		// m_CoroutineContainer = coroutineContainer;
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_mA10B864FF4FF1D68D8B117B94B06FF35F5373FA7_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_mA10B864FF4FF1D68D8B117B94B06FF35F5373FA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CoroutineContainer == null)
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogWarning("Coroutine container not configured... did you forget to call Init?");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568((RuntimeObject *)_stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// StopTween();
		((  void (*) (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// if (!m_CoroutineContainer.gameObject.activeInHierarchy)
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_2 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		// info.TweenValue(1.0f);
		ColorTween_TweenValue_m4EF3CDDDDC3986BA6D06D4DB785310B131958749((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0044:
	{
		// m_Tween = Start(info);
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		// m_CoroutineContainer.StartCoroutine(m_Tween);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_7 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StopTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m144D05B742FE3B45CAF9E39F351DFE015B8D72A9_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, const RuntimeMethod* method)
{
	{
		// if (m_Tween != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// m_CoroutineContainer.StopCoroutine(m_Tween);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_1 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		// m_Tween = null;
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_mDFB148DCD4CD644010BDFD27F1D0DABA9BB528F7_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Start(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m138F7317CB8D005AE5859487FBD18C15E5171F76_gshared (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___tweenInfo0, const RuntimeMethod* method)
{
	{
		U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * L_0 = (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * L_1 = (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)L_0;
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  L_2 = ___tweenInfo0;
		L_1->set_tweenInfo_2(L_2);
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Init(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m36554C1037EC37B2D67A1BDE9B4D2407FE2C7657_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		// m_CoroutineContainer = coroutineContainer;
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_mCD6A38F2A78EADA8BFD4D710333E6263D32DAEFE_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_mCD6A38F2A78EADA8BFD4D710333E6263D32DAEFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CoroutineContainer == null)
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogWarning("Coroutine container not configured... did you forget to call Init?");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568((RuntimeObject *)_stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// StopTween();
		((  void (*) (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// if (!m_CoroutineContainer.gameObject.activeInHierarchy)
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_2 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		// info.TweenValue(1.0f);
		FloatTween_TweenValue_m78FEB902E18BE0882BC487BC29B6EA3905E4F05C((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0044:
	{
		// m_Tween = Start(info);
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		// m_CoroutineContainer.StartCoroutine(m_Tween);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_7 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StopTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m7EA08229E2A074D42B52A1F63C74871F48B3A748_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, const RuntimeMethod* method)
{
	{
		// if (m_Tween != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// m_CoroutineContainer.StopCoroutine(m_Tween);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_1 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		// m_Tween = null;
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_mBCECADAAC67B34851BF7AE7F23AAA7BEDD17CDAE_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_mDFC87A2C3A59C78CE3F2BFBF6394BAF88A791973_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = ___l0;
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Int32>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ListPool_1_Get_mE24C8BF45625DFCEC780B128AF4F5CACCDAD4E84_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * L_0 = ((ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ((  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * (*) (ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m21C2836B76CF178B2B4EADBAB1F8E2CEFE1D7A3B_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * L_0 = ((ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ___toRelease0;
		((  void (*) (ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)L_0, (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_mEDDF3833673FBF22292A8CE001267CE47A06D4E7_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * L_0 = (UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * L_1 = (ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *, UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *, UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *)NULL, (UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m4B97511A75755BD2A11A6213F00B2E36ADF3F0B8_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___l0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ListPool_1_Get_mEE963F0CFA2D9BE7F593624F2825F9C8E326217D_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ((  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * (*) (ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_mA153831D5786A134340D88D3C5C14451A188C6B6_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___toRelease0;
		((  void (*) (ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)L_0, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m2378D0E35B8BFADD0DBC1896B035099042BF39E9_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * L_0 = (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * L_1 = (ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *, UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *, UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *)NULL, (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m7E0463074AFDE74F6941D20F82B563D9855CA51F_gshared (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_0 = ___l0;
		((  void (*) (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ListPool_1_Get_mFA5B1FE71203BEA07EC99A8187CAFC9801601275_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * L_0 = ((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_1 = ((  List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * (*) (ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m13C60947514129CCE106341D6F821D7CC8CB7927_gshared (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * L_0 = ((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_1 = ___toRelease0;
		((  void (*) (ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *, List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)L_0, (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m6F6BB1DEAEBDCC1348DB47B9E0E10C0A1E36F68C_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * L_0 = (UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * L_1 = (ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *, UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *, UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *)NULL, (UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_mCA5F9E34875E7BE7BF5093AA41CB68AA14782B9A_gshared (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_0 = ___l0;
		((  void (*) (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ListPool_1_Get_m269C301744C63E55CDD01465B1BDCD0FA9802244_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * L_0 = ((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_1 = ((  List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * (*) (ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m6653E07E399B9C444F12BEEE866B60F2F99F8D69_gshared (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * L_0 = ((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_1 = ___toRelease0;
		((  void (*) (ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *, List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)L_0, (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_mB9695B98AC5B1F1D1A9B8E899684DAECA74B5E8C_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * L_0 = (UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * L_1 = (ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *, UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *, UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *)NULL, (UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m3C051B0DE1D02A52725D7579945480EED3C9FE8E_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_0 = ___l0;
		((  void (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ListPool_1_Get_m11B7B6B7B0A7397CE137967BD7B5DE5A89B50FD0_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * L_0 = ((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = ((  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * (*) (ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_mE0437FA6DA0DDBF3E142087FD60E5C1546D00378_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * L_0 = ((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = ___toRelease0;
		((  void (*) (ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *, List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)L_0, (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m72914A2BE483C25F9A1F466683250D88B2E3CE07_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * L_0 = (UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * L_1 = (ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *, UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *, UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *)NULL, (UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_mAB96DA37D0FB4B06F1603AA1070DD09866B3B220_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___l0;
		((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ListPool_1_Get_m37FA5515EC4738DA642BD39C6776AAD939257066_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * L_0 = ((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ((  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * (*) (ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_mEEEA52258097A3C1D70BCA0C1E44F2FE2D7FA5F0_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * L_0 = ((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ___toRelease0;
		((  void (*) (ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)L_0, (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m9BC9B0BFB33F3DF6E196D870C49E7D8227EDA837_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * L_0 = (UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * L_1 = (ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *, UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *, UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *)NULL, (UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m548445516D0160B74B6DD63031666DFF0A8D0047_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_0 = ___l0;
		((  void (*) (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ListPool_1_Get_mFF001445D71845169AA17846983938A308ABCBEB_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * L_0 = ((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_1 = ((  List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * (*) (ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m9C3BDAB2B2F59B29C028861D014CDFABA3B7F648_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * L_0 = ((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_1 = ___toRelease0;
		((  void (*) (ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *, List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)L_0, (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m672E25A57B4521532BFB0CC9717C346E57B88DFD_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * L_0 = (UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * L_1 = (ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *, UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *, UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *)NULL, (UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countAll_mC773F09A80F4F0FE9AF2A3831AF76CCBED566D3F_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, const RuntimeMethod* method)
{
	{
		// public int countAll { get; private set; }
		int32_t L_0 = (int32_t)__this->get_U3CcountAllU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_set_countAll_mAF458EE2DD8B26D48576D0FFA139136AAA5180BF_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int countAll { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcountAllU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countActive_m4730514BD98185504151694E8E8DF02A52AF1576_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, const RuntimeMethod* method)
{
	{
		// public int countActive { get { return countAll - countInactive; } }
		int32_t L_0 = ((  int32_t (*) (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		int32_t L_1 = ((  int32_t (*) (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countInactive_mDD0DBF2D2FAD68149708F5443A79FD27D6285D11_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, const RuntimeMethod* method)
{
	{
		// public int countInactive { get { return m_Stack.Count; } }
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m5A29AD1D0B7DD5C4F207B1659FF168D4BF7C0D01_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnGet0, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnRelease1, const RuntimeMethod* method)
{
	{
		// private readonly Stack<T> m_Stack = new Stack<T>();
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Stack_0(L_0);
		// public ObjectPool(UnityAction<T> actionOnGet, UnityAction<T> actionOnRelease)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		// m_ActionOnGet = actionOnGet;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = ___actionOnGet0;
		__this->set_m_ActionOnGet_1(L_1);
		// m_ActionOnRelease = actionOnRelease;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = ___actionOnRelease1;
		__this->set_m_ActionOnRelease_2(L_2);
		// }
		return;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m6478DC644CCD8FE64CF24AF5490B2E1054FB4F78_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (m_Stack.Count == 0)
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		// element = new T();
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_2;
		// countAll++;
		int32_t L_3 = ((  int32_t (*) (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_1;
		((  void (*) (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// }
		goto IL_0031;
	}

IL_0025:
	{
		// element = m_Stack.Pop();
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_5 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_0 = (RuntimeObject *)L_6;
	}

IL_0031:
	{
		// if (m_ActionOnGet != null)
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnGet_1();
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		// m_ActionOnGet(element);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_8 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnGet_1();
		RuntimeObject * L_9 = V_0;
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0045:
	{
		// return element;
		RuntimeObject * L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_mC1D66E968E7A04252A79426F4F2D45ED0F292B86_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, RuntimeObject * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_mC1D66E968E7A04252A79426F4F2D45ED0F292B86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Stack.Count > 0 && ReferenceEquals(m_Stack.Peek(), element))
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_2 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		RuntimeObject * L_4 = ___element0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(RuntimeObject *)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError("Internal error. Trying to destroy object that is already released to pool.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// if (m_ActionOnRelease != null)
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_5 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnRelease_2();
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// m_ActionOnRelease(element);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnRelease_2();
		RuntimeObject * L_7 = ___element0;
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0044:
	{
		// m_Stack.Push(element);
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_8 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		RuntimeObject * L_9 = ___element0;
		((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
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
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_2__ctor_m13E1BB216082552CC3E19B7C2B3D7075EA178B1A_gshared (EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<System.Object,System.Boolean>::Invoke(T,TArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_2_Invoke_mBB609CD3CD51102BA9860D8C877CB68D4F1178F0_gshared (EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 * __this, RuntimeObject * ___handler0, bool ___value1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handler0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, ___value1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, ___handler0, ___value1);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, ___handler0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handler0, ___value1);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handler0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___value1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___handler0, ___value1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___handler0, ___value1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, bool >::Invoke(targetMethod, targetThis, ___handler0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, bool >::Invoke(targetMethod, targetThis, ___handler0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handler0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handler0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___handler0) - 1), ___value1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, ___value1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<System.Object,System.Boolean>::BeginInvoke(T,TArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventFunction_2_BeginInvoke_mA6C03F209DE941F3C4ED8BD0E6B93EADBBD69F97_gshared (EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 * __this, RuntimeObject * ___handler0, bool ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventFunction_2_BeginInvoke_mA6C03F209DE941F3C4ED8BD0E6B93EADBBD69F97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___handler0;
	__d_args[1] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_2_EndInvoke_m6C3B5FBD59585328110D5EAD588E3CD557414A5B_gshared (EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_2__ctor_m7DD5AE40ACB1D8682B6D04DFCDC3FFE687578EDF_gshared (EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<System.Object,System.Object>::Invoke(T,TArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_2_Invoke_mBB8E141896321C54F3879A4CEE394F457EDDABC6_gshared (EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A * __this, RuntimeObject * ___handler0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handler0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, ___value1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___handler0, ___value1);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___handler0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handler0, ___value1);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handler0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___value1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___handler0, ___value1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___handler0, ___value1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___handler0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___handler0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handler0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handler0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___handler0) - 1), ___value1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, ___value1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<System.Object,System.Object>::BeginInvoke(T,TArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventFunction_2_BeginInvoke_m0244DB7BF4436D21D983246D7B673809307892CD_gshared (EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A * __this, RuntimeObject * ___handler0, RuntimeObject * ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___handler0;
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_2_EndInvoke_mA4934D4D10F3BC4E38D8121199D424D3DCA04262_gshared (EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<System.Object,UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_2__ctor_mF575D7D51726CBFF894D3B223DDA7CFD25746CC4_gshared (EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<System.Object,UnityEngine.Vector2>::Invoke(T,TArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_2_Invoke_m59877BBEEE8EE5830F5FEC5C6D94D6D35EBA89E5_gshared (EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE * __this, RuntimeObject * ___handler0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handler0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, ___value1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(targetMethod, ___handler0, ___value1);
					else
						GenericVirtActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(targetMethod, ___handler0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handler0, ___value1);
					else
						VirtActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handler0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___value1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___handler0, ___value1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___handler0, ___value1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(targetMethod, targetThis, ___handler0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(targetMethod, targetThis, ___handler0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handler0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handler0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___handler0) - 1), ___value1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, ___value1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<System.Object,UnityEngine.Vector2>::BeginInvoke(T,TArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventFunction_2_BeginInvoke_m9CE857458DB6FD99EAA10142A67DF0173E018307_gshared (EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE * __this, RuntimeObject * ___handler0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventFunction_2_BeginInvoke_m9CE857458DB6FD99EAA10142A67DF0173E018307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___handler0;
	__d_args[1] = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<System.Object,UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_2_EndInvoke_m29B1EA253E8B3081846A36171EA7F707E459CD99_gshared (EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2<System.Object,System.Boolean>::.ctor(oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<THandler,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HierarchyEventHelper_2__ctor_m248357667B96A915A48488DB6F41E9634FC15B9B_gshared (HierarchyEventHelper_2_t037A59395A5642605AE7490E2F03D0B4227D887B * __this, EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 * ___executeDelegate0, const RuntimeMethod* method)
{
	{
		EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 * L_0 = ___executeDelegate0;
		((  void (*) (HierarchyEventHelper_2_t037A59395A5642605AE7490E2F03D0B4227D887B *, EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((HierarchyEventHelper_2_t037A59395A5642605AE7490E2F03D0B4227D887B *)__this, (EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 *)L_0, (int32_t)5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2<System.Object,System.Boolean>::.ctor(oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<THandler,TValue>,oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2_mbRUjyPckYjvEffDpeqMsidmRJOV<THandler,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HierarchyEventHelper_2__ctor_mE29A50F32EFE1F91E0357A86592BC2AA3D57867D_gshared (HierarchyEventHelper_2_t037A59395A5642605AE7490E2F03D0B4227D887B * __this, EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 * ___executeDelegate0, int32_t ___executeOn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HierarchyEventHelper_2__ctor_mE29A50F32EFE1F91E0357A86592BC2AA3D57867D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 * L_0 = ___executeDelegate0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral52934C29CA4A1A7572C6905BD6AB705A2C135973, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, HierarchyEventHelper_2__ctor_mE29A50F32EFE1F91E0357A86592BC2AA3D57867D_RuntimeMethod_var);
	}

IL_0014:
	{
		EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 * L_2 = ___executeDelegate0;
		__this->set_xpKiYdnflLFXhfjHjpPugtbIToQF_0(L_2);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		__this->set_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1(L_3);
		int32_t L_4 = ___executeOn1;
		__this->set_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2(L_4);
		return;
	}
}
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2<System.Object,System.Boolean>::ExecuteOnAll(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HierarchyEventHelper_2_ExecuteOnAll_m91930525ABC688BFF563A24C62D86AA12A86FAB2_gshared (HierarchyEventHelper_2_t037A59395A5642605AE7490E2F03D0B4227D887B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1();
		bool L_1 = ___value0;
		EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 * L_2 = (EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 *)__this->get_xpKiYdnflLFXhfjHjpPugtbIToQF_0();
		((  void (*) (RuntimeObject*, bool, EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_0, (bool)L_1, (EventFunction_2_tAC9BD3C01FF2ED2C3787B2F3DD9AAEAFE2E74F86 *)L_2, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2<System.Object,System.Boolean>::GetHandlers(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HierarchyEventHelper_2_GetHandlers_mBBE9493B2C365ADD3B086EA23757B3DF492486FC_gshared (HierarchyEventHelper_2_t037A59395A5642605AE7490E2F03D0B4227D887B * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HierarchyEventHelper_2_GetHandlers_mBBE9493B2C365ADD3B086EA23757B3DF492486FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (!((int32_t)((int32_t)L_0&(int32_t)1)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (!((int32_t)((int32_t)L_1&(int32_t)4)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (!((int32_t)((int32_t)L_2&(int32_t)8)))
		{
			goto IL_005c;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___transform0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_3, /*hidden argument*/NULL);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1();
		IL2CPP_RUNTIME_CLASS_INIT(UnityTools_t6854B0D1F5B4AD5CC66C40436BEAA1EF5FB9314E_il2cpp_TypeInfo_var);
		((  int32_t (*) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}

IL_0032:
	{
		G_B5_0 = ((int32_t)1172676373);
	}

IL_0037:
	{
		switch (((int32_t)((int32_t)G_B5_0^(int32_t)((int32_t)1172676372))))
		{
			case 0:
			{
				goto IL_0096;
			}
			case 1:
			{
				goto IL_005c;
			}
			case 2:
			{
				goto IL_0077;
			}
			case 3:
			{
				goto IL_0032;
			}
			case 4:
			{
				goto IL_00cd;
			}
			case 5:
			{
				goto IL_00b5;
			}
		}
	}
	{
		goto IL_00cd;
	}

IL_005c:
	{
		int32_t L_6 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (((int32_t)((int32_t)L_6&(int32_t)4)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_7 = (int32_t)((int32_t)1172676374);
		G_B10_0 = L_7;
		G_B10_1 = L_7;
		goto IL_0074;
	}

IL_006e:
	{
		int32_t L_8 = (int32_t)((int32_t)1172676372);
		G_B10_0 = L_8;
		G_B10_1 = L_8;
	}

IL_0074:
	{
		G_B5_0 = G_B10_1;
		goto IL_0037;
	}

IL_0077:
	{
		int32_t L_9 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (!((int32_t)((int32_t)L_9&(int32_t)8)))
		{
			goto IL_00cd;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = ___transform0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1();
		IL2CPP_RUNTIME_CLASS_INIT(UnityTools_t6854B0D1F5B4AD5CC66C40436BEAA1EF5FB9314E_il2cpp_TypeInfo_var);
		((  int32_t (*) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_11, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		G_B5_0 = ((int32_t)1172676368);
		goto IL_0037;
	}

IL_0096:
	{
		int32_t L_12 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (!((int32_t)((int32_t)L_12&(int32_t)1)))
		{
			goto IL_00b5;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = ___transform0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_14 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1();
		IL2CPP_RUNTIME_CLASS_INIT(UnityTools_t6854B0D1F5B4AD5CC66C40436BEAA1EF5FB9314E_il2cpp_TypeInfo_var);
		((  int32_t (*) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_13, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		G_B5_0 = ((int32_t)1172676374);
		goto IL_0037;
	}

IL_00b5:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = ___transform0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_16 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1();
		IL2CPP_RUNTIME_CLASS_INIT(UnityTools_t6854B0D1F5B4AD5CC66C40436BEAA1EF5FB9314E_il2cpp_TypeInfo_var);
		((  int32_t (*) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_15, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_16, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		G_B5_0 = ((int32_t)1172676374);
		goto IL_0037;
	}

IL_00cd:
	{
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
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2<System.Object,System.Object>::.ctor(oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<THandler,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HierarchyEventHelper_2__ctor_mD065723BA34AB131418384BAF0666383AD64AA62_gshared (HierarchyEventHelper_2_t18B254FE947ECC2BD44F93BEA15EC167A0946208 * __this, EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A * ___executeDelegate0, const RuntimeMethod* method)
{
	{
		EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A * L_0 = ___executeDelegate0;
		((  void (*) (HierarchyEventHelper_2_t18B254FE947ECC2BD44F93BEA15EC167A0946208 *, EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((HierarchyEventHelper_2_t18B254FE947ECC2BD44F93BEA15EC167A0946208 *)__this, (EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A *)L_0, (int32_t)5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2<System.Object,System.Object>::.ctor(oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<THandler,TValue>,oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2_mbRUjyPckYjvEffDpeqMsidmRJOV<THandler,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HierarchyEventHelper_2__ctor_m5A61DC6A36AFC872D101B175BD28B5FA27E3CEC5_gshared (HierarchyEventHelper_2_t18B254FE947ECC2BD44F93BEA15EC167A0946208 * __this, EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A * ___executeDelegate0, int32_t ___executeOn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HierarchyEventHelper_2__ctor_m5A61DC6A36AFC872D101B175BD28B5FA27E3CEC5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A * L_0 = ___executeDelegate0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral52934C29CA4A1A7572C6905BD6AB705A2C135973, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, HierarchyEventHelper_2__ctor_m5A61DC6A36AFC872D101B175BD28B5FA27E3CEC5_RuntimeMethod_var);
	}

IL_0014:
	{
		EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A * L_2 = ___executeDelegate0;
		__this->set_xpKiYdnflLFXhfjHjpPugtbIToQF_0(L_2);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		__this->set_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1(L_3);
		int32_t L_4 = ___executeOn1;
		__this->set_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2(L_4);
		return;
	}
}
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2<System.Object,System.Object>::ExecuteOnAll(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HierarchyEventHelper_2_ExecuteOnAll_m30C306821B5404E72BF16332D530A9EB3D39FEBD_gshared (HierarchyEventHelper_2_t18B254FE947ECC2BD44F93BEA15EC167A0946208 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1();
		RuntimeObject * L_1 = ___value0;
		EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A * L_2 = (EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A *)__this->get_xpKiYdnflLFXhfjHjpPugtbIToQF_0();
		((  void (*) (RuntimeObject*, RuntimeObject *, EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_0, (RuntimeObject *)L_1, (EventFunction_2_t0B54C6CB7208B763FEB97E11531248892B16E50A *)L_2, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2<System.Object,System.Object>::GetHandlers(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HierarchyEventHelper_2_GetHandlers_m5F1EEEA70975B9F19F2F8AFAC12A7384DCA3C78B_gshared (HierarchyEventHelper_2_t18B254FE947ECC2BD44F93BEA15EC167A0946208 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HierarchyEventHelper_2_GetHandlers_m5F1EEEA70975B9F19F2F8AFAC12A7384DCA3C78B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (!((int32_t)((int32_t)L_0&(int32_t)1)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (!((int32_t)((int32_t)L_1&(int32_t)4)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (!((int32_t)((int32_t)L_2&(int32_t)8)))
		{
			goto IL_005c;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___transform0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_3, /*hidden argument*/NULL);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1();
		IL2CPP_RUNTIME_CLASS_INIT(UnityTools_t6854B0D1F5B4AD5CC66C40436BEAA1EF5FB9314E_il2cpp_TypeInfo_var);
		((  int32_t (*) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}

IL_0032:
	{
		G_B5_0 = ((int32_t)1172676373);
	}

IL_0037:
	{
		switch (((int32_t)((int32_t)G_B5_0^(int32_t)((int32_t)1172676372))))
		{
			case 0:
			{
				goto IL_0096;
			}
			case 1:
			{
				goto IL_005c;
			}
			case 2:
			{
				goto IL_0077;
			}
			case 3:
			{
				goto IL_0032;
			}
			case 4:
			{
				goto IL_00cd;
			}
			case 5:
			{
				goto IL_00b5;
			}
		}
	}
	{
		goto IL_00cd;
	}

IL_005c:
	{
		int32_t L_6 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (((int32_t)((int32_t)L_6&(int32_t)4)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_7 = (int32_t)((int32_t)1172676374);
		G_B10_0 = L_7;
		G_B10_1 = L_7;
		goto IL_0074;
	}

IL_006e:
	{
		int32_t L_8 = (int32_t)((int32_t)1172676372);
		G_B10_0 = L_8;
		G_B10_1 = L_8;
	}

IL_0074:
	{
		G_B5_0 = G_B10_1;
		goto IL_0037;
	}

IL_0077:
	{
		int32_t L_9 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (!((int32_t)((int32_t)L_9&(int32_t)8)))
		{
			goto IL_00cd;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = ___transform0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1();
		IL2CPP_RUNTIME_CLASS_INIT(UnityTools_t6854B0D1F5B4AD5CC66C40436BEAA1EF5FB9314E_il2cpp_TypeInfo_var);
		((  int32_t (*) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_11, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		G_B5_0 = ((int32_t)1172676368);
		goto IL_0037;
	}

IL_0096:
	{
		int32_t L_12 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (!((int32_t)((int32_t)L_12&(int32_t)1)))
		{
			goto IL_00b5;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = ___transform0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_14 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1();
		IL2CPP_RUNTIME_CLASS_INIT(UnityTools_t6854B0D1F5B4AD5CC66C40436BEAA1EF5FB9314E_il2cpp_TypeInfo_var);
		((  int32_t (*) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_13, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		G_B5_0 = ((int32_t)1172676374);
		goto IL_0037;
	}

IL_00b5:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = ___transform0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_16 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1();
		IL2CPP_RUNTIME_CLASS_INIT(UnityTools_t6854B0D1F5B4AD5CC66C40436BEAA1EF5FB9314E_il2cpp_TypeInfo_var);
		((  int32_t (*) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_15, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_16, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		G_B5_0 = ((int32_t)1172676374);
		goto IL_0037;
	}

IL_00cd:
	{
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
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2<System.Object,UnityEngine.Vector2>::.ctor(oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<THandler,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HierarchyEventHelper_2__ctor_mF5ED0D8004B3599F06BA0D32AF6451B72080A352_gshared (HierarchyEventHelper_2_t998ABFF4A3E42CB0A10135007EAD9148BA58D4E8 * __this, EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE * ___executeDelegate0, const RuntimeMethod* method)
{
	{
		EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE * L_0 = ___executeDelegate0;
		((  void (*) (HierarchyEventHelper_2_t998ABFF4A3E42CB0A10135007EAD9148BA58D4E8 *, EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((HierarchyEventHelper_2_t998ABFF4A3E42CB0A10135007EAD9148BA58D4E8 *)__this, (EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE *)L_0, (int32_t)5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2<System.Object,UnityEngine.Vector2>::.ctor(oFErIGnUOtKvpAjUHiwEjencvj_EventFunction`2<THandler,TValue>,oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2_mbRUjyPckYjvEffDpeqMsidmRJOV<THandler,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HierarchyEventHelper_2__ctor_m66F2E1EB815E695F09C836416E9134CC28D13D6B_gshared (HierarchyEventHelper_2_t998ABFF4A3E42CB0A10135007EAD9148BA58D4E8 * __this, EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE * ___executeDelegate0, int32_t ___executeOn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HierarchyEventHelper_2__ctor_m66F2E1EB815E695F09C836416E9134CC28D13D6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE * L_0 = ___executeDelegate0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral52934C29CA4A1A7572C6905BD6AB705A2C135973, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, HierarchyEventHelper_2__ctor_m66F2E1EB815E695F09C836416E9134CC28D13D6B_RuntimeMethod_var);
	}

IL_0014:
	{
		EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE * L_2 = ___executeDelegate0;
		__this->set_xpKiYdnflLFXhfjHjpPugtbIToQF_0(L_2);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		__this->set_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1(L_3);
		int32_t L_4 = ___executeOn1;
		__this->set_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2(L_4);
		return;
	}
}
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2<System.Object,UnityEngine.Vector2>::ExecuteOnAll(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HierarchyEventHelper_2_ExecuteOnAll_m2C6E97C9DEF518B48B8A5B982F862F965A6C31C9_gshared (HierarchyEventHelper_2_t998ABFF4A3E42CB0A10135007EAD9148BA58D4E8 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___value0;
		EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE * L_2 = (EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE *)__this->get_xpKiYdnflLFXhfjHjpPugtbIToQF_0();
		((  void (*) (RuntimeObject*, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_0, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_1, (EventFunction_2_tF63CF70B0AD991395C1D1C311A06DDE572ED63AE *)L_2, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void oFErIGnUOtKvpAjUHiwEjencvj_HierarchyEventHelper`2<System.Object,UnityEngine.Vector2>::GetHandlers(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HierarchyEventHelper_2_GetHandlers_m2411F2AB7DCA0F465B0D8A54BDFB9E5209B07E82_gshared (HierarchyEventHelper_2_t998ABFF4A3E42CB0A10135007EAD9148BA58D4E8 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HierarchyEventHelper_2_GetHandlers_m2411F2AB7DCA0F465B0D8A54BDFB9E5209B07E82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (!((int32_t)((int32_t)L_0&(int32_t)1)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (!((int32_t)((int32_t)L_1&(int32_t)4)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (!((int32_t)((int32_t)L_2&(int32_t)8)))
		{
			goto IL_005c;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___transform0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_3, /*hidden argument*/NULL);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1();
		IL2CPP_RUNTIME_CLASS_INIT(UnityTools_t6854B0D1F5B4AD5CC66C40436BEAA1EF5FB9314E_il2cpp_TypeInfo_var);
		((  int32_t (*) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}

IL_0032:
	{
		G_B5_0 = ((int32_t)1172676373);
	}

IL_0037:
	{
		switch (((int32_t)((int32_t)G_B5_0^(int32_t)((int32_t)1172676372))))
		{
			case 0:
			{
				goto IL_0096;
			}
			case 1:
			{
				goto IL_005c;
			}
			case 2:
			{
				goto IL_0077;
			}
			case 3:
			{
				goto IL_0032;
			}
			case 4:
			{
				goto IL_00cd;
			}
			case 5:
			{
				goto IL_00b5;
			}
		}
	}
	{
		goto IL_00cd;
	}

IL_005c:
	{
		int32_t L_6 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (((int32_t)((int32_t)L_6&(int32_t)4)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_7 = (int32_t)((int32_t)1172676374);
		G_B10_0 = L_7;
		G_B10_1 = L_7;
		goto IL_0074;
	}

IL_006e:
	{
		int32_t L_8 = (int32_t)((int32_t)1172676372);
		G_B10_0 = L_8;
		G_B10_1 = L_8;
	}

IL_0074:
	{
		G_B5_0 = G_B10_1;
		goto IL_0037;
	}

IL_0077:
	{
		int32_t L_9 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (!((int32_t)((int32_t)L_9&(int32_t)8)))
		{
			goto IL_00cd;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = ___transform0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1();
		IL2CPP_RUNTIME_CLASS_INIT(UnityTools_t6854B0D1F5B4AD5CC66C40436BEAA1EF5FB9314E_il2cpp_TypeInfo_var);
		((  int32_t (*) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_11, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		G_B5_0 = ((int32_t)1172676368);
		goto IL_0037;
	}

IL_0096:
	{
		int32_t L_12 = (int32_t)__this->get_LYvZsNQoceuNpVjLBiiGdwcfXHnQ_2();
		if (!((int32_t)((int32_t)L_12&(int32_t)1)))
		{
			goto IL_00b5;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = ___transform0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_14 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1();
		IL2CPP_RUNTIME_CLASS_INIT(UnityTools_t6854B0D1F5B4AD5CC66C40436BEAA1EF5FB9314E_il2cpp_TypeInfo_var);
		((  int32_t (*) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_13, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		G_B5_0 = ((int32_t)1172676374);
		goto IL_0037;
	}

IL_00b5:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = ___transform0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_16 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_DtBBgiVUhVBQCqpOSYaPHlZLtwr_1();
		IL2CPP_RUNTIME_CLASS_INIT(UnityTools_t6854B0D1F5B4AD5CC66C40436BEAA1EF5FB9314E_il2cpp_TypeInfo_var);
		((  int32_t (*) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_15, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_16, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		G_B5_0 = ((int32_t)1172676374);
		goto IL_0037;
	}

IL_00cd:
	{
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
// System.Boolean wtAIYQJbruDURiMwCNDuBBwhWhcj_TDCosqKINLgUYAoCxRDHyVIHdUO<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TDCosqKINLgUYAoCxRDHyVIHdUO_MoveNext_m35E667F772A553BBA375DDC3367B9775885AFAB5_gshared (TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_UkDptJuixhQRQVBOsbSmZnhgjYoa_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_004b;
			}
			case 1:
			{
				goto IL_007e;
			}
		}
	}
	{
		goto IL_00ee;
	}

IL_001a:
	{
		G_B3_0 = ((int32_t)790673950);
	}

IL_001f:
	{
		switch (((int32_t)((int32_t)G_B3_0^(int32_t)((int32_t)790673944))))
		{
			case 0:
			{
				goto IL_001a;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_00a4;
			}
			case 3:
			{
				goto IL_008c;
			}
			case 4:
			{
				goto IL_00ee;
			}
			case 5:
			{
				goto IL_00c2;
			}
			case 6:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_00ee;
	}

IL_004b:
	{
		__this->set_UkDptJuixhQRQVBOsbSmZnhgjYoa_1((-1));
		G_B3_0 = ((int32_t)790673946);
		goto IL_001f;
	}

IL_0059:
	{
		wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * L_2 = (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *)__this->get_UMfawUAeNCfAFpSlXTgCRWFLdSBg_2();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_4 = (int32_t)__this->get_lMsVdmHiBvoxbQCfJcEGbnxifutA_3();
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		__this->set_YpBGzuanHZCByIoQXMkPVdLDafd_0(L_5);
		__this->set_UkDptJuixhQRQVBOsbSmZnhgjYoa_1(1);
		return (bool)1;
	}

IL_007e:
	{
		__this->set_UkDptJuixhQRQVBOsbSmZnhgjYoa_1((-1));
		G_B3_0 = ((int32_t)790673947);
		goto IL_001f;
	}

IL_008c:
	{
		int32_t L_6 = (int32_t)__this->get_lMsVdmHiBvoxbQCfJcEGbnxifutA_3();
		__this->set_lMsVdmHiBvoxbQCfJcEGbnxifutA_3(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		G_B3_0 = ((int32_t)790673949);
		goto IL_001f;
	}

IL_00a4:
	{
		wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * L_7 = (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *)__this->get_UMfawUAeNCfAFpSlXTgCRWFLdSBg_2();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		if (!L_8)
		{
			goto IL_00ee;
		}
	}
	{
		__this->set_lMsVdmHiBvoxbQCfJcEGbnxifutA_3(0);
		G_B3_0 = ((int32_t)790673949);
		goto IL_001f;
	}

IL_00c2:
	{
		int32_t L_9 = (int32_t)__this->get_lMsVdmHiBvoxbQCfJcEGbnxifutA_3();
		wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * L_10 = (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *)__this->get_UMfawUAeNCfAFpSlXTgCRWFLdSBg_2();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_12 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if ((((int32_t)L_9) >= ((int32_t)L_12)))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_13 = (int32_t)((int32_t)790673945);
		G_B14_0 = L_13;
		G_B14_1 = L_13;
		goto IL_00e8;
	}

IL_00e2:
	{
		int32_t L_14 = (int32_t)((int32_t)790673948);
		G_B14_0 = L_14;
		G_B14_1 = L_14;
	}

IL_00e8:
	{
		G_B3_0 = G_B14_1;
		goto IL_001f;
	}

IL_00ee:
	{
		return (bool)0;
	}
}
// T wtAIYQJbruDURiMwCNDuBBwhWhcj_TDCosqKINLgUYAoCxRDHyVIHdUO<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TDCosqKINLgUYAoCxRDHyVIHdUO_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m89211EE16CD1626CC2FE99B07F70799C1720D376_gshared (TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_YpBGzuanHZCByIoQXMkPVdLDafd_0();
		return L_0;
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj_TDCosqKINLgUYAoCxRDHyVIHdUO<System.Object>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TDCosqKINLgUYAoCxRDHyVIHdUO_System_Collections_IEnumerator_Reset_m00BCEB427500F7955BCD2F2D498710E8DF202DF6_gshared (TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TDCosqKINLgUYAoCxRDHyVIHdUO_System_Collections_IEnumerator_Reset_m00BCEB427500F7955BCD2F2D498710E8DF202DF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, TDCosqKINLgUYAoCxRDHyVIHdUO_System_Collections_IEnumerator_Reset_m00BCEB427500F7955BCD2F2D498710E8DF202DF6_RuntimeMethod_var);
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj_TDCosqKINLgUYAoCxRDHyVIHdUO<System.Object>::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TDCosqKINLgUYAoCxRDHyVIHdUO_System_IDisposable_Dispose_m68FB6FB010FD8B28BB08CE71EC3A9D4EFAD3293C_gshared (TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Object wtAIYQJbruDURiMwCNDuBBwhWhcj_TDCosqKINLgUYAoCxRDHyVIHdUO<System.Object>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TDCosqKINLgUYAoCxRDHyVIHdUO_System_Collections_IEnumerator_get_Current_mEC1E5EB29D522FC6360BB7D32E21C98473F79C5E_gshared (TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_YpBGzuanHZCByIoQXMkPVdLDafd_0();
		return L_0;
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj_TDCosqKINLgUYAoCxRDHyVIHdUO<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TDCosqKINLgUYAoCxRDHyVIHdUO__ctor_m67F5BAC56925F9512BFE2A3E9C898304C8FFC83A_gshared (TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_UkDptJuixhQRQVBOsbSmZnhgjYoa_1(L_0);
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
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerMap> wtAIYQJbruDURiMwCNDuBBwhWhcj_WZbPtpKKYGdcVDnIgmQrRjHJzGE<System.Object>::System.Collections.Generic.IEnumerable<Rewired.ControllerMap>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WZbPtpKKYGdcVDnIgmQrRjHJzGE_System_Collections_Generic_IEnumerableU3CRewired_ControllerMapU3E_GetEnumerator_m29C33E02D0B1EE39FB0EA3B4874DC74735954421_gshared (WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * __this, const RuntimeMethod* method)
{
	WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * V_0 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_0 = Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E(/*hidden argument*/NULL);
		int32_t L_1 = Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1((Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)__this->get_pVCoyNNrXTDCfKppNCZNLPbQFYP_2();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0038;
		}
	}

IL_0012:
	{
		G_B2_0 = ((int32_t)-317379498);
	}

IL_0017:
	{
		switch (((int32_t)((int32_t)G_B2_0^(int32_t)((int32_t)-317379502))))
		{
			case 0:
			{
				goto IL_0012;
			}
			case 1:
			{
				goto IL_0052;
			}
			case 2:
			{
				goto IL_007d;
			}
			case 3:
			{
				goto IL_0038;
			}
			case 4:
			{
				goto IL_0062;
			}
		}
	}
	{
		goto IL_007d;
	}

IL_0038:
	{
		WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * L_3 = (WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_0 = (WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF *)L_3;
		WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * L_4 = V_0;
		wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * L_5 = (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *)__this->get_UMfawUAeNCfAFpSlXTgCRWFLdSBg_3();
		L_4->set_UMfawUAeNCfAFpSlXTgCRWFLdSBg_3(L_5);
		G_B2_0 = ((int32_t)-317379504);
		goto IL_0017;
	}

IL_0052:
	{
		__this->set_UkDptJuixhQRQVBOsbSmZnhgjYoa_1(0);
		V_0 = (WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF *)__this;
		G_B2_0 = ((int32_t)-317379504);
		goto IL_0017;
	}

IL_0062:
	{
		int32_t L_6 = (int32_t)__this->get_UkDptJuixhQRQVBOsbSmZnhgjYoa_1();
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-2))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_7 = (int32_t)((int32_t)-317379503);
		G_B9_0 = L_7;
		G_B9_1 = L_7;
		goto IL_007a;
	}

IL_0074:
	{
		int32_t L_8 = (int32_t)((int32_t)-317379501);
		G_B9_0 = L_8;
		G_B9_1 = L_8;
	}

IL_007a:
	{
		G_B2_0 = G_B9_1;
		goto IL_0017;
	}

IL_007d:
	{
		WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * L_9 = V_0;
		int32_t L_10 = (int32_t)__this->get_wVTfhFOJixFiphUqDCHizdrBLpIh_5();
		L_9->set_BpSxZpxGKUEIhVYzCYLbbiAyBRR_4(L_10);
		WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * L_11 = V_0;
		return L_11;
	}
}
// System.Collections.IEnumerator wtAIYQJbruDURiMwCNDuBBwhWhcj_WZbPtpKKYGdcVDnIgmQrRjHJzGE<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WZbPtpKKYGdcVDnIgmQrRjHJzGE_System_Collections_IEnumerable_GetEnumerator_mCB2A6C2F1E625A028DA5DEDE58EC13B8D12209FD_gshared (WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return L_0;
	}
}
// System.Boolean wtAIYQJbruDURiMwCNDuBBwhWhcj_WZbPtpKKYGdcVDnIgmQrRjHJzGE<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WZbPtpKKYGdcVDnIgmQrRjHJzGE_MoveNext_m541B9D00F4AE12ADD49B8547C10D34B7387A329E_gshared (WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WZbPtpKKYGdcVDnIgmQrRjHJzGE_MoveNext_m541B9D00F4AE12ADD49B8547C10D34B7387A329E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_UkDptJuixhQRQVBOsbSmZnhgjYoa_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0104;
			}
			case 1:
			{
				goto IL_00a4;
			}
		}
	}
	{
		goto IL_0141;
	}

IL_001a:
	{
		G_B3_0 = ((int32_t)1557943933);
	}

IL_001f:
	{
		switch (((int32_t)((int32_t)G_B3_0^(int32_t)((int32_t)1557943934))))
		{
			case 0:
			{
				goto IL_009b;
			}
			case 1:
			{
				goto IL_0141;
			}
			case 2:
			{
				goto IL_001a;
			}
			case 3:
			{
				goto IL_0104;
			}
			case 4:
			{
				goto IL_0057;
			}
			case 5:
			{
				goto IL_00b5;
			}
			case 6:
			{
				goto IL_0078;
			}
			case 7:
			{
				goto IL_005e;
			}
			case 8:
			{
				goto IL_0115;
			}
			case 9:
			{
				goto IL_00cd;
			}
		}
	}
	{
		goto IL_0141;
	}

IL_0057:
	{
		G_B3_0 = ((int32_t)1557943926);
		goto IL_001f;
	}

IL_005e:
	{
		int32_t L_2 = (int32_t)__this->get_BpSxZpxGKUEIhVYzCYLbbiAyBRR_4();
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0141;
		}
	}
	{
		__this->set_xHDodAOCcSEKMbxrMCcdPKBgZIo_6(0);
		G_B3_0 = ((int32_t)1557943930);
		goto IL_001f;
	}

IL_0078:
	{
		wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * L_3 = (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *)__this->get_UMfawUAeNCfAFpSlXTgCRWFLdSBg_3();
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_4 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_3->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		int32_t L_5 = (int32_t)__this->get_xHDodAOCcSEKMbxrMCcdPKBgZIo_6();
		ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * L_6 = List_1_get_Item_mADF483DC22F60B179F834797734DFFBAE6123F5A_inline((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_4, (int32_t)L_5, /*hidden argument*/List_1_get_Item_mADF483DC22F60B179F834797734DFFBAE6123F5A_RuntimeMethod_var);
		__this->set_YpBGzuanHZCByIoQXMkPVdLDafd_0(L_6);
		G_B3_0 = ((int32_t)1557943934);
		goto IL_001f;
	}

IL_009b:
	{
		__this->set_UkDptJuixhQRQVBOsbSmZnhgjYoa_1(1);
		return (bool)1;
	}

IL_00a4:
	{
		__this->set_UkDptJuixhQRQVBOsbSmZnhgjYoa_1((-1));
		G_B3_0 = ((int32_t)1557943931);
		goto IL_001f;
	}

IL_00b5:
	{
		int32_t L_7 = (int32_t)__this->get_xHDodAOCcSEKMbxrMCcdPKBgZIo_6();
		__this->set_xHDodAOCcSEKMbxrMCcdPKBgZIo_6(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		G_B3_0 = ((int32_t)1557943926);
		goto IL_001f;
	}

IL_00cd:
	{
		wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * L_8 = (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *)__this->get_UMfawUAeNCfAFpSlXTgCRWFLdSBg_3();
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_9 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_8->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		int32_t L_10 = (int32_t)__this->get_xHDodAOCcSEKMbxrMCcdPKBgZIo_6();
		ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * L_11 = List_1_get_Item_mADF483DC22F60B179F834797734DFFBAE6123F5A_inline((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_9, (int32_t)L_10, /*hidden argument*/List_1_get_Item_mADF483DC22F60B179F834797734DFFBAE6123F5A_RuntimeMethod_var);
		int32_t L_12 = ControllerMap_get_categoryId_m1B05E24F82D8DED46B2BAFBCD9D8629328CFBA2B((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)L_11, /*hidden argument*/NULL);
		int32_t L_13 = (int32_t)__this->get_BpSxZpxGKUEIhVYzCYLbbiAyBRR_4();
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_14 = (int32_t)((int32_t)1557943931);
		G_B15_0 = L_14;
		G_B15_1 = L_14;
		goto IL_00fe;
	}

IL_00f8:
	{
		int32_t L_15 = (int32_t)((int32_t)1557943928);
		G_B15_0 = L_15;
		G_B15_1 = L_15;
	}

IL_00fe:
	{
		G_B3_0 = G_B15_1;
		goto IL_001f;
	}

IL_0104:
	{
		__this->set_UkDptJuixhQRQVBOsbSmZnhgjYoa_1((-1));
		G_B3_0 = ((int32_t)1557943929);
		goto IL_001f;
	}

IL_0115:
	{
		int32_t L_16 = (int32_t)__this->get_xHDodAOCcSEKMbxrMCcdPKBgZIo_6();
		wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * L_17 = (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *)__this->get_UMfawUAeNCfAFpSlXTgCRWFLdSBg_3();
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_18 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_17->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		int32_t L_19 = List_1_get_Count_mB87AFEFB187F15D3B2B41BA3C4919E74A8256840_inline((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_18, /*hidden argument*/List_1_get_Count_mB87AFEFB187F15D3B2B41BA3C4919E74A8256840_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_19)))
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_20 = (int32_t)((int32_t)1557943935);
		G_B20_0 = L_20;
		G_B20_1 = L_20;
		goto IL_013b;
	}

IL_0135:
	{
		int32_t L_21 = (int32_t)((int32_t)1557943927);
		G_B20_0 = L_21;
		G_B20_1 = L_21;
	}

IL_013b:
	{
		G_B3_0 = G_B20_1;
		goto IL_001f;
	}

IL_0141:
	{
		return (bool)0;
	}
}
// Rewired.ControllerMap wtAIYQJbruDURiMwCNDuBBwhWhcj_WZbPtpKKYGdcVDnIgmQrRjHJzGE<System.Object>::System.Collections.Generic.IEnumerator<Rewired.ControllerMap>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * WZbPtpKKYGdcVDnIgmQrRjHJzGE_System_Collections_Generic_IEnumeratorU3CRewired_ControllerMapU3E_get_Current_m8B7ECABBFAB1257B366290FCEB80D36ECBA30195_gshared (WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * __this, const RuntimeMethod* method)
{
	{
		ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * L_0 = (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)__this->get_YpBGzuanHZCByIoQXMkPVdLDafd_0();
		return L_0;
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj_WZbPtpKKYGdcVDnIgmQrRjHJzGE<System.Object>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WZbPtpKKYGdcVDnIgmQrRjHJzGE_System_Collections_IEnumerator_Reset_m2C16CBCBB78BB4471AA7295DB8FE50C6B4E84141_gshared (WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WZbPtpKKYGdcVDnIgmQrRjHJzGE_System_Collections_IEnumerator_Reset_m2C16CBCBB78BB4471AA7295DB8FE50C6B4E84141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, WZbPtpKKYGdcVDnIgmQrRjHJzGE_System_Collections_IEnumerator_Reset_m2C16CBCBB78BB4471AA7295DB8FE50C6B4E84141_RuntimeMethod_var);
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj_WZbPtpKKYGdcVDnIgmQrRjHJzGE<System.Object>::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WZbPtpKKYGdcVDnIgmQrRjHJzGE_System_IDisposable_Dispose_m0BB20186D9AF2136E8FCEF0A7B4E95391E67BE8C_gshared (WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Object wtAIYQJbruDURiMwCNDuBBwhWhcj_WZbPtpKKYGdcVDnIgmQrRjHJzGE<System.Object>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WZbPtpKKYGdcVDnIgmQrRjHJzGE_System_Collections_IEnumerator_get_Current_m8A02B1ED215288565F26AECA7AD058CC6596943C_gshared (WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * __this, const RuntimeMethod* method)
{
	{
		ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * L_0 = (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)__this->get_YpBGzuanHZCByIoQXMkPVdLDafd_0();
		return L_0;
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj_WZbPtpKKYGdcVDnIgmQrRjHJzGE<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WZbPtpKKYGdcVDnIgmQrRjHJzGE__ctor_m5CC29A783D45A5D7751CDE570B0F89963B25FF3F_gshared (WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_UkDptJuixhQRQVBOsbSmZnhgjYoa_1(L_0);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_1 = Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E(/*hidden argument*/NULL);
		int32_t L_2 = Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1((Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)L_1, /*hidden argument*/NULL);
		__this->set_pVCoyNNrXTDCfKppNCZNLPbQFYP_2(L_2);
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
// Rewired.ControllerMap wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Rewired.IControllerMapSet.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_get_Item_m23E008868933FF7FDB2CCEAE0D045974985DB294_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_get_Item_m23E008868933FF7FDB2CCEAE0D045974985DB294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_0 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)__this->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		int32_t L_1 = ___index0;
		ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * L_2 = List_1_get_Item_mADF483DC22F60B179F834797734DFFBAE6123F5A_inline((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_0, (int32_t)L_1, /*hidden argument*/List_1_get_Item_mADF483DC22F60B179F834797734DFFBAE6123F5A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<Rewired.ControllerMap> wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Rewired.IControllerMapSet.get_Maps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_get_Maps_m32AA90E69A11739A894124C261A23EA9BD4661F8_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_qRcwQAtBbdpCSRwppVNzGupRSCs_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerMap> wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Rewired.IControllerMapSet.IterateMapsInCategory_ControllerMap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_IterateMapsInCategory_ControllerMap_m45E59AC17A93918E927CBC871FC8C6AEA586DE15_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, const RuntimeMethod* method)
{
	WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * V_0 = NULL;
	{
		WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * L_0 = (WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, (int32_t)((int32_t)-2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_0 = (WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF *)L_0;
		WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * L_1 = V_0;
		L_1->set_UMfawUAeNCfAFpSlXTgCRWFLdSBg_3(__this);
		WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * L_2 = V_0;
		int32_t L_3 = p0;
		L_2->set_wVTfhFOJixFiphUqDCHizdrBLpIh_5(L_3);
		WZbPtpKKYGdcVDnIgmQrRjHJzGE_tA74CC838AE053418D4FB46539BAB3AB97D1397EF * L_4 = V_0;
		return L_4;
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Rewired.IControllerMapSet.Add(Rewired.ControllerMap,Rewired.BoolOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_Add_m7383448E9DFE12453E58A1934B56054F323E4124_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * p0, int32_t p1, const RuntimeMethod* method)
{
	{
		ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * L_0 = p0;
		int32_t L_1 = p1;
		((  void (*) (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *)__this, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2))), (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Rewired.IControllerMapSet.Remove(Rewired.ControllerMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_Remove_mC9534995D80D51C28DCB088E1CB0C93F286DE383_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * p0, const RuntimeMethod* method)
{
	{
		ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * L_0 = p0;
		((  void (*) (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *)__this, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// Rewired.ControllerMap wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Rewired.IControllerMapSet.GetMap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_GetMap_mCDC80EAD9458B24C82ED246EA138365C28D08B7B_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = p0;
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)L_1;
	}
}
// Rewired.ControllerMap wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Rewired.IControllerMapSet.GetMap(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_GetMap_m00DDEF3C0C57AD3C4082241004310F82845F96CA_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)L_2;
	}
}
// Rewired.ControllerMap wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Rewired.IControllerMapSet.GetMapByCategory(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_GetMapByCategory_m703ABCFE112881C848DBC95493547660058219CA_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = p0;
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)L_1;
	}
}
// Rewired.ControllerMap[] wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Rewired.IControllerMapSet.GetMaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E* wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_GetMaps_mC9A682F6A987262108305229206C2DD3E91ED6D1_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_GetMaps_mC9A682F6A987262108305229206C2DD3E91ED6D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_0 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)__this->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E* L_1 = List_1_ToArray_m57FD5A381EAD73CDC168FFEC93C5D22EEA7CCC7C((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_0, /*hidden argument*/List_1_ToArray_m57FD5A381EAD73CDC168FFEC93C5D22EEA7CCC7C_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Rewired.IControllerMapSet.GetMaps(System.Collections.Generic.List`1<Rewired.ControllerMap>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_GetMaps_m898224AD0F9D6C80E85608077B20A6D09C50FAA9_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * p0, bool p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_GetMaps_m898224AD0F9D6C80E85608077B20A6D09C50FAA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		V_0 = (int32_t)0;
		bool L_1 = p1;
		if (L_1)
		{
			goto IL_007d;
		}
	}
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_2 = p0;
		List_1_Clear_m88D5862BAF30335E7FEA486544F28FA5CECFF6DE((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_2, /*hidden argument*/List_1_Clear_m88D5862BAF30335E7FEA486544F28FA5CECFF6DE_RuntimeMethod_var);
		goto IL_008b;
	}

IL_0012:
	{
		G_B5_0 = ((int32_t)-118460986);
	}

IL_0017:
	{
		switch (((int32_t)((int32_t)G_B5_0^(int32_t)((int32_t)-118460992))))
		{
			case 0:
			{
				goto IL_008b;
			}
			case 1:
			{
				goto IL_00a2;
			}
			case 2:
			{
				goto IL_0012;
			}
			case 3:
			{
				goto IL_005e;
			}
			case 4:
			{
				goto IL_0094;
			}
			case 5:
			{
				goto IL_0040;
			}
			case 6:
			{
				goto IL_007d;
			}
		}
	}
	{
		goto IL_00a2;
	}

IL_0040:
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_3 = p0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_5 = V_1;
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		List_1_Add_mBB024C6A0C23217B87FABE55861D2532378BEE1B((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_3, (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)L_6, /*hidden argument*/List_1_Add_mBB024C6A0C23217B87FABE55861D2532378BEE1B_RuntimeMethod_var);
		G_B5_0 = ((int32_t)-118460988);
		goto IL_0017;
	}

IL_005e:
	{
		int32_t L_7 = V_1;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_9 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_10 = (int32_t)((int32_t)-118460991);
		G_B11_0 = L_10;
		G_B11_1 = L_10;
		goto IL_007a;
	}

IL_0074:
	{
		int32_t L_11 = (int32_t)((int32_t)-118460987);
		G_B11_0 = L_11;
		G_B11_1 = L_11;
	}

IL_007a:
	{
		G_B5_0 = G_B11_1;
		goto IL_0017;
	}

IL_007d:
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_12 = p0;
		int32_t L_13 = List_1_get_Count_mB87AFEFB187F15D3B2B41BA3C4919E74A8256840_inline((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_12, /*hidden argument*/List_1_get_Count_mB87AFEFB187F15D3B2B41BA3C4919E74A8256840_RuntimeMethod_var);
		V_0 = (int32_t)L_13;
		G_B5_0 = ((int32_t)-118460992);
		goto IL_0017;
	}

IL_008b:
	{
		V_1 = (int32_t)0;
		G_B5_0 = ((int32_t)-118460989);
		goto IL_0017;
	}

IL_0094:
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		G_B5_0 = ((int32_t)-118460989);
		goto IL_0017;
	}

IL_00a2:
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_15 = p0;
		int32_t L_16 = List_1_get_Count_mB87AFEFB187F15D3B2B41BA3C4919E74A8256840_inline((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_15, /*hidden argument*/List_1_get_Count_mB87AFEFB187F15D3B2B41BA3C4919E74A8256840_RuntimeMethod_var);
		int32_t L_17 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17));
	}
}
// Rewired.ControllerMap[] wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Rewired.IControllerMapSet.GetMapsByCategory(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E* wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_GetMapsByCategory_mE91C982BA314DB0674980608580A2D71FF5139FA_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_GetMapsByCategory_mE91C982BA314DB0674980608580A2D71FF5139FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	int32_t G_B2_0 = 0;
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_0 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)il2cpp_codegen_object_new(List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E_il2cpp_TypeInfo_var);
		List_1__ctor_m0839F8110366CBDBC753D441E962E51A20E93E14(L_0, /*hidden argument*/List_1__ctor_m0839F8110366CBDBC753D441E962E51A20E93E14_RuntimeMethod_var);
		V_0 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_0;
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)321223571);
	}

IL_000b:
	{
		switch (((int32_t)((int32_t)G_B2_0^(int32_t)((int32_t)321223574))))
		{
			case 0:
			{
				goto IL_0094;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_0006;
			}
			case 3:
			{
				goto IL_0034;
			}
			case 4:
			{
				goto IL_0081;
			}
			case 5:
			{
				goto IL_0088;
			}
			case 6:
			{
				goto IL_0053;
			}
		}
	}
	{
		goto IL_0094;
	}

IL_0034:
	{
		int32_t L_1 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		G_B2_0 = ((int32_t)321223574);
		goto IL_000b;
	}

IL_003f:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_3 = V_1;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_2 = (RuntimeObject *)L_4;
		G_B2_0 = ((int32_t)321223568);
		goto IL_000b;
	}

IL_0053:
	{
		int32_t L_5 = ControllerMap_get_categoryId_m1B05E24F82D8DED46B2BAFBCD9D8629328CFBA2B((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_2), /*hidden argument*/NULL);
		int32_t L_6 = p0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0034;
		}
	}
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_7 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_9 = V_1;
		RuntimeObject * L_10 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		List_1_Add_mBB024C6A0C23217B87FABE55861D2532378BEE1B((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_7, (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)L_10, /*hidden argument*/List_1_Add_mBB024C6A0C23217B87FABE55861D2532378BEE1B_RuntimeMethod_var);
		G_B2_0 = ((int32_t)321223573);
		goto IL_000b;
	}

IL_0081:
	{
		G_B2_0 = ((int32_t)321223574);
		goto IL_000b;
	}

IL_0088:
	{
		V_1 = (int32_t)0;
		G_B2_0 = ((int32_t)321223570);
		goto IL_000b;
	}

IL_0094:
	{
		int32_t L_11 = V_1;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_12 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_13 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_003f;
		}
	}
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_14 = V_0;
		ControllerMapU5BU5D_t92A7A5230A71270E349387005F3086641260671E* L_15 = List_1_ToArray_m57FD5A381EAD73CDC168FFEC93C5D22EEA7CCC7C((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_14, /*hidden argument*/List_1_ToArray_m57FD5A381EAD73CDC168FFEC93C5D22EEA7CCC7C_RuntimeMethod_var);
		return L_15;
	}
}
// System.Int32 wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Rewired.IControllerMapSet.GetMapsByCategory(System.Int32,System.Collections.Generic.List`1<Rewired.ControllerMap>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_GetMapsByCategory_m6CFC473AF2F845299A1E8D93C1E603F51E33B0D7_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * p1, bool p2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wtAIYQJbruDURiMwCNDuBBwhWhcj_Rewired_IControllerMapSet_GetMapsByCategory_m6CFC473AF2F845299A1E8D93C1E603F51E33B0D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_0 = p1;
		if (L_0)
		{
			goto IL_006f;
		}
	}

IL_0003:
	{
		G_B2_0 = ((int32_t)1279867810);
	}

IL_0008:
	{
		switch (((int32_t)((int32_t)G_B2_0^(int32_t)((int32_t)1279867814))))
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_008d;
			}
			case 3:
			{
				goto IL_005b;
			}
			case 4:
			{
				goto IL_006d;
			}
			case 5:
			{
				goto IL_009e;
			}
			case 6:
			{
				goto IL_00dc;
			}
			case 7:
			{
				goto IL_0081;
			}
			case 8:
			{
				goto IL_0003;
			}
		}
	}
	{
		goto IL_00dc;
	}

IL_003c:
	{
		int32_t L_1 = V_1;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_3 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = (int32_t)((int32_t)1279867811);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
		goto IL_0058;
	}

IL_0052:
	{
		int32_t L_5 = (int32_t)((int32_t)1279867808);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
	}

IL_0058:
	{
		G_B2_0 = G_B7_1;
		goto IL_0008;
	}

IL_005b:
	{
		int32_t L_6 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		G_B2_0 = ((int32_t)1279867814);
		goto IL_0008;
	}

IL_0066:
	{
		G_B2_0 = ((int32_t)1279867814);
		goto IL_0008;
	}

IL_006d:
	{
		return 0;
	}

IL_006f:
	{
		V_0 = (int32_t)0;
		bool L_7 = p2;
		if (L_7)
		{
			goto IL_008d;
		}
	}
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_8 = p1;
		List_1_Clear_m88D5862BAF30335E7FEA486544F28FA5CECFF6DE((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_8, /*hidden argument*/List_1_Clear_m88D5862BAF30335E7FEA486544F28FA5CECFF6DE_RuntimeMethod_var);
		G_B2_0 = ((int32_t)1279867809);
		goto IL_0008;
	}

IL_0081:
	{
		V_1 = (int32_t)0;
		G_B2_0 = ((int32_t)1279867815);
		goto IL_0008;
	}

IL_008d:
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_9 = p1;
		int32_t L_10 = List_1_get_Count_mB87AFEFB187F15D3B2B41BA3C4919E74A8256840_inline((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_9, /*hidden argument*/List_1_get_Count_mB87AFEFB187F15D3B2B41BA3C4919E74A8256840_RuntimeMethod_var);
		V_0 = (int32_t)L_10;
		G_B2_0 = ((int32_t)1279867809);
		goto IL_0008;
	}

IL_009e:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_12 = V_1;
		RuntimeObject * L_13 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_2 = (RuntimeObject *)L_13;
		int32_t L_14 = ControllerMap_get_categoryId_m1B05E24F82D8DED46B2BAFBCD9D8629328CFBA2B((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_2), /*hidden argument*/NULL);
		int32_t L_15 = p0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_005b;
		}
	}
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_16 = p1;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_17 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_18 = V_1;
		RuntimeObject * L_19 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_17, (int32_t)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		List_1_Add_mBB024C6A0C23217B87FABE55861D2532378BEE1B((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_16, (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)L_19, /*hidden argument*/List_1_Add_mBB024C6A0C23217B87FABE55861D2532378BEE1B_RuntimeMethod_var);
		G_B2_0 = ((int32_t)1279867813);
		goto IL_0008;
	}

IL_00dc:
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_20 = p1;
		int32_t L_21 = List_1_get_Count_mB87AFEFB187F15D3B2B41BA3C4919E74A8256840_inline((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_20, /*hidden argument*/List_1_get_Count_mB87AFEFB187F15D3B2B41BA3C4919E74A8256840_RuntimeMethod_var);
		int32_t L_22 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22));
	}
}
// System.Collections.Generic.IList`1<T> wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::get_Maps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* wtAIYQJbruDURiMwCNDuBBwhWhcj_get_Maps_m6C4D8F7CF740107840775E45BABF3F923BF18A01_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_YokeXcugyJlvrfeeUClybMrYfoIY_5();
		return L_0;
	}
}
// System.Int32 wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_get_Count_m27C46E65DC75EBA6D9920FF29A74A200DD8CF3A6_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		return L_2;
	}
}
// T wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * wtAIYQJbruDURiMwCNDuBBwhWhcj_get_Item_m20CF7E9334BE29013866B3BB1CCBA1AE9DC1C1A0_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return L_2;
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wtAIYQJbruDURiMwCNDuBBwhWhcj_set_Item_mA5ABC8E6C730D56BE216497341CCE8A1DAA435D5_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wtAIYQJbruDURiMwCNDuBBwhWhcj_set_Item_mA5ABC8E6C730D56BE216497341CCE8A1DAA435D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ___value1;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_3 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)__this->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		int32_t L_4 = ___index0;
		RuntimeObject * L_5 = ___value1;
		List_1_set_Item_m86D714200344F5D83977C34422287C90AC3DFD80((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_3, (int32_t)L_4, (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)L_5, /*hidden argument*/List_1_set_Item_m86D714200344F5D83977C34422287C90AC3DFD80_RuntimeMethod_var);
		return;
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wtAIYQJbruDURiMwCNDuBBwhWhcj__ctor_m1BFBDC3207A65507048B5CCA4E8E62BE5BDA2F89_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t ___controllerId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wtAIYQJbruDURiMwCNDuBBwhWhcj__ctor_m1BFBDC3207A65507048B5CCA4E8E62BE5BDA2F89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)1958747632);
	}

IL_000b:
	{
		switch (((int32_t)((int32_t)G_B2_0^(int32_t)((int32_t)1958747633))))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_00a3;
			}
			case 3:
			{
				goto IL_0006;
			}
			case 4:
			{
				goto IL_0076;
			}
			case 5:
			{
				goto IL_005a;
			}
		}
	}
	{
		goto IL_00a3;
	}

IL_0030:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 11));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		__this->set_SvoFXvkVjivbUiJpktrOTCTwHYJ_4(L_0);
		G_B2_0 = ((int32_t)1958747633);
		goto IL_000b;
	}

IL_0042:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * L_2 = (ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13));
		((  void (*) (ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)(L_2, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		__this->set_YokeXcugyJlvrfeeUClybMrYfoIY_5(L_2);
		G_B2_0 = ((int32_t)1958747636);
		goto IL_000b;
	}

IL_005a:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 15)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_3, /*hidden argument*/NULL);
		int32_t L_5 = HhmSRaAkgKoaczmkzwICaItBTdG_uTFkWvePdrBGenwUMKFIehUOOiR_mD0590BDDAB5D27C94F63BA708E905A4956431D82((Type_t *)L_4, /*hidden argument*/NULL);
		__this->set_wdIPOFeBVkomQchMraJtdqhtdMq_2(L_5);
		G_B2_0 = ((int32_t)1958747637);
		goto IL_000b;
	}

IL_0076:
	{
		int32_t L_6 = ___controllerId0;
		__this->set_iHAfgamgEVxFqNaJMMCkqIZsTTm_3(L_6);
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_7 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)il2cpp_codegen_object_new(List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E_il2cpp_TypeInfo_var);
		List_1__ctor_m0839F8110366CBDBC753D441E962E51A20E93E14(L_7, /*hidden argument*/List_1__ctor_m0839F8110366CBDBC753D441E962E51A20E93E14_RuntimeMethod_var);
		__this->set_MAfCHjHywJfLSUSXXqCDKGEIAal_0(L_7);
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_8 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)__this->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		ReadOnlyCollection_1_t42C6EC4956F81037B0696DDF4310EEAD899406F9 * L_9 = (ReadOnlyCollection_1_t42C6EC4956F81037B0696DDF4310EEAD899406F9 *)il2cpp_codegen_object_new(ReadOnlyCollection_1_t42C6EC4956F81037B0696DDF4310EEAD899406F9_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m43F319804F61EAF5B1BA3BEE99D5EC8F37B473DA(L_9, (RuntimeObject*)L_8, /*hidden argument*/ReadOnlyCollection_1__ctor_m43F319804F61EAF5B1BA3BEE99D5EC8F37B473DA_RuntimeMethod_var);
		__this->set_qRcwQAtBbdpCSRwppVNzGupRSCs_1(L_9);
		G_B2_0 = ((int32_t)1958747635);
		goto IL_000b;
	}

IL_00a3:
	{
		return;
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::OCQLCPgJbQjMqWPVWEfCRJKblgH(T,Rewired.BoolOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wtAIYQJbruDURiMwCNDuBBwhWhcj_OCQLCPgJbQjMqWPVWEfCRJKblgH_m3288294CFA3F08959F1ECA3A4961DC9644A36C0D_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wtAIYQJbruDURiMwCNDuBBwhWhcj_OCQLCPgJbQjMqWPVWEfCRJKblgH_m3288294CFA3F08959F1ECA3A4961DC9644A36C0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	{
		int32_t L_0 = ControllerMap_get_categoryId_m1B05E24F82D8DED46B2BAFBCD9D8629328CFBA2B((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(p0), /*hidden argument*/NULL);
		int32_t L_1 = ControllerMap_get_layoutId_m1B90CB02DDE635CA339BA98082FD4F9480DF0EF7((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(p0), /*hidden argument*/NULL);
		int32_t L_2 = ((  int32_t (*) (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		V_0 = (int32_t)L_2;
	}

IL_0021:
	{
		G_B2_0 = ((int32_t)152258144);
	}

IL_0026:
	{
		switch (((int32_t)((int32_t)G_B2_0^(int32_t)((int32_t)152258149))))
		{
			case 0:
			{
				goto IL_008a;
			}
			case 1:
			{
				goto IL_00a3;
			}
			case 2:
			{
				goto IL_0021;
			}
			case 3:
			{
				goto IL_00cc;
			}
			case 4:
			{
				goto IL_0052;
			}
			case 5:
			{
				goto IL_00d7;
			}
			case 6:
			{
				goto IL_00f3;
			}
		}
	}
	{
		goto IL_00f3;
	}

IL_0052:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_4 = p1;
		if (L_4)
		{
			goto IL_00a3;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_6 = V_0;
		RuntimeObject * L_7 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_1 = (RuntimeObject *)L_7;
		bool L_8 = ControllerMap_get_enabled_m454281A8B80828B120C4F7EDF2BC52028AD35C6F((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_1), /*hidden argument*/NULL);
		ControllerMap_set_enabled_m4A347FEEC7D6FF51515C88121C4F2A0437B472A8_inline((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(p0), (bool)L_8, /*hidden argument*/NULL);
		G_B2_0 = ((int32_t)152258148);
		goto IL_0026;
	}

IL_008a:
	{
		int32_t L_9 = p1;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0052;
		}
	}
	{
		ControllerMap_set_enabled_m4A347FEEC7D6FF51515C88121C4F2A0437B472A8_inline((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(p0), (bool)0, /*hidden argument*/NULL);
		G_B2_0 = ((int32_t)152258145);
		goto IL_0026;
	}

IL_00a3:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_11 = V_0;
		RuntimeObject * L_12 = p0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, (int32_t)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_13 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)__this->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = p0;
		List_1_set_Item_m86D714200344F5D83977C34422287C90AC3DFD80((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_13, (int32_t)L_14, (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)L_15, /*hidden argument*/List_1_set_Item_m86D714200344F5D83977C34422287C90AC3DFD80_RuntimeMethod_var);
		G_B2_0 = ((int32_t)152258150);
		goto IL_0026;
	}

IL_00cc:
	{
		return;
	}
	// Dead block : IL_00cd: ldc.i4 152258147

IL_00d7:
	{
		int32_t L_16 = p1;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_008a;
		}
	}
	{
		ControllerMap_set_enabled_m4A347FEEC7D6FF51515C88121C4F2A0437B472A8_inline((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(p0), (bool)1, /*hidden argument*/NULL);
		G_B2_0 = ((int32_t)152258145);
		goto IL_0026;
	}

IL_00f3:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_17 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		RuntimeObject * L_18 = p0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_17, (RuntimeObject *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_19 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)__this->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		RuntimeObject * L_20 = p0;
		List_1_Add_mBB024C6A0C23217B87FABE55861D2532378BEE1B((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_19, (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)L_20, /*hidden argument*/List_1_Add_mBB024C6A0C23217B87FABE55861D2532378BEE1B_RuntimeMethod_var);
		return;
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wtAIYQJbruDURiMwCNDuBBwhWhcj_Remove_m94451D7EE09B511DB511A3751498512D6A739883_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wtAIYQJbruDURiMwCNDuBBwhWhcj_Remove_m94451D7EE09B511DB511A3751498512D6A739883_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_1 = p0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_3 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_003c;
		}
	}

IL_0012:
	{
		G_B3_0 = ((int32_t)1909803526);
	}

IL_0017:
	{
		switch (((int32_t)((int32_t)G_B3_0^(int32_t)((int32_t)1909803525))))
		{
			case 0:
			{
				goto IL_0012;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_003c;
			}
			case 3:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_004f;
	}

IL_0034:
	{
		return;
	}
	// Dead block : IL_0035: ldc.i4 1909803527

IL_003c:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_5 = p0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		G_B3_0 = ((int32_t)1909803524);
		goto IL_0017;
	}

IL_004f:
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_6 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)__this->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		int32_t L_7 = p0;
		List_1_RemoveAt_m7016ACAC4680B5067B4C91DF77A292D8E8D427A5((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_6, (int32_t)L_7, /*hidden argument*/List_1_RemoveAt_m7016ACAC4680B5067B4C91DF77A292D8E8D427A5_RuntimeMethod_var);
		return;
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::lfujFXPVFbtvCcmSQQbFKFeHefT(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wtAIYQJbruDURiMwCNDuBBwhWhcj_lfujFXPVFbtvCcmSQQbFKFeHefT_mDED8B55B15EE919FDE109B520BEC9FA7BBFE3C40_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wtAIYQJbruDURiMwCNDuBBwhWhcj_lfujFXPVFbtvCcmSQQbFKFeHefT_mDED8B55B15EE919FDE109B520BEC9FA7BBFE3C40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		RuntimeObject * L_1 = p0;
		((  bool (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_2 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)__this->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		RuntimeObject * L_3 = p0;
		List_1_Remove_m89A219C1A47D8F7CEDA4FAD3FD848DBCC009D28C((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_2, (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)L_3, /*hidden argument*/List_1_Remove_m89A219C1A47D8F7CEDA4FAD3FD848DBCC009D28C_RuntimeMethod_var);
		return;
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wtAIYQJbruDURiMwCNDuBBwhWhcj_Remove_m5DB88283FBA05050ADB72F99DD62EA968B515947_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wtAIYQJbruDURiMwCNDuBBwhWhcj_Remove_m5DB88283FBA05050ADB72F99DD62EA968B515947_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_1 = p1;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_00bb;
		}
	}

IL_000e:
	{
		G_B3_0 = ((int32_t)860916469);
	}

IL_0013:
	{
		switch (((int32_t)((int32_t)G_B3_0^(int32_t)((int32_t)860916467))))
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_00d3;
			}
			case 2:
			{
				goto IL_000e;
			}
			case 3:
			{
				goto IL_00e1;
			}
			case 4:
			{
				goto IL_00bb;
			}
			case 5:
			{
				goto IL_0043;
			}
			case 6:
			{
				goto IL_00b0;
			}
			case 7:
			{
				goto IL_0099;
			}
		}
	}
	{
		goto IL_00e1;
	}

IL_0043:
	{
		G_B3_0 = ((int32_t)860916464);
		goto IL_0013;
	}

IL_004a:
	{
		int32_t L_2 = ControllerMap_get_categoryId_m1B05E24F82D8DED46B2BAFBCD9D8629328CFBA2B((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_1), /*hidden argument*/NULL);
		int32_t L_3 = p0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_00d3;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_5 = V_0;
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_2 = (RuntimeObject *)L_6;
		int32_t L_7 = ControllerMap_get_layoutId_m1B90CB02DDE635CA339BA98082FD4F9480DF0EF7((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_2), /*hidden argument*/NULL);
		int32_t L_8 = p1;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_00d3;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_10 = V_0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_11 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)__this->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		int32_t L_12 = V_0;
		List_1_RemoveAt_m7016ACAC4680B5067B4C91DF77A292D8E8D427A5((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_11, (int32_t)L_12, /*hidden argument*/List_1_RemoveAt_m7016ACAC4680B5067B4C91DF77A292D8E8D427A5_RuntimeMethod_var);
		G_B3_0 = ((int32_t)860916466);
		goto IL_0013;
	}

IL_0099:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_13 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_13, (int32_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_1 = (RuntimeObject *)L_15;
		G_B3_0 = ((int32_t)860916467);
		goto IL_0013;
	}

IL_00b0:
	{
		return;
	}
	// Dead block : IL_00b1: ldc.i4 860916471

IL_00bb:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_16 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_17 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
		G_B3_0 = ((int32_t)860916470);
		goto IL_0013;
	}

IL_00d3:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1));
		G_B3_0 = ((int32_t)860916464);
		goto IL_0013;
	}

IL_00e1:
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0099;
		}
	}
	{
		return;
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::RemoveById(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wtAIYQJbruDURiMwCNDuBBwhWhcj_RemoveById_m4D8AD3FAD5ABBFBDC1ED1F6926E23F3F9F880B12_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wtAIYQJbruDURiMwCNDuBBwhWhcj_RemoveById_m4D8AD3FAD5ABBFBDC1ED1F6926E23F3F9F880B12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_003a;
	}

IL_0010:
	{
		G_B2_0 = ((int32_t)717472583);
	}

IL_0015:
	{
		switch (((int32_t)((int32_t)G_B2_0^(int32_t)((int32_t)717472578))))
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_00a0;
			}
			case 2:
			{
				goto IL_005a;
			}
			case 3:
			{
				goto IL_004f;
			}
			case 4:
			{
				goto IL_0010;
			}
			case 5:
			{
				goto IL_0089;
			}
		}
	}
	{
		goto IL_00a0;
	}

IL_003a:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_3 = (int32_t)((int32_t)717472579);
		G_B7_0 = L_3;
		G_B7_1 = L_3;
		goto IL_004c;
	}

IL_0046:
	{
		int32_t L_4 = (int32_t)((int32_t)717472583);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
	}

IL_004c:
	{
		G_B2_0 = G_B7_1;
		goto IL_0015;
	}

IL_004f:
	{
		int32_t L_5 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		G_B2_0 = ((int32_t)717472578);
		goto IL_0015;
	}

IL_005a:
	{
		int32_t L_6 = ControllerMap_get_id_m6FA8319C62C718FE081C3D490348B1235840E336((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_1), /*hidden argument*/NULL);
		int32_t L_7 = p0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_004f;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_9 = V_0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_10 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)__this->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		int32_t L_11 = V_0;
		List_1_RemoveAt_m7016ACAC4680B5067B4C91DF77A292D8E8D427A5((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_10, (int32_t)L_11, /*hidden argument*/List_1_RemoveAt_m7016ACAC4680B5067B4C91DF77A292D8E8D427A5_RuntimeMethod_var);
		G_B2_0 = ((int32_t)717472577);
		goto IL_0015;
	}

IL_0089:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_12 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_13 = V_0;
		RuntimeObject * L_14 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_12, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_1 = (RuntimeObject *)L_14;
		G_B2_0 = ((int32_t)717472576);
		goto IL_0015;
	}

IL_00a0:
	{
		return;
	}
}
// System.Int32 wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::IndexOf(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_IndexOf_m513E7A0EE08A5E149B2D7A7B686746528CFC78C2_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0062;
	}

IL_0004:
	{
		G_B2_0 = ((int32_t)-945032789);
	}

IL_0009:
	{
		switch (((int32_t)((int32_t)G_B2_0^(int32_t)((int32_t)-945032792))))
		{
			case 0:
			{
				goto IL_0004;
			}
			case 1:
			{
				goto IL_004b;
			}
			case 2:
			{
				goto IL_003e;
			}
			case 3:
			{
				goto IL_002a;
			}
			case 4:
			{
				goto IL_0062;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_002a:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_1 = V_0;
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_1 = (RuntimeObject *)L_2;
		G_B2_0 = ((int32_t)-945032791);
		goto IL_0009;
	}

IL_003e:
	{
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0040:
	{
		int32_t L_4 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		G_B2_0 = ((int32_t)-945032788);
		goto IL_0009;
	}

IL_004b:
	{
		int32_t L_5 = ControllerMap_get_id_m6FA8319C62C718FE081C3D490348B1235840E336((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_1), /*hidden argument*/NULL);
		int32_t L_6 = p0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0040;
		}
	}
	{
		G_B2_0 = ((int32_t)-945032790);
		goto IL_0009;
	}

IL_0062:
	{
		int32_t L_7 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_9 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_002a;
		}
	}
	{
		return (-1);
	}
}
// System.Int32 wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::IndexOf(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_IndexOf_m8C930B99DE103E853777610723E1E5E1B7DA1720_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_1 = p1;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}

IL_0008:
	{
		G_B3_0 = ((int32_t)-2087845395);
	}

IL_000d:
	{
		switch (((int32_t)((int32_t)G_B3_0^(int32_t)((int32_t)-2087845396))))
		{
			case 0:
			{
				goto IL_0093;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_00cc;
			}
			case 3:
			{
				goto IL_0008;
			}
			case 4:
			{
				goto IL_0048;
			}
			case 5:
			{
				goto IL_0065;
			}
			case 6:
			{
				goto IL_00b5;
			}
			case 7:
			{
				goto IL_007c;
			}
		}
	}
	{
		goto IL_00cc;
	}

IL_003d:
	{
		return (-1);
	}

IL_003f:
	{
		V_0 = (int32_t)0;
		G_B3_0 = ((int32_t)-2087845396);
		goto IL_000d;
	}

IL_0048:
	{
		int32_t L_2 = ControllerMap_get_layoutId_m1B90CB02DDE635CA339BA98082FD4F9480DF0EF7((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_2), /*hidden argument*/NULL);
		int32_t L_3 = p1;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_005a:
	{
		int32_t L_5 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		G_B3_0 = ((int32_t)-2087845396);
		goto IL_000d;
	}

IL_0065:
	{
		int32_t L_6 = ControllerMap_get_categoryId_m1B05E24F82D8DED46B2BAFBCD9D8629328CFBA2B((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_1), /*hidden argument*/NULL);
		int32_t L_7 = p0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_005a;
		}
	}
	{
		G_B3_0 = ((int32_t)-2087845397);
		goto IL_000d;
	}

IL_007c:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_9 = V_0;
		RuntimeObject * L_10 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_2 = (RuntimeObject *)L_10;
		G_B3_0 = ((int32_t)-2087845400);
		goto IL_000d;
	}

IL_0093:
	{
		int32_t L_11 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_12 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_13 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_14 = (int32_t)((int32_t)-2087845394);
		G_B16_0 = L_14;
		G_B16_1 = L_14;
		goto IL_00af;
	}

IL_00a9:
	{
		int32_t L_15 = (int32_t)((int32_t)-2087845398);
		G_B16_0 = L_15;
		G_B16_1 = L_15;
	}

IL_00af:
	{
		G_B3_0 = G_B16_1;
		goto IL_000d;
	}

IL_00b5:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_16 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_17 = V_0;
		RuntimeObject * L_18 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_1 = (RuntimeObject *)L_18;
		G_B3_0 = ((int32_t)-2087845399);
		goto IL_000d;
	}

IL_00cc:
	{
		return (-1);
	}
}
// System.Boolean wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Contains(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wtAIYQJbruDURiMwCNDuBBwhWhcj_Contains_mD6DA26855D37D6DCE1CABEEB18CCA37E5DA4574D_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = ((  int32_t (*) (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20)->methodPointer)((wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		return (bool)1;
	}
}
// System.Boolean wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Contains(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wtAIYQJbruDURiMwCNDuBBwhWhcj_Contains_mABFF68707716B46C76053ACA3EC3CD40EECA7E0F_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = ((  int32_t (*) (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		return (bool)1;
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wtAIYQJbruDURiMwCNDuBBwhWhcj_Clear_mA79DE837B0320519EA54C5C16672E1702ACED59E_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, bool p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wtAIYQJbruDURiMwCNDuBBwhWhcj_Clear_mA79DE837B0320519EA54C5C16672E1702ACED59E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602 * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		bool L_0 = p0;
		if (L_0)
		{
			goto IL_00ef;
		}
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)-1168778528);
	}

IL_000b:
	{
		switch (((int32_t)((int32_t)G_B2_0^(int32_t)((int32_t)-1168778523))))
		{
			case 0:
			{
				goto IL_0006;
			}
			case 1:
			{
				goto IL_00e1;
			}
			case 2:
			{
				goto IL_00bf;
			}
			case 3:
			{
				goto IL_00ef;
			}
			case 4:
			{
				goto IL_00a9;
			}
			case 5:
			{
				goto IL_0088;
			}
			case 6:
			{
				goto IL_0043;
			}
			case 7:
			{
				goto IL_0107;
			}
			case 8:
			{
				goto IL_006c;
			}
			case 9:
			{
				goto IL_0065;
			}
		}
	}
	{
		goto IL_0107;
	}

IL_0043:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_2 = V_0;
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_3 = (RuntimeObject *)L_3;
		int32_t L_4 = ControllerMap_get_categoryId_m1B05E24F82D8DED46B2BAFBCD9D8629328CFBA2B((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_3), /*hidden argument*/NULL);
		V_1 = (int32_t)L_4;
		G_B2_0 = ((int32_t)-1168778527);
		goto IL_000b;
	}

IL_0065:
	{
		G_B2_0 = ((int32_t)-1168778526);
		goto IL_000b;
	}

IL_006c:
	{
		InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602 * L_5 = V_2;
		if (!L_5)
		{
			goto IL_00bf;
		}
	}
	{
		InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602 * L_6 = V_2;
		bool L_7 = InputCategory_get_userAssignable_m6F4B367A66B6F94277FB20F851F2280FB6059B64_inline((InputCategory_t775B2399E2070EF82BBA5D9676BD00C30159D918 *)L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_8 = (int32_t)((int32_t)-1168778524);
		G_B10_0 = L_8;
		G_B10_1 = L_8;
		goto IL_0085;
	}

IL_007f:
	{
		int32_t L_9 = (int32_t)((int32_t)-1168778521);
		G_B10_0 = L_9;
		G_B10_1 = L_9;
	}

IL_0085:
	{
		G_B2_0 = G_B10_1;
		goto IL_000b;
	}

IL_0088:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_11 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)__this->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		List_1_Clear_m88D5862BAF30335E7FEA486544F28FA5CECFF6DE((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_11, /*hidden argument*/List_1_Clear_m88D5862BAF30335E7FEA486544F28FA5CECFF6DE_RuntimeMethod_var);
		return;
	}
	// Dead block : IL_009f: ldc.i4 -1168778522

IL_00a9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReInput_t660C845029E93C5E11722938F53BCA3AED33D0BE_il2cpp_TypeInfo_var);
		MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 * L_12 = ReInput_get_mapping_m57CBC64F23235AA736D4C057ED17A85421F00D5C(/*hidden argument*/NULL);
		int32_t L_13 = V_1;
		InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602 * L_14 = MappingHelper_GetMapCategory_mBC62128856B61C97B7AD00A9739EABA209EEFDD0((MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 *)L_12, (int32_t)L_13, /*hidden argument*/NULL);
		V_2 = (InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602 *)L_14;
		G_B2_0 = ((int32_t)-1168778515);
		goto IL_000b;
	}

IL_00bf:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_15 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_16 = V_0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_17 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)__this->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		int32_t L_18 = V_0;
		List_1_RemoveAt_m7016ACAC4680B5067B4C91DF77A292D8E8D427A5((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_17, (int32_t)L_18, /*hidden argument*/List_1_RemoveAt_m7016ACAC4680B5067B4C91DF77A292D8E8D427A5_RuntimeMethod_var);
		G_B2_0 = ((int32_t)-1168778524);
		goto IL_000b;
	}

IL_00e1:
	{
		int32_t L_19 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
		G_B2_0 = ((int32_t)-1168778526);
		goto IL_000b;
	}

IL_00ef:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_20 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_21 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1));
		G_B2_0 = ((int32_t)-1168778516);
		goto IL_000b;
	}

IL_0107:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		return;
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::Clear(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wtAIYQJbruDURiMwCNDuBBwhWhcj_Clear_mA3839D45E591E8E478026026DC3B9516F2B82FB9_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, bool p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wtAIYQJbruDURiMwCNDuBBwhWhcj_Clear_mA3839D45E591E8E478026026DC3B9516F2B82FB9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	int32_t G_B2_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReInput_t660C845029E93C5E11722938F53BCA3AED33D0BE_il2cpp_TypeInfo_var);
		MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 * L_0 = ReInput_get_mapping_m57CBC64F23235AA736D4C057ED17A85421F00D5C(/*hidden argument*/NULL);
		int32_t L_1 = p0;
		InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602 * L_2 = MappingHelper_GetMapCategory_mBC62128856B61C97B7AD00A9739EABA209EEFDD0((MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 *)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		V_0 = (InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602 *)L_2;
	}

IL_000c:
	{
		G_B2_0 = ((int32_t)-2018433239);
	}

IL_0011:
	{
		switch (((int32_t)((int32_t)G_B2_0^(int32_t)((int32_t)-2018433236))))
		{
			case 0:
			{
				goto IL_000c;
			}
			case 1:
			{
				goto IL_00ca;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_00c0;
			}
			case 4:
			{
				goto IL_0056;
			}
			case 5:
			{
				goto IL_0069;
			}
			case 6:
			{
				goto IL_007f;
			}
			case 7:
			{
				goto IL_0074;
			}
		}
	}
	{
		goto IL_00ca;
	}

IL_0041:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_4 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		G_B2_0 = ((int32_t)-2018433233);
		goto IL_0011;
	}

IL_0056:
	{
		bool L_5 = p1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602 * L_6 = V_0;
		bool L_7 = InputCategory_get_userAssignable_m6F4B367A66B6F94277FB20F851F2280FB6059B64_inline((InputCategory_t775B2399E2070EF82BBA5D9676BD00C30159D918 *)L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		return;
	}
	// Dead block : IL_0062: ldc.i4 -2018433234

IL_0069:
	{
		InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602 * L_8 = V_0;
		if (L_8)
		{
			goto IL_0056;
		}
	}
	{
		return;
	}
	// Dead block : IL_006d: ldc.i4 -2018433240

IL_0074:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
		G_B2_0 = ((int32_t)-2018433235);
		goto IL_0011;
	}

IL_007f:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_11 = V_1;
		RuntimeObject * L_12 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_3 = (RuntimeObject *)L_12;
		int32_t L_13 = ControllerMap_get_categoryId_m1B05E24F82D8DED46B2BAFBCD9D8629328CFBA2B((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_3), /*hidden argument*/NULL);
		V_2 = (int32_t)L_13;
		int32_t L_14 = p0;
		int32_t L_15 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0074;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_16 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_17 = V_1;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_18 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)__this->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		int32_t L_19 = V_1;
		List_1_RemoveAt_m7016ACAC4680B5067B4C91DF77A292D8E8D427A5((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_18, (int32_t)L_19, /*hidden argument*/List_1_RemoveAt_m7016ACAC4680B5067B4C91DF77A292D8E8D427A5_RuntimeMethod_var);
		G_B2_0 = ((int32_t)-2018433237);
		goto IL_0011;
	}

IL_00c0:
	{
		G_B2_0 = ((int32_t)-2018433235);
		goto IL_0011;
	}

IL_00ca:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		return;
	}
}
// System.Void wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::ClearByLayout(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wtAIYQJbruDURiMwCNDuBBwhWhcj_ClearByLayout_m275B8931865040BEFBEF30BC6479182B51C0676D_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, bool p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (wtAIYQJbruDURiMwCNDuBBwhWhcj_ClearByLayout_m275B8931865040BEFBEF30BC6479182B51C0676D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602 * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_00e1;
	}

IL_0013:
	{
		G_B2_0 = ((int32_t)1863785093);
	}

IL_0018:
	{
		switch (((int32_t)((int32_t)G_B2_0^(int32_t)((int32_t)1863785092))))
		{
			case 0:
			{
				goto IL_00e1;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_0115;
			}
			case 3:
			{
				goto IL_00bd;
			}
			case 4:
			{
				goto IL_00a7;
			}
			case 5:
			{
				goto IL_00f9;
			}
			case 6:
			{
				goto IL_0013;
			}
			case 7:
			{
				goto IL_00cb;
			}
		}
	}
	{
		goto IL_0115;
	}

IL_0048:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_3 = V_0;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_3 = (RuntimeObject *)L_4;
		int32_t L_5 = ControllerMap_get_categoryId_m1B05E24F82D8DED46B2BAFBCD9D8629328CFBA2B((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_3), /*hidden argument*/NULL);
		V_1 = (int32_t)L_5;
		int32_t L_6 = p0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_7 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_8 = V_0;
		RuntimeObject * L_9 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_4 = (RuntimeObject *)L_9;
		int32_t L_10 = ControllerMap_get_layoutId_m1B90CB02DDE635CA339BA98082FD4F9480DF0EF7((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_4), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_10))))
		{
			goto IL_00bd;
		}
	}
	{
		bool L_11 = p1;
		if (!L_11)
		{
			goto IL_00cb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReInput_t660C845029E93C5E11722938F53BCA3AED33D0BE_il2cpp_TypeInfo_var);
		MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 * L_12 = ReInput_get_mapping_m57CBC64F23235AA736D4C057ED17A85421F00D5C(/*hidden argument*/NULL);
		int32_t L_13 = V_1;
		InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602 * L_14 = MappingHelper_GetMapCategory_mBC62128856B61C97B7AD00A9739EABA209EEFDD0((MappingHelper_t2F1FD9406CF911414A90FCB4852B174257FA2BF6 *)L_12, (int32_t)L_13, /*hidden argument*/NULL);
		V_2 = (InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602 *)L_14;
		InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602 * L_15 = V_2;
		if (L_15)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_16 = (int32_t)((int32_t)1863785091);
		G_B9_0 = L_16;
		G_B9_1 = L_16;
		goto IL_00a1;
	}

IL_009b:
	{
		int32_t L_17 = (int32_t)((int32_t)1863785089);
		G_B9_0 = L_17;
		G_B9_1 = L_17;
	}

IL_00a1:
	{
		G_B2_0 = G_B9_1;
		goto IL_0018;
	}

IL_00a7:
	{
		List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E * L_18 = (List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)__this->get_MAfCHjHywJfLSUSXXqCDKGEIAal_0();
		int32_t L_19 = V_0;
		List_1_RemoveAt_m7016ACAC4680B5067B4C91DF77A292D8E8D427A5((List_1_t4C65ABDD2ABD8E706F31D12EFF7B7308079F212E *)L_18, (int32_t)L_19, /*hidden argument*/List_1_RemoveAt_m7016ACAC4680B5067B4C91DF77A292D8E8D427A5_RuntimeMethod_var);
		G_B2_0 = ((int32_t)1863785095);
		goto IL_0018;
	}

IL_00bd:
	{
		int32_t L_20 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
		G_B2_0 = ((int32_t)1863785092);
		goto IL_0018;
	}

IL_00cb:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_21 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_22 = V_0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21, (int32_t)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		G_B2_0 = ((int32_t)1863785088);
		goto IL_0018;
	}

IL_00e1:
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) >= ((int32_t)0)))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_24 = (int32_t)((int32_t)1863785094);
		G_B16_0 = L_24;
		G_B16_1 = L_24;
		goto IL_00f3;
	}

IL_00ed:
	{
		int32_t L_25 = (int32_t)((int32_t)1863785093);
		G_B16_0 = L_25;
		G_B16_1 = L_25;
	}

IL_00f3:
	{
		G_B2_0 = G_B16_1;
		goto IL_0018;
	}

IL_00f9:
	{
		InputMapCategory_t3A6CAA2D6E69E45E734A026F26B816788D175602 * L_26 = V_2;
		bool L_27 = InputCategory_get_userAssignable_m6F4B367A66B6F94277FB20F851F2280FB6059B64_inline((InputCategory_t775B2399E2070EF82BBA5D9676BD00C30159D918 *)L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_28 = (int32_t)((int32_t)1863785095);
		G_B20_0 = L_28;
		G_B20_1 = L_28;
		goto IL_010f;
	}

IL_0109:
	{
		int32_t L_29 = (int32_t)((int32_t)1863785091);
		G_B20_0 = L_29;
		G_B20_1 = L_29;
	}

IL_010f:
	{
		G_B2_0 = G_B20_1;
		goto IL_0018;
	}

IL_0115:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* wtAIYQJbruDURiMwCNDuBBwhWhcj_GetEnumerator_m20EE925B8B080762ED3E004E49D662E7D1FA1301_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, const RuntimeMethod* method)
{
	TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931 * V_0 = NULL;
	{
		TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931 * L_0 = (TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 22));
		((  void (*) (TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 23)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 23));
		V_0 = (TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931 *)L_0;
		TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931 * L_1 = V_0;
		L_1->set_UMfawUAeNCfAFpSlXTgCRWFLdSBg_2(__this);
		TDCosqKINLgUYAoCxRDHyVIHdUO_t624471D047AC084C58638604B3E5984A6840B931 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* wtAIYQJbruDURiMwCNDuBBwhWhcj_System_Collections_IEnumerable_GetEnumerator_m2BB845BB046992E0DCF142824CA18458E7E69857_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24)->methodPointer)((wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24));
		return L_0;
	}
}
// T wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::wToRUSQNexOhNUkXXUSHZnhRmcD(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * wtAIYQJbruDURiMwCNDuBBwhWhcj_wToRUSQNexOhNUkXXUSHZnhRmcD_m9637D2B7E79BA53F56229F1BFC2FCCCBC58C46DE_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
	}

IL_000c:
	{
		G_B3_0 = ((int32_t)-1435828252);
	}

IL_0011:
	{
		switch (((int32_t)((int32_t)G_B3_0^(int32_t)((int32_t)-1435828249))))
		{
			case 0:
			{
				goto IL_009f;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0036;
			}
			case 4:
			{
				goto IL_0060;
			}
			case 5:
			{
				goto IL_000c;
			}
		}
	}
	{
		goto IL_009f;
	}

IL_0036:
	{
		RuntimeObject * L_1 = V_1;
		return L_1;
	}

IL_0038:
	{
		V_0 = (int32_t)0;
		G_B3_0 = ((int32_t)-1435828251);
		goto IL_0011;
	}

IL_0041:
	{
		int32_t L_2 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_4 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		if ((((int32_t)L_2) < ((int32_t)L_4)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_5 = (int32_t)((int32_t)-1435828249);
		G_B10_0 = L_5;
		G_B10_1 = L_5;
		goto IL_005d;
	}

IL_0057:
	{
		int32_t L_6 = (int32_t)((int32_t)-1435828250);
		G_B10_0 = L_6;
		G_B10_1 = L_6;
	}

IL_005d:
	{
		G_B3_0 = G_B10_1;
		goto IL_0011;
	}

IL_0060:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_7 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_8 = V_0;
		RuntimeObject * L_9 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return L_9;
	}

IL_006d:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		G_B3_0 = ((int32_t)-1435828251);
		goto IL_0011;
	}

IL_0078:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_12 = V_0;
		RuntimeObject * L_13 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_2 = (RuntimeObject *)L_13;
		int32_t L_14 = ControllerMap_get_id_m6FA8319C62C718FE081C3D490348B1235840E336((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_2), /*hidden argument*/NULL);
		int32_t L_15 = p0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_006d;
		}
	}
	{
		G_B3_0 = ((int32_t)-1435828253);
		goto IL_0011;
	}

IL_009f:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		return L_16;
	}
}
// T wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::wToRUSQNexOhNUkXXUSHZnhRmcD(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * wtAIYQJbruDURiMwCNDuBBwhWhcj_wToRUSQNexOhNUkXXUSHZnhRmcD_m98D4A889EA670881A57385DCBF2C2B1B850F5B5A_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_1 = p1;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}

IL_0008:
	{
		G_B3_0 = ((int32_t)1888001126);
	}

IL_000d:
	{
		switch (((int32_t)((int32_t)G_B3_0^(int32_t)((int32_t)1888001122))))
		{
			case 0:
			{
				goto IL_0071;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_00a8;
			}
			case 3:
			{
				goto IL_0008;
			}
			case 4:
			{
				goto IL_005e;
			}
			case 5:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_00a8;
	}

IL_0032:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_3 = V_0;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return L_4;
	}

IL_003f:
	{
		int32_t L_5 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		G_B3_0 = ((int32_t)1888001120);
		goto IL_000d;
	}

IL_004a:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_6 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_7 = V_0;
		RuntimeObject * L_8 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_6, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_2 = (RuntimeObject *)L_8;
		G_B3_0 = ((int32_t)1888001122);
		goto IL_000d;
	}

IL_005e:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_9 = V_1;
		return L_9;
	}

IL_0068:
	{
		V_0 = (int32_t)0;
		G_B3_0 = ((int32_t)1888001120);
		goto IL_000d;
	}

IL_0071:
	{
		int32_t L_10 = ControllerMap_get_categoryId_m1B05E24F82D8DED46B2BAFBCD9D8629328CFBA2B((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_2), /*hidden argument*/NULL);
		int32_t L_11 = p0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_003f;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_12 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_13 = V_0;
		RuntimeObject * L_14 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_12, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_3 = (RuntimeObject *)L_14;
		int32_t L_15 = ControllerMap_get_layoutId_m1B90CB02DDE635CA339BA98082FD4F9480DF0EF7((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_3), /*hidden argument*/NULL);
		int32_t L_16 = p1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_003f;
		}
	}
	{
		G_B3_0 = ((int32_t)1888001123);
		goto IL_000d;
	}

IL_00a8:
	{
		int32_t L_17 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_18 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_19 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_004a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_20 = V_4;
		return L_20;
	}
}
// T wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::OTqLgrRObOWQOrqdkmXVKDKGoWX(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * wtAIYQJbruDURiMwCNDuBBwhWhcj_OTqLgrRObOWQOrqdkmXVKDKGoWX_m0D194094FEDDDEF3323E8C372F58871D49A91A58_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		V_0 = (int32_t)0;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)1179118493);
	}

IL_0007:
	{
		switch (((int32_t)((int32_t)G_B2_0^(int32_t)((int32_t)1179118492))))
		{
			case 0:
			{
				goto IL_0002;
			}
			case 1:
			{
				goto IL_0087;
			}
			case 2:
			{
				goto IL_0063;
			}
			case 3:
			{
				goto IL_004b;
			}
			case 4:
			{
				goto IL_002c;
			}
			case 5:
			{
				goto IL_0091;
			}
		}
	}
	{
		goto IL_0091;
	}

IL_002c:
	{
		int32_t L_0 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_3 = (int32_t)((int32_t)1179118494);
		G_B7_0 = L_3;
		G_B7_1 = L_3;
		goto IL_0048;
	}

IL_0042:
	{
		int32_t L_4 = (int32_t)((int32_t)1179118489);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
	}

IL_0048:
	{
		G_B2_0 = G_B7_1;
		goto IL_0007;
	}

IL_004b:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_6 = V_0;
		RuntimeObject * L_7 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return L_7;
	}

IL_0058:
	{
		int32_t L_8 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		G_B2_0 = ((int32_t)1179118488);
		goto IL_0007;
	}

IL_0063:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_10 = V_0;
		RuntimeObject * L_11 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_1 = (RuntimeObject *)L_11;
		int32_t L_12 = ControllerMap_get_categoryId_m1B05E24F82D8DED46B2BAFBCD9D8629328CFBA2B((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_1), /*hidden argument*/NULL);
		int32_t L_13 = p0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0058;
		}
	}
	{
		G_B2_0 = ((int32_t)1179118495);
		goto IL_0007;
	}

IL_0087:
	{
		G_B2_0 = ((int32_t)1179118488);
		goto IL_0007;
	}

IL_0091:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_14 = V_2;
		return L_14;
	}
}
// System.Boolean wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::ContainsMapInCategory(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wtAIYQJbruDURiMwCNDuBBwhWhcj_ContainsMapInCategory_mE10531BA9B27DF0F53D883F3128E56F42F6A1975_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, int32_t p0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)0;
	}

IL_0006:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_0 = (int32_t)L_2;
	}

IL_0012:
	{
		G_B4_0 = ((int32_t)-1951541099);
	}

IL_0017:
	{
		switch (((int32_t)((int32_t)G_B4_0^(int32_t)((int32_t)-1951541098))))
		{
			case 0:
			{
				goto IL_0012;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_0072;
			}
			case 3:
			{
				goto IL_0038;
			}
			case 4:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_0072;
	}

IL_0038:
	{
		V_1 = (int32_t)0;
		G_B4_0 = ((int32_t)-1951541100);
		goto IL_0017;
	}

IL_0041:
	{
		return (bool)1;
	}

IL_0043:
	{
		int32_t L_3 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		G_B4_0 = ((int32_t)-1951541100);
		goto IL_0017;
	}

IL_004e:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_5 = V_1;
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_2 = (RuntimeObject *)L_6;
		int32_t L_7 = ControllerMap_get_categoryId_m1B05E24F82D8DED46B2BAFBCD9D8629328CFBA2B((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_2), /*hidden argument*/NULL);
		int32_t L_8 = p0;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0043;
		}
	}
	{
		G_B4_0 = ((int32_t)-1951541102);
		goto IL_0017;
	}

IL_0072:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}
}
// System.Int32 wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::SetEnabledAll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_SetEnabledAll_m33846902590BCC4D4AFF538CC88A0687B3C90DF1_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, bool p0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	int32_t G_B2_0 = 0;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_0 = (int32_t)L_1;
		V_1 = (int32_t)0;
		V_2 = (int32_t)0;
		goto IL_007d;
	}

IL_0012:
	{
		G_B2_0 = ((int32_t)148773165);
	}

IL_0017:
	{
		switch (((int32_t)((int32_t)G_B2_0^(int32_t)((int32_t)148773167))))
		{
			case 0:
			{
				goto IL_0012;
			}
			case 1:
			{
				goto IL_0072;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_007d;
			}
		}
	}
	{
		goto IL_007d;
	}

IL_0034:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_3 = V_2;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_3 = (RuntimeObject *)L_4;
		RuntimeObject * L_5 = V_3;
		if (!L_5)
		{
			goto IL_0072;
		}
	}
	{
		bool L_6 = ControllerMap_get_enabled_m454281A8B80828B120C4F7EDF2BC52028AD35C6F((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_3), /*hidden argument*/NULL);
		bool L_7 = p0;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0072;
		}
	}
	{
		bool L_8 = p0;
		ControllerMap_set_enabled_m4A347FEEC7D6FF51515C88121C4F2A0437B472A8_inline((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_3), (bool)L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		G_B2_0 = ((int32_t)148773166);
		goto IL_0017;
	}

IL_0072:
	{
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		G_B2_0 = ((int32_t)148773164);
		goto IL_0017;
	}

IL_007d:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}
}
// System.Int32 wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::SetEnabledByCategory(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_SetEnabledByCategory_mB7EA582A2F1D4D62BA8DFC649999417F09E88E6E_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, bool p0, int32_t p1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_0 = (int32_t)L_1;
	}

IL_000c:
	{
		G_B2_0 = ((int32_t)412286136);
	}

IL_0011:
	{
		switch (((int32_t)((int32_t)G_B2_0^(int32_t)((int32_t)412286139))))
		{
			case 0:
			{
				goto IL_00ae;
			}
			case 1:
			{
				goto IL_0072;
			}
			case 2:
			{
				goto IL_000c;
			}
			case 3:
			{
				goto IL_0067;
			}
			case 4:
			{
				goto IL_0036;
			}
			case 5:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_00ae;
	}

IL_0036:
	{
		int32_t L_2 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		G_B2_0 = ((int32_t)412286139);
		goto IL_0011;
	}

IL_0041:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_4 = V_2;
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_3 = (RuntimeObject *)L_5;
		RuntimeObject * L_6 = V_3;
		if (L_6)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_7 = (int32_t)((int32_t)412286143);
		G_B8_0 = L_7;
		G_B8_1 = L_7;
		goto IL_0064;
	}

IL_005e:
	{
		int32_t L_8 = (int32_t)((int32_t)412286138);
		G_B8_0 = L_8;
		G_B8_1 = L_8;
	}

IL_0064:
	{
		G_B2_0 = G_B8_1;
		goto IL_0011;
	}

IL_0067:
	{
		V_1 = (int32_t)0;
		V_2 = (int32_t)0;
		G_B2_0 = ((int32_t)412286139);
		goto IL_0011;
	}

IL_0072:
	{
		int32_t L_9 = ControllerMap_get_categoryId_m1B05E24F82D8DED46B2BAFBCD9D8629328CFBA2B((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_3), /*hidden argument*/NULL);
		int32_t L_10 = p1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0036;
		}
	}
	{
		bool L_11 = ControllerMap_get_enabled_m454281A8B80828B120C4F7EDF2BC52028AD35C6F((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_3), /*hidden argument*/NULL);
		bool L_12 = p0;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_0036;
		}
	}
	{
		bool L_13 = p0;
		ControllerMap_set_enabled_m4A347FEEC7D6FF51515C88121C4F2A0437B472A8_inline((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_3), (bool)L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		G_B2_0 = ((int32_t)412286143);
		goto IL_0011;
	}

IL_00ae:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}
}
// System.Int32 wtAIYQJbruDURiMwCNDuBBwhWhcj<System.Object>::SetEnabledByCategory(System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wtAIYQJbruDURiMwCNDuBBwhWhcj_SetEnabledByCategory_mDF8FE52CBB74EA67760C7A60552183DE01CD3D21_gshared (wtAIYQJbruDURiMwCNDuBBwhWhcj_tAA735B2A8A14C0429FE4BB14EA3AFC5544036075 * __this, bool p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_0 = (int32_t)L_1;
		V_1 = (int32_t)0;
		V_2 = (int32_t)0;
		goto IL_009f;
	}

IL_0015:
	{
		G_B2_0 = ((int32_t)-115516865);
	}

IL_001a:
	{
		switch (((int32_t)((int32_t)G_B2_0^(int32_t)((int32_t)-115516866))))
		{
			case 0:
			{
				goto IL_0015;
			}
			case 1:
			{
				goto IL_003e;
			}
			case 2:
			{
				goto IL_00c5;
			}
			case 3:
			{
				goto IL_00b7;
			}
			case 4:
			{
				goto IL_009f;
			}
		}
	}
	{
		goto IL_00c5;
	}

IL_003e:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_SvoFXvkVjivbUiJpktrOTCTwHYJ_4();
		int32_t L_3 = V_2;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		V_3 = (RuntimeObject *)L_4;
		RuntimeObject * L_5 = V_3;
		if (!L_5)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_6 = ControllerMap_get_categoryId_m1B05E24F82D8DED46B2BAFBCD9D8629328CFBA2B((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_3), /*hidden argument*/NULL);
		int32_t L_7 = p1;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_8 = ControllerMap_get_layoutId_m1B90CB02DDE635CA339BA98082FD4F9480DF0EF7((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_3), /*hidden argument*/NULL);
		int32_t L_9 = p2;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_00b7;
		}
	}
	{
		bool L_10 = ControllerMap_get_enabled_m454281A8B80828B120C4F7EDF2BC52028AD35C6F((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_3), /*hidden argument*/NULL);
		bool L_11 = p0;
		if ((((int32_t)L_10) == ((int32_t)L_11)))
		{
			goto IL_00b7;
		}
	}
	{
		bool L_12 = p0;
		ControllerMap_set_enabled_m4A347FEEC7D6FF51515C88121C4F2A0437B472A8_inline((ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB *)(V_3), (bool)L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		G_B2_0 = ((int32_t)-115516867);
		goto IL_001a;
	}

IL_009f:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_16 = (int32_t)((int32_t)-115516868);
		G_B12_0 = L_16;
		G_B12_1 = L_16;
		goto IL_00b1;
	}

IL_00ab:
	{
		int32_t L_17 = (int32_t)((int32_t)-115516865);
		G_B12_0 = L_17;
		G_B12_1 = L_17;
	}

IL_00b1:
	{
		G_B2_0 = G_B12_1;
		goto IL_001a;
	}

IL_00b7:
	{
		int32_t L_18 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		G_B2_0 = ((int32_t)-115516870);
		goto IL_001a;
	}

IL_00c5:
	{
		int32_t L_19 = V_1;
		return L_19;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_mF935C53CA27D67D47AE0021A0DB8D92C392EF56B_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IgnoreTimeScale; }
		bool L_0 = __this->get_m_IgnoreTimeScale_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float ColorTween_get_duration_m7E952A00A8A606D7886422812EFB24A6D5BFB508_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Duration; }
		float L_0 = __this->get_m_Duration_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_m8281CB2B12F1697A512D2E2515F5DA058B429FD0_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IgnoreTimeScale; }
		bool L_0 = __this->get_m_IgnoreTimeScale_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float FloatTween_get_duration_m17CD4518038CD642D714B3633236133D309EF13B_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Duration; }
		float L_0 = __this->get_m_Duration_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ControllerMap_set_enabled_m4A347FEEC7D6FF51515C88121C4F2A0437B472A8_inline (ControllerMap_t19BEF397BA067C157A2EA9878680F85EE15085CB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__enabled_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool InputCategory_get_userAssignable_m6F4B367A66B6F94277FB20F851F2280FB6059B64_inline (InputCategory_t775B2399E2070EF82BBA5D9676BD00C30159D918 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__userAssignable_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
