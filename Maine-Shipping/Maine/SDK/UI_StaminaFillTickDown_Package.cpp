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
	 * 		Name   -> Function UI_StaminaFillTickDown.UI_StaminaFillTickDown_C.GetAttention
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_StaminaFillTickDown_C::GetAttention()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StaminaFillTickDown.UI_StaminaFillTickDown_C.GetAttention");
		
		UUI_StaminaFillTickDown_C_GetAttention_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StaminaFillTickDown.UI_StaminaFillTickDown_C.UpdateStaminaAnim
	 * 		Flags  -> ()
	 */
	void UUI_StaminaFillTickDown_C::UpdateStaminaAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StaminaFillTickDown.UI_StaminaFillTickDown_C.UpdateStaminaAnim");
		
		UUI_StaminaFillTickDown_C_UpdateStaminaAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StaminaFillTickDown.UI_StaminaFillTickDown_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_StaminaFillTickDown_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StaminaFillTickDown.UI_StaminaFillTickDown_C.OnGlobalColorChange");
		
		UUI_StaminaFillTickDown_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StaminaFillTickDown.UI_StaminaFillTickDown_C.HandleFillAnim
	 * 		Flags  -> ()
	 */
	void UUI_StaminaFillTickDown_C::HandleFillAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StaminaFillTickDown.UI_StaminaFillTickDown_C.HandleFillAnim");
		
		UUI_StaminaFillTickDown_C_HandleFillAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StaminaFillTickDown.UI_StaminaFillTickDown_C.RefreshColor
	 * 		Flags  -> ()
	 */
	void UUI_StaminaFillTickDown_C::RefreshColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StaminaFillTickDown.UI_StaminaFillTickDown_C.RefreshColor");
		
		UUI_StaminaFillTickDown_C_RefreshColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StaminaFillTickDown.UI_StaminaFillTickDown_C.ExecuteUbergraph_UI_StaminaFillTickDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StaminaFillTickDown_C::ExecuteUbergraph_UI_StaminaFillTickDown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StaminaFillTickDown.UI_StaminaFillTickDown_C.ExecuteUbergraph_UI_StaminaFillTickDown");
		
		UUI_StaminaFillTickDown_C_ExecuteUbergraph_UI_StaminaFillTickDown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_StaminaFillTickDown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_StaminaFillTickDown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_StaminaFillTickDown.UI_StaminaFillTickDown_C");
		return ptr;
	}

}


