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
	 * 		Name   -> Function UI_PowerGridTerminal.UI_PowerGridTerminal_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_PowerGridTerminal_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PowerGridTerminal.UI_PowerGridTerminal_C.Construct");
		
		UUI_PowerGridTerminal_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PowerGridTerminal.UI_PowerGridTerminal_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_PowerGridTerminal_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PowerGridTerminal.UI_PowerGridTerminal_C.OnGlobalColorChange");
		
		UUI_PowerGridTerminal_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PowerGridTerminal.UI_PowerGridTerminal_C.ExecuteUbergraph_UI_PowerGridTerminal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PowerGridTerminal_C::ExecuteUbergraph_UI_PowerGridTerminal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PowerGridTerminal.UI_PowerGridTerminal_C.ExecuteUbergraph_UI_PowerGridTerminal");
		
		UUI_PowerGridTerminal_C_ExecuteUbergraph_UI_PowerGridTerminal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PowerGridTerminal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PowerGridTerminal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PowerGridTerminal.UI_PowerGridTerminal_C");
		return ptr;
	}

}


