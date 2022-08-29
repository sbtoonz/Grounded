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
	 * 		Name   -> Function UI_GlobalCooldownBar.UI_GlobalCooldownBar_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_GlobalCooldownBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GlobalCooldownBar.UI_GlobalCooldownBar_C.Construct");
		
		UUI_GlobalCooldownBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GlobalCooldownBar.UI_GlobalCooldownBar_C.CooldownEndAnimEvent
	 * 		Flags  -> ()
	 */
	void UUI_GlobalCooldownBar_C::CooldownEndAnimEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GlobalCooldownBar.UI_GlobalCooldownBar_C.CooldownEndAnimEvent");
		
		UUI_GlobalCooldownBar_C_CooldownEndAnimEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GlobalCooldownBar.UI_GlobalCooldownBar_C.CooldownBeginAnimEvent
	 * 		Flags  -> ()
	 */
	void UUI_GlobalCooldownBar_C::CooldownBeginAnimEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GlobalCooldownBar.UI_GlobalCooldownBar_C.CooldownBeginAnimEvent");
		
		UUI_GlobalCooldownBar_C_CooldownBeginAnimEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GlobalCooldownBar.UI_GlobalCooldownBar_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_GlobalCooldownBar_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GlobalCooldownBar.UI_GlobalCooldownBar_C.OnGlobalColorChange");
		
		UUI_GlobalCooldownBar_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GlobalCooldownBar.UI_GlobalCooldownBar_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_GlobalCooldownBar_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GlobalCooldownBar.UI_GlobalCooldownBar_C.Destruct");
		
		UUI_GlobalCooldownBar_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GlobalCooldownBar.UI_GlobalCooldownBar_C.ExecuteUbergraph_UI_GlobalCooldownBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GlobalCooldownBar_C::ExecuteUbergraph_UI_GlobalCooldownBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GlobalCooldownBar.UI_GlobalCooldownBar_C.ExecuteUbergraph_UI_GlobalCooldownBar");
		
		UUI_GlobalCooldownBar_C_ExecuteUbergraph_UI_GlobalCooldownBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GlobalCooldownBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GlobalCooldownBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GlobalCooldownBar.UI_GlobalCooldownBar_C");
		return ptr;
	}

}


