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
	 * 		Name   -> Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.GetDescColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ShortcutRadialMenu_C::GetDescColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.GetDescColor");
		
		UUI_ShortcutRadialMenu_C_GetDescColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.GetPageCountForCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ShortcutRadialMenu_C::GetPageCountForCategory(int32_t CategoryIndex, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.GetPageCountForCategory");
		
		UUI_ShortcutRadialMenu_C_GetPageCountForCategory_Params params {};
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
	 * 		Name   -> Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.GetCategoryCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ShortcutRadialMenu_C::GetCategoryCount(int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.GetCategoryCount");
		
		UUI_ShortcutRadialMenu_C_GetCategoryCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.GetCategoryHeader_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_BuildingRadialHeaderButton_C*            CategoryHeader                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ShortcutRadialMenu_C::GetCategoryHeader_1(unsigned char Category, class UUI_BuildingRadialHeaderButton_C** CategoryHeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.GetCategoryHeader_1");
		
		UUI_ShortcutRadialMenu_C_GetCategoryHeader_1_Params params {};
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
	 * 		Name   -> Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.PopulateShortcutsCategories
	 * 		Flags  -> ()
	 */
	void UUI_ShortcutRadialMenu_C::PopulateShortcutsCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.PopulateShortcutsCategories");
		
		UUI_ShortcutRadialMenu_C_PopulateShortcutsCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.GetRadialBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ShortcutRadialMenu_C::GetRadialBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.GetRadialBGColor");
		
		UUI_ShortcutRadialMenu_C_GetRadialBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ShortcutRadialMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.Construct");
		
		UUI_ShortcutRadialMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.Populate
	 * 		Flags  -> ()
	 */
	void UUI_ShortcutRadialMenu_C::Populate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.Populate");
		
		UUI_ShortcutRadialMenu_C_Populate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ShortcutRadialMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.Tick");
		
		UUI_ShortcutRadialMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.PopulateCategories
	 * 		Flags  -> ()
	 */
	void UUI_ShortcutRadialMenu_C::PopulateCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.PopulateCategories");
		
		UUI_ShortcutRadialMenu_C_PopulateCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.CreateInitialSlots
	 * 		Flags  -> ()
	 */
	void UUI_ShortcutRadialMenu_C::CreateInitialSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.CreateInitialSlots");
		
		UUI_ShortcutRadialMenu_C_CreateInitialSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.HandleCategoryChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PreviousCategoryIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ShortcutRadialMenu_C::HandleCategoryChange(int32_t PreviousCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.HandleCategoryChange");
		
		UUI_ShortcutRadialMenu_C_HandleCategoryChange_Params params {};
		params.PreviousCategoryIndex = PreviousCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.ExecuteUbergraph_UI_ShortcutRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ShortcutRadialMenu_C::ExecuteUbergraph_UI_ShortcutRadialMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.ExecuteUbergraph_UI_ShortcutRadialMenu");
		
		UUI_ShortcutRadialMenu_C_ExecuteUbergraph_UI_ShortcutRadialMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ShortcutRadialMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ShortcutRadialMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C");
		return ptr;
	}

}


