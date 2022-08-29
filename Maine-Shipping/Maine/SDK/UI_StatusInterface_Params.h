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
	 * Function UI_StatusInterface.UI_StatusInterface_C.HandleKeyEventChord
	 */
	struct UUI_StatusInterface_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.GetDuplicateEffect
	 */
	struct UUI_StatusInterface_C_GetDuplicateEffect_Params
	{
	public:
		EStatusEffectType                                          StatusEffectType;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_41W0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_EffectListItem_C*                                UI_Status_Effect_Widget;                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.RefreshStatusEffects
	 */
	struct UUI_StatusInterface_C_RefreshStatusEffects_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.RefreshEquippedPerks
	 */
	struct UUI_StatusInterface_C_RefreshEquippedPerks_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.UnequipPerkSlot
	 */
	struct UUI_StatusInterface_C_UnequipPerkSlot_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.EquipPerkSlot
	 */
	struct UUI_StatusInterface_C_EquipPerkSlot_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.CanUnequipPerkSlot
	 */
	struct UUI_StatusInterface_C_CanUnequipPerkSlot_Params
	{
	public:
		bool                                                       CanEquip;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.CanEquipPerkSlot
	 */
	struct UUI_StatusInterface_C_CanEquipPerkSlot_Params
	{
	public:
		bool                                                       CanEquip;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_08W8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.RefreshDescription
	 */
	struct UUI_StatusInterface_C_RefreshDescription_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.PopulatePerks
	 */
	struct UUI_StatusInterface_C_PopulatePerks_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.RefreshPerks
	 */
	struct UUI_StatusInterface_C_RefreshPerks_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.RefreshBottomButtons
	 */
	struct UUI_StatusInterface_C_RefreshBottomButtons_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.RefreshUI
	 */
	struct UUI_StatusInterface_C_RefreshUI_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.Construct
	 */
	struct UUI_StatusInterface_C_Construct_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_StatusInterface_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__UnequipButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_StatusInterface_C_BndEvt__UnequipButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_StatusInterface_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.OnSelectionChanged
	 */
	struct UUI_StatusInterface_C_OnSelectionChanged_Params
	{
	public:
		class UUI_PerkSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.OnGlobalColorChange
	 */
	struct UUI_StatusInterface_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.Destruct
	 */
	struct UUI_StatusInterface_C_Destruct_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.OnPerksChanged
	 */
	struct UUI_StatusInterface_C_OnPerksChanged_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.OnPerkDoubleClick
	 */
	struct UUI_StatusInterface_C_OnPerkDoubleClick_Params
	{
	public:
		class UUI_PerkSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.OnStatusEffectsChanged
	 */
	struct UUI_StatusInterface_C_OnStatusEffectsChanged_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_3_OnEffectHovered__DelegateSignature
	 */
	struct UUI_StatusInterface_C_BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_3_OnEffectHovered__DelegateSignature_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_4_OnEffectFocused__DelegateSignature
	 */
	struct UUI_StatusInterface_C_BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_4_OnEffectFocused__DelegateSignature_Params
	{
	public:
		class UStatusEffect*                                       StatuEffect;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.SetStatusEffectToView
	 */
	struct UUI_StatusInterface_C_SetStatusEffectToView_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_5_OnFocusedEffectLost__DelegateSignature
	 */
	struct UUI_StatusInterface_C_BndEvt__UI_StatusInterface_UI_StatusEffectTimerGrid_K2Node_ComponentBoundEvent_5_OnFocusedEffectLost__DelegateSignature_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.OnStatusEffectFocusLost
	 */
	struct UUI_StatusInterface_C_OnStatusEffectFocusLost_Params
	{	};

	/**
	 * Function UI_StatusInterface.UI_StatusInterface_C.ExecuteUbergraph_UI_StatusInterface
	 */
	struct UUI_StatusInterface_C_ExecuteUbergraph_UI_StatusInterface_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
