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
	 * Function UI_DebugItems.UI_DebugItems_C.HandleKeyEventChord
	 */
	struct UUI_DebugItems_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.CanTabNextPrevious
	 */
	struct UUI_DebugItems_C_CanTabNextPrevious_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.AccentTwo
	 */
	struct UUI_DebugItems_C_AccentTwo_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.RefreshBottomButtons
	 */
	struct UUI_DebugItems_C_RefreshBottomButtons_Params
	{	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.GetHeaderColor
	 */
	struct UUI_DebugItems_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.OnKeyUp
	 */
	struct UUI_DebugItems_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.OnKeyDown
	 */
	struct UUI_DebugItems_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.GetDropVisibility
	 */
	struct UUI_DebugItems_C_GetDropVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.SetSelectedSlot
	 */
	struct UUI_DebugItems_C_SetSelectedSlot_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.GetInventoryItems
	 */
	struct UUI_DebugItems_C_GetInventoryItems_Params
	{
	public:
		TArray<class UItem*>                                       ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.ClearItemGrid
	 */
	struct UUI_DebugItems_C_ClearItemGrid_Params
	{	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.PopulateItemGrid
	 */
	struct UUI_DebugItems_C_PopulateItemGrid_Params
	{	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.Construct
	 */
	struct UUI_DebugItems_C_Construct_Params
	{	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.OnItemSelected_Event
	 */
	struct UUI_DebugItems_C_OnItemSelected_Event_Params
	{
	public:
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.RefreshUI
	 */
	struct UUI_DebugItems_C_RefreshUI_Params
	{	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.BndEvt__AddToInventory_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_DebugItems_C_BndEvt__AddToInventory_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.BndEvt__Drop_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_DebugItems_C_BndEvt__Drop_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_DebugItems_C_BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.OnItemDoubleClick_Event
	 */
	struct UUI_DebugItems_C_OnItemDoubleClick_Event_Params
	{
	public:
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.DropSelectedItem
	 */
	struct UUI_DebugItems_C_DropSelectedItem_Params
	{	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.AddSelectedItemToInventory
	 */
	struct UUI_DebugItems_C_AddSelectedItemToInventory_Params
	{	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.BndEvt__ItemFilterBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UUI_DebugItems_C_BndEvt__ItemFilterBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.OnGlobalColorChange
	 */
	struct UUI_DebugItems_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.ExecuteUbergraph_UI_DebugItems
	 */
	struct UUI_DebugItems_C_ExecuteUbergraph_UI_DebugItems_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DebugItems.UI_DebugItems_C.OnItemAdded__DelegateSignature
	 */
	struct UUI_DebugItems_C_OnItemAdded__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
