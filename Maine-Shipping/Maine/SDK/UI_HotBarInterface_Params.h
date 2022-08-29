#pragma once

/**
 * Name: Maine
 * Version: Shipping
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_HotBarInterface.UI_HotBarInterface_C.GetDefaultUserFocus
	 */
	struct UUI_HotBarInterface_C_GetDefaultUserFocus_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBarInterface.UI_HotBarInterface_C.Destruct
	 */
	struct UUI_HotBarInterface_C_Destruct_Params
	{	};

	/**
	 * Function UI_HotBarInterface.UI_HotBarInterface_C.ExecuteUbergraph_UI_HotBarInterface
	 */
	struct UUI_HotBarInterface_C_ExecuteUbergraph_UI_HotBarInterface_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6CNC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
