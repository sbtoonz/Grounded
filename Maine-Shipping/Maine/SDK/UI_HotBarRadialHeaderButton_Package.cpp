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
	 * 		Name   -> Function UI_HotBarRadialHeaderButton.UI_HotBarRadialHeaderButton_C.GetTitleTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_HotBarRadialHeaderButton_C::GetTitleTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarRadialHeaderButton.UI_HotBarRadialHeaderButton_C.GetTitleTextColor");
		
		UUI_HotBarRadialHeaderButton_C_GetTitleTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarRadialHeaderButton.UI_HotBarRadialHeaderButton_C.GetCategoryColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HotBarRadialHeaderButton_C::GetCategoryColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarRadialHeaderButton.UI_HotBarRadialHeaderButton_C.GetCategoryColor");
		
		UUI_HotBarRadialHeaderButton_C_GetCategoryColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarRadialHeaderButton.UI_HotBarRadialHeaderButton_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PageCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_HotBarRadialHeaderButton_C::SetData(int32_t CategoryIndex, int32_t PageCount, const class FText& CategoryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarRadialHeaderButton.UI_HotBarRadialHeaderButton_C.SetData");
		
		UUI_HotBarRadialHeaderButton_C_SetData_Params params {};
		params.CategoryIndex = CategoryIndex;
		params.PageCount = PageCount;
		params.CategoryName = CategoryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarRadialHeaderButton.UI_HotBarRadialHeaderButton_C.ExecuteUbergraph_UI_HotBarRadialHeaderButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBarRadialHeaderButton_C::ExecuteUbergraph_UI_HotBarRadialHeaderButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarRadialHeaderButton.UI_HotBarRadialHeaderButton_C.ExecuteUbergraph_UI_HotBarRadialHeaderButton");
		
		UUI_HotBarRadialHeaderButton_C_ExecuteUbergraph_UI_HotBarRadialHeaderButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HotBarRadialHeaderButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HotBarRadialHeaderButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HotBarRadialHeaderButton.UI_HotBarRadialHeaderButton_C");
		return ptr;
	}

}


