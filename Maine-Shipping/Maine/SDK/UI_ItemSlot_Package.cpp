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
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.SetHotBarQuickSlotKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHotBarQuickSlotItemTypeKey                 ItemKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_ItemSlot_C::SetHotBarQuickSlotKey(const struct FHotBarQuickSlotItemTypeKey& ItemKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.SetHotBarQuickSlotKey");
		
		UUI_ItemSlot_C_SetHotBarQuickSlotKey_Params params {};
		params.ItemKey = ItemKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.GetRowHandleForItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Item_Row_Handle                                            (Parm, OutParm, NoDestructor)
	 */
	void UUI_ItemSlot_C::GetRowHandleForItem(struct FDataTableRowHandle* Item_Row_Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.GetRowHandleForItem");
		
		UUI_ItemSlot_C_GetRowHandleForItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item_Row_Handle != nullptr)
			*Item_Row_Handle = params.Item_Row_Handle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.HandleRefreshItemCount
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::HandleRefreshItemCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.HandleRefreshItemCount");
		
		UUI_ItemSlot_C_HandleRefreshItemCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.SetModTypeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ResourceObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemSlot_C::SetModTypeIcon(class UObject* ResourceObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.SetModTypeIcon");
		
		UUI_ItemSlot_C_SetModTypeIcon_Params params {};
		params.ResourceObject = ResourceObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.GetAllowContextMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::GetAllowContextMenu(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.GetAllowContextMenu");
		
		UUI_ItemSlot_C_GetAllowContextMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.HasItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::HasItem(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.HasItem");
		
		UUI_ItemSlot_C_HasItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.DumpItemPower
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::DumpItemPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.DumpItemPower");
		
		UUI_ItemSlot_C_DumpItemPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.RepairItem
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::RepairItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.RepairItem");
		
		UUI_ItemSlot_C_RepairItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.UseItem
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::UseItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.UseItem");
		
		UUI_ItemSlot_C_UseItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.TrashNoPromptHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemSlot_C::TrashNoPromptHelper(int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.TrashNoPromptHelper");
		
		UUI_ItemSlot_C_TrashNoPromptHelper_Params params {};
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.TrashStackNoPrompt
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::TrashStackNoPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.TrashStackNoPrompt");
		
		UUI_ItemSlot_C_TrashStackNoPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.TrashOneNoPrompt
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::TrashOneNoPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.TrashOneNoPrompt");
		
		UUI_ItemSlot_C_TrashOneNoPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.TrashStack
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::TrashStack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.TrashStack");
		
		UUI_ItemSlot_C_TrashStack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.TrashOne
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::TrashOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.TrashOne");
		
		UUI_ItemSlot_C_TrashOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.DropStack
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::DropStack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.DropStack");
		
		UUI_ItemSlot_C_DropStack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.DropOne
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::DropOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.DropOne");
		
		UUI_ItemSlot_C_DropOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.RefreshItemLevel
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::RefreshItemLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.RefreshItemLevel");
		
		UUI_ItemSlot_C_RefreshItemLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.OnRightClickOverridable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHandled                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::OnRightClickOverridable(bool* bHandled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.OnRightClickOverridable");
		
		UUI_ItemSlot_C_OnRightClickOverridable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHandled != nullptr)
			*bHandled = params.bHandled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_ItemSlot_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.HandleKeyEventChord");
		
		UUI_ItemSlot_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.GetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemSlot_C::GetItem(class UItem** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.GetItem");
		
		UUI_ItemSlot_C_GetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.SetProgressRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemSlot_C::SetProgressRatio(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.SetProgressRatio");
		
		UUI_ItemSlot_C_SetProgressRatio_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropEquipmentSlotToInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ItemSlot_C*                              SourceItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DropSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::DragAndDropEquipmentSlotToInventory(class UUI_ItemSlot_C* SourceItemSlot, bool* DropSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropEquipmentSlotToInventory");
		
		UUI_ItemSlot_C_DragAndDropEquipmentSlotToInventory_Params params {};
		params.SourceItemSlot = SourceItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DropSuccess != nullptr)
			*DropSuccess = params.DropSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.UpdateFreshVisuals
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::UpdateFreshVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.UpdateFreshVisuals");
		
		UUI_ItemSlot_C_UpdateFreshVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.DetermineAnalyzeVisibility
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::DetermineAnalyzeVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.DetermineAnalyzeVisibility");
		
		UUI_ItemSlot_C_DetermineAnalyzeVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.HasMatchingRowHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ItemSlot_C*                              OtherSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Matches                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::HasMatchingRowHandle(class UUI_ItemSlot_C* OtherSlot, bool* Matches)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.HasMatchingRowHandle");
		
		UUI_ItemSlot_C_HasMatchingRowHandle_Params params {};
		params.OtherSlot = OtherSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Matches != nullptr)
			*Matches = params.Matches;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropMergeItemStacks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ItemSlot_C*                              SourceItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemSlot_C::DragAndDropMergeItemStacks(class UUI_ItemSlot_C* SourceItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropMergeItemStacks");
		
		UUI_ItemSlot_C_DragAndDropMergeItemStacks_Params params {};
		params.SourceItemSlot = SourceItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.GetNarration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNarrationChunk>                     Chunks                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bVerbose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.GetNarration");
		
		UUI_ItemSlot_C_GetNarration_Params params {};
		params.bVerbose = bVerbose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Chunks != nullptr)
			*Chunks = params.Chunks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.ShowContextMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShown                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::ShowContextMenu(bool* bShown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.ShowContextMenu");
		
		UUI_ItemSlot_C_ShowContextMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShown != nullptr)
			*bShown = params.bShown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.OnContextMenu_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ActionTag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemSlot_C::OnContextMenu_Item(struct FGameplayTag* ActionTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.OnContextMenu_Item");
		
		UUI_ItemSlot_C_OnContextMenu_Item_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActionTag != nullptr)
			*ActionTag = params.ActionTag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.DetermineStackVisibility
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::DetermineStackVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.DetermineStackVisibility");
		
		UUI_ItemSlot_C_DetermineStackVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.ManageTierNugget
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::ManageTierNugget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.ManageTierNugget");
		
		UUI_ItemSlot_C_ManageTierNugget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.DetermineCanteenVisibility
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::DetermineCanteenVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.DetermineCanteenVisibility");
		
		UUI_ItemSlot_C_DetermineCanteenVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.DetermineFillVisibility
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::DetermineFillVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.DetermineFillVisibility");
		
		UUI_ItemSlot_C_DetermineFillVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.OnItemSet
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_ItemSlot_C::OnItemSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.OnItemSet");
		
		UUI_ItemSlot_C_OnItemSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.GetFavoriteVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_ItemSlot_C::GetFavoriteVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.GetFavoriteVisibility");
		
		UUI_ItemSlot_C_GetFavoriteVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.VisuallyOverrideItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ItemSlot_C*                              OtherItemSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemSlot_C::VisuallyOverrideItemData(class UUI_ItemSlot_C* OtherItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.VisuallyOverrideItemData");
		
		UUI_ItemSlot_C_VisuallyOverrideItemData_Params params {};
		params.OtherItemSlot = OtherItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.UnassignHotBarSlot
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::UnassignHotBarSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.UnassignHotBarSlot");
		
		UUI_ItemSlot_C_UnassignHotBarSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropHotBarToHotBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ItemSlot_C*                              SourceItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DropSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::DragAndDropHotBarToHotBar(class UUI_ItemSlot_C* SourceItemSlot, bool* DropSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropHotBarToHotBar");
		
		UUI_ItemSlot_C_DragAndDropHotBarToHotBar_Params params {};
		params.SourceItemSlot = SourceItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DropSuccess != nullptr)
			*DropSuccess = params.DropSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropInventoryToHotBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ItemSlot_C*                              SourceItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DropSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::DragAndDropInventoryToHotBar(class UUI_ItemSlot_C* SourceItemSlot, bool* DropSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropInventoryToHotBar");
		
		UUI_ItemSlot_C_DragAndDropInventoryToHotBar_Params params {};
		params.SourceItemSlot = SourceItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DropSuccess != nullptr)
			*DropSuccess = params.DropSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropEquipmentToHotBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ItemSlot_C*                              SourceItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DropSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::DragAndDropEquipmentToHotBar(class UUI_ItemSlot_C* SourceItemSlot, bool* DropSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropEquipmentToHotBar");
		
		UUI_ItemSlot_C_DragAndDropEquipmentToHotBar_Params params {};
		params.SourceItemSlot = SourceItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DropSuccess != nullptr)
			*DropSuccess = params.DropSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropInventoryToEquipmentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ItemSlot_C*                              SourceItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DropSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::DragAndDropInventoryToEquipmentSlot(class UUI_ItemSlot_C* SourceItemSlot, bool* DropSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropInventoryToEquipmentSlot");
		
		UUI_ItemSlot_C_DragAndDropInventoryToEquipmentSlot_Params params {};
		params.SourceItemSlot = SourceItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DropSuccess != nullptr)
			*DropSuccess = params.DropSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.CreateDragAndDropElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              DragBaseSlot                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemSlot_C::CreateDragAndDropElement(class UUI_BaseSlot_C** DragBaseSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.CreateDragAndDropElement");
		
		UUI_ItemSlot_C_CreateDragAndDropElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DragBaseSlot != nullptr)
			*DragBaseSlot = params.DragBaseSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.HandleDragDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              ItemSlotSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DropSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::HandleDragDrop(class UUI_BaseSlot_C* ItemSlotSource, bool* DropSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.HandleDragDrop");
		
		UUI_ItemSlot_C_HandleDragDrop_Params params {};
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
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropInventoryToDifferentInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ItemSlot_C*                              SourceItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DropSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::DragAndDropInventoryToDifferentInventory(class UUI_ItemSlot_C* SourceItemSlot, bool* DropSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropInventoryToDifferentInventory");
		
		UUI_ItemSlot_C_DragAndDropInventoryToDifferentInventory_Params params {};
		params.SourceItemSlot = SourceItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DropSuccess != nullptr)
			*DropSuccess = params.DropSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropInventoryToSameInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ItemSlot_C*                              SourceItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DropSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::DragAndDropInventoryToSameInventory(class UUI_ItemSlot_C* SourceItemSlot, bool* DropSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.DragAndDropInventoryToSameInventory");
		
		UUI_ItemSlot_C_DragAndDropInventoryToSameInventory_Params params {};
		params.SourceItemSlot = SourceItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DropSuccess != nullptr)
			*DropSuccess = params.DropSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.SetItemQuickSlotType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHotBarQuickSlotType                               QuickSlotType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemSlot_C::SetItemQuickSlotType(EHotBarQuickSlotType QuickSlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.SetItemQuickSlotType");
		
		UUI_ItemSlot_C_SetItemQuickSlotType_Params params {};
		params.QuickSlotType = QuickSlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.GetRepairColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ItemSlot_C::GetRepairColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.GetRepairColor");
		
		UUI_ItemSlot_C_GetRepairColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.GetBrokenVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_ItemSlot_C::GetBrokenVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.GetBrokenVisibility");
		
		UUI_ItemSlot_C_GetBrokenVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.UnbindItemChangedEvent
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::UnbindItemChangedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.UnbindItemChangedEvent");
		
		UUI_ItemSlot_C_UnbindItemChangedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.BindItemChangedEvent
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::BindItemChangedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.BindItemChangedEvent");
		
		UUI_ItemSlot_C_BindItemChangedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.CanDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanDrag                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::CanDrag(bool* CanDrag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.CanDrag");
		
		UUI_ItemSlot_C_CanDrag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanDrag != nullptr)
			*CanDrag = params.CanDrag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.GetSourceEquipment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEquipmentComponent*                         Equipment                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemSlot_C::GetSourceEquipment(class UEquipmentComponent** Equipment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.GetSourceEquipment");
		
		UUI_ItemSlot_C_GetSourceEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Equipment != nullptr)
			*Equipment = params.Equipment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.GetSourceInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Inventory                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemSlot_C::GetSourceInventory(class UInventoryComponent** Inventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.GetSourceInventory");
		
		UUI_ItemSlot_C_GetSourceInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Inventory != nullptr)
			*Inventory = params.Inventory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.SetItemSlotType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemSlotType                                      ItemSlotType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemSlot_C::SetItemSlotType(EItemSlotType ItemSlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.SetItemSlotType");
		
		UUI_ItemSlot_C_SetItemSlotType_Params params {};
		params.ItemSlotType = ItemSlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.SetEquippedVisuals
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::SetEquippedVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.SetEquippedVisuals");
		
		UUI_ItemSlot_C_SetEquippedVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.GetIconBrushFromQuickSlotType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHotBarQuickSlotType                               QuickSlotType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm)
	 */
	void UUI_ItemSlot_C::GetIconBrushFromQuickSlotType(EHotBarQuickSlotType QuickSlotType, struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.GetIconBrushFromQuickSlotType");
		
		UUI_ItemSlot_C_GetIconBrushFromQuickSlotType_Params params {};
		params.QuickSlotType = QuickSlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.GetNewItemVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_ItemSlot_C::GetNewItemVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.GetNewItemVis");
		
		UUI_ItemSlot_C_GetNewItemVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.GetFillVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_ItemSlot_C::GetFillVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.GetFillVisibility");
		
		UUI_ItemSlot_C_GetFillVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.GetFillColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ItemSlot_C::GetFillColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.GetFillColor");
		
		UUI_ItemSlot_C_GetFillColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.SetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemSlot_C::SetItem(class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.SetItem");
		
		UUI_ItemSlot_C_SetItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.Construct");
		
		UUI_ItemSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.UpdateDurabilityWidget
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::UpdateDurabilityWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.UpdateDurabilityWidget");
		
		UUI_ItemSlot_C_UpdateDurabilityWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.Refresh
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.Refresh");
		
		UUI_ItemSlot_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.RefreshItemCount
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::RefreshItemCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.RefreshItemCount");
		
		UUI_ItemSlot_C_RefreshItemCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.SetIconBrush
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::SetIconBrush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.SetIconBrush");
		
		UUI_ItemSlot_C_SetIconBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.SetHotKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        HotkeyText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_ItemSlot_C::SetHotKey(const class FText& HotkeyText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.SetHotKey");
		
		UUI_ItemSlot_C_SetHotKey_Params params {};
		params.HotkeyText = HotkeyText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.HandleBrokenAnim
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::HandleBrokenAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.HandleBrokenAnim");
		
		UUI_ItemSlot_C_HandleBrokenAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.SetDataRowHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         DataRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_ItemSlot_C::SetDataRowHandle(const struct FDataTableRowHandle& DataRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.SetDataRowHandle");
		
		UUI_ItemSlot_C_SetDataRowHandle_Params params {};
		params.DataRowHandle = DataRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.UpdateVisuals
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::UpdateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.UpdateVisuals");
		
		UUI_ItemSlot_C_UpdateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.UpdateSelectionVisuals
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::UpdateSelectionVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.UpdateSelectionVisuals");
		
		UUI_ItemSlot_C_UpdateSelectionVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.HandleDragCancel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ManualCancel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::HandleDragCancel(bool ManualCancel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.HandleDragCancel");
		
		UUI_ItemSlot_C_HandleDragCancel_Params params {};
		params.ManualCancel = ManualCancel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.OnHoveredInternal
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::OnHoveredInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.OnHoveredInternal");
		
		UUI_ItemSlot_C_OnHoveredInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.OnUnhoveredInternal
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::OnUnhoveredInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.OnUnhoveredInternal");
		
		UUI_ItemSlot_C_OnUnhoveredInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.UpdateCanteenElement
	 * 		Flags  -> ()
	 */
	void UUI_ItemSlot_C::UpdateCanteenElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.UpdateCanteenElement");
		
		UUI_ItemSlot_C_UpdateCanteenElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.OnContextOptionSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ActionSelected                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemSlot_C::OnContextOptionSelected(const struct FGameplayTag& ActionSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.OnContextOptionSelected");
		
		UUI_ItemSlot_C_OnContextOptionSelected_Params params {};
		params.ActionSelected = ActionSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemSlot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.PreConstruct");
		
		UUI_ItemSlot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSlot.UI_ItemSlot_C.ExecuteUbergraph_UI_ItemSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemSlot_C::ExecuteUbergraph_UI_ItemSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSlot.UI_ItemSlot_C.ExecuteUbergraph_UI_ItemSlot");
		
		UUI_ItemSlot_C_ExecuteUbergraph_UI_ItemSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ItemSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ItemSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ItemSlot.UI_ItemSlot_C");
		return ptr;
	}

}


