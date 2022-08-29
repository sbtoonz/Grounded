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
	 * 		Name   -> Function UI_ConnectionWarning.UI_ConnectionWarning_C.GetHUDPingLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PingValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUI_PingLevel                                      PingLevel                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ConnectionWarning_C::GetHUDPingLevel(int32_t PingValue, EUI_PingLevel* PingLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConnectionWarning.UI_ConnectionWarning_C.GetHUDPingLevel");
		
		UUI_ConnectionWarning_C_GetHUDPingLevel_Params params {};
		params.PingValue = PingValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PingLevel != nullptr)
			*PingLevel = params.PingLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConnectionWarning.UI_ConnectionWarning_C.OnPingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Ping                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ConnectionWarning_C::OnPingChanged(int32_t Ping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConnectionWarning.UI_ConnectionWarning_C.OnPingChanged");
		
		UUI_ConnectionWarning_C_OnPingChanged_Params params {};
		params.Ping = Ping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConnectionWarning.UI_ConnectionWarning_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ConnectionWarning_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConnectionWarning.UI_ConnectionWarning_C.OnGlobalColorChange");
		
		UUI_ConnectionWarning_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConnectionWarning.UI_ConnectionWarning_C.ExecuteUbergraph_UI_ConnectionWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ConnectionWarning_C::ExecuteUbergraph_UI_ConnectionWarning(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConnectionWarning.UI_ConnectionWarning_C.ExecuteUbergraph_UI_ConnectionWarning");
		
		UUI_ConnectionWarning_C_ExecuteUbergraph_UI_ConnectionWarning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ConnectionWarning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ConnectionWarning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ConnectionWarning.UI_ConnectionWarning_C");
		return ptr;
	}

}


