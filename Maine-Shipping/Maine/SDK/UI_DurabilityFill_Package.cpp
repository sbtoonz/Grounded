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
	 * 		Name   -> Function UI_DurabilityFill.UI_DurabilityFill_C.UpdateBarFillColor
	 * 		Flags  -> ()
	 */
	void UUI_DurabilityFill_C::UpdateBarFillColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DurabilityFill.UI_DurabilityFill_C.UpdateBarFillColor");
		
		UUI_DurabilityFill_C_UpdateBarFillColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DurabilityFill.UI_DurabilityFill_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_DurabilityFill_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DurabilityFill.UI_DurabilityFill_C.Construct");
		
		UUI_DurabilityFill_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DurabilityFill.UI_DurabilityFill_C.SetDurabilityValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DurabilityFill_C::SetDurabilityValue(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DurabilityFill.UI_DurabilityFill_C.SetDurabilityValue");
		
		UUI_DurabilityFill_C_SetDurabilityValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DurabilityFill.UI_DurabilityFill_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_DurabilityFill_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DurabilityFill.UI_DurabilityFill_C.OnGlobalColorChange");
		
		UUI_DurabilityFill_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DurabilityFill.UI_DurabilityFill_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_DurabilityFill_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DurabilityFill.UI_DurabilityFill_C.Destruct");
		
		UUI_DurabilityFill_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DurabilityFill.UI_DurabilityFill_C.ExecuteUbergraph_UI_DurabilityFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DurabilityFill_C::ExecuteUbergraph_UI_DurabilityFill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DurabilityFill.UI_DurabilityFill_C.ExecuteUbergraph_UI_DurabilityFill");
		
		UUI_DurabilityFill_C_ExecuteUbergraph_UI_DurabilityFill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_DurabilityFill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_DurabilityFill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_DurabilityFill.UI_DurabilityFill_C");
		return ptr;
	}

}


