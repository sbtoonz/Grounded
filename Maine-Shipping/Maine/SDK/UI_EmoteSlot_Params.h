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
	 * Function UI_EmoteSlot.UI_EmoteSlot_C.GetNarration
	 */
	struct UUI_EmoteSlot_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EmoteSlot.UI_EmoteSlot_C.Construct
	 */
	struct UUI_EmoteSlot_C_Construct_Params
	{	};

	/**
	 * Function UI_EmoteSlot.UI_EmoteSlot_C.SetIconBrush
	 */
	struct UUI_EmoteSlot_C_SetIconBrush_Params
	{	};

	/**
	 * Function UI_EmoteSlot.UI_EmoteSlot_C.SetDataRowHandle
	 */
	struct UUI_EmoteSlot_C_SetDataRowHandle_Params
	{
	public:
		struct FDataTableRowHandle                                 DataRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_EmoteSlot.UI_EmoteSlot_C.Destruct
	 */
	struct UUI_EmoteSlot_C_Destruct_Params
	{	};

	/**
	 * Function UI_EmoteSlot.UI_EmoteSlot_C.ExecuteUbergraph_UI_EmoteSlot
	 */
	struct UUI_EmoteSlot_C_ExecuteUbergraph_UI_EmoteSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
