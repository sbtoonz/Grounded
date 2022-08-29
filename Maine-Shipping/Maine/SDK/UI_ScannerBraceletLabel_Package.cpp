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
	 * 		Name   -> Function UI_ScannerBraceletLabel.UI_ScannerBraceletLabel_C.GetNarration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNarrationChunk>                     Chunks                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bVerbose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ScannerBraceletLabel_C::GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScannerBraceletLabel.UI_ScannerBraceletLabel_C.GetNarration");
		
		UUI_ScannerBraceletLabel_C_GetNarration_Params params {};
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
	 * 		Name   -> Function UI_ScannerBraceletLabel.UI_ScannerBraceletLabel_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ScannerBraceletLabel_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScannerBraceletLabel.UI_ScannerBraceletLabel_C.OnGlobalColorChange");
		
		UUI_ScannerBraceletLabel_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScannerBraceletLabel.UI_ScannerBraceletLabel_C.ExecuteUbergraph_UI_ScannerBraceletLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScannerBraceletLabel_C::ExecuteUbergraph_UI_ScannerBraceletLabel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScannerBraceletLabel.UI_ScannerBraceletLabel_C.ExecuteUbergraph_UI_ScannerBraceletLabel");
		
		UUI_ScannerBraceletLabel_C_ExecuteUbergraph_UI_ScannerBraceletLabel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ScannerBraceletLabel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ScannerBraceletLabel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ScannerBraceletLabel.UI_ScannerBraceletLabel_C");
		return ptr;
	}

}


