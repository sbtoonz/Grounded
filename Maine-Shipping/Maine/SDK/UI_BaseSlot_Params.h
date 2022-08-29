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
	 * Function UI_BaseSlot.UI_BaseSlot_C.GetRowHandleForItem
	 */
	struct UUI_BaseSlot_C_GetRowHandleForItem_Params
	{
	public:
		struct FDataTableRowHandle                                 Item_Row_Handle;                                         // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.SetHotBarQuickSlotKey
	 */
	struct UUI_BaseSlot_C_SetHotBarQuickSlotKey_Params
	{
	public:
		struct FHotBarQuickSlotItemTypeKey                         ItemKey;                                                 // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.RefreshItemLevel
	 */
	struct UUI_BaseSlot_C_RefreshItemLevel_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.HandleKeyEventChord
	 */
	struct UUI_BaseSlot_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.SetDoubleClickAnimation
	 */
	struct UUI_BaseSlot_C_SetDoubleClickAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    NewAnimation;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.SetEnabledItemState
	 */
	struct UUI_BaseSlot_C_SetEnabledItemState_Params
	{
	public:
		bool                                                       IsEnabledItem;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnRightClickOverridable
	 */
	struct UUI_BaseSlot_C_OnRightClickOverridable_Params
	{
	public:
		bool                                                       bHandled;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.UpdateCanteenElement
	 */
	struct UUI_BaseSlot_C_UpdateCanteenElement_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.UpdateGlobalColors
	 */
	struct UUI_BaseSlot_C_UpdateGlobalColors_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.CreateDragAndDropElement
	 */
	struct UUI_BaseSlot_C_CreateDragAndDropElement_Params
	{
	public:
		class UUI_BaseSlot_C*                                      DragBaseSlot;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.UpdateSelectionVisuals
	 */
	struct UUI_BaseSlot_C_UpdateSelectionVisuals_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.UpdateVisuals
	 */
	struct UUI_BaseSlot_C_UpdateVisuals_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.HandleBrokenAnim
	 */
	struct UUI_BaseSlot_C_HandleBrokenAnim_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.GetRepairColor
	 */
	struct UUI_BaseSlot_C_GetRepairColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.GetBrokenVisibility
	 */
	struct UUI_BaseSlot_C_GetBrokenVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.GetWarningColor
	 */
	struct UUI_BaseSlot_C_GetWarningColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.CanDrag
	 */
	struct UUI_BaseSlot_C_CanDrag_Params
	{
	public:
		bool                                                       CanDrag;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.RestoreVisualItemData
	 */
	struct UUI_BaseSlot_C_RestoreVisualItemData_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.HandleDragCancel
	 */
	struct UUI_BaseSlot_C_HandleDragCancel_Params
	{
	public:
		bool                                                       ManualCancel;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RHRB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.HandleDragBegin
	 */
	struct UUI_BaseSlot_C_HandleDragBegin_Params
	{
	public:
		bool                                                       FromMouseDrag;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TCZN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.HandleDragDrop
	 */
	struct UUI_BaseSlot_C_HandleDragDrop_Params
	{
	public:
		class UUI_BaseSlot_C*                                      ItemSlotSource;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DropSuccess;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.Get_SlotFrame_Visibility_1
	 */
	struct UUI_BaseSlot_C_Get_SlotFrame_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.HandleDragComplete
	 */
	struct UUI_BaseSlot_C_HandleDragComplete_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnDrop
	 */
	struct UUI_BaseSlot_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K429[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnPreviewMouseButtonDown
	 */
	struct UUI_BaseSlot_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnDragDetected
	 */
	struct UUI_BaseSlot_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.GetFavoriteVisibility
	 */
	struct UUI_BaseSlot_C_GetFavoriteVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.SetShowHotKey
	 */
	struct UUI_BaseSlot_C_SetShowHotKey_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O275[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.RefreshItemCount
	 */
	struct UUI_BaseSlot_C_RefreshItemCount_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.SetIconBrush
	 */
	struct UUI_BaseSlot_C_SetIconBrush_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.SetDataRowHandle
	 */
	struct UUI_BaseSlot_C_SetDataRowHandle_Params
	{
	public:
		struct FDataTableRowHandle                                 DataRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.GetColorAndOpacity
	 */
	struct UUI_BaseSlot_C_GetColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.GetHotkeyTextColorAndOpacity
	 */
	struct UUI_BaseSlot_C_GetHotkeyTextColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.UpdateDurabilityWidget
	 */
	struct UUI_BaseSlot_C_UpdateDurabilityWidget_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.GetFillColor
	 */
	struct UUI_BaseSlot_C_GetFillColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.GetFillVisibility
	 */
	struct UUI_BaseSlot_C_GetFillVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.GetItemTooltip
	 */
	struct UUI_BaseSlot_C_GetItemTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.GetNewItemVis
	 */
	struct UUI_BaseSlot_C_GetNewItemVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.GetDoubleClickFlashColor
	 */
	struct UUI_BaseSlot_C_GetDoubleClickFlashColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.SetHotKey
	 */
	struct UUI_BaseSlot_C_SetHotKey_Params
	{
	public:
		class FText                                                HotkeyText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.GetAttentionColor
	 */
	struct UUI_BaseSlot_C_GetAttentionColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_BaseSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnRightClick
	 */
	struct UUI_BaseSlot_C_OnRightClick_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_BaseSlot_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_BaseSlot_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnDragEnter
	 */
	struct UUI_BaseSlot_C_OnDragEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnDragLeave
	 */
	struct UUI_BaseSlot_C_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnHoveredInternal
	 */
	struct UUI_BaseSlot_C_OnHoveredInternal_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnUnhoveredInternal
	 */
	struct UUI_BaseSlot_C_OnUnhoveredInternal_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnDragCancelled
	 */
	struct UUI_BaseSlot_C_OnDragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_BaseSlot_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.PreConstruct
	 */
	struct UUI_BaseSlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.SetSelected
	 */
	struct UUI_BaseSlot_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseEquippedHighlightIfEquipped;                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.Construct
	 */
	struct UUI_BaseSlot_C_Construct_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnAddedToFocusPath
	 */
	struct UUI_BaseSlot_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnRemovedFromFocusPath
	 */
	struct UUI_BaseSlot_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.PlayItemChangedAnimation
	 */
	struct UUI_BaseSlot_C_PlayItemChangedAnimation_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.PlayItemSelectAnimation
	 */
	struct UUI_BaseSlot_C_PlayItemSelectAnimation_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.RefreshColors
	 */
	struct UUI_BaseSlot_C_RefreshColors_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.Refresh
	 */
	struct UUI_BaseSlot_C_Refresh_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.SetFocused
	 */
	struct UUI_BaseSlot_C_SetFocused_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.HideSlotBG
	 */
	struct UUI_BaseSlot_C_HideSlotBG_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnGlobalColorChange
	 */
	struct UUI_BaseSlot_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnIsItemNew
	 */
	struct UUI_BaseSlot_C_OnIsItemNew_Params
	{
	public:
		bool                                                       bIsNewItem;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.BndEvt__UI_BaseSlot_TooltipAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	 */
	struct UUI_BaseSlot_C_BndEvt__UI_BaseSlot_TooltipAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.ExecuteUbergraph_UI_BaseSlot
	 */
	struct UUI_BaseSlot_C_ExecuteUbergraph_UI_BaseSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnHovered__DelegateSignature
	 */
	struct UUI_BaseSlot_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UUI_BaseSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnRightPressed__DelegateSignature
	 */
	struct UUI_BaseSlot_C_OnRightPressed__DelegateSignature_Params
	{
	public:
		class UUI_BaseSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnDoublePressed__DelegateSignature
	 */
	struct UUI_BaseSlot_C_OnDoublePressed__DelegateSignature_Params
	{
	public:
		class UUI_BaseSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnPressed__DelegateSignature
	 */
	struct UUI_BaseSlot_C_OnPressed__DelegateSignature_Params
	{
	public:
		class UUI_BaseSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnFocus__DelegateSignature
	 */
	struct UUI_BaseSlot_C_OnFocus__DelegateSignature_Params
	{
	public:
		class UUI_BaseSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BaseSlot.UI_BaseSlot_C.OnSlotChanged__DelegateSignature
	 */
	struct UUI_BaseSlot_C_OnSlotChanged__DelegateSignature_Params
	{
	public:
		class UUI_BaseSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
