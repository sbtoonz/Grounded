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
	 * 		Name   -> Function UI_FoodTickFill.UI_FoodTickFill_C.Get_FoodFill_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_FoodTickFill_C::Get_FoodFill_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FoodTickFill.UI_FoodTickFill_C.Get_FoodFill_ColorAndOpacity_1");
		
		UUI_FoodTickFill_C_Get_FoodFill_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FoodTickFill.UI_FoodTickFill_C.UpdateHungerAnim
	 * 		Flags  -> ()
	 */
	void UUI_FoodTickFill_C::UpdateHungerAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FoodTickFill.UI_FoodTickFill_C.UpdateHungerAnim");
		
		UUI_FoodTickFill_C_UpdateHungerAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FoodTickFill.UI_FoodTickFill_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_FoodTickFill_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FoodTickFill.UI_FoodTickFill_C.OnGlobalColorChange");
		
		UUI_FoodTickFill_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FoodTickFill.UI_FoodTickFill_C.HandleFillAnim
	 * 		Flags  -> ()
	 */
	void UUI_FoodTickFill_C::HandleFillAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FoodTickFill.UI_FoodTickFill_C.HandleFillAnim");
		
		UUI_FoodTickFill_C_HandleFillAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FoodTickFill.UI_FoodTickFill_C.RefreshColor
	 * 		Flags  -> ()
	 */
	void UUI_FoodTickFill_C::RefreshColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FoodTickFill.UI_FoodTickFill_C.RefreshColor");
		
		UUI_FoodTickFill_C_RefreshColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FoodTickFill.UI_FoodTickFill_C.SetFoodDecreased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Decreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_FoodTickFill_C::SetFoodDecreased(bool Decreased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FoodTickFill.UI_FoodTickFill_C.SetFoodDecreased");
		
		UUI_FoodTickFill_C_SetFoodDecreased_Params params {};
		params.Decreased = Decreased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FoodTickFill.UI_FoodTickFill_C.ExecuteUbergraph_UI_FoodTickFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_FoodTickFill_C::ExecuteUbergraph_UI_FoodTickFill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FoodTickFill.UI_FoodTickFill_C.ExecuteUbergraph_UI_FoodTickFill");
		
		UUI_FoodTickFill_C_ExecuteUbergraph_UI_FoodTickFill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_FoodTickFill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_FoodTickFill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_FoodTickFill.UI_FoodTickFill_C");
		return ptr;
	}

}


