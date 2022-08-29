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
	 * Function UI_InventoryStatusEffects.UI_InventoryStatusEffects_C.GetNarration
	 */
	struct UUI_InventoryStatusEffects_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InventoryStatusEffects.UI_InventoryStatusEffects_C.Construct
	 */
	struct UUI_InventoryStatusEffects_C_Construct_Params
	{	};

	/**
	 * Function UI_InventoryStatusEffects.UI_InventoryStatusEffects_C.OnGlobalColorChange
	 */
	struct UUI_InventoryStatusEffects_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_InventoryStatusEffects.UI_InventoryStatusEffects_C.ExecuteUbergraph_UI_InventoryStatusEffects
	 */
	struct UUI_InventoryStatusEffects_C_ExecuteUbergraph_UI_InventoryStatusEffects_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
