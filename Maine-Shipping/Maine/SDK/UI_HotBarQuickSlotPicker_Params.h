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
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.HandleKeyEventChord
	 */
	struct UUI_HotBarQuickSlotPicker_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetDefaultUserFocus
	 */
	struct UUI_HotBarQuickSlotPicker_C_GetDefaultUserFocus_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.SetStartingFocus
	 */
	struct UUI_HotBarQuickSlotPicker_C_SetStartingFocus_Params
	{
	public:
		EHotBarQuickSlotType                                       QuickSlotType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GSLJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDataTableRowHandle                                 ItemType;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.PopulateCategoryGrid
	 */
	struct UUI_HotBarQuickSlotPicker_C_PopulateCategoryGrid_Params
	{	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.IsItemSlotInGrid
	 */
	struct UUI_HotBarQuickSlotPicker_C_IsItemSlotInGrid_Params
	{
	public:
		class UPanelWidget*                                        ItemGrid;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.SetSelectedSlot
	 */
	struct UUI_HotBarQuickSlotPicker_C_SetSelectedSlot_Params
	{
	public:
		class UGridPanel*                                          ItemGrid;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.RefreshBottomButtons
	 */
	struct UUI_HotBarQuickSlotPicker_C_RefreshBottomButtons_Params
	{	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetSCABBaseColor
	 */
	struct UUI_HotBarQuickSlotPicker_C_GetSCABBaseColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetGlobalBGDarkener
	 */
	struct UUI_HotBarQuickSlotPicker_C_GetGlobalBGDarkener_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetGlobalBG
	 */
	struct UUI_HotBarQuickSlotPicker_C_GetGlobalBG_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetAccentTwo
	 */
	struct UUI_HotBarQuickSlotPicker_C_GetAccentTwo_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetAccentOne
	 */
	struct UUI_HotBarQuickSlotPicker_C_GetAccentOne_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetHeaderColor
	 */
	struct UUI_HotBarQuickSlotPicker_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetSubheaderColor
	 */
	struct UUI_HotBarQuickSlotPicker_C_GetSubheaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.RefreshAll
	 */
	struct UUI_HotBarQuickSlotPicker_C_RefreshAll_Params
	{	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.RefreshInventory
	 */
	struct UUI_HotBarQuickSlotPicker_C_RefreshInventory_Params
	{
	public:
		class UGridPanel*                                          ItemGrid;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumRows;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumColumns;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.ClearInventoryGrid
	 */
	struct UUI_HotBarQuickSlotPicker_C_ClearInventoryGrid_Params
	{
	public:
		class UGridPanel*                                          ItemGrid;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.TransferItem
	 */
	struct UUI_HotBarQuickSlotPicker_C_TransferItem_Params
	{
	public:
		class AActor*                                              From;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              To;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItem*                                               Item;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.ClearSelectedItem
	 */
	struct UUI_HotBarQuickSlotPicker_C_ClearSelectedItem_Params
	{	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.UpdateButtonVisibility
	 */
	struct UUI_HotBarQuickSlotPicker_C_UpdateButtonVisibility_Params
	{
	public:
		bool                                                       IsPlayerInventoryItem;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForceHide;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.GetInventoryItems
	 */
	struct UUI_HotBarQuickSlotPicker_C_GetInventoryItems_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UItem*>                                       Items;                                                   // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.PopulateInventoryGrid
	 */
	struct UUI_HotBarQuickSlotPicker_C_PopulateInventoryGrid_Params
	{
	public:
		class UObject*                                             Container;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UItem*>                                       OwnerInventoryList;                                      // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UGridPanel*                                          ItemGrid;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumRows;                                                 // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumColumns;                                              // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.Construct
	 */
	struct UUI_HotBarQuickSlotPicker_C_Construct_Params
	{	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.OnItemSelected
	 */
	struct UUI_HotBarQuickSlotPicker_C_OnItemSelected_Params
	{
	public:
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.BndEvt__Deposit_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_HotBarQuickSlotPicker_C_BndEvt__Deposit_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_HotBarQuickSlotPicker_C_BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.RefreshWidget
	 */
	struct UUI_HotBarQuickSlotPicker_C_RefreshWidget_Params
	{	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.OnItemDoubleClick
	 */
	struct UUI_HotBarQuickSlotPicker_C_OnItemDoubleClick_Params
	{
	public:
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.HandleSelection
	 */
	struct UUI_HotBarQuickSlotPicker_C_HandleSelection_Params
	{	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.Destruct
	 */
	struct UUI_HotBarQuickSlotPicker_C_Destruct_Params
	{	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.OnGlobalColorChange
	 */
	struct UUI_HotBarQuickSlotPicker_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.ExecuteUbergraph_UI_HotBarQuickSlotPicker
	 */
	struct UUI_HotBarQuickSlotPicker_C_ExecuteUbergraph_UI_HotBarQuickSlotPicker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_06PD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C.OnQuickItemTypeSelected__DelegateSignature
	 */
	struct UUI_HotBarQuickSlotPicker_C_OnQuickItemTypeSelected__DelegateSignature_Params
	{
	public:
		EHotBarQuickSlotType                                       QuickSlotType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O5Q4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UItem*                                               Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
