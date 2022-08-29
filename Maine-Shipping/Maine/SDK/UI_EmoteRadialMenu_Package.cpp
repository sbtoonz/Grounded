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
	 * 		Name   -> Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.GetDescColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_EmoteRadialMenu_C::GetDescColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.GetDescColor");
		
		UUI_EmoteRadialMenu_C_GetDescColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.CalculateValidBuildingCategories
	 * 		Flags  -> ()
	 */
	void UUI_EmoteRadialMenu_C::CalculateValidBuildingCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.CalculateValidBuildingCategories");
		
		UUI_EmoteRadialMenu_C_CalculateValidBuildingCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.GetPageCountForBuildingCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EmoteRadialMenu_C::GetPageCountForBuildingCategory(int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.GetPageCountForBuildingCategory");
		
		UUI_EmoteRadialMenu_C_GetPageCountForBuildingCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.GetPageCountForCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EmoteRadialMenu_C::GetPageCountForCategory(int32_t CategoryIndex, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.GetPageCountForCategory");
		
		UUI_EmoteRadialMenu_C_GetPageCountForCategory_Params params {};
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
	 * 		Name   -> Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.GetCategoryCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EmoteRadialMenu_C::GetCategoryCount(int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.GetCategoryCount");
		
		UUI_EmoteRadialMenu_C_GetCategoryCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.GetCategoryHeader_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_BuildingRadialHeaderButton_C*            CategoryHeader                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EmoteRadialMenu_C::GetCategoryHeader_1(unsigned char Category, class UUI_BuildingRadialHeaderButton_C** CategoryHeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.GetCategoryHeader_1");
		
		UUI_EmoteRadialMenu_C_GetCategoryHeader_1_Params params {};
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
	 * 		Name   -> Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.PopulateEmoteCategories
	 * 		Flags  -> ()
	 */
	void UUI_EmoteRadialMenu_C::PopulateEmoteCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.PopulateEmoteCategories");
		
		UUI_EmoteRadialMenu_C_PopulateEmoteCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.GetRadialBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_EmoteRadialMenu_C::GetRadialBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.GetRadialBGColor");
		
		UUI_EmoteRadialMenu_C_GetRadialBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.GetEmotesForCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FDataTableRowHandle>                 KnownBuildingRecipes                                       (Parm, OutParm)
	 */
	void UUI_EmoteRadialMenu_C::GetEmotesForCategory(TArray<struct FDataTableRowHandle>* KnownBuildingRecipes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.GetEmotesForCategory");
		
		UUI_EmoteRadialMenu_C_GetEmotesForCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KnownBuildingRecipes != nullptr)
			*KnownBuildingRecipes = params.KnownBuildingRecipes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_EmoteRadialMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.Construct");
		
		UUI_EmoteRadialMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.Populate
	 * 		Flags  -> ()
	 */
	void UUI_EmoteRadialMenu_C::Populate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.Populate");
		
		UUI_EmoteRadialMenu_C_Populate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EmoteRadialMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.Tick");
		
		UUI_EmoteRadialMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.PopulateCategories
	 * 		Flags  -> ()
	 */
	void UUI_EmoteRadialMenu_C::PopulateCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.PopulateCategories");
		
		UUI_EmoteRadialMenu_C_PopulateCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.CreateInitialSlots
	 * 		Flags  -> ()
	 */
	void UUI_EmoteRadialMenu_C::CreateInitialSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.CreateInitialSlots");
		
		UUI_EmoteRadialMenu_C_CreateInitialSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.HandleCategoryChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PreviousCategoryIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EmoteRadialMenu_C::HandleCategoryChange(int32_t PreviousCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.HandleCategoryChange");
		
		UUI_EmoteRadialMenu_C_HandleCategoryChange_Params params {};
		params.PreviousCategoryIndex = PreviousCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.ExecuteUbergraph_UI_EmoteRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EmoteRadialMenu_C::ExecuteUbergraph_UI_EmoteRadialMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EmoteRadialMenu.UI_EmoteRadialMenu_C.ExecuteUbergraph_UI_EmoteRadialMenu");
		
		UUI_EmoteRadialMenu_C_ExecuteUbergraph_UI_EmoteRadialMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EmoteRadialMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EmoteRadialMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EmoteRadialMenu.UI_EmoteRadialMenu_C");
		return ptr;
	}

}


