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
	 * Function UI_KeyItems.UI_KeyItems_C.RefreshBottomButtons
	 */
	struct UUI_KeyItems_C_RefreshBottomButtons_Params
	{	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.ClearSelectedItem
	 */
	struct UUI_KeyItems_C_ClearSelectedItem_Params
	{	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.RefreshUI
	 */
	struct UUI_KeyItems_C_RefreshUI_Params
	{	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.SetCategory
	 */
	struct UUI_KeyItems_C_SetCategory_Params
	{
	public:
		struct FGameplayTag                                        Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.DisplayItemDetails
	 */
	struct UUI_KeyItems_C_DisplayItemDetails_Params
	{
	public:
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.HandleKeyEventChord
	 */
	struct UUI_KeyItems_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.Propagate Right Thumbstick Event
	 */
	struct UUI_KeyItems_C_Propagate_Right_Thumbstick_Event_Params
	{
	public:
		struct FAnalogInputEvent                                   Input_Event;                                             // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      SpeedMultiplier;                                         // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MJ6U[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         EventReply;                                              // 0x0048(0x00B8)  (Parm, OutParm)
	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.GoToItemEntry
	 */
	struct UUI_KeyItems_C_GoToItemEntry_Params
	{
	public:
		struct FDataTableRowHandle                                 RowHandle;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.UseItemVisibility
	 */
	struct UUI_KeyItems_C_UseItemVisibility_Params
	{	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.UseSelectedItem
	 */
	struct UUI_KeyItems_C_UseSelectedItem_Params
	{	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.GetUseButtonVisibility
	 */
	struct UUI_KeyItems_C_GetUseButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.GetHeaderColor
	 */
	struct UUI_KeyItems_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.GetAccentTwo
	 */
	struct UUI_KeyItems_C_GetAccentTwo_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.GetBasicColor
	 */
	struct UUI_KeyItems_C_GetBasicColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.OnKeyItemSelected
	 */
	struct UUI_KeyItems_C_OnKeyItemSelected_Params
	{
	public:
		class UUI_KeyItemCollection_C*                             ItemCollection;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.OnButtonClicked
	 */
	struct UUI_KeyItems_C_OnButtonClicked_Params
	{
	public:
		class UUI_KeyItemCollection_C*                             ItemCollection;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.BndEvt__InspectButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_KeyItems_C_BndEvt__InspectButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.InspectSelectedItem
	 */
	struct UUI_KeyItems_C_InspectSelectedItem_Params
	{	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_KeyItems_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.BndEvt__UseButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_KeyItems_C_BndEvt__UseButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.OnGlobalColorChange
	 */
	struct UUI_KeyItems_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_KeyItems.UI_KeyItems_C.ExecuteUbergraph_UI_KeyItems
	 */
	struct UUI_KeyItems_C_ExecuteUbergraph_UI_KeyItems_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O26I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
