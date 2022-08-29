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
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.FocusOnRecipeRequirement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeRequirement                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_CraftingRequirements_C::FocusOnRecipeRequirement(const struct FDataTableRowHandle& RecipeRequirement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.FocusOnRecipeRequirement");
		
		UUI_CraftingRequirements_C_FocusOnRecipeRequirement_Params params {};
		params.RecipeRequirement = RecipeRequirement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.GetFocusedRecipeItemSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_RecipeItemSlot_C*                        ItemRowHandle                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingRequirements_C::GetFocusedRecipeItemSlot(class UUI_RecipeItemSlot_C** ItemRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.GetFocusedRecipeItemSlot");
		
		UUI_CraftingRequirements_C_GetFocusedRecipeItemSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemRowHandle != nullptr)
			*ItemRowHandle = params.ItemRowHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_CraftingRequirements_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.HandleKeyEventChord");
		
		UUI_CraftingRequirements_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.GetFocusedRecipeItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (Parm, OutParm, NoDestructor)
	 */
	void UUI_CraftingRequirements_C::GetFocusedRecipeItem(struct FDataTableRowHandle* ItemRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.GetFocusedRecipeItem");
		
		UUI_CraftingRequirements_C_GetFocusedRecipeItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemRowHandle != nullptr)
			*ItemRowHandle = params.ItemRowHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.GetSubheaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_CraftingRequirements_C::GetSubheaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.GetSubheaderColor");
		
		UUI_CraftingRequirements_C_GetSubheaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.UpdateToolRequirementsListVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FDataTableRowHandle                         ToolRequirement                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UUI_CraftingRequirements_C::UpdateToolRequirementsListVersion(const struct FDataTableRowHandle& RecipeResult, const struct FDataTableRowHandle& ToolRequirement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.UpdateToolRequirementsListVersion");
		
		UUI_CraftingRequirements_C_UpdateToolRequirementsListVersion_Params params {};
		params.RecipeResult = RecipeResult;
		params.ToolRequirement = ToolRequirement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.UpdateRequirementsListVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		TArray<struct FRecipeRequirements>                 RecipeRequirements                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_CraftingRequirements_C::UpdateRequirementsListVersion(const struct FDataTableRowHandle& RecipeResult, TArray<struct FRecipeRequirements>* RecipeRequirements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.UpdateRequirementsListVersion");
		
		UUI_CraftingRequirements_C_UpdateRequirementsListVersion_Params params {};
		params.RecipeResult = RecipeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RecipeRequirements != nullptr)
			*RecipeRequirements = params.RecipeRequirements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.HasItemEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               HasItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingRequirements_C::HasItemEquipped(const struct FDataTableRowHandle& Item, bool* HasItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.HasItemEquipped");
		
		UUI_CraftingRequirements_C_HasItemEquipped_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasItem != nullptr)
			*HasItem = params.HasItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.UpdateItemRequirements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRecipeData                                 ItemRecipe                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_CraftingRequirements_C::UpdateItemRequirements(const struct FRecipeData& ItemRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.UpdateItemRequirements");
		
		UUI_CraftingRequirements_C_UpdateItemRequirements_Params params {};
		params.ItemRecipe = ItemRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.UpdateBuildingRequirements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBuildingRecipeData                         BuildingRecipe                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_CraftingRequirements_C::UpdateBuildingRequirements(const struct FBuildingRecipeData& BuildingRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.UpdateBuildingRequirements");
		
		UUI_CraftingRequirements_C_UpdateBuildingRequirements_Params params {};
		params.BuildingRecipe = BuildingRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.UpdateToolRequirements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FDataTableRowHandle                         ToolRequirement                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UUI_CraftingRequirements_C::UpdateToolRequirements(const struct FDataTableRowHandle& RecipeResult, const struct FDataTableRowHandle& ToolRequirement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.UpdateToolRequirements");
		
		UUI_CraftingRequirements_C_UpdateToolRequirements_Params params {};
		params.RecipeResult = RecipeResult;
		params.ToolRequirement = ToolRequirement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.GetItemCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingRequirements_C::GetItemCount(const struct FDataTableRowHandle& ItemData, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.GetItemCount");
		
		UUI_CraftingRequirements_C_GetItemCount_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.HasEnoughOfItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            ItemCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasEnough                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingRequirements_C::HasEnoughOfItem(const struct FDataTableRowHandle& ItemData, int32_t ItemCount, bool* HasEnough)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.HasEnoughOfItem");
		
		UUI_CraftingRequirements_C_HasEnoughOfItem_Params params {};
		params.ItemData = ItemData;
		params.ItemCount = ItemCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasEnough != nullptr)
			*HasEnough = params.HasEnough;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingRequirements_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.PreConstruct");
		
		UUI_CraftingRequirements_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.OnRequirementClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         IngredientRowHandle                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeItemSlot_C*                        RecipeItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingRequirements_C::OnRequirementClicked(const struct FDataTableRowHandle& IngredientRowHandle, class UUI_RecipeItemSlot_C* RecipeItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.OnRequirementClicked");
		
		UUI_CraftingRequirements_C_OnRequirementClicked_Params params {};
		params.IngredientRowHandle = IngredientRowHandle;
		params.RecipeItemSlot = RecipeItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.OnRequirementDoubleClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeItemSlot_C*                        RecipeItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingRequirements_C::OnRequirementDoubleClicked(const struct FDataTableRowHandle& ItemRowHandle, class UUI_RecipeItemSlot_C* RecipeItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.OnRequirementDoubleClicked");
		
		UUI_CraftingRequirements_C_OnRequirementDoubleClicked_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.RecipeItemSlot = RecipeItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_CraftingRequirements_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.OnGlobalColorChange");
		
		UUI_CraftingRequirements_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.OnRequirementFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeItemSlot_C*                        RecipeItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingRequirements_C::OnRequirementFocused(const struct FDataTableRowHandle& ItemRowHandle, class UUI_RecipeItemSlot_C* RecipeItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.OnRequirementFocused");
		
		UUI_CraftingRequirements_C_OnRequirementFocused_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.RecipeItemSlot = RecipeItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.ExecuteUbergraph_UI_CraftingRequirements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingRequirements_C::ExecuteUbergraph_UI_CraftingRequirements(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.ExecuteUbergraph_UI_CraftingRequirements");
		
		UUI_CraftingRequirements_C_ExecuteUbergraph_UI_CraftingRequirements_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.HandleRecipeItemAltSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeItemSlot_C*                        RecipeItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingRequirements_C::HandleRecipeItemAltSelected__DelegateSignature(const struct FDataTableRowHandle& RecipeItem, class UUI_RecipeItemSlot_C* RecipeItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.HandleRecipeItemAltSelected__DelegateSignature");
		
		UUI_CraftingRequirements_C_HandleRecipeItemAltSelected__DelegateSignature_Params params {};
		params.RecipeItem = RecipeItem;
		params.RecipeItemSlot = RecipeItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.HandleRecipeItemFocused__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeItemSlot_C*                        RecipeItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingRequirements_C::HandleRecipeItemFocused__DelegateSignature(const struct FDataTableRowHandle& Recipe, class UUI_RecipeItemSlot_C* RecipeItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.HandleRecipeItemFocused__DelegateSignature");
		
		UUI_CraftingRequirements_C_HandleRecipeItemFocused__DelegateSignature_Params params {};
		params.Recipe = Recipe;
		params.RecipeItemSlot = RecipeItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRequirements.UI_CraftingRequirements_C.HandleRecipeItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeItemSlot_C*                        RecipeItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingRequirements_C::HandleRecipeItemSelected__DelegateSignature(const struct FDataTableRowHandle& RecipeItem, class UUI_RecipeItemSlot_C* RecipeItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRequirements.UI_CraftingRequirements_C.HandleRecipeItemSelected__DelegateSignature");
		
		UUI_CraftingRequirements_C_HandleRecipeItemSelected__DelegateSignature_Params params {};
		params.RecipeItem = RecipeItem;
		params.RecipeItemSlot = RecipeItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CraftingRequirements_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CraftingRequirements_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CraftingRequirements.UI_CraftingRequirements_C");
		return ptr;
	}

}


