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
	 * 		Name   -> Function UI_InvFoodFill.UI_InvFoodFill_C.UpdateHungerAnim
	 * 		Flags  -> ()
	 */
	void UUI_InvFoodFill_C::UpdateHungerAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InvFoodFill.UI_InvFoodFill_C.UpdateHungerAnim");
		
		UUI_InvFoodFill_C_UpdateHungerAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InvFoodFill.UI_InvFoodFill_C.HandleFillAnim
	 * 		Flags  -> ()
	 */
	void UUI_InvFoodFill_C::HandleFillAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InvFoodFill.UI_InvFoodFill_C.HandleFillAnim");
		
		UUI_InvFoodFill_C_HandleFillAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InvFoodFill.UI_InvFoodFill_C.ExecuteUbergraph_UI_InvFoodFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InvFoodFill_C::ExecuteUbergraph_UI_InvFoodFill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InvFoodFill.UI_InvFoodFill_C.ExecuteUbergraph_UI_InvFoodFill");
		
		UUI_InvFoodFill_C_ExecuteUbergraph_UI_InvFoodFill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_InvFoodFill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_InvFoodFill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InvFoodFill.UI_InvFoodFill_C");
		return ptr;
	}

}


