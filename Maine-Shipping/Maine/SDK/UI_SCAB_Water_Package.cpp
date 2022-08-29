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
	 * 		Name   -> Function UI_SCAB_Water.UI_SCAB_Water_C.GetWarningColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_SCAB_Water_C::GetWarningColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB_Water.UI_SCAB_Water_C.GetWarningColor");
		
		UUI_SCAB_Water_C_GetWarningColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB_Water.UI_SCAB_Water_C.GetWaterColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_SCAB_Water_C::GetWaterColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB_Water.UI_SCAB_Water_C.GetWaterColor");
		
		UUI_SCAB_Water_C_GetWaterColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB_Water.UI_SCAB_Water_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_Water_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB_Water.UI_SCAB_Water_C.OnGlobalColorChange");
		
		UUI_SCAB_Water_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB_Water.UI_SCAB_Water_C.ExecuteUbergraph_UI_SCAB_Water
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_Water_C::ExecuteUbergraph_UI_SCAB_Water(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB_Water.UI_SCAB_Water_C.ExecuteUbergraph_UI_SCAB_Water");
		
		UUI_SCAB_Water_C_ExecuteUbergraph_UI_SCAB_Water_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SCAB_Water_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SCAB_Water_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SCAB_Water.UI_SCAB_Water_C");
		return ptr;
	}

}


