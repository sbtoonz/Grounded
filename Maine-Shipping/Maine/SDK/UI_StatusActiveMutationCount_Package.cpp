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
	 * 		Name   -> Function UI_StatusActiveMutationCount.UI_StatusActiveMutationCount_C.GetNarration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNarrationChunk>                     Chunks                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bVerbose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StatusActiveMutationCount_C::GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusActiveMutationCount.UI_StatusActiveMutationCount_C.GetNarration");
		
		UUI_StatusActiveMutationCount_C_GetNarration_Params params {};
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
	 * 		Name   -> Function UI_StatusActiveMutationCount.UI_StatusActiveMutationCount_C.SetCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusActiveMutationCount_C::SetCount(int32_t Active, int32_t Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusActiveMutationCount.UI_StatusActiveMutationCount_C.SetCount");
		
		UUI_StatusActiveMutationCount_C_SetCount_Params params {};
		params.Active = Active;
		params.Max = Max;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusActiveMutationCount.UI_StatusActiveMutationCount_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_StatusActiveMutationCount_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusActiveMutationCount.UI_StatusActiveMutationCount_C.OnGlobalColorChange");
		
		UUI_StatusActiveMutationCount_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusActiveMutationCount.UI_StatusActiveMutationCount_C.ExecuteUbergraph_UI_StatusActiveMutationCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusActiveMutationCount_C::ExecuteUbergraph_UI_StatusActiveMutationCount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusActiveMutationCount.UI_StatusActiveMutationCount_C.ExecuteUbergraph_UI_StatusActiveMutationCount");
		
		UUI_StatusActiveMutationCount_C_ExecuteUbergraph_UI_StatusActiveMutationCount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_StatusActiveMutationCount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_StatusActiveMutationCount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_StatusActiveMutationCount.UI_StatusActiveMutationCount_C");
		return ptr;
	}

}


