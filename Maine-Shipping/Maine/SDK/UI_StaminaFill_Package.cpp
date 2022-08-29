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
	 * 		Name   -> Function UI_StaminaFill.UI_StaminaFill_C.GetStaminaColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_StaminaFill_C::GetStaminaColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StaminaFill.UI_StaminaFill_C.GetStaminaColor");
		
		UUI_StaminaFill_C_GetStaminaColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StaminaFill.UI_StaminaFill_C.UpdateStaminaAnim
	 * 		Flags  -> ()
	 */
	void UUI_StaminaFill_C::UpdateStaminaAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StaminaFill.UI_StaminaFill_C.UpdateStaminaAnim");
		
		UUI_StaminaFill_C_UpdateStaminaAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StaminaFill.UI_StaminaFill_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_StaminaFill_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StaminaFill.UI_StaminaFill_C.OnGlobalColorChange");
		
		UUI_StaminaFill_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StaminaFill.UI_StaminaFill_C.HandleAnimFill
	 * 		Flags  -> ()
	 */
	void UUI_StaminaFill_C::HandleAnimFill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StaminaFill.UI_StaminaFill_C.HandleAnimFill");
		
		UUI_StaminaFill_C_HandleAnimFill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StaminaFill.UI_StaminaFill_C.ExecuteUbergraph_UI_StaminaFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StaminaFill_C::ExecuteUbergraph_UI_StaminaFill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StaminaFill.UI_StaminaFill_C.ExecuteUbergraph_UI_StaminaFill");
		
		UUI_StaminaFill_C_ExecuteUbergraph_UI_StaminaFill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_StaminaFill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_StaminaFill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_StaminaFill.UI_StaminaFill_C");
		return ptr;
	}

}


