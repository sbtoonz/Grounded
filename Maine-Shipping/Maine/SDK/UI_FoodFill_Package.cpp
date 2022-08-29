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
	 * 		Name   -> Function UI_FoodFill.UI_FoodFill_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_FoodFill_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FoodFill.UI_FoodFill_C.Construct");
		
		UUI_FoodFill_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FoodFill.UI_FoodFill_C.UpdateHungerAnim
	 * 		Flags  -> ()
	 */
	void UUI_FoodFill_C::UpdateHungerAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FoodFill.UI_FoodFill_C.UpdateHungerAnim");
		
		UUI_FoodFill_C_UpdateHungerAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FoodFill.UI_FoodFill_C.HandleFillAnim
	 * 		Flags  -> ()
	 */
	void UUI_FoodFill_C::HandleFillAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FoodFill.UI_FoodFill_C.HandleFillAnim");
		
		UUI_FoodFill_C_HandleFillAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FoodFill.UI_FoodFill_C.ExecuteUbergraph_UI_FoodFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_FoodFill_C::ExecuteUbergraph_UI_FoodFill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FoodFill.UI_FoodFill_C.ExecuteUbergraph_UI_FoodFill");
		
		UUI_FoodFill_C_ExecuteUbergraph_UI_FoodFill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_FoodFill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_FoodFill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_FoodFill.UI_FoodFill_C");
		return ptr;
	}

}


