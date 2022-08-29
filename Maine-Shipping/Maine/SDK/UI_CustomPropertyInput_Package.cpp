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
	 * 		Name   -> Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.SetCheckboxStyles
	 * 		Flags  -> ()
	 */
	void UUI_CustomPropertyInput_C::SetCheckboxStyles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.SetCheckboxStyles");
		
		UUI_CustomPropertyInput_C_SetCheckboxStyles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.SetSliderStyles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnableChangeEvent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomPropertyInput_C::SetSliderStyles(bool IsEnableChangeEvent, bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.SetSliderStyles");
		
		UUI_CustomPropertyInput_C_SetSliderStyles_Params params {};
		params.IsEnableChangeEvent = IsEnableChangeEvent;
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.SetDropdownStyles
	 * 		Flags  -> ()
	 */
	void UUI_CustomPropertyInput_C::SetDropdownStyles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.SetDropdownStyles");
		
		UUI_CustomPropertyInput_C_SetDropdownStyles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.SetInputStyles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECustomPropertyInputType                           InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomPropertyInput_C::SetInputStyles(ECustomPropertyInputType InputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.SetInputStyles");
		
		UUI_CustomPropertyInput_C_SetInputStyles_Params params {};
		params.InputType = InputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.OnEnabledChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomPropertyInput_C::OnEnabledChanged(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.OnEnabledChanged");
		
		UUI_CustomPropertyInput_C_OnEnabledChanged_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.ExecuteUbergraph_UI_CustomPropertyInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomPropertyInput_C::ExecuteUbergraph_UI_CustomPropertyInput(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomPropertyInput.UI_CustomPropertyInput_C.ExecuteUbergraph_UI_CustomPropertyInput");
		
		UUI_CustomPropertyInput_C_ExecuteUbergraph_UI_CustomPropertyInput_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CustomPropertyInput_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomPropertyInput_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CustomPropertyInput.UI_CustomPropertyInput_C");
		return ptr;
	}

}


