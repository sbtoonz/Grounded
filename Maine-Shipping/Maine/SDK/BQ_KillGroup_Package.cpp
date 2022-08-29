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
	 * 		Name   -> Function BQ_KillGroup.BQ_KillGroup_C.GetCreatureNameHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBQ_KillGroup_C::GetCreatureNameHelper(class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_KillGroup.BQ_KillGroup_C.GetCreatureNameHelper");
		
		UBQ_KillGroup_C_GetCreatureNameHelper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_KillGroup.BQ_KillGroup_C.GetScienceReward
	 * 		Flags  -> ()
	 */
	int32_t UBQ_KillGroup_C::GetScienceReward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_KillGroup.BQ_KillGroup_C.GetScienceReward");
		
		UBQ_KillGroup_C_GetScienceReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_KillGroup.BQ_KillGroup_C.GetObjectiveText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ObjectiveIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UBQ_KillGroup_C::GetObjectiveText(int32_t ObjectiveIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_KillGroup.BQ_KillGroup_C.GetObjectiveText");
		
		UBQ_KillGroup_C_GetObjectiveText_Params params {};
		params.ObjectiveIndex = ObjectiveIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_KillGroup.BQ_KillGroup_C.GetDescriptionText
	 * 		Flags  -> ()
	 */
	class FString UBQ_KillGroup_C::GetDescriptionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_KillGroup.BQ_KillGroup_C.GetDescriptionText");
		
		UBQ_KillGroup_C_GetDescriptionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_KillGroup.BQ_KillGroup_C.GetTitle
	 * 		Flags  -> ()
	 */
	class FString UBQ_KillGroup_C::GetTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_KillGroup.BQ_KillGroup_C.GetTitle");
		
		UBQ_KillGroup_C_GetTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBQ_KillGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBQ_KillGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BQ_KillGroup.BQ_KillGroup_C");
		return ptr;
	}

}


