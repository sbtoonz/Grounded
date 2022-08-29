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
	 * 		Name   -> Function UI_RestQuery.UI_RestQuery_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_RestQuery_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RestQuery.UI_RestQuery_C.Construct");
		
		UUI_RestQuery_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RestQuery.UI_RestQuery_C.EventOnPartyRestChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ASurvivalPlayerCharacter*>            RestingPlayers                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_RestQuery_C::EventOnPartyRestChanged(TArray<class ASurvivalPlayerCharacter*> RestingPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RestQuery.UI_RestQuery_C.EventOnPartyRestChanged");
		
		UUI_RestQuery_C_EventOnPartyRestChanged_Params params {};
		params.RestingPlayers = RestingPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RestQuery.UI_RestQuery_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_RestQuery_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RestQuery.UI_RestQuery_C.OnGlobalColorChange");
		
		UUI_RestQuery_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RestQuery.UI_RestQuery_C.ExecuteUbergraph_UI_RestQuery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RestQuery_C::ExecuteUbergraph_UI_RestQuery(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RestQuery.UI_RestQuery_C.ExecuteUbergraph_UI_RestQuery");
		
		UUI_RestQuery_C_ExecuteUbergraph_UI_RestQuery_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RestQuery_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RestQuery_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RestQuery.UI_RestQuery_C");
		return ptr;
	}

}


