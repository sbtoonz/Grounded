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
	 * Function UI_ItemSlot.UI_ItemSlot_C.SetHotBarQuickSlotKey
	 */
	struct UUI_ItemSlot_C_SetHotBarQuickSlotKey_Params
	{
	public:
		struct FHotBarQuickSlotItemTypeKey                         ItemKey;                                                 // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.GetRowHandleForItem
	 */
	struct UUI_ItemSlot_C_GetRowHandleForItem_Params
	{
	public:
		struct FDataTableRowHandle                                 Item_Row_Handle;                                         // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.HandleRefreshItemCount
	 */
	struct UUI_ItemSlot_C_HandleRefreshItemCount_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.SetModTypeIcon
	 */
	struct UUI_ItemSlot_C_SetModTypeIcon_Params
	{
	public:
		class UObject*                                             ResourceObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.GetAllowContextMenu
	 */
	struct UUI_ItemSlot_C_GetAllowContextMenu_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.HasItem
	 */
	struct UUI_ItemSlot_C_HasItem_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.DumpItemPower
	 */
	struct UUI_ItemSlot_C_DumpItemPower_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.RepairItem
	 */
	struct UUI_ItemSlot_C_RepairItem_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.UseItem
	 */
	struct UUI_ItemSlot_C_UseItem_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.TrashNoPromptHelper
	 */
	struct UUI_ItemSlot_C_TrashNoPromptHelper_Params
	{
	public:
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KLZ8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.TrashStackNoPrompt
	 */
	struct UUI_ItemSlot_C_TrashStackNoPrompt_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.TrashOneNoPrompt
	 */
	struct UUI_ItemSlot_C_TrashOneNoPrompt_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.TrashStack
	 */
	struct UUI_ItemSlot_C_TrashStack_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.TrashOne
	 */
	struct UUI_ItemSlot_C_TrashOne_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.DropStack
	 */
	struct UUI_ItemSlot_C_DropStack_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.DropOne
	 */
	struct UUI_ItemSlot_C_DropOne_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.RefreshItemLevel
	 */
	struct UUI_ItemSlot_C_RefreshItemLevel_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.OnRightClickOverridable
	 */
	struct UUI_ItemSlot_C_OnRightClickOverridable_Params
	{
	public:
		bool                                                       bHandled;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.HandleKeyEventChord
	 */
	struct UUI_ItemSlot_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.GetItem
	 */
	struct UUI_ItemSlot_C_GetItem_Params
	{
	public:
		class UItem*                                               NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.SetProgressRatio
	 */
	struct UUI_ItemSlot_C_SetProgressRatio_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropEquipmentSlotToInventory
	 */
	struct UUI_ItemSlot_C_DragAndDropEquipmentSlotToInventory_Params
	{
	public:
		class UUI_ItemSlot_C*                                      SourceItemSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DropSuccess;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_USCT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.UpdateFreshVisuals
	 */
	struct UUI_ItemSlot_C_UpdateFreshVisuals_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.DetermineAnalyzeVisibility
	 */
	struct UUI_ItemSlot_C_DetermineAnalyzeVisibility_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.HasMatchingRowHandle
	 */
	struct UUI_ItemSlot_C_HasMatchingRowHandle_Params
	{
	public:
		class UUI_ItemSlot_C*                                      OtherSlot;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Matches;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropMergeItemStacks
	 */
	struct UUI_ItemSlot_C_DragAndDropMergeItemStacks_Params
	{
	public:
		class UUI_ItemSlot_C*                                      SourceItemSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.GetNarration
	 */
	struct UUI_ItemSlot_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A5JH[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.ShowContextMenu
	 */
	struct UUI_ItemSlot_C_ShowContextMenu_Params
	{
	public:
		bool                                                       bShown;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.OnContextMenu_Item
	 */
	struct UUI_ItemSlot_C_OnContextMenu_Item_Params
	{
	public:
		struct FGameplayTag                                        ActionTag;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.DetermineStackVisibility
	 */
	struct UUI_ItemSlot_C_DetermineStackVisibility_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.ManageTierNugget
	 */
	struct UUI_ItemSlot_C_ManageTierNugget_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.DetermineCanteenVisibility
	 */
	struct UUI_ItemSlot_C_DetermineCanteenVisibility_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.DetermineFillVisibility
	 */
	struct UUI_ItemSlot_C_DetermineFillVisibility_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.OnItemSet
	 */
	struct UUI_ItemSlot_C_OnItemSet_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.GetFavoriteVisibility
	 */
	struct UUI_ItemSlot_C_GetFavoriteVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.VisuallyOverrideItemData
	 */
	struct UUI_ItemSlot_C_VisuallyOverrideItemData_Params
	{
	public:
		class UUI_ItemSlot_C*                                      OtherItemSlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.UnassignHotBarSlot
	 */
	struct UUI_ItemSlot_C_UnassignHotBarSlot_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropHotBarToHotBar
	 */
	struct UUI_ItemSlot_C_DragAndDropHotBarToHotBar_Params
	{
	public:
		class UUI_ItemSlot_C*                                      SourceItemSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DropSuccess;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZEDK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropInventoryToHotBar
	 */
	struct UUI_ItemSlot_C_DragAndDropInventoryToHotBar_Params
	{
	public:
		class UUI_ItemSlot_C*                                      SourceItemSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DropSuccess;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NEYM[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropEquipmentToHotBar
	 */
	struct UUI_ItemSlot_C_DragAndDropEquipmentToHotBar_Params
	{
	public:
		class UUI_ItemSlot_C*                                      SourceItemSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DropSuccess;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JW9F[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropInventoryToEquipmentSlot
	 */
	struct UUI_ItemSlot_C_DragAndDropInventoryToEquipmentSlot_Params
	{
	public:
		class UUI_ItemSlot_C*                                      SourceItemSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DropSuccess;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UD7D[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.CreateDragAndDropElement
	 */
	struct UUI_ItemSlot_C_CreateDragAndDropElement_Params
	{
	public:
		class UUI_BaseSlot_C*                                      DragBaseSlot;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.HandleDragDrop
	 */
	struct UUI_ItemSlot_C_HandleDragDrop_Params
	{
	public:
		class UUI_BaseSlot_C*                                      ItemSlotSource;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DropSuccess;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T6T1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropInventoryToDifferentInventory
	 */
	struct UUI_ItemSlot_C_DragAndDropInventoryToDifferentInventory_Params
	{
	public:
		class UUI_ItemSlot_C*                                      SourceItemSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DropSuccess;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6Q3B[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropInventoryToSameInventory
	 */
	struct UUI_ItemSlot_C_DragAndDropInventoryToSameInventory_Params
	{
	public:
		class UUI_ItemSlot_C*                                      SourceItemSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DropSuccess;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CIB9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.SetItemQuickSlotType
	 */
	struct UUI_ItemSlot_C_SetItemQuickSlotType_Params
	{
	public:
		EHotBarQuickSlotType                                       QuickSlotType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.GetRepairColor
	 */
	struct UUI_ItemSlot_C_GetRepairColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.GetBrokenVisibility
	 */
	struct UUI_ItemSlot_C_GetBrokenVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.UnbindItemChangedEvent
	 */
	struct UUI_ItemSlot_C_UnbindItemChangedEvent_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.BindItemChangedEvent
	 */
	struct UUI_ItemSlot_C_BindItemChangedEvent_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.CanDrag
	 */
	struct UUI_ItemSlot_C_CanDrag_Params
	{
	public:
		bool                                                       CanDrag;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.GetSourceEquipment
	 */
	struct UUI_ItemSlot_C_GetSourceEquipment_Params
	{
	public:
		class UEquipmentComponent*                                 Equipment;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.GetSourceInventory
	 */
	struct UUI_ItemSlot_C_GetSourceInventory_Params
	{
	public:
		class UInventoryComponent*                                 Inventory;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.SetItemSlotType
	 */
	struct UUI_ItemSlot_C_SetItemSlotType_Params
	{
	public:
		EItemSlotType                                              ItemSlotType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.SetEquippedVisuals
	 */
	struct UUI_ItemSlot_C_SetEquippedVisuals_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.GetIconBrushFromQuickSlotType
	 */
	struct UUI_ItemSlot_C_GetIconBrushFromQuickSlotType_Params
	{
	public:
		EHotBarQuickSlotType                                       QuickSlotType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A21R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateBrush                                         Brush;                                                   // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.GetNewItemVis
	 */
	struct UUI_ItemSlot_C_GetNewItemVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.GetFillVisibility
	 */
	struct UUI_ItemSlot_C_GetFillVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.GetFillColor
	 */
	struct UUI_ItemSlot_C_GetFillColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.SetItem
	 */
	struct UUI_ItemSlot_C_SetItem_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.Construct
	 */
	struct UUI_ItemSlot_C_Construct_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.UpdateDurabilityWidget
	 */
	struct UUI_ItemSlot_C_UpdateDurabilityWidget_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.Refresh
	 */
	struct UUI_ItemSlot_C_Refresh_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.RefreshItemCount
	 */
	struct UUI_ItemSlot_C_RefreshItemCount_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.SetIconBrush
	 */
	struct UUI_ItemSlot_C_SetIconBrush_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.SetHotKey
	 */
	struct UUI_ItemSlot_C_SetHotKey_Params
	{
	public:
		class FText                                                HotkeyText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.HandleBrokenAnim
	 */
	struct UUI_ItemSlot_C_HandleBrokenAnim_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.SetDataRowHandle
	 */
	struct UUI_ItemSlot_C_SetDataRowHandle_Params
	{
	public:
		struct FDataTableRowHandle                                 DataRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.UpdateVisuals
	 */
	struct UUI_ItemSlot_C_UpdateVisuals_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.UpdateSelectionVisuals
	 */
	struct UUI_ItemSlot_C_UpdateSelectionVisuals_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.HandleDragCancel
	 */
	struct UUI_ItemSlot_C_HandleDragCancel_Params
	{
	public:
		bool                                                       ManualCancel;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.OnHoveredInternal
	 */
	struct UUI_ItemSlot_C_OnHoveredInternal_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.OnUnhoveredInternal
	 */
	struct UUI_ItemSlot_C_OnUnhoveredInternal_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.UpdateCanteenElement
	 */
	struct UUI_ItemSlot_C_UpdateCanteenElement_Params
	{	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.OnContextOptionSelected
	 */
	struct UUI_ItemSlot_C_OnContextOptionSelected_Params
	{
	public:
		struct FGameplayTag                                        ActionSelected;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.PreConstruct
	 */
	struct UUI_ItemSlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ItemSlot.UI_ItemSlot_C.ExecuteUbergraph_UI_ItemSlot
	 */
	struct UUI_ItemSlot_C_ExecuteUbergraph_UI_ItemSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
