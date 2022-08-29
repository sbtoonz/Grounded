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
	 * 		Name   -> Function UI_InventoryStatusEffects.UI_InventoryStatusEffects_C.GetNarration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNarrationChunk>                     Chunks                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bVerbose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InventoryStatusEffects_C::GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryStatusEffects.UI_InventoryStatusEffects_C.GetNarration");
		
		UUI_InventoryStatusEffects_C_GetNarration_Params params {};
		params.bVerbose = bVerbose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Chunks != nullptr)
			*Chunks = params.Chunks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryStatusEffects.UI_InventoryStatusEffects_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_InventoryStatusEffects_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryStatusEffects.UI_InventoryStatusEffects_C.Construct");
		
		UUI_InventoryStatusEffects_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryStatusEffects.UI_InventoryStatusEffects_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_InventoryStatusEffects_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryStatusEffects.UI_InventoryStatusEffects_C.OnGlobalColorChange");
		
		UUI_InventoryStatusEffects_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InventoryStatusEffects.UI_InventoryStatusEffects_C.ExecuteUbergraph_UI_InventoryStatusEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InventoryStatusEffects_C::ExecuteUbergraph_UI_InventoryStatusEffects(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InventoryStatusEffects.UI_InventoryStatusEffects_C.ExecuteUbergraph_UI_InventoryStatusEffects");
		
		UUI_InventoryStatusEffects_C_ExecuteUbergraph_UI_InventoryStatusEffects_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_InventoryStatusEffects_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_InventoryStatusEffects_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InventoryStatusEffects.UI_InventoryStatusEffects_C");
		return ptr;
	}

}


