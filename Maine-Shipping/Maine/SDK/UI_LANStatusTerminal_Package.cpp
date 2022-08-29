﻿/**
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
	 * 		Name   -> Function UI_LANStatusTerminal.UI_LANStatusTerminal_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_LANStatusTerminal_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LANStatusTerminal.UI_LANStatusTerminal_C.Construct");
		
		UUI_LANStatusTerminal_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LANStatusTerminal.UI_LANStatusTerminal_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_LANStatusTerminal_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LANStatusTerminal.UI_LANStatusTerminal_C.OnGlobalColorChange");
		
		UUI_LANStatusTerminal_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LANStatusTerminal.UI_LANStatusTerminal_C.ExecuteUbergraph_UI_LANStatusTerminal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LANStatusTerminal_C::ExecuteUbergraph_UI_LANStatusTerminal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LANStatusTerminal.UI_LANStatusTerminal_C.ExecuteUbergraph_UI_LANStatusTerminal");
		
		UUI_LANStatusTerminal_C_ExecuteUbergraph_UI_LANStatusTerminal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LANStatusTerminal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LANStatusTerminal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LANStatusTerminal.UI_LANStatusTerminal_C");
		return ptr;
	}

}

