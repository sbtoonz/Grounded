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
	 * 		Name   -> Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.RefreshUI
	 * 		Flags  -> ()
	 */
	void UUI_KnownRecipesUsedIn_C::RefreshUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.RefreshUI");
		
		UUI_KnownRecipesUsedIn_C_RefreshUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.FocusOnRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_KnownRecipesUsedIn_C::FocusOnRecipe(const struct FDataTableRowHandle& Recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.FocusOnRecipe");
		
		UUI_KnownRecipesUsedIn_C_FocusOnRecipe_Params params {};
		params.Recipe = Recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_KnownRecipesUsedIn_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.HandleKeyEventChord");
		
		UUI_KnownRecipesUsedIn_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.GetFocusedKnownRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (Parm, OutParm, NoDestructor)
	 */
	void UUI_KnownRecipesUsedIn_C::GetFocusedKnownRecipe(struct FDataTableRowHandle* Recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.GetFocusedKnownRecipe");
		
		UUI_KnownRecipesUsedIn_C_GetFocusedKnownRecipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Recipe != nullptr)
			*Recipe = params.Recipe;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.CreateChildHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      WidgetType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_RecipeListItem_Base_C*                   NewItem                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KnownRecipesUsedIn_C::CreateChildHelper(class UClass* WidgetType, class UUI_RecipeListItem_Base_C** NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.CreateChildHelper");
		
		UUI_KnownRecipesUsedIn_C_CreateChildHelper_Params params {};
		params.WidgetType = WidgetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewItem != nullptr)
			*NewItem = params.NewItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.GetColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_KnownRecipesUsedIn_C::GetColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.GetColorAndOpacity_1");
		
		UUI_KnownRecipesUsedIn_C_GetColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.SetIngredient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         IngredientRowHandle                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_KnownRecipesUsedIn_C::SetIngredient(const struct FDataTableRowHandle& IngredientRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.SetIngredient");
		
		UUI_KnownRecipesUsedIn_C_SetIngredient_Params params {};
		params.IngredientRowHandle = IngredientRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.OnCraftingRecipeClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeListItem_Base_C*                   RecipeListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KnownRecipesUsedIn_C::OnCraftingRecipeClicked(const struct FDataTableRowHandle& Recipe, class UUI_RecipeListItem_Base_C* RecipeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.OnCraftingRecipeClicked");
		
		UUI_KnownRecipesUsedIn_C_OnCraftingRecipeClicked_Params params {};
		params.Recipe = Recipe;
		params.RecipeListItem = RecipeListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_KnownRecipesUsedIn_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.OnGlobalColorChange");
		
		UUI_KnownRecipesUsedIn_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.OnRecipeListItemFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeListItem_Base_C*                   RecipeListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KnownRecipesUsedIn_C::OnRecipeListItemFocused(const struct FDataTableRowHandle& Recipe, class UUI_RecipeListItem_Base_C* RecipeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.OnRecipeListItemFocused");
		
		UUI_KnownRecipesUsedIn_C_OnRecipeListItemFocused_Params params {};
		params.Recipe = Recipe;
		params.RecipeListItem = RecipeListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.ExecuteUbergraph_UI_KnownRecipesUsedIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KnownRecipesUsedIn_C::ExecuteUbergraph_UI_KnownRecipesUsedIn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.ExecuteUbergraph_UI_KnownRecipesUsedIn");
		
		UUI_KnownRecipesUsedIn_C_ExecuteUbergraph_UI_KnownRecipesUsedIn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.HandleRecipeAltSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_KnownRecipesUsedIn_C::HandleRecipeAltSelected__DelegateSignature(const struct FDataTableRowHandle& Recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.HandleRecipeAltSelected__DelegateSignature");
		
		UUI_KnownRecipesUsedIn_C_HandleRecipeAltSelected__DelegateSignature_Params params {};
		params.Recipe = Recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.HandleRecipeFocused__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeListItem_Base_C*                   RecipeListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KnownRecipesUsedIn_C::HandleRecipeFocused__DelegateSignature(const struct FDataTableRowHandle& Recipe, class UUI_RecipeListItem_Base_C* RecipeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.HandleRecipeFocused__DelegateSignature");
		
		UUI_KnownRecipesUsedIn_C_HandleRecipeFocused__DelegateSignature_Params params {};
		params.Recipe = Recipe;
		params.RecipeListItem = RecipeListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.HandleRecipeSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_KnownRecipesUsedIn_C::HandleRecipeSelected__DelegateSignature(const struct FDataTableRowHandle& Recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.HandleRecipeSelected__DelegateSignature");
		
		UUI_KnownRecipesUsedIn_C_HandleRecipeSelected__DelegateSignature_Params params {};
		params.Recipe = Recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_KnownRecipesUsedIn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_KnownRecipesUsedIn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C");
		return ptr;
	}

}


