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
	 * 		Name   -> Function UI_HealthFill.UI_HealthFill_C.GetHealthColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HealthFill_C::GetHealthColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HealthFill.UI_HealthFill_C.GetHealthColor");
		
		UUI_HealthFill_C_GetHealthColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HealthFill.UI_HealthFill_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_HealthFill_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HealthFill.UI_HealthFill_C.OnGlobalColorChange");
		
		UUI_HealthFill_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HealthFill.UI_HealthFill_C.UpdateHealthAnim
	 * 		Flags  -> ()
	 */
	void UUI_HealthFill_C::UpdateHealthAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HealthFill.UI_HealthFill_C.UpdateHealthAnim");
		
		UUI_HealthFill_C_UpdateHealthAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HealthFill.UI_HealthFill_C.HandleAnimTick
	 * 		Flags  -> ()
	 */
	void UUI_HealthFill_C::HandleAnimTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HealthFill.UI_HealthFill_C.HandleAnimTick");
		
		UUI_HealthFill_C_HandleAnimTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HealthFill.UI_HealthFill_C.ExecuteUbergraph_UI_HealthFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HealthFill_C::ExecuteUbergraph_UI_HealthFill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HealthFill.UI_HealthFill_C.ExecuteUbergraph_UI_HealthFill");
		
		UUI_HealthFill_C_ExecuteUbergraph_UI_HealthFill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HealthFill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HealthFill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HealthFill.UI_HealthFill_C");
		return ptr;
	}

}


