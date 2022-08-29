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
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.ClearSelections
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::ClearSelections()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.ClearSelections");
		
		UUI_CraftingInterface_C_ClearSelections_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UUI_CraftingInterface_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnKeyDown");
		
		UUI_CraftingInterface_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.ApplyScrollBoxTextFilter
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::ApplyScrollBoxTextFilter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.ApplyScrollBoxTextFilter");
		
		UUI_CraftingInterface_C_ApplyScrollBoxTextFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_CraftingInterface_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.HandleKeyEventChord");
		
		UUI_CraftingInterface_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.RefreshHintbox
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::RefreshHintbox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.RefreshHintbox");
		
		UUI_CraftingInterface_C_RefreshHintbox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnAnalogValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UUI_CraftingInterface_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnAnalogValueChanged");
		
		UUI_CraftingInterface_C_OnAnalogValueChanged_Params params {};
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.SetHintText
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::SetHintText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.SetHintText");
		
		UUI_CraftingInterface_C_SetHintText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.HasUninspectedRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasUninspected                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingInterface_C::HasUninspectedRecipe(bool* HasUninspected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.HasUninspectedRecipe");
		
		UUI_CraftingInterface_C_HasUninspectedRecipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasUninspected != nullptr)
			*HasUninspected = params.HasUninspected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.Refresh UI
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::Refresh_UI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.Refresh UI");
		
		UUI_CraftingInterface_C_Refresh_UI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.NavigateFromDetailsBackToRecipeList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UUI_CraftingInterface_C::NavigateFromDetailsBackToRecipeList(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.NavigateFromDetailsBackToRecipeList");
		
		UUI_CraftingInterface_C_NavigateFromDetailsBackToRecipeList_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.SelectDefaultCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Succeeded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingInterface_C::SelectDefaultCategory(bool* Succeeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.SelectDefaultCategory");
		
		UUI_CraftingInterface_C_SelectDefaultCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Succeeded != nullptr)
			*Succeeded = params.Succeeded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.SetLastCraftingMenuSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_CraftingInterface_C::SetLastCraftingMenuSelection(const struct FDataTableRowHandle& Recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.SetLastCraftingMenuSelection");
		
		UUI_CraftingInterface_C_SetLastCraftingMenuSelection_Params params {};
		params.Recipe = Recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetLastCraftingMenuSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         SelectedRecipe                                             (Parm, OutParm, NoDestructor)
	 */
	void UUI_CraftingInterface_C::GetLastCraftingMenuSelection(struct FDataTableRowHandle* SelectedRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetLastCraftingMenuSelection");
		
		UUI_CraftingInterface_C_GetLastCraftingMenuSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedRecipe != nullptr)
			*SelectedRecipe = params.SelectedRecipe;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetAccentOne
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_CraftingInterface_C::GetAccentOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetAccentOne");
		
		UUI_CraftingInterface_C_GetAccentOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.SelectNextCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Forwards                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingInterface_C::SelectNextCategory(bool Forwards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.SelectNextCategory");
		
		UUI_CraftingInterface_C_SelectNextCategory_Params params {};
		params.Forwards = Forwards;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.CraftAndEquipItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeRowHandle                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_CraftingInterface_C::CraftAndEquipItem(const struct FDataTableRowHandle& RecipeRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.CraftAndEquipItem");
		
		UUI_CraftingInterface_C_CraftAndEquipItem_Params params {};
		params.RecipeRowHandle = RecipeRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetSelectedCategoryHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        CategoryName                                               (Parm, OutParm)
	 */
	void UUI_CraftingInterface_C::GetSelectedCategoryHeader(class FText* CategoryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetSelectedCategoryHeader");
		
		UUI_CraftingInterface_C_GetSelectedCategoryHeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryName != nullptr)
			*CategoryName = params.CategoryName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetGlobalDarkenerColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_CraftingInterface_C::GetGlobalDarkenerColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetGlobalDarkenerColor");
		
		UUI_CraftingInterface_C_GetGlobalDarkenerColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetAttentionColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_CraftingInterface_C::GetAttentionColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetAttentionColor");
		
		UUI_CraftingInterface_C_GetAttentionColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetRequiresCraftingBuildingVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_CraftingInterface_C::GetRequiresCraftingBuildingVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetRequiresCraftingBuildingVisibility");
		
		UUI_CraftingInterface_C_GetRequiresCraftingBuildingVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.FilterValidForResources
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingInterface_C::FilterValidForResources(bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.FilterValidForResources");
		
		UUI_CraftingInterface_C_FilterValidForResources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.FilterValidForBuildings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingInterface_C::FilterValidForBuildings(bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.FilterValidForBuildings");
		
		UUI_CraftingInterface_C_FilterValidForBuildings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.FilterValidForCrafting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingInterface_C::FilterValidForCrafting(bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.FilterValidForCrafting");
		
		UUI_CraftingInterface_C_FilterValidForCrafting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetWarningColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_CraftingInterface_C::GetWarningColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetWarningColor");
		
		UUI_CraftingInterface_C_GetWarningColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.SetSelectedTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             SelectedTab                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::SetSelectedTab(class UUI_TabButton_C* SelectedTab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.SetSelectedTab");
		
		UUI_CraftingInterface_C_SetSelectedTab_Params params {};
		params.SelectedTab = SelectedTab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.Get_WorkbenchTab_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_CraftingInterface_C::Get_WorkbenchTab_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.Get_WorkbenchTab_Visibility");
		
		UUI_CraftingInterface_C_Get_WorkbenchTab_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.CraftingRecipePassesFilterCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRecipeData                                 RecipeData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FGameplayTag                                CurrentRecipeCategory                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	bool UUI_CraftingInterface_C::CraftingRecipePassesFilterCheck(const struct FRecipeData& RecipeData, const struct FGameplayTag& CurrentRecipeCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.CraftingRecipePassesFilterCheck");
		
		UUI_CraftingInterface_C_CraftingRecipePassesFilterCheck_Params params {};
		params.RecipeData = RecipeData;
		params.CurrentRecipeCategory = CurrentRecipeCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.Get_ItemName_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_CraftingInterface_C::Get_ItemName_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.Get_ItemName_Visibility_1");
		
		UUI_CraftingInterface_C_Get_ItemName_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetDescPanelColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_CraftingInterface_C::GetDescPanelColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetDescPanelColor");
		
		UUI_CraftingInterface_C_GetDescPanelColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetAccentThreeColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_CraftingInterface_C::GetAccentThreeColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetAccentThreeColor");
		
		UUI_CraftingInterface_C_GetAccentThreeColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetSelectedCategorySubheader
	 * 		Flags  -> ()
	 */
	class FText UUI_CraftingInterface_C::GetSelectedCategorySubheader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetSelectedCategorySubheader");
		
		UUI_CraftingInterface_C_GetSelectedCategorySubheader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetKnownRecipesUsedInVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_CraftingInterface_C::GetKnownRecipesUsedInVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetKnownRecipesUsedInVisibility");
		
		UUI_CraftingInterface_C_GetKnownRecipesUsedInVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.SelectResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ResourceItemHandle                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingInterface_C::SelectResource(const struct FDataTableRowHandle& ResourceItemHandle, bool* Found)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.SelectResource");
		
		UUI_CraftingInterface_C_SelectResource_Params params {};
		params.ResourceItemHandle = ResourceItemHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Found != nullptr)
			*Found = params.Found;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.SelectBuildingRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         BuildingRecipe                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingInterface_C::SelectBuildingRecipe(const struct FDataTableRowHandle& BuildingRecipe, bool* Found)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.SelectBuildingRecipe");
		
		UUI_CraftingInterface_C_SelectBuildingRecipe_Params params {};
		params.BuildingRecipe = BuildingRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Found != nullptr)
			*Found = params.Found;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GoToItemEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RowHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_CraftingInterface_C::GoToItemEntry(const struct FDataTableRowHandle& RowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GoToItemEntry");
		
		UUI_CraftingInterface_C_GoToItemEntry_Params params {};
		params.RowHandle = RowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetAccentTwoColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_CraftingInterface_C::GetAccentTwoColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetAccentTwoColor");
		
		UUI_CraftingInterface_C_GetAccentTwoColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.HasKnownRecipeInBuildingCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                RecipeCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasRecipe                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingInterface_C::HasKnownRecipeInBuildingCategory(const struct FGameplayTag& RecipeCategory, bool* HasRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.HasKnownRecipeInBuildingCategory");
		
		UUI_CraftingInterface_C_HasKnownRecipeInBuildingCategory_Params params {};
		params.RecipeCategory = RecipeCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasRecipe != nullptr)
			*HasRecipe = params.HasRecipe;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.HasKnownRecipeInCraftingCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                RecipeCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasRecipe                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingInterface_C::HasKnownRecipeInCraftingCategory(const struct FGameplayTag& RecipeCategory, bool* HasRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.HasKnownRecipeInCraftingCategory");
		
		UUI_CraftingInterface_C_HasKnownRecipeInCraftingCategory_Params params {};
		params.RecipeCategory = RecipeCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasRecipe != nullptr)
			*HasRecipe = params.HasRecipe;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.HasUninspectedResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasUninspectedRecipe                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingInterface_C::HasUninspectedResource(bool* HasUninspectedRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.HasUninspectedResource");
		
		UUI_CraftingInterface_C_HasUninspectedResource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasUninspectedRecipe != nullptr)
			*HasUninspectedRecipe = params.HasUninspectedRecipe;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.HasUninspectedBuidlingRecipeInCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasUninspectedRecipe                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingInterface_C::HasUninspectedBuidlingRecipeInCategory(const struct FGameplayTag& Category, bool* HasUninspectedRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.HasUninspectedBuidlingRecipeInCategory");
		
		UUI_CraftingInterface_C_HasUninspectedBuidlingRecipeInCategory_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasUninspectedRecipe != nullptr)
			*HasUninspectedRecipe = params.HasUninspectedRecipe;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.HasUninspectedCraftingRecipeInCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                CategoryTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasUninspectedRecipe                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingInterface_C::HasUninspectedCraftingRecipeInCategory(const struct FGameplayTag& CategoryTag, bool* HasUninspectedRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.HasUninspectedCraftingRecipeInCategory");
		
		UUI_CraftingInterface_C_HasUninspectedCraftingRecipeInCategory_Params params {};
		params.CategoryTag = CategoryTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasUninspectedRecipe != nullptr)
			*HasUninspectedRecipe = params.HasUninspectedRecipe;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetCategoryButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                CraftingCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_CategoriesButton_Base_C*                 Button                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::GetCategoryButton(const struct FGameplayTag& CraftingCategory, class UUI_CategoriesButton_Base_C** Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetCategoryButton");
		
		UUI_CraftingInterface_C_GetCategoryButton_Params params {};
		params.CraftingCategory = CraftingCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Button != nullptr)
			*Button = params.Button;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.Refresh Bottom Buttons
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::Refresh_Bottom_Buttons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.Refresh Bottom Buttons");
		
		UUI_CraftingInterface_C_Refresh_Bottom_Buttons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetSubheaderColorBinding
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_CraftingInterface_C::GetSubheaderColorBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetSubheaderColorBinding");
		
		UUI_CraftingInterface_C_GetSubheaderColorBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.Get_ItemIcon_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_CraftingInterface_C::Get_ItemIcon_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.Get_ItemIcon_Visibility_1");
		
		UUI_CraftingInterface_C_Get_ItemIcon_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.IsBuildingOrCraftingRecipeSelected
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_CraftingInterface_C::IsBuildingOrCraftingRecipeSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.IsBuildingOrCraftingRecipeSelected");
		
		UUI_CraftingInterface_C_IsBuildingOrCraftingRecipeSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.PlaceBuildingBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_CraftingInterface_C::PlaceBuildingBlueprint(const struct FDataTableRowHandle& Recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.PlaceBuildingBlueprint");
		
		UUI_CraftingInterface_C_PlaceBuildingBlueprint_Params params {};
		params.Recipe = Recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.IsBuildingRecipeSelected
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_CraftingInterface_C::IsBuildingRecipeSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.IsBuildingRecipeSelected");
		
		UUI_CraftingInterface_C_IsBuildingRecipeSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.CreateBuildingRecipeList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                RecipeCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::CreateBuildingRecipeList(const struct FGameplayTag& RecipeCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.CreateBuildingRecipeList");
		
		UUI_CraftingInterface_C_CreateBuildingRecipeList_Params params {};
		params.RecipeCategory = RecipeCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetUIAccentTwo
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_CraftingInterface_C::GetUIAccentTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetUIAccentTwo");
		
		UUI_CraftingInterface_C_GetUIAccentTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetBasicColorBinding
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_CraftingInterface_C::GetBasicColorBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetBasicColorBinding");
		
		UUI_CraftingInterface_C_GetBasicColorBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.GetHeaderColorBinding
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_CraftingInterface_C::GetHeaderColorBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.GetHeaderColorBinding");
		
		UUI_CraftingInterface_C_GetHeaderColorBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.SelectCraftingRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         CraftingRecipe                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingInterface_C::SelectCraftingRecipe(const struct FDataTableRowHandle& CraftingRecipe, bool* Found)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.SelectCraftingRecipe");
		
		UUI_CraftingInterface_C_SelectCraftingRecipe_Params params {};
		params.CraftingRecipe = CraftingRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Found != nullptr)
			*Found = params.Found;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.DescriptionVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_CraftingInterface_C::DescriptionVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.DescriptionVisibility");
		
		UUI_CraftingInterface_C_DescriptionVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.CreateResourcesList
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::CreateResourcesList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.CreateResourcesList");
		
		UUI_CraftingInterface_C_CreateResourcesList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.SetSelectedCategoryState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::SetSelectedCategoryState(const struct FGameplayTag& Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.SetSelectedCategoryState");
		
		UUI_CraftingInterface_C_SetSelectedCategoryState_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.IsCraftingRecipeSelected
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_CraftingInterface_C::IsCraftingRecipeSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.IsCraftingRecipeSelected");
		
		UUI_CraftingInterface_C_IsCraftingRecipeSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.RefreshCategories
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::RefreshCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.RefreshCategories");
		
		UUI_CraftingInterface_C_RefreshCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.CanCraftAnyInCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                RecipeCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanCraftAny                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingInterface_C::CanCraftAnyInCategory(const struct FGameplayTag& RecipeCategory, bool* CanCraftAny)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.CanCraftAnyInCategory");
		
		UUI_CraftingInterface_C_CanCraftAnyInCategory_Params params {};
		params.RecipeCategory = RecipeCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanCraftAny != nullptr)
			*CanCraftAny = params.CanCraftAny;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.RefreshRecipeList
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::RefreshRecipeList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.RefreshRecipeList");
		
		UUI_CraftingInterface_C_RefreshRecipeList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.RefreshRequirements
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::RefreshRequirements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.RefreshRequirements");
		
		UUI_CraftingInterface_C_RefreshRequirements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.CreateCraftingRecipeList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                RecipeCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::CreateCraftingRecipeList(const struct FGameplayTag& RecipeCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.CreateCraftingRecipeList");
		
		UUI_CraftingInterface_C_CreateCraftingRecipeList_Params params {};
		params.RecipeCategory = RecipeCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.CraftAndEquipIsVisible
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_CraftingInterface_C::CraftAndEquipIsVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.CraftAndEquipIsVisible");
		
		UUI_CraftingInterface_C_CraftAndEquipIsVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.CraftIsEnabled
	 * 		Flags  -> ()
	 */
	bool UUI_CraftingInterface_C::CraftIsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.CraftIsEnabled");
		
		UUI_CraftingInterface_C_CraftIsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.CraftItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::CraftItem(const struct FDataTableRowHandle& Recipe, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.CraftItem");
		
		UUI_CraftingInterface_C_CraftItem_Params params {};
		params.Recipe = Recipe;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_RecipeListItem_Base_C*                   SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::SetSelected(class UUI_RecipeListItem_Base_C* SelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.SetSelected");
		
		UUI_CraftingInterface_C_SetSelected_Params params {};
		params.SelectedItem = SelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.CanCraft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeRowHandle                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               Craftable                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingInterface_C::CanCraft(const struct FDataTableRowHandle& RecipeRowHandle, bool* Craftable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.CanCraft");
		
		UUI_CraftingInterface_C_CanCraft_Params params {};
		params.RecipeRowHandle = RecipeRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Craftable != nullptr)
			*Craftable = params.Craftable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.Construct");
		
		UUI_CraftingInterface_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnCraftingItemSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         SelectedRecipe                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeListItem_Base_C*                   SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::OnCraftingItemSelected(const struct FDataTableRowHandle& SelectedRecipe, class UUI_RecipeListItem_Base_C* SelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnCraftingItemSelected");
		
		UUI_CraftingInterface_C_OnCraftingItemSelected_Params params {};
		params.SelectedRecipe = SelectedRecipe;
		params.SelectedItem = SelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__CraftEquip_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__CraftEquip_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__CraftEquip_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__CraftEquip_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__Craft_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__Craft_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__Craft_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__Craft_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnCategorySelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::OnCategorySelected(const struct FGameplayTag& Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnCategorySelected");
		
		UUI_CraftingInterface_C_OnCategorySelected_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.CraftSelectedRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::CraftSelectedRecipe(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.CraftSelectedRecipe");
		
		UUI_CraftingInterface_C_CraftSelectedRecipe_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.CraftAndEquipSelectedRecipe
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::CraftAndEquipSelectedRecipe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.CraftAndEquipSelectedRecipe");
		
		UUI_CraftingInterface_C_CraftAndEquipSelectedRecipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.SelectedItemCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_CraftingInterface_C::SelectedItemCount(const struct FDataTableRowHandle& ItemRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.SelectedItemCount");
		
		UUI_CraftingInterface_C_SelectedItemCount_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnResourcesCategoryClicked
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::OnResourcesCategoryClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnResourcesCategoryClicked");
		
		UUI_CraftingInterface_C_OnResourcesCategoryClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnResourceSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         SelectedResource                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeListItem_Base_C*                   SelectedListItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::OnResourceSelected(const struct FDataTableRowHandle& SelectedResource, class UUI_RecipeListItem_Base_C* SelectedListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnResourceSelected");
		
		UUI_CraftingInterface_C_OnResourceSelected_Params params {};
		params.SelectedResource = SelectedResource;
		params.SelectedListItem = SelectedListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnCraftingRecipeItemDoubleClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         SelectedRecipe                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeListItem_Base_C*                   SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::OnCraftingRecipeItemDoubleClick(const struct FDataTableRowHandle& SelectedRecipe, class UUI_RecipeListItem_Base_C* SelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnCraftingRecipeItemDoubleClick");
		
		UUI_CraftingInterface_C_OnCraftingRecipeItemDoubleClick_Params params {};
		params.SelectedRecipe = SelectedRecipe;
		params.SelectedItem = SelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__ResourceCategory_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__ResourceCategory_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__ResourceCategory_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__ResourceCategory_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__3_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__3_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__3_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__3_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__4_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__4_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__4_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__4_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__5_K2Node_ComponentBoundEvent_10_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__5_K2Node_ComponentBoundEvent_10_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__5_K2Node_ComponentBoundEvent_10_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__5_K2Node_ComponentBoundEvent_10_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__UI_CategoriesButton_Craftable_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__UI_CategoriesButton_Craftable_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__UI_CategoriesButton_Craftable_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__UI_CategoriesButton_Craftable_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__CategoryDefenses_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__CategoryDefenses_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__CategoryDefenses_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__CategoryDefenses_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__CategoryOther_K2Node_ComponentBoundEvent_12_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__CategoryOther_K2Node_ComponentBoundEvent_12_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__CategoryOther_K2Node_ComponentBoundEvent_12_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__CategoryOther_K2Node_ComponentBoundEvent_12_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__CategoryDecoration_K2Node_ComponentBoundEvent_13_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__CategoryDecoration_K2Node_ComponentBoundEvent_13_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__CategoryDecoration_K2Node_ComponentBoundEvent_13_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__CategoryDecoration_K2Node_ComponentBoundEvent_13_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnBuildingRecipeSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         SelectedRecipe                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeListItem_Base_C*                   SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::OnBuildingRecipeSelected(const struct FDataTableRowHandle& SelectedRecipe, class UUI_RecipeListItem_Base_C* SelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnBuildingRecipeSelected");
		
		UUI_CraftingInterface_C_OnBuildingRecipeSelected_Params params {};
		params.SelectedRecipe = SelectedRecipe;
		params.SelectedItem = SelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnBuildingRecipeItemDoubleClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         SelectedRecipe                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeListItem_Base_C*                   SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::OnBuildingRecipeItemDoubleClick(const struct FDataTableRowHandle& SelectedRecipe, class UUI_RecipeListItem_Base_C* SelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnBuildingRecipeItemDoubleClick");
		
		UUI_CraftingInterface_C_OnBuildingRecipeItemDoubleClick_Params params {};
		params.SelectedRecipe = SelectedRecipe;
		params.SelectedItem = SelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__PlaceBlueprint_K2Node_ComponentBoundEvent_14_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__PlaceBlueprint_K2Node_ComponentBoundEvent_14_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__PlaceBlueprint_K2Node_ComponentBoundEvent_14_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__PlaceBlueprint_K2Node_ComponentBoundEvent_14_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.PlaceSelectedBuildingBlueprint
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::PlaceSelectedBuildingBlueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.PlaceSelectedBuildingBlueprint");
		
		UUI_CraftingInterface_C_PlaceSelectedBuildingBlueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__BushcraftTab_K2Node_ComponentBoundEvent_16_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             TabButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::BndEvt__BushcraftTab_K2Node_ComponentBoundEvent_16_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__BushcraftTab_K2Node_ComponentBoundEvent_16_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__BushcraftTab_K2Node_ComponentBoundEvent_16_OnNormalButtonClicked__DelegateSignature_Params params {};
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__WorkbenchTab_K2Node_ComponentBoundEvent_17_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             TabButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::BndEvt__WorkbenchTab_K2Node_ComponentBoundEvent_17_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__WorkbenchTab_K2Node_ComponentBoundEvent_17_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__WorkbenchTab_K2Node_ComponentBoundEvent_17_OnNormalButtonClicked__DelegateSignature_Params params {};
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__BuildingTabs_K2Node_ComponentBoundEvent_18_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             TabButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::BndEvt__BuildingTabs_K2Node_ComponentBoundEvent_18_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__BuildingTabs_K2Node_ComponentBoundEvent_18_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__BuildingTabs_K2Node_ComponentBoundEvent_18_OnNormalButtonClicked__DelegateSignature_Params params {};
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__AllTab_K2Node_ComponentBoundEvent_19_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             TabButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::BndEvt__AllTab_K2Node_ComponentBoundEvent_19_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__AllTab_K2Node_ComponentBoundEvent_19_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__AllTab_K2Node_ComponentBoundEvent_19_OnNormalButtonClicked__DelegateSignature_Params params {};
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__Resources_K2Node_ComponentBoundEvent_20_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             TabButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::BndEvt__Resources_K2Node_ComponentBoundEvent_20_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__Resources_K2Node_ComponentBoundEvent_20_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__Resources_K2Node_ComponentBoundEvent_20_OnNormalButtonClicked__DelegateSignature_Params params {};
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnGlobalColorChange");
		
		UUI_CraftingInterface_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnUsedInRecipeFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeListItem_Base_C*                   RecipeListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::OnUsedInRecipeFocused(const struct FDataTableRowHandle& Recipe, class UUI_RecipeListItem_Base_C* RecipeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnUsedInRecipeFocused");
		
		UUI_CraftingInterface_C_OnUsedInRecipeFocused_Params params {};
		params.Recipe = Recipe;
		params.RecipeListItem = RecipeListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnCraftingRequirementFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeItemSlot_C*                        RecipeRequirementSlot                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::OnCraftingRequirementFocused(const struct FDataTableRowHandle& Recipe, class UUI_RecipeItemSlot_C* RecipeRequirementSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnCraftingRequirementFocused");
		
		UUI_CraftingInterface_C_OnCraftingRequirementFocused_Params params {};
		params.Recipe = Recipe;
		params.RecipeRequirementSlot = RecipeRequirementSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__HotCraft_K2Node_ComponentBoundEvent_21_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__HotCraft_K2Node_ComponentBoundEvent_21_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__HotCraft_K2Node_ComponentBoundEvent_21_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__HotCraft_K2Node_ComponentBoundEvent_21_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__GotoEntry_K2Node_ComponentBoundEvent_22_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__GotoEntry_K2Node_ComponentBoundEvent_22_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__GotoEntry_K2Node_ComponentBoundEvent_22_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__GotoEntry_K2Node_ComponentBoundEvent_22_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.HotCraftRecipeRequirement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::HotCraftRecipeRequirement(const struct FDataTableRowHandle& RecipeItemSlot, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.HotCraftRecipeRequirement");
		
		UUI_CraftingInterface_C_HotCraftRecipeRequirement_Params params {};
		params.RecipeItemSlot = RecipeItemSlot;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnCraftingRequirementAltSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeItemSlot_C*                        RecipeItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::OnCraftingRequirementAltSelected(const struct FDataTableRowHandle& RecipeItem, class UUI_RecipeItemSlot_C* RecipeItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnCraftingRequirementAltSelected");
		
		UUI_CraftingInterface_C_OnCraftingRequirementAltSelected_Params params {};
		params.RecipeItem = RecipeItem;
		params.RecipeItemSlot = RecipeItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnUsedInRecipeAltSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_CraftingInterface_C::OnUsedInRecipeAltSelected(const struct FDataTableRowHandle& Recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnUsedInRecipeAltSelected");
		
		UUI_CraftingInterface_C_OnUsedInRecipeAltSelected_Params params {};
		params.Recipe = Recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.HandleRequirementHotCraft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeItemSlot_C*                        RecipeItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::HandleRequirementHotCraft(const struct FDataTableRowHandle& RecipeItem, class UUI_RecipeItemSlot_C* RecipeItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.HandleRequirementHotCraft");
		
		UUI_CraftingInterface_C_HandleRequirementHotCraft_Params params {};
		params.RecipeItem = RecipeItem;
		params.RecipeItemSlot = RecipeItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnItemCraftedWithFullInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_CraftingInterface_C::OnItemCraftedWithFullInventory(const struct FDataTableRowHandle& ItemRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnItemCraftedWithFullInventory");
		
		UUI_CraftingInterface_C_OnItemCraftedWithFullInventory_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.Destruct");
		
		UUI_CraftingInterface_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__CategoryCraftingDecoration_K2Node_ComponentBoundEvent_23_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__CategoryCraftingDecoration_K2Node_ComponentBoundEvent_23_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__CategoryCraftingDecoration_K2Node_ComponentBoundEvent_23_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__CategoryCraftingDecoration_K2Node_ComponentBoundEvent_23_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnNoCategorySelected
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::OnNoCategorySelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnNoCategorySelected");
		
		UUI_CraftingInterface_C_OnNoCategorySelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__UI_CraftingInterface_UI_FilterBox_K2Node_ComponentBoundEvent_8_OnFilterChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_CraftingInterface_C::BndEvt__UI_CraftingInterface_UI_FilterBox_K2Node_ComponentBoundEvent_8_OnFilterChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__UI_CraftingInterface_UI_FilterBox_K2Node_ComponentBoundEvent_8_OnFilterChanged__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__UI_CraftingInterface_UI_FilterBox_K2Node_ComponentBoundEvent_8_OnFilterChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__UI_CraftingInterface_Craft_1_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__UI_CraftingInterface_Craft_1_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__UI_CraftingInterface_Craft_1_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__UI_CraftingInterface_Craft_1_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.JumpToSelectedEntry
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::JumpToSelectedEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.JumpToSelectedEntry");
		
		UUI_CraftingInterface_C_JumpToSelectedEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.HotCraftIngredient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::HotCraftIngredient(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.HotCraftIngredient");
		
		UUI_CraftingInterface_C_HotCraftIngredient_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__UI_CraftingInterface_HotCraftMany_K2Node_ComponentBoundEvent_11_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__UI_CraftingInterface_HotCraftMany_K2Node_ComponentBoundEvent_11_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__UI_CraftingInterface_HotCraftMany_K2Node_ComponentBoundEvent_11_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__UI_CraftingInterface_HotCraftMany_K2Node_ComponentBoundEvent_11_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__UI_CraftingInterface_UI_FilterBox_K2Node_ComponentBoundEvent_15_OnFocused__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::BndEvt__UI_CraftingInterface_UI_FilterBox_K2Node_ComponentBoundEvent_15_OnFocused__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__UI_CraftingInterface_UI_FilterBox_K2Node_ComponentBoundEvent_15_OnFocused__DelegateSignature");
		
		UUI_CraftingInterface_C_BndEvt__UI_CraftingInterface_UI_FilterBox_K2Node_ComponentBoundEvent_15_OnFocused__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.ExecuteUbergraph_UI_CraftingInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInterface_C::ExecuteUbergraph_UI_CraftingInterface(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.ExecuteUbergraph_UI_CraftingInterface");
		
		UUI_CraftingInterface_C_ExecuteUbergraph_UI_CraftingInterface_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnClose__DelegateSignature");
		
		UUI_CraftingInterface_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInterface.UI_CraftingInterface_C.OnItemCrafted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingInterface_C::OnItemCrafted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInterface.UI_CraftingInterface_C.OnItemCrafted__DelegateSignature");
		
		UUI_CraftingInterface_C_OnItemCrafted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CraftingInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CraftingInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CraftingInterface.UI_CraftingInterface_C");
		return ptr;
	}

}


