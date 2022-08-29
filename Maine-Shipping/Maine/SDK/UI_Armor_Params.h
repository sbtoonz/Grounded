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
	 * Function UI_Armor.UI_Armor_C.ItemHasDurability
	 */
	struct UUI_Armor_C_ItemHasDurability_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasDurability;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Armor.UI_Armor_C.GetSlotABGColor
	 */
	struct UUI_Armor_C_GetSlotABGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Armor.UI_Armor_C.OnGlobalColorChange
	 */
	struct UUI_Armor_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_Armor.UI_Armor_C.OnEquipmentChanged
	 */
	struct UUI_Armor_C_OnEquipmentChanged_Params
	{
	public:
		struct FArmorEquipmentSlot                                 EquipmentSlot;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function UI_Armor.UI_Armor_C.OnDurabilityChanged
	 */
	struct UUI_Armor_C_OnDurabilityChanged_Params
	{
	public:
		struct FArmorEquipmentSlot                                 SlotStruct;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function UI_Armor.UI_Armor_C.HandleDurabilityChanged
	 */
	struct UUI_Armor_C_HandleDurabilityChanged_Params
	{
	public:
		class UUI_DurabilityFill_C*                                DurabilityWidget;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DurabilityValue;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Armor.UI_Armor_C.HandleEquipmentChanged
	 */
	struct UUI_Armor_C_HandleEquipmentChanged_Params
	{
	public:
		class UUI_DurabilityFill_C*                                UIDurabilityFill;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              IconImage;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FArmorEquipmentSlot                                 EquipmentSlotStruct;                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_Armor.UI_Armor_C.ExecuteUbergraph_UI_Armor
	 */
	struct UUI_Armor_C_ExecuteUbergraph_UI_Armor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
