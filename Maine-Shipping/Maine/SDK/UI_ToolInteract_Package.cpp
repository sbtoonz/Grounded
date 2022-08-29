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
	 * 		Name   -> Function UI_ToolInteract.UI_ToolInteract_C.SetTool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RequiredDamageTypeFlags                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAttackResolutionType                              AttackResolution                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ToolInteract_C::SetTool(int32_t RequiredDamageTypeFlags, EAttackResolutionType AttackResolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ToolInteract.UI_ToolInteract_C.SetTool");
		
		UUI_ToolInteract_C_SetTool_Params params {};
		params.RequiredDamageTypeFlags = RequiredDamageTypeFlags;
		params.AttackResolution = AttackResolution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ToolInteract.UI_ToolInteract_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ToolInteract_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ToolInteract.UI_ToolInteract_C.OnGlobalColorChange");
		
		UUI_ToolInteract_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ToolInteract.UI_ToolInteract_C.ExecuteUbergraph_UI_ToolInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ToolInteract_C::ExecuteUbergraph_UI_ToolInteract(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ToolInteract.UI_ToolInteract_C.ExecuteUbergraph_UI_ToolInteract");
		
		UUI_ToolInteract_C_ExecuteUbergraph_UI_ToolInteract_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ToolInteract_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ToolInteract_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ToolInteract.UI_ToolInteract_C");
		return ptr;
	}

}


