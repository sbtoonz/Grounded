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
	 * Function UI_HotBar.UI_HotBar_C.GetAccentThree
	 */
	struct UUI_HotBar_C_GetAccentThree_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.GetInventory
	 */
	struct UUI_HotBar_C_GetInventory_Params
	{
	public:
		class UInventoryComponent*                                 Inventory;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.GetHotBarVisCheck
	 */
	struct UUI_HotBar_C_GetHotBarVisCheck_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.Get_HotPocketBG_ColorAndOpacity_1
	 */
	struct UUI_HotBar_C_Get_HotPocketBG_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.Get_ItemName_ShadowColorAndOpacity_1
	 */
	struct UUI_HotBar_C_Get_ItemName_ShadowColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.Get_BPIcon_Visibility_1
	 */
	struct UUI_HotBar_C_Get_BPIcon_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.GetInventoryBarVisibilty
	 */
	struct UUI_HotBar_C_GetInventoryBarVisibilty_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.GetHotBarVisibility
	 */
	struct UUI_HotBar_C_GetHotBarVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.GetSelectedItem
	 */
	struct UUI_HotBar_C_GetSelectedItem_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.GetDarkener
	 */
	struct UUI_HotBar_C_GetDarkener_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.Get_MouseM_ColorAndOpacity_1
	 */
	struct UUI_HotBar_C_Get_MouseM_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.GetColorAndOpacity_1
	 */
	struct UUI_HotBar_C_GetColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.Get_KeyFrame_ColorAndOpacity_1
	 */
	struct UUI_HotBar_C_Get_KeyFrame_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.GetTitleBarColor
	 */
	struct UUI_HotBar_C_GetTitleBarColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.GetSelectedInventorySlotIndex
	 */
	struct UUI_HotBar_C_GetSelectedInventorySlotIndex_Params
	{
	public:
		int32_t                                                    InventorySlotIndex;                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.Get_PageNumber_Text_1
	 */
	struct UUI_HotBar_C_Get_PageNumber_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.GetInventoryItems
	 */
	struct UUI_HotBar_C_GetInventoryItems_Params
	{
	public:
		TArray<class UItem*>                                       InventoryItems;                                          // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.Refresh
	 */
	struct UUI_HotBar_C_Refresh_Params
	{	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.Get_ItemName_ColorAndOpacity_1
	 */
	struct UUI_HotBar_C_Get_ItemName_ColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.GetSelectedItemName
	 */
	struct UUI_HotBar_C_GetSelectedItemName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.Get_DropControls_bIsEnabled_1
	 */
	struct UUI_HotBar_C_Get_DropControls_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XC2N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.Get_EquipUseControls_bIsEnabled_1
	 */
	struct UUI_HotBar_C_Get_EquipUseControls_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RO5P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.GetText_1
	 */
	struct UUI_HotBar_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.Construct
	 */
	struct UUI_HotBar_C_Construct_Params
	{	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.ActivateFocusedAnimation
	 */
	struct UUI_HotBar_C_ActivateFocusedAnimation_Params
	{	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.DeactivateFocusedAnimation
	 */
	struct UUI_HotBar_C_DeactivateFocusedAnimation_Params
	{	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.OnEquipmentChanged
	 */
	struct UUI_HotBar_C_OnEquipmentChanged_Params
	{	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.OnInventoryChanged
	 */
	struct UUI_HotBar_C_OnInventoryChanged_Params
	{	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.SelectNextSlot
	 */
	struct UUI_HotBar_C_SelectNextSlot_Params
	{	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.SelectSlot
	 */
	struct UUI_HotBar_C_SelectSlot_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.SelectPreviousSlot
	 */
	struct UUI_HotBar_C_SelectPreviousSlot_Params
	{	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.RefreshSelectedStates
	 */
	struct UUI_HotBar_C_RefreshSelectedStates_Params
	{	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.SelectCurrentSlot
	 */
	struct UUI_HotBar_C_SelectCurrentSlot_Params
	{	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.DropCurrentSlot
	 */
	struct UUI_HotBar_C_DropCurrentSlot_Params
	{	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.BindPlayerEvents
	 */
	struct UUI_HotBar_C_BindPlayerEvents_Params
	{
	public:
		class ASurvivalPlayerCharacter*                            PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.IncrementPage
	 */
	struct UUI_HotBar_C_IncrementPage_Params
	{	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.BindPlayerStateEvents
	 */
	struct UUI_HotBar_C_BindPlayerStateEvents_Params
	{
	public:
		class ASurvivalPlayerState*                                PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.OnGlobalColorChange
	 */
	struct UUI_HotBar_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.NewSelectedItem
	 */
	struct UUI_HotBar_C_NewSelectedItem_Params
	{
	public:
		class UItem*                                               NewItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.OnUsingGamepadChanged
	 */
	struct UUI_HotBar_C_OnUsingGamepadChanged_Params
	{
	public:
		bool                                                       bOnUsingGamepadChanged;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.CooldownEndAnim
	 */
	struct UUI_HotBar_C_CooldownEndAnim_Params
	{	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.CooldownBeginAnim
	 */
	struct UUI_HotBar_C_CooldownBeginAnim_Params
	{	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.OnSittingChanged
	 */
	struct UUI_HotBar_C_OnSittingChanged_Params
	{
	public:
		bool                                                       bIsSitting;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HotBar.UI_HotBar_C.ExecuteUbergraph_UI_HotBar
	 */
	struct UUI_HotBar_C_ExecuteUbergraph_UI_HotBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HUWB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
