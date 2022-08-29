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
	 * 		Name   -> Function UI_BuildingRadialHeaderButton.UI_BuildingRadialHeaderButton_C.SetBrushFromCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                CurrentCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingRadialHeaderButton_C::SetBrushFromCategory(const struct FGameplayTag& CurrentCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialHeaderButton.UI_BuildingRadialHeaderButton_C.SetBrushFromCategory");
		
		UUI_BuildingRadialHeaderButton_C_SetBrushFromCategory_Params params {};
		params.CurrentCategory = CurrentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialHeaderButton.UI_BuildingRadialHeaderButton_C.GetCategoryColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BuildingRadialHeaderButton_C::GetCategoryColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialHeaderButton.UI_BuildingRadialHeaderButton_C.GetCategoryColor");
		
		UUI_BuildingRadialHeaderButton_C_GetCategoryColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialHeaderButton.UI_BuildingRadialHeaderButton_C.SetCategoryBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingRadialHeaderButton_C::SetCategoryBrush(const struct FGameplayTag& Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialHeaderButton.UI_BuildingRadialHeaderButton_C.SetCategoryBrush");
		
		UUI_BuildingRadialHeaderButton_C_SetCategoryBrush_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingRadialHeaderButton.UI_BuildingRadialHeaderButton_C.ExecuteUbergraph_UI_BuildingRadialHeaderButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingRadialHeaderButton_C::ExecuteUbergraph_UI_BuildingRadialHeaderButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingRadialHeaderButton.UI_BuildingRadialHeaderButton_C.ExecuteUbergraph_UI_BuildingRadialHeaderButton");
		
		UUI_BuildingRadialHeaderButton_C_ExecuteUbergraph_UI_BuildingRadialHeaderButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BuildingRadialHeaderButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BuildingRadialHeaderButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BuildingRadialHeaderButton.UI_BuildingRadialHeaderButton_C");
		return ptr;
	}

}


