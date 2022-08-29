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
	 * Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.IsSelected
	 */
	struct UUI_InventoryGearSlot_C_IsSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.ShowStatusEffects
	 */
	struct UUI_InventoryGearSlot_C_ShowStatusEffects_Params
	{
	public:
		class UItem*                                               EquippedItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.InitializeGearSlot
	 */
	struct UUI_InventoryGearSlot_C_InitializeGearSlot_Params
	{
	public:
		class UEquipmentComponent*                                 OwningComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItem*                                               EquippedItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.SetGearText
	 */
	struct UUI_InventoryGearSlot_C_SetGearText_Params
	{
	public:
		class UItem*                                               EquippedItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.OnGlobalColorChange
	 */
	struct UUI_InventoryGearSlot_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.PreConstruct
	 */
	struct UUI_InventoryGearSlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InventoryGearSlot.UI_InventoryGearSlot_C.ExecuteUbergraph_UI_InventoryGearSlot
	 */
	struct UUI_InventoryGearSlot_C_ExecuteUbergraph_UI_InventoryGearSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DO79[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
