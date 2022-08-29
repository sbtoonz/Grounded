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
	 * 		Name   -> Function BQ_KillUnique.BQ_KillUnique_C.GetTitle
	 * 		Flags  -> ()
	 */
	class FString UBQ_KillUnique_C::GetTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_KillUnique.BQ_KillUnique_C.GetTitle");
		
		UBQ_KillUnique_C_GetTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_KillUnique.BQ_KillUnique_C.GetScienceReward
	 * 		Flags  -> ()
	 */
	int32_t UBQ_KillUnique_C::GetScienceReward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_KillUnique.BQ_KillUnique_C.GetScienceReward");
		
		UBQ_KillUnique_C_GetScienceReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_KillUnique.BQ_KillUnique_C.GetObjectiveText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ObjectiveIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UBQ_KillUnique_C::GetObjectiveText(int32_t ObjectiveIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_KillUnique.BQ_KillUnique_C.GetObjectiveText");
		
		UBQ_KillUnique_C_GetObjectiveText_Params params {};
		params.ObjectiveIndex = ObjectiveIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_KillUnique.BQ_KillUnique_C.GetDescriptionText
	 * 		Flags  -> ()
	 */
	class FString UBQ_KillUnique_C::GetDescriptionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_KillUnique.BQ_KillUnique_C.GetDescriptionText");
		
		UBQ_KillUnique_C_GetDescriptionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_KillUnique.BQ_KillUnique_C.InitializeStarted
	 * 		Flags  -> ()
	 */
	void UBQ_KillUnique_C::InitializeStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_KillUnique.BQ_KillUnique_C.InitializeStarted");
		
		UBQ_KillUnique_C_InitializeStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_KillUnique.BQ_KillUnique_C.On Option Completed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABurgleQuestKillUniqueOptionActor*           Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBQ_KillUnique_C::On_Option_Completed(class ABurgleQuestKillUniqueOptionActor* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_KillUnique.BQ_KillUnique_C.On Option Completed");
		
		UBQ_KillUnique_C_On_Option_Completed_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_KillUnique.BQ_KillUnique_C.CleanUpQuest
	 * 		Flags  -> ()
	 */
	void UBQ_KillUnique_C::CleanUpQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_KillUnique.BQ_KillUnique_C.CleanUpQuest");
		
		UBQ_KillUnique_C_CleanUpQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_KillUnique.BQ_KillUnique_C.GenerateParameters
	 * 		Flags  -> ()
	 */
	void UBQ_KillUnique_C::GenerateParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_KillUnique.BQ_KillUnique_C.GenerateParameters");
		
		UBQ_KillUnique_C_GenerateParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_KillUnique.BQ_KillUnique_C.ExecuteUbergraph_BQ_KillUnique
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBQ_KillUnique_C::ExecuteUbergraph_BQ_KillUnique(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_KillUnique.BQ_KillUnique_C.ExecuteUbergraph_BQ_KillUnique");
		
		UBQ_KillUnique_C_ExecuteUbergraph_BQ_KillUnique_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBQ_KillUnique_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBQ_KillUnique_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BQ_KillUnique.BQ_KillUnique_C");
		return ptr;
	}

}


