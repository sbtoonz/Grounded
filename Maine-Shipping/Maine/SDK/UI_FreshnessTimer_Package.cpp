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
	 * 		Name   -> Function UI_FreshnessTimer.UI_FreshnessTimer_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_FreshnessTimer_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FreshnessTimer.UI_FreshnessTimer_C.OnGlobalColorChange");
		
		UUI_FreshnessTimer_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_FreshnessTimer.UI_FreshnessTimer_C.ExecuteUbergraph_UI_FreshnessTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_FreshnessTimer_C::ExecuteUbergraph_UI_FreshnessTimer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FreshnessTimer.UI_FreshnessTimer_C.ExecuteUbergraph_UI_FreshnessTimer");
		
		UUI_FreshnessTimer_C_ExecuteUbergraph_UI_FreshnessTimer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_FreshnessTimer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_FreshnessTimer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_FreshnessTimer.UI_FreshnessTimer_C");
		return ptr;
	}

}


