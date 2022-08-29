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
	 * 		Name   -> Function UI_DropPrompt.UI_DropPrompt_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_DropPrompt_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DropPrompt.UI_DropPrompt_C.OnGlobalColorChange");
		
		UUI_DropPrompt_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DropPrompt.UI_DropPrompt_C.ExecuteUbergraph_UI_DropPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DropPrompt_C::ExecuteUbergraph_UI_DropPrompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DropPrompt.UI_DropPrompt_C.ExecuteUbergraph_UI_DropPrompt");
		
		UUI_DropPrompt_C_ExecuteUbergraph_UI_DropPrompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_DropPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_DropPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_DropPrompt.UI_DropPrompt_C");
		return ptr;
	}

}


