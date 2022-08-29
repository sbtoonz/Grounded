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
	 * Function UI_BuildingSlot.UI_BuildingSlot_C.GetNarration
	 */
	struct UUI_BuildingSlot_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BuildingSlot.UI_BuildingSlot_C.GetBuildingData
	 */
	struct UUI_BuildingSlot_C_GetBuildingData_Params
	{
	public:
		struct FBaseBuildingData                                   BuildingData;                                            // 0x0000(0x01B0)  (Parm, OutParm)
	};

	/**
	 * Function UI_BuildingSlot.UI_BuildingSlot_C.Construct
	 */
	struct UUI_BuildingSlot_C_Construct_Params
	{	};

	/**
	 * Function UI_BuildingSlot.UI_BuildingSlot_C.SetIconBrush
	 */
	struct UUI_BuildingSlot_C_SetIconBrush_Params
	{	};

	/**
	 * Function UI_BuildingSlot.UI_BuildingSlot_C.SetDataRowHandle
	 */
	struct UUI_BuildingSlot_C_SetDataRowHandle_Params
	{
	public:
		struct FDataTableRowHandle                                 DataRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_BuildingSlot.UI_BuildingSlot_C.ExecuteUbergraph_UI_BuildingSlot
	 */
	struct UUI_BuildingSlot_C_ExecuteUbergraph_UI_BuildingSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3EOI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
