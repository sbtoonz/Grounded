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
	 * 		Name   -> Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.HasAnyEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_AppliedStatusEffects_C::HasAnyEntries(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.HasAnyEntries");
		
		UUI_AppliedStatusEffects_C_HasAnyEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.CollectAndDisplayStatusEffects
	 * 		Flags  -> ()
	 */
	void UUI_AppliedStatusEffects_C::CollectAndDisplayStatusEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.CollectAndDisplayStatusEffects");
		
		UUI_AppliedStatusEffects_C_CollectAndDisplayStatusEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_AppliedStatusEffects_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.Construct");
		
		UUI_AppliedStatusEffects_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.OnEquipmentChanged
	 * 		Flags  -> ()
	 */
	void UUI_AppliedStatusEffects_C::OnEquipmentChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.OnEquipmentChanged");
		
		UUI_AppliedStatusEffects_C_OnEquipmentChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_AppliedStatusEffects_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.Destruct");
		
		UUI_AppliedStatusEffects_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_AppliedStatusEffects_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.OnGlobalColorChange");
		
		UUI_AppliedStatusEffects_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.ExecuteUbergraph_UI_AppliedStatusEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AppliedStatusEffects_C::ExecuteUbergraph_UI_AppliedStatusEffects(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.ExecuteUbergraph_UI_AppliedStatusEffects");
		
		UUI_AppliedStatusEffects_C_ExecuteUbergraph_UI_AppliedStatusEffects_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_AppliedStatusEffects_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_AppliedStatusEffects_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_AppliedStatusEffects.UI_AppliedStatusEffects_C");
		return ptr;
	}

}


