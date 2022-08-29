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
	 * Function UI_ChatSlot.UI_ChatSlot_C.GetNarration
	 */
	struct UUI_ChatSlot_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ChatSlot.UI_ChatSlot_C.Construct
	 */
	struct UUI_ChatSlot_C_Construct_Params
	{	};

	/**
	 * Function UI_ChatSlot.UI_ChatSlot_C.SetIconBrush
	 */
	struct UUI_ChatSlot_C_SetIconBrush_Params
	{	};

	/**
	 * Function UI_ChatSlot.UI_ChatSlot_C.SetDataRowHandle
	 */
	struct UUI_ChatSlot_C_SetDataRowHandle_Params
	{
	public:
		struct FDataTableRowHandle                                 DataRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_ChatSlot.UI_ChatSlot_C.ExecuteUbergraph_UI_ChatSlot
	 */
	struct UUI_ChatSlot_C_ExecuteUbergraph_UI_ChatSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CGWZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
