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
	 * Function UI_PerkSlot.UI_PerkSlot_C.SetBorderStyle
	 */
	struct UUI_PerkSlot_C_SetBorderStyle_Params
	{	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.SetUnhoveredState
	 */
	struct UUI_PerkSlot_C_SetUnhoveredState_Params
	{	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.SetHoveredState
	 */
	struct UUI_PerkSlot_C_SetHoveredState_Params
	{	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.Initialize
	 */
	struct UUI_PerkSlot_C_Initialize_Params
	{
	public:
		struct FPerkStatus                                         PerkStatus;                                              // 0x0000(0x0024)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_PerkSlot_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.OnAddedToFocusPath
	 */
	struct UUI_PerkSlot_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.SetFocused
	 */
	struct UUI_PerkSlot_C_SetFocused_Params
	{	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_PerkSlot_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_PerkSlot_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.Construct
	 */
	struct UUI_PerkSlot_C_Construct_Params
	{	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.OnGlobalColorChange
	 */
	struct UUI_PerkSlot_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_PerkSlot_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.ExecuteUbergraph_UI_PerkSlot
	 */
	struct UUI_PerkSlot_C_ExecuteUbergraph_UI_PerkSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.OnFocus__DelegateSignature
	 */
	struct UUI_PerkSlot_C_OnFocus__DelegateSignature_Params
	{
	public:
		class UUI_PerkSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.OnMouseDoubleClick__DelegateSignature
	 */
	struct UUI_PerkSlot_C_OnMouseDoubleClick__DelegateSignature_Params
	{
	public:
		class UUI_PerkSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PerkSlot.UI_PerkSlot_C.OnMouseClick__DelegateSignature
	 */
	struct UUI_PerkSlot_C_OnMouseClick__DelegateSignature_Params
	{
	public:
		class UUI_PerkSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
