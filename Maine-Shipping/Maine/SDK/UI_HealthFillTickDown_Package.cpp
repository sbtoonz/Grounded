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
	 * 		Name   -> Function UI_HealthFillTickDown.UI_HealthFillTickDown_C.GetFillColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HealthFillTickDown_C::GetFillColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HealthFillTickDown.UI_HealthFillTickDown_C.GetFillColor");
		
		UUI_HealthFillTickDown_C_GetFillColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HealthFillTickDown.UI_HealthFillTickDown_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_HealthFillTickDown_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HealthFillTickDown.UI_HealthFillTickDown_C.OnGlobalColorChange");
		
		UUI_HealthFillTickDown_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HealthFillTickDown.UI_HealthFillTickDown_C.UpdateHealthAnim
	 * 		Flags  -> ()
	 */
	void UUI_HealthFillTickDown_C::UpdateHealthAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HealthFillTickDown.UI_HealthFillTickDown_C.UpdateHealthAnim");
		
		UUI_HealthFillTickDown_C_UpdateHealthAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HealthFillTickDown.UI_HealthFillTickDown_C.HandleHealthAnim
	 * 		Flags  -> ()
	 */
	void UUI_HealthFillTickDown_C::HandleHealthAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HealthFillTickDown.UI_HealthFillTickDown_C.HandleHealthAnim");
		
		UUI_HealthFillTickDown_C_HandleHealthAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HealthFillTickDown.UI_HealthFillTickDown_C.RefreshColor
	 * 		Flags  -> ()
	 */
	void UUI_HealthFillTickDown_C::RefreshColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HealthFillTickDown.UI_HealthFillTickDown_C.RefreshColor");
		
		UUI_HealthFillTickDown_C_RefreshColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HealthFillTickDown.UI_HealthFillTickDown_C.ExecuteUbergraph_UI_HealthFillTickDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HealthFillTickDown_C::ExecuteUbergraph_UI_HealthFillTickDown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HealthFillTickDown.UI_HealthFillTickDown_C.ExecuteUbergraph_UI_HealthFillTickDown");
		
		UUI_HealthFillTickDown_C_ExecuteUbergraph_UI_HealthFillTickDown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HealthFillTickDown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HealthFillTickDown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HealthFillTickDown.UI_HealthFillTickDown_C");
		return ptr;
	}

}


