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
	 * 		Name   -> Function UI_InvStaminaFill.UI_InvStaminaFill_C.UpdateStaminaAnim
	 * 		Flags  -> ()
	 */
	void UUI_InvStaminaFill_C::UpdateStaminaAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InvStaminaFill.UI_InvStaminaFill_C.UpdateStaminaAnim");
		
		UUI_InvStaminaFill_C_UpdateStaminaAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InvStaminaFill.UI_InvStaminaFill_C.HandleAnimFill
	 * 		Flags  -> ()
	 */
	void UUI_InvStaminaFill_C::HandleAnimFill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InvStaminaFill.UI_InvStaminaFill_C.HandleAnimFill");
		
		UUI_InvStaminaFill_C_HandleAnimFill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InvStaminaFill.UI_InvStaminaFill_C.ExecuteUbergraph_UI_InvStaminaFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InvStaminaFill_C::ExecuteUbergraph_UI_InvStaminaFill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InvStaminaFill.UI_InvStaminaFill_C.ExecuteUbergraph_UI_InvStaminaFill");
		
		UUI_InvStaminaFill_C_ExecuteUbergraph_UI_InvStaminaFill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_InvStaminaFill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_InvStaminaFill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InvStaminaFill.UI_InvStaminaFill_C");
		return ptr;
	}

}


