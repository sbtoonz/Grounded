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
	 * Function UI_InventoryHotpouch.UI_InventoryHotpouch_C.OnGlobalColorChange
	 */
	struct UUI_InventoryHotpouch_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_InventoryHotpouch.UI_InventoryHotpouch_C.OnInitialized
	 */
	struct UUI_InventoryHotpouch_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_InventoryHotpouch.UI_InventoryHotpouch_C.HandleSlotFocused
	 */
	struct UUI_InventoryHotpouch_C_HandleSlotFocused_Params
	{
	public:
		class UUI_BaseSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryHotpouch.UI_InventoryHotpouch_C.ExecuteUbergraph_UI_InventoryHotpouch
	 */
	struct UUI_InventoryHotpouch_C_ExecuteUbergraph_UI_InventoryHotpouch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R3UB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InventoryHotpouch.UI_InventoryHotpouch_C.OnSlotFocused__DelegateSignature
	 */
	struct UUI_InventoryHotpouch_C_OnSlotFocused__DelegateSignature_Params
	{
	public:
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
