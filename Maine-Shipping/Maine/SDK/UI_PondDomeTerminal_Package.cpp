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
	 * 		Name   -> Function UI_PondDomeTerminal.UI_PondDomeTerminal_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_PondDomeTerminal_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PondDomeTerminal.UI_PondDomeTerminal_C.Construct");
		
		UUI_PondDomeTerminal_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PondDomeTerminal.UI_PondDomeTerminal_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_PondDomeTerminal_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PondDomeTerminal.UI_PondDomeTerminal_C.OnGlobalColorChange");
		
		UUI_PondDomeTerminal_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PondDomeTerminal.UI_PondDomeTerminal_C.ExecuteUbergraph_UI_PondDomeTerminal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PondDomeTerminal_C::ExecuteUbergraph_UI_PondDomeTerminal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PondDomeTerminal.UI_PondDomeTerminal_C.ExecuteUbergraph_UI_PondDomeTerminal");
		
		UUI_PondDomeTerminal_C_ExecuteUbergraph_UI_PondDomeTerminal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PondDomeTerminal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PondDomeTerminal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PondDomeTerminal.UI_PondDomeTerminal_C");
		return ptr;
	}

}


