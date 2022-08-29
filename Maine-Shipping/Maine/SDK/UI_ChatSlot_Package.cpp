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
	 * 		Name   -> Function UI_ChatSlot.UI_ChatSlot_C.GetNarration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNarrationChunk>                     Chunks                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bVerbose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ChatSlot_C::GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatSlot.UI_ChatSlot_C.GetNarration");
		
		UUI_ChatSlot_C_GetNarration_Params params {};
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
	 * 		Name   -> Function UI_ChatSlot.UI_ChatSlot_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ChatSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatSlot.UI_ChatSlot_C.Construct");
		
		UUI_ChatSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatSlot.UI_ChatSlot_C.SetIconBrush
	 * 		Flags  -> ()
	 */
	void UUI_ChatSlot_C::SetIconBrush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatSlot.UI_ChatSlot_C.SetIconBrush");
		
		UUI_ChatSlot_C_SetIconBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatSlot.UI_ChatSlot_C.SetDataRowHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         DataRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_ChatSlot_C::SetDataRowHandle(const struct FDataTableRowHandle& DataRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatSlot.UI_ChatSlot_C.SetDataRowHandle");
		
		UUI_ChatSlot_C_SetDataRowHandle_Params params {};
		params.DataRowHandle = DataRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ChatSlot.UI_ChatSlot_C.ExecuteUbergraph_UI_ChatSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ChatSlot_C::ExecuteUbergraph_UI_ChatSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ChatSlot.UI_ChatSlot_C.ExecuteUbergraph_UI_ChatSlot");
		
		UUI_ChatSlot_C_ExecuteUbergraph_UI_ChatSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ChatSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ChatSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ChatSlot.UI_ChatSlot_C");
		return ptr;
	}

}


