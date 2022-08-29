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
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetSelectedItem
	 */
	struct UUI_InventoryInterface_C_GetSelectedItem_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.IsInventorySlotSelected
	 */
	struct UUI_InventoryInterface_C_IsInventorySlotSelected_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.IsHotpouchSlotSelected
	 */
	struct UUI_InventoryInterface_C_IsHotpouchSlotSelected_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetSelectedInventorySlotIndex
	 */
	struct UUI_InventoryInterface_C_GetSelectedInventorySlotIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetSelectedHotpouchSlotIndex
	 */
	struct UUI_InventoryInterface_C_GetSelectedHotpouchSlotIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.SetDescriptionDataForSelected
	 */
	struct UUI_InventoryInterface_C_SetDescriptionDataForSelected_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.HandleKeyEventChord
	 */
	struct UUI_InventoryInterface_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetLocalPlayerEquipment
	 */
	struct UUI_InventoryInterface_C_GetLocalPlayerEquipment_Params
	{
	public:
		class UEquipmentComponent*                                 Inventory;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetLocalPlayerInventory
	 */
	struct UUI_InventoryInterface_C_GetLocalPlayerInventory_Params
	{
	public:
		class UInventoryComponent*                                 Inventory;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetHalloween
	 */
	struct UUI_InventoryInterface_C_GetHalloween_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.InitializeGearSlot
	 */
	struct UUI_InventoryInterface_C_InitializeGearSlot_Params
	{
	public:
		class UUI_InventoryGearSlot_C*                             Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItem*                                               Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnAnalogValueChanged
	 */
	struct UUI_InventoryInterface_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.UpdateBottomButtons
	 */
	struct UUI_InventoryInterface_C_UpdateBottomButtons_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnSplitStack
	 */
	struct UUI_InventoryInterface_C_OnSplitStack_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.CanShowContextMenu
	 */
	struct UUI_InventoryInterface_C_CanShowContextMenu_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetStrongHandIconVis
	 */
	struct UUI_InventoryInterface_C_GetStrongHandIconVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BHLZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetWeakHandIconVis
	 */
	struct UUI_InventoryInterface_C_GetWeakHandIconVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C8UK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetHeadIconVis
	 */
	struct UUI_InventoryInterface_C_GetHeadIconVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7LAW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetBodyIconVis
	 */
	struct UUI_InventoryInterface_C_GetBodyIconVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4NRQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetLegsIconVis
	 */
	struct UUI_InventoryInterface_C_GetLegsIconVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4XDH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.CanUseItem
	 */
	struct UUI_InventoryInterface_C_CanUseItem_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanUse;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.Can Repair Selected Item
	 */
	struct UUI_InventoryInterface_C_Can_Repair_Selected_Item_Params
	{
	public:
		bool                                                       CanRepair;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SDMO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.ItemHasDurability
	 */
	struct UUI_InventoryInterface_C_ItemHasDurability_Params
	{
	public:
		bool                                                       HasDurability;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UU2D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetRepairVisibility
	 */
	struct UUI_InventoryInterface_C_GetRepairVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.SetEquipmentText
	 */
	struct UUI_InventoryInterface_C_SetEquipmentText_Params
	{
	public:
		class UItem*                                               EquippedItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTextBlock*                                          TextWidget;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLocString                                          NoItemText;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.Get_DaysAliveText_Text_1
	 */
	struct UUI_InventoryInterface_C_Get_DaysAliveText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.IsSelectedHotBarSlotAssigned
	 */
	struct UUI_InventoryInterface_C_IsSelectedHotBarSlotAssigned_Params
	{
	public:
		bool                                                       IsAssigned;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.Assign Selected Item to Hot Bar Index
	 */
	struct UUI_InventoryInterface_C_Assign_Selected_Item_to_Hot_Bar_Index_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TBSZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.CanUseSelectedItem
	 */
	struct UUI_InventoryInterface_C_CanUseSelectedItem_Params
	{
	public:
		bool                                                       CanUse;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X3ER[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.Get_HotPocketBG_ColorAndOpacity_1
	 */
	struct UUI_InventoryInterface_C_Get_HotPocketBG_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetHotBarAssignVisibility
	 */
	struct UUI_InventoryInterface_C_GetHotBarAssignVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.UpdateSlotsUsedText
	 */
	struct UUI_InventoryInterface_C_UpdateSlotsUsedText_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.PopulateHotBarQuickSlots
	 */
	struct UUI_InventoryInterface_C_PopulateHotBarQuickSlots_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetGlobalColorThree
	 */
	struct UUI_InventoryInterface_C_GetGlobalColorThree_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetSubheaderColor
	 */
	struct UUI_InventoryInterface_C_GetSubheaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetDefragTooltip
	 */
	struct UUI_InventoryInterface_C_GetDefragTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetDefragVisibility
	 */
	struct UUI_InventoryInterface_C_GetDefragVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.IsDefragEnabled
	 */
	struct UUI_InventoryInterface_C_IsDefragEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VHWB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetBasicTextColor
	 */
	struct UUI_InventoryInterface_C_GetBasicTextColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetSlotsTooltip
	 */
	struct UUI_InventoryInterface_C_GetSlotsTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetDarkenerColor
	 */
	struct UUI_InventoryInterface_C_GetDarkenerColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetEquipEnabled
	 */
	struct UUI_InventoryInterface_C_GetEquipEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R1Z5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.RefreshBottomButtons
	 */
	struct UUI_InventoryInterface_C_RefreshBottomButtons_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetEnergyColor
	 */
	struct UUI_InventoryInterface_C_GetEnergyColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetHealthColor
	 */
	struct UUI_InventoryInterface_C_GetHealthColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetFoodColor
	 */
	struct UUI_InventoryInterface_C_GetFoodColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetHeaderColor
	 */
	struct UUI_InventoryInterface_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetWaterColor
	 */
	struct UUI_InventoryInterface_C_GetWaterColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetStaminaColor
	 */
	struct UUI_InventoryInterface_C_GetStaminaColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetSCABOSAccentTwo
	 */
	struct UUI_InventoryInterface_C_GetSCABOSAccentTwo_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.FindItemSlotMatchingData
	 */
	struct UUI_InventoryInterface_C_FindItemSlotMatchingData_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_BaseSlot_C*                                      StackableItemSlot;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.InitializeItemSlot
	 */
	struct UUI_InventoryInterface_C_InitializeItemSlot_Params
	{
	public:
		class UBaseSlotWidget*                                     ItemSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItem*                                               Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedHotBarSlot
	 */
	struct UUI_InventoryInterface_C_SetSelectedHotBarSlot_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N1E1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetUseVisibility
	 */
	struct UUI_InventoryInterface_C_GetUseVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetDropVisibility
	 */
	struct UUI_InventoryInterface_C_GetDropVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S9FW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedInventorySlot
	 */
	struct UUI_InventoryInterface_C_SetSelectedInventorySlot_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PY1G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedSlot
	 */
	struct UUI_InventoryInterface_C_SetSelectedSlot_Params
	{
	public:
		class UUI_ItemSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.PopulateEquipment
	 */
	struct UUI_InventoryInterface_C_PopulateEquipment_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.GetInventoryItems
	 */
	struct UUI_InventoryInterface_C_GetInventoryItems_Params
	{
	public:
		TArray<class UItem*>                                       Items;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.ClearItemGrid
	 */
	struct UUI_InventoryInterface_C_ClearItemGrid_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.PopulateItemGrid
	 */
	struct UUI_InventoryInterface_C_PopulateItemGrid_Params
	{
	public:
		int32_t                                                    RowMax;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ColumnMax;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.Construct
	 */
	struct UUI_InventoryInterface_C_Construct_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.HandleItemSlotFocused
	 */
	struct UUI_InventoryInterface_C_HandleItemSlotFocused_Params
	{
	public:
		class UUI_BaseSlot_C*                                      Item_Slot;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnGearSlotSelected_Event
	 */
	struct UUI_InventoryInterface_C_OnGearSlotSelected_Event_Params
	{
	public:
		class UUI_BaseSlot_C*                                      Item_Slot;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.RefreshUI
	 */
	struct UUI_InventoryInterface_C_RefreshUI_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedItemByIndex
	 */
	struct UUI_InventoryInterface_C_SetSelectedItemByIndex_Params
	{
	public:
		int32_t                                                    SelectedSlot;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InventoryInterface_C_BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Drop_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InventoryInterface_C_BndEvt__Drop_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Use_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InventoryInterface_C_BndEvt__Use_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Unequip_K2Node_ComponentBoundEvent_8_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InventoryInterface_C_BndEvt__Unequip_K2Node_ComponentBoundEvent_8_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Equip_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InventoryInterface_C_BndEvt__Equip_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnItemDoubleClick_Event
	 */
	struct UUI_InventoryInterface_C_OnItemDoubleClick_Event_Params
	{
	public:
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.On Use
	 */
	struct UUI_InventoryInterface_C_On_Use_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.On Equip
	 */
	struct UUI_InventoryInterface_C_On_Equip_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.On Drop
	 */
	struct UUI_InventoryInterface_C_On_Drop_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnUnequip
	 */
	struct UUI_InventoryInterface_C_OnUnequip_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__UI_DefragButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InventoryInterface_C_BndEvt__UI_DefragButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.Defrag
	 */
	struct UUI_InventoryInterface_C_Defrag_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnHotBarSlotSelected_Event
	 */
	struct UUI_InventoryInterface_C_OnHotBarSlotSelected_Event_Params
	{
	public:
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnHotBarSlotAssigned
	 */
	struct UUI_InventoryInterface_C_OnHotBarSlotAssigned_Params
	{
	public:
		EHotBarQuickSlotType                                       QuickSlotType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6JMX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UItem*                                               Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__HotBarAssign_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InventoryInterface_C_BndEvt__HotBarAssign_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OpenHotBarAssignWindow
	 */
	struct UUI_InventoryInterface_C_OpenHotBarAssignWindow_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnHotBarSlotDoubleClick
	 */
	struct UUI_InventoryInterface_C_OnHotBarSlotDoubleClick_Params
	{
	public:
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__HotBarUnassign_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InventoryInterface_C_BndEvt__HotBarUnassign_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Repair_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InventoryInterface_C_BndEvt__Repair_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.BndEvt__Inspect_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InventoryInterface_C_BndEvt__Inspect_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.InspectSelectedItem
	 */
	struct UUI_InventoryInterface_C_InspectSelectedItem_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.RepairSelectedItem
	 */
	struct UUI_InventoryInterface_C_RepairSelectedItem_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnGlobalColorChange
	 */
	struct UUI_InventoryInterface_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnUsingGamepadChanged
	 */
	struct UUI_InventoryInterface_C_OnUsingGamepadChanged_Params
	{
	public:
		bool                                                       bOnUsingGamepadChanged;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.RouteActionByTag
	 */
	struct UUI_InventoryInterface_C_RouteActionByTag_Params
	{
	public:
		class UBaseSlotWidget*                                     Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        ActionTag;                                               // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnInventoryCountChanged
	 */
	struct UUI_InventoryInterface_C_OnInventoryCountChanged_Params
	{
	public:
		int32_t                                                    NumItems;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxNumItems;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnInventoryChanged
	 */
	struct UUI_InventoryInterface_C_OnInventoryChanged_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.HandleOnSlotChanged
	 */
	struct UUI_InventoryInterface_C_HandleOnSlotChanged_Params
	{
	public:
		class UUI_BaseSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnDragDropOnPaperDoll
	 */
	struct UUI_InventoryInterface_C_OnDragDropOnPaperDoll_Params
	{
	public:
		class UObject*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnDefragFocused
	 */
	struct UUI_InventoryInterface_C_OnDefragFocused_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnUnequipFailure
	 */
	struct UUI_InventoryInterface_C_OnUnequipFailure_Params
	{
	public:
		EEquipmentChangeFailureFromFullInventoryStimulus           Stimulus;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.Destruct
	 */
	struct UUI_InventoryInterface_C_Destruct_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedItemByHotbarIndex
	 */
	struct UUI_InventoryInterface_C_SetSelectedItemByHotbarIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.SetSelectedByIndexHelper
	 */
	struct UUI_InventoryInterface_C_SetSelectedByIndexHelper_Params
	{
	public:
		class UGridPanel*                                          Grid;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnEffectHovered
	 */
	struct UUI_InventoryInterface_C_OnEffectHovered_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnFocusedStatusEffectDestroyed
	 */
	struct UUI_InventoryInterface_C_OnFocusedStatusEffectDestroyed_Params
	{	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.OnEffectFocused
	 */
	struct UUI_InventoryInterface_C_OnEffectFocused_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.SetStatusEffectToView
	 */
	struct UUI_InventoryInterface_C_SetStatusEffectToView_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InventoryInterface.UI_InventoryInterface_C.ExecuteUbergraph_UI_InventoryInterface
	 */
	struct UUI_InventoryInterface_C_ExecuteUbergraph_UI_InventoryInterface_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6IP7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
