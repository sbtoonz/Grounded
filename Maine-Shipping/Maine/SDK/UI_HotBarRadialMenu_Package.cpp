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
	 * 		Name   -> Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.GetDescColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HotBarRadialMenu_C::GetDescColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.GetDescColor");
		
		UUI_HotBarRadialMenu_C_GetDescColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.GetPageCountForCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBarRadialMenu_C::GetPageCountForCategory(int32_t CategoryIndex, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.GetPageCountForCategory");
		
		UUI_HotBarRadialMenu_C_GetPageCountForCategory_Params params {};
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
	 * 		Name   -> Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.GetCategoryCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBarRadialMenu_C::GetCategoryCount(int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.GetCategoryCount");
		
		UUI_HotBarRadialMenu_C_GetCategoryCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.GetRadialBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HotBarRadialMenu_C::GetRadialBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.GetRadialBGColor");
		
		UUI_HotBarRadialMenu_C_GetRadialBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_HotBarRadialMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.Construct");
		
		UUI_HotBarRadialMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.Populate
	 * 		Flags  -> ()
	 */
	void UUI_HotBarRadialMenu_C::Populate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.Populate");
		
		UUI_HotBarRadialMenu_C_Populate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBarRadialMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.Tick");
		
		UUI_HotBarRadialMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.PopulateCategories
	 * 		Flags  -> ()
	 */
	void UUI_HotBarRadialMenu_C::PopulateCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.PopulateCategories");
		
		UUI_HotBarRadialMenu_C_PopulateCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.HandleSelectLastItem
	 * 		Flags  -> ()
	 */
	void UUI_HotBarRadialMenu_C::HandleSelectLastItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.HandleSelectLastItem");
		
		UUI_HotBarRadialMenu_C_HandleSelectLastItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.OnInventoryChanged
	 * 		Flags  -> ()
	 */
	void UUI_HotBarRadialMenu_C::OnInventoryChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.OnInventoryChanged");
		
		UUI_HotBarRadialMenu_C_OnInventoryChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_HotBarRadialMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.Destruct");
		
		UUI_HotBarRadialMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.ExecuteUbergraph_UI_HotBarRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBarRadialMenu_C::ExecuteUbergraph_UI_HotBarRadialMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.ExecuteUbergraph_UI_HotBarRadialMenu");
		
		UUI_HotBarRadialMenu_C_ExecuteUbergraph_UI_HotBarRadialMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HotBarRadialMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HotBarRadialMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HotBarRadialMenu.UI_HotBarRadialMenu_C");
		return ptr;
	}

}


