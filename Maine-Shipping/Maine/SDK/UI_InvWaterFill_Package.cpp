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
	 * 		Name   -> Function UI_InvWaterFill.UI_InvWaterFill_C.UpdateThirstAnim
	 * 		Flags  -> ()
	 */
	void UUI_InvWaterFill_C::UpdateThirstAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InvWaterFill.UI_InvWaterFill_C.UpdateThirstAnim");
		
		UUI_InvWaterFill_C_UpdateThirstAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InvWaterFill.UI_InvWaterFill_C.HandleAnimFill
	 * 		Flags  -> ()
	 */
	void UUI_InvWaterFill_C::HandleAnimFill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InvWaterFill.UI_InvWaterFill_C.HandleAnimFill");
		
		UUI_InvWaterFill_C_HandleAnimFill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InvWaterFill.UI_InvWaterFill_C.ExecuteUbergraph_UI_InvWaterFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InvWaterFill_C::ExecuteUbergraph_UI_InvWaterFill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InvWaterFill.UI_InvWaterFill_C.ExecuteUbergraph_UI_InvWaterFill");
		
		UUI_InvWaterFill_C_ExecuteUbergraph_UI_InvWaterFill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_InvWaterFill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_InvWaterFill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InvWaterFill.UI_InvWaterFill_C");
		return ptr;
	}

}


