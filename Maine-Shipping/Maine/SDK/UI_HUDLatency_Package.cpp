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
	 * 		Name   -> Function UI_HUDLatency.UI_HUDLatency_C.GetPingLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PingValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUI_PingLevel                                      PingLevel                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDLatency_C::GetPingLevel(int32_t PingValue, EUI_PingLevel* PingLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDLatency.UI_HUDLatency_C.GetPingLevel");
		
		UUI_HUDLatency_C_GetPingLevel_Params params {};
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
	 * 		Name   -> Function UI_HUDLatency.UI_HUDLatency_C.OnPingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Ping                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDLatency_C::OnPingChanged(int32_t Ping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDLatency.UI_HUDLatency_C.OnPingChanged");
		
		UUI_HUDLatency_C_OnPingChanged_Params params {};
		params.Ping = Ping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDLatency.UI_HUDLatency_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_HUDLatency_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDLatency.UI_HUDLatency_C.OnGlobalColorChange");
		
		UUI_HUDLatency_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDLatency.UI_HUDLatency_C.ExecuteUbergraph_UI_HUDLatency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDLatency_C::ExecuteUbergraph_UI_HUDLatency(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDLatency.UI_HUDLatency_C.ExecuteUbergraph_UI_HUDLatency");
		
		UUI_HUDLatency_C_ExecuteUbergraph_UI_HUDLatency_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUDLatency_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUDLatency_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDLatency.UI_HUDLatency_C");
		return ptr;
	}

}


