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
	 * 		Name   -> Function UI_StopSitPrompt.UI_StopSitPrompt_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_StopSitPrompt_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StopSitPrompt.UI_StopSitPrompt_C.OnGlobalColorChange");
		
		UUI_StopSitPrompt_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StopSitPrompt.UI_StopSitPrompt_C.ExecuteUbergraph_UI_StopSitPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StopSitPrompt_C::ExecuteUbergraph_UI_StopSitPrompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StopSitPrompt.UI_StopSitPrompt_C.ExecuteUbergraph_UI_StopSitPrompt");
		
		UUI_StopSitPrompt_C_ExecuteUbergraph_UI_StopSitPrompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_StopSitPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_StopSitPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_StopSitPrompt.UI_StopSitPrompt_C");
		return ptr;
	}

}


