/**
 * Name: Maine
 * Version: Shipping
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.GetRowHandleForItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Item_Row_Handle                                            (Parm, OutParm, NoDestructor)
	 */
	void UUI_BaseSlot_C::GetRowHandleForItem(struct FDataTableRowHandle* Item_Row_Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.GetRowHandleForItem");
		
		UUI_BaseSlot_C_GetRowHandleForItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item_Row_Handle != nullptr)
			*Item_Row_Handle = params.Item_Row_Handle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.SetHotBarQuickSlotKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHotBarQuickSlotItemTypeKey                 ItemKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_BaseSlot_C::SetHotBarQuickSlotKey(const struct FHotBarQuickSlotItemTypeKey& ItemKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.SetHotBarQuickSlotKey");
		
		UUI_BaseSlot_C_SetHotBarQuickSlotKey_Params params {};
		params.ItemKey = ItemKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.RefreshItemLevel
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::RefreshItemLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.RefreshItemLevel");
		
		UUI_BaseSlot_C_RefreshItemLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_BaseSlot_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.HandleKeyEventChord");
		
		UUI_BaseSlot_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.SetDoubleClickAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            NewAnimation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BaseSlot_C::SetDoubleClickAnimation(class UWidgetAnimation* NewAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.SetDoubleClickAnimation");
		
		UUI_BaseSlot_C_SetDoubleClickAnimation_Params params {};
		params.NewAnimation = NewAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.SetEnabledItemState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabledItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BaseSlot_C::SetEnabledItemState(bool IsEnabledItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.SetEnabledItemState");
		
		UUI_BaseSlot_C_SetEnabledItemState_Params params {};
		params.IsEnabledItem = IsEnabledItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnRightClickOverridable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHandled                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BaseSlot_C::OnRightClickOverridable(bool* bHandled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnRightClickOverridable");
		
		UUI_BaseSlot_C_OnRightClickOverridable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHandled != nullptr)
			*bHandled = params.bHandled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.UpdateCanteenElement
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::UpdateCanteenElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.UpdateCanteenElement");
		
		UUI_BaseSlot_C_UpdateCanteenElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.UpdateGlobalColors
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::UpdateGlobalColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.UpdateGlobalColors");
		
		UUI_BaseSlot_C_UpdateGlobalColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.CreateDragAndDropElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              DragBaseSlot                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BaseSlot_C::CreateDragAndDropElement(class UUI_BaseSlot_C** DragBaseSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.CreateDragAndDropElement");
		
		UUI_BaseSlot_C_CreateDragAndDropElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DragBaseSlot != nullptr)
			*DragBaseSlot = params.DragBaseSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.UpdateSelectionVisuals
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::UpdateSelectionVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.UpdateSelectionVisuals");
		
		UUI_BaseSlot_C_UpdateSelectionVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.UpdateVisuals
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::UpdateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.UpdateVisuals");
		
		UUI_BaseSlot_C_UpdateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.HandleBrokenAnim
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::HandleBrokenAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.HandleBrokenAnim");
		
		UUI_BaseSlot_C_HandleBrokenAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.GetRepairColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BaseSlot_C::GetRepairColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.GetRepairColor");
		
		UUI_BaseSlot_C_GetRepairColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.GetBrokenVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_BaseSlot_C::GetBrokenVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.GetBrokenVisibility");
		
		UUI_BaseSlot_C_GetBrokenVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.GetWarningColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BaseSlot_C::GetWarningColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.GetWarningColor");
		
		UUI_BaseSlot_C_GetWarningColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.CanDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanDrag                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BaseSlot_C::CanDrag(bool* CanDrag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.CanDrag");
		
		UUI_BaseSlot_C_CanDrag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanDrag != nullptr)
			*CanDrag = params.CanDrag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.RestoreVisualItemData
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::RestoreVisualItemData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.RestoreVisualItemData");
		
		UUI_BaseSlot_C_RestoreVisualItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.HandleDragCancel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ManualCancel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BaseSlot_C::HandleDragCancel(bool ManualCancel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.HandleDragCancel");
		
		UUI_BaseSlot_C_HandleDragCancel_Params params {};
		params.ManualCancel = ManualCancel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.HandleDragBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FromMouseDrag                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BaseSlot_C::HandleDragBegin(bool FromMouseDrag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.HandleDragBegin");
		
		UUI_BaseSlot_C_HandleDragBegin_Params params {};
		params.FromMouseDrag = FromMouseDrag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.HandleDragDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              ItemSlotSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DropSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BaseSlot_C::HandleDragDrop(class UUI_BaseSlot_C* ItemSlotSource, bool* DropSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.HandleDragDrop");
		
		UUI_BaseSlot_C_HandleDragDrop_Params params {};
		params.ItemSlotSource = ItemSlotSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DropSuccess != nullptr)
			*DropSuccess = params.DropSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.Get_SlotFrame_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_BaseSlot_C::Get_SlotFrame_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.Get_SlotFrame_Visibility_1");
		
		UUI_BaseSlot_C_Get_SlotFrame_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.HandleDragComplete
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::HandleDragComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.HandleDragComplete");
		
		UUI_BaseSlot_C_HandleDragComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UUI_BaseSlot_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnDrop");
		
		UUI_BaseSlot_C_OnDrop_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnPreviewMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_BaseSlot_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnPreviewMouseButtonDown");
		
		UUI_BaseSlot_C_OnPreviewMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnDragDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BaseSlot_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnDragDetected");
		
		UUI_BaseSlot_C_OnDragDetected_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Operation != nullptr)
			*Operation = params.Operation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.GetFavoriteVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_BaseSlot_C::GetFavoriteVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.GetFavoriteVisibility");
		
		UUI_BaseSlot_C_GetFavoriteVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.SetShowHotKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BaseSlot_C::SetShowHotKey(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.SetShowHotKey");
		
		UUI_BaseSlot_C_SetShowHotKey_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.RefreshItemCount
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::RefreshItemCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.RefreshItemCount");
		
		UUI_BaseSlot_C_RefreshItemCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.SetIconBrush
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::SetIconBrush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.SetIconBrush");
		
		UUI_BaseSlot_C_SetIconBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.SetDataRowHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         DataRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_BaseSlot_C::SetDataRowHandle(const struct FDataTableRowHandle& DataRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.SetDataRowHandle");
		
		UUI_BaseSlot_C_SetDataRowHandle_Params params {};
		params.DataRowHandle = DataRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.GetColorAndOpacity
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BaseSlot_C::GetColorAndOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.GetColorAndOpacity");
		
		UUI_BaseSlot_C_GetColorAndOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.GetHotkeyTextColorAndOpacity
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_BaseSlot_C::GetHotkeyTextColorAndOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.GetHotkeyTextColorAndOpacity");
		
		UUI_BaseSlot_C_GetHotkeyTextColorAndOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.UpdateDurabilityWidget
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::UpdateDurabilityWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.UpdateDurabilityWidget");
		
		UUI_BaseSlot_C_UpdateDurabilityWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.GetFillColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BaseSlot_C::GetFillColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.GetFillColor");
		
		UUI_BaseSlot_C_GetFillColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.GetFillVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_BaseSlot_C::GetFillVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.GetFillVisibility");
		
		UUI_BaseSlot_C_GetFillVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.GetItemTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_BaseSlot_C::GetItemTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.GetItemTooltip");
		
		UUI_BaseSlot_C_GetItemTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.GetNewItemVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_BaseSlot_C::GetNewItemVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.GetNewItemVis");
		
		UUI_BaseSlot_C_GetNewItemVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.GetDoubleClickFlashColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BaseSlot_C::GetDoubleClickFlashColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.GetDoubleClickFlashColor");
		
		UUI_BaseSlot_C_GetDoubleClickFlashColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.SetHotKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        HotkeyText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_BaseSlot_C::SetHotKey(const class FText& HotkeyText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.SetHotKey");
		
		UUI_BaseSlot_C_SetHotKey_Params params {};
		params.HotkeyText = HotkeyText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.GetAttentionColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BaseSlot_C::GetAttentionColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.GetAttentionColor");
		
		UUI_BaseSlot_C_GetAttentionColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_BaseSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnRightClick
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::OnRightClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnRightClick");
		
		UUI_BaseSlot_C_OnRightClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_BaseSlot_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UUI_BaseSlot_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnDragEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BaseSlot_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnDragEnter");
		
		UUI_BaseSlot_C_OnDragEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnDragLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BaseSlot_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnDragLeave");
		
		UUI_BaseSlot_C_OnDragLeave_Params params {};
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnHoveredInternal
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::OnHoveredInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnHoveredInternal");
		
		UUI_BaseSlot_C_OnHoveredInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnUnhoveredInternal
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::OnUnhoveredInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnUnhoveredInternal");
		
		UUI_BaseSlot_C_OnUnhoveredInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnDragCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BaseSlot_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnDragCancelled");
		
		UUI_BaseSlot_C_OnDragCancelled_Params params {};
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UUI_BaseSlot_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BaseSlot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.PreConstruct");
		
		UUI_BaseSlot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseEquippedHighlightIfEquipped                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BaseSlot_C::SetSelected(bool Selected, bool UseEquippedHighlightIfEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.SetSelected");
		
		UUI_BaseSlot_C_SetSelected_Params params {};
		params.Selected = Selected;
		params.UseEquippedHighlightIfEquipped = UseEquippedHighlightIfEquipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.Construct");
		
		UUI_BaseSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_BaseSlot_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnAddedToFocusPath");
		
		UUI_BaseSlot_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_BaseSlot_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnRemovedFromFocusPath");
		
		UUI_BaseSlot_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.PlayItemChangedAnimation
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::PlayItemChangedAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.PlayItemChangedAnimation");
		
		UUI_BaseSlot_C_PlayItemChangedAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.PlayItemSelectAnimation
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::PlayItemSelectAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.PlayItemSelectAnimation");
		
		UUI_BaseSlot_C_PlayItemSelectAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.RefreshColors
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::RefreshColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.RefreshColors");
		
		UUI_BaseSlot_C_RefreshColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.Refresh
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.Refresh");
		
		UUI_BaseSlot_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.SetFocused
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::SetFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.SetFocused");
		
		UUI_BaseSlot_C_SetFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.HideSlotBG
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::HideSlotBG()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.HideSlotBG");
		
		UUI_BaseSlot_C_HideSlotBG_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_BaseSlot_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnGlobalColorChange");
		
		UUI_BaseSlot_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnIsItemNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsNewItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BaseSlot_C::OnIsItemNew(bool bIsNewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnIsItemNew");
		
		UUI_BaseSlot_C_OnIsItemNew_Params params {};
		params.bIsNewItem = bIsNewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.BndEvt__UI_BaseSlot_TooltipAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BaseSlot_C::BndEvt__UI_BaseSlot_TooltipAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.BndEvt__UI_BaseSlot_TooltipAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
		
		UUI_BaseSlot_C_BndEvt__UI_BaseSlot_TooltipAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.ExecuteUbergraph_UI_BaseSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BaseSlot_C::ExecuteUbergraph_UI_BaseSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.ExecuteUbergraph_UI_BaseSlot");
		
		UUI_BaseSlot_C_ExecuteUbergraph_UI_BaseSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BaseSlot_C::OnHovered__DelegateSignature(class UUI_BaseSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnHovered__DelegateSignature");
		
		UUI_BaseSlot_C_OnHovered__DelegateSignature_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnRightPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BaseSlot_C::OnRightPressed__DelegateSignature(class UUI_BaseSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnRightPressed__DelegateSignature");
		
		UUI_BaseSlot_C_OnRightPressed__DelegateSignature_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnDoublePressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BaseSlot_C::OnDoublePressed__DelegateSignature(class UUI_BaseSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnDoublePressed__DelegateSignature");
		
		UUI_BaseSlot_C_OnDoublePressed__DelegateSignature_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BaseSlot_C::OnPressed__DelegateSignature(class UUI_BaseSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnPressed__DelegateSignature");
		
		UUI_BaseSlot_C_OnPressed__DelegateSignature_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnFocus__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BaseSlot_C::OnFocus__DelegateSignature(class UUI_BaseSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnFocus__DelegateSignature");
		
		UUI_BaseSlot_C_OnFocus__DelegateSignature_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BaseSlot.UI_BaseSlot_C.OnSlotChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BaseSlot_C::OnSlotChanged__DelegateSignature(class UUI_BaseSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BaseSlot.UI_BaseSlot_C.OnSlotChanged__DelegateSignature");
		
		UUI_BaseSlot_C_OnSlotChanged__DelegateSignature_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BaseSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BaseSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BaseSlot.UI_BaseSlot_C");
		return ptr;
	}

}


