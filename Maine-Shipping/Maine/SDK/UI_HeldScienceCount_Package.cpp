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
	 * 		Name   -> Function UI_HeldScienceCount.UI_HeldScienceCount_C.GetNarration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNarrationChunk>                     Chunks                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bVerbose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HeldScienceCount_C::GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HeldScienceCount.UI_HeldScienceCount_C.GetNarration");
		
		UUI_HeldScienceCount_C_GetNarration_Params params {};
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
	 * 		Name   -> Function UI_HeldScienceCount.UI_HeldScienceCount_C.OnPossessedPlayerChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    NewPlayerCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HeldScienceCount_C::OnPossessedPlayerChange(class ASurvivalPlayerCharacter* NewPlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HeldScienceCount.UI_HeldScienceCount_C.OnPossessedPlayerChange");
		
		UUI_HeldScienceCount_C_OnPossessedPlayerChange_Params params {};
		params.NewPlayerCharacter = NewPlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HeldScienceCount.UI_HeldScienceCount_C.On Science Found Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ScienceAdded                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalScience                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HeldScienceCount_C::On_Science_Found_Changed(int32_t ScienceAdded, int32_t TotalScience)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HeldScienceCount.UI_HeldScienceCount_C.On Science Found Changed");
		
		UUI_HeldScienceCount_C_On_Science_Found_Changed_Params params {};
		params.ScienceAdded = ScienceAdded;
		params.TotalScience = TotalScience;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HeldScienceCount.UI_HeldScienceCount_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_HeldScienceCount_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HeldScienceCount.UI_HeldScienceCount_C.OnGlobalColorChange");
		
		UUI_HeldScienceCount_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HeldScienceCount.UI_HeldScienceCount_C.ExecuteUbergraph_UI_HeldScienceCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HeldScienceCount_C::ExecuteUbergraph_UI_HeldScienceCount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HeldScienceCount.UI_HeldScienceCount_C.ExecuteUbergraph_UI_HeldScienceCount");
		
		UUI_HeldScienceCount_C_ExecuteUbergraph_UI_HeldScienceCount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HeldScienceCount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HeldScienceCount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HeldScienceCount.UI_HeldScienceCount_C");
		return ptr;
	}

}


