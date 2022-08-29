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
	 * 		Name   -> Function UI_InvHealthFill.UI_InvHealthFill_C.UpdateHealthAnim
	 * 		Flags  -> ()
	 */
	void UUI_InvHealthFill_C::UpdateHealthAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InvHealthFill.UI_InvHealthFill_C.UpdateHealthAnim");
		
		UUI_InvHealthFill_C_UpdateHealthAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InvHealthFill.UI_InvHealthFill_C.HandleHealthAnim
	 * 		Flags  -> ()
	 */
	void UUI_InvHealthFill_C::HandleHealthAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InvHealthFill.UI_InvHealthFill_C.HandleHealthAnim");
		
		UUI_InvHealthFill_C_HandleHealthAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InvHealthFill.UI_InvHealthFill_C.ExecuteUbergraph_UI_InvHealthFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InvHealthFill_C::ExecuteUbergraph_UI_InvHealthFill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InvHealthFill.UI_InvHealthFill_C.ExecuteUbergraph_UI_InvHealthFill");
		
		UUI_InvHealthFill_C_ExecuteUbergraph_UI_InvHealthFill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_InvHealthFill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_InvHealthFill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InvHealthFill.UI_InvHealthFill_C");
		return ptr;
	}

}


