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
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GotoNextBuildingMaterial
	 * 		Flags  -> ()
	 */
	void UUI_BuildingRadialMenu_C::GotoNextBuildingMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GotoNextBuildingMaterial");
		
		UUI_BuildingRadialMenu_C_GotoNextBuildingMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetBuildingRecipeForAnyHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Handle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FDataTableRowHandle                         BuildingRecipe                                             (Parm, OutParm, NoDestructor)
	 */
	void UUI_BuildingRadialMenu_C::GetBuildingRecipeForAnyHandle(const struct FDataTableRowHandle& Handle, struct FDataTableRowHandle* BuildingRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetBuildingRecipeForAnyHandle");
		
		UUI_BuildingRadialMenu_C_GetBuildingRecipeForAnyHandle_Params params {};
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BuildingRecipe != nullptr)
			*BuildingRecipe = params.BuildingRecipe;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetBuildingRecipeCategoryTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         BuildingRecipe                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FGameplayTag                                CategoryTag                                                (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingRadialMenu_C::GetBuildingRecipeCategoryTag(const struct FDataTableRowHandle& BuildingRecipe, struct FGameplayTag* CategoryTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetBuildingRecipeCategoryTag");
		
		UUI_BuildingRadialMenu_C_GetBuildingRecipeCategoryTag_Params params {};
		params.BuildingRecipe = BuildingRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryTag != nullptr)
			*CategoryTag = params.CategoryTag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.Get Known and Sorted Building Recipes for Category
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                BuildingCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FDataTableRowHandle>                 KnownBuildingRecipes                                       (Parm, OutParm)
	 */
	void UUI_BuildingRadialMenu_C::Get_Known_and_Sorted_Building_Recipes_for_Category(const struct FGameplayTag& BuildingCategory, TArray<struct FDataTableRowHandle>* KnownBuildingRecipes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.Get Known and Sorted Building Recipes for Category");
		
		UUI_BuildingRadialMenu_C_Get_Known_and_Sorted_Building_Recipes_for_Category_Params params {};
		params.BuildingCategory = BuildingCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KnownBuildingRecipes != nullptr)
			*KnownBuildingRecipes = params.KnownBuildingRecipes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetCategoryTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CategoryString                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingRadialMenu_C::GetCategoryTitle(int32_t Category, class FName* CategoryString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetCategoryTitle");
		
		UUI_BuildingRadialMenu_C_GetCategoryTitle_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryString != nullptr)
			*CategoryString = params.CategoryString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetCategoryIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Texture                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingRadialMenu_C::GetCategoryIcon(int32_t Category, class UTexture2D** Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetCategoryIcon");
		
		UUI_BuildingRadialMenu_C_GetCategoryIcon_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Texture != nullptr)
			*Texture = params.Texture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetDescColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BuildingRadialMenu_C::GetDescColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetDescColor");
		
		UUI_BuildingRadialMenu_C_GetDescColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.CalculateValidBuildingCategories
	 * 		Flags  -> ()
	 */
	void UUI_BuildingRadialMenu_C::CalculateValidBuildingCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.CalculateValidBuildingCategories");
		
		UUI_BuildingRadialMenu_C_CalculateValidBuildingCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetPageCountForBuildingCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingRadialMenu_C::GetPageCountForBuildingCategory(const struct FGameplayTag& Category, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetPageCountForBuildingCategory");
		
		UUI_BuildingRadialMenu_C_GetPageCountForBuildingCategory_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetPageCountForCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingRadialMenu_C::GetPageCountForCategory(int32_t CategoryIndex, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetPageCountForCategory");
		
		UUI_BuildingRadialMenu_C_GetPageCountForCategory_Params params {};
		params.CategoryIndex = CategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetCategoryCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingRadialMenu_C::GetCategoryCount(int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetCategoryCount");
		
		UUI_BuildingRadialMenu_C_GetCategoryCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetCategoryHeader_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_BuildingRadialHeaderButton_C*            CategoryHeader                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingRadialMenu_C::GetCategoryHeader_1(const struct FGameplayTag& Category, class UUI_BuildingRadialHeaderButton_C** CategoryHeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetCategoryHeader_1");
		
		UUI_BuildingRadialMenu_C_GetCategoryHeader_1_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryHeader != nullptr)
			*CategoryHeader = params.CategoryHeader;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.PopulateBuildingCategories
	 * 		Flags  -> ()
	 */
	void UUI_BuildingRadialMenu_C::PopulateBuildingCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.PopulateBuildingCategories");
		
		UUI_BuildingRadialMenu_C_PopulateBuildingCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetRadialBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BuildingRadialMenu_C::GetRadialBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetRadialBGColor");
		
		UUI_BuildingRadialMenu_C_GetRadialBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetNextCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                CurrentCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Category                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingRadialMenu_C::GetNextCategory(const struct FGameplayTag& CurrentCategory, struct FGameplayTag* Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetNextCategory");
		
		UUI_BuildingRadialMenu_C_GetNextCategory_Params params {};
		params.CurrentCategory = CurrentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Category != nullptr)
			*Category = params.Category;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetKnownBuildingRecipesForCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                BuildingCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FDataTableRowHandle>                 KnownBuildingRecipes                                       (Parm, OutParm)
	 */
	void UUI_BuildingRadialMenu_C::GetKnownBuildingRecipesForCategory(const struct FGameplayTag& BuildingCategory, TArray<struct FDataTableRowHandle>* KnownBuildingRecipes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetKnownBuildingRecipesForCategory");
		
		UUI_BuildingRadialMenu_C_GetKnownBuildingRecipesForCategory_Params params {};
		params.BuildingCategory = BuildingCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KnownBuildingRecipes != nullptr)
			*KnownBuildingRecipes = params.KnownBuildingRecipes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_BuildingRadialMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.Construct");
		
		UUI_BuildingRadialMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.Populate
	 * 		Flags  -> ()
	 */
	void UUI_BuildingRadialMenu_C::Populate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.Populate");
		
		UUI_BuildingRadialMenu_C_Populate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.PopulateCategories
	 * 		Flags  -> ()
	 */
	void UUI_BuildingRadialMenu_C::PopulateCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.PopulateCategories");
		
		UUI_BuildingRadialMenu_C_PopulateCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.HandleCategoryChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PreviousCategoryIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingRadialMenu_C::HandleCategoryChange(int32_t PreviousCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.HandleCategoryChange");
		
		UUI_BuildingRadialMenu_C_HandleCategoryChange_Params params {};
		params.PreviousCategoryIndex = PreviousCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.HandleSelectLastRecipe
	 * 		Flags  -> ()
	 */
	void UUI_BuildingRadialMenu_C::HandleSelectLastRecipe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.HandleSelectLastRecipe");
		
		UUI_BuildingRadialMenu_C_HandleSelectLastRecipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_BuildingRadialMenu_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.OnGlobalColorChange");
		
		UUI_BuildingRadialMenu_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingRadialMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.Tick");
		
		UUI_BuildingRadialMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.HandleNextVariant
	 * 		Flags  -> ()
	 */
	void UUI_BuildingRadialMenu_C::HandleNextVariant()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.HandleNextVariant");
		
		UUI_BuildingRadialMenu_C_HandleNextVariant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.ExecuteUbergraph_UI_BuildingRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingRadialMenu_C::ExecuteUbergraph_UI_BuildingRadialMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.ExecuteUbergraph_UI_BuildingRadialMenu");
		
		UUI_BuildingRadialMenu_C_ExecuteUbergraph_UI_BuildingRadialMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BuildingRadialMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BuildingRadialMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BuildingRadialMenu.UI_BuildingRadialMenu_C");
		return ptr;
	}

}


