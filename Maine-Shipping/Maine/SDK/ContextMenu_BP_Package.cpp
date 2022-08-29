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
	 * 		Name   -> Function ContextMenu_BP.ContextMenu_BP_C.OverrideBadTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UContextMenu_BP_C::OverrideBadTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenu_BP.ContextMenu_BP_C.OverrideBadTooltip");
		
		UContextMenu_BP_C_OverrideBadTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenu_BP.ContextMenu_BP_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UContextMenu_BP_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenu_BP.ContextMenu_BP_C.OnGlobalColorChange");
		
		UContextMenu_BP_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenu_BP.ContextMenu_BP_C.OnUsingGamepadChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnUsingGamepadChanged                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UContextMenu_BP_C::OnUsingGamepadChanged(bool bOnUsingGamepadChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenu_BP.ContextMenu_BP_C.OnUsingGamepadChanged");
		
		UContextMenu_BP_C_OnUsingGamepadChanged_Params params {};
		params.bOnUsingGamepadChanged = bOnUsingGamepadChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenu_BP.ContextMenu_BP_C.Construct
	 * 		Flags  -> ()
	 */
	void UContextMenu_BP_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenu_BP.ContextMenu_BP_C.Construct");
		
		UContextMenu_BP_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenu_BP.ContextMenu_BP_C.ExecuteUbergraph_ContextMenu_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContextMenu_BP_C::ExecuteUbergraph_ContextMenu_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenu_BP.ContextMenu_BP_C.ExecuteUbergraph_ContextMenu_BP");
		
		UContextMenu_BP_C_ExecuteUbergraph_ContextMenu_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContextMenu_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextMenu_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContextMenu_BP.ContextMenu_BP_C");
		return ptr;
	}

}


