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
	 * 		Name   -> Function BQ_MarkPoint.BQ_MarkPoint_C.Format String Helper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLocString                                  Format                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void UBQ_MarkPoint_C::Format_String_Helper(const struct FLocString& Format, class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_MarkPoint.BQ_MarkPoint_C.Format String Helper");
		
		UBQ_MarkPoint_C_Format_String_Helper_Params params {};
		params.Format = Format;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_MarkPoint.BQ_MarkPoint_C.GetScienceReward
	 * 		Flags  -> ()
	 */
	int32_t UBQ_MarkPoint_C::GetScienceReward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_MarkPoint.BQ_MarkPoint_C.GetScienceReward");
		
		UBQ_MarkPoint_C_GetScienceReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_MarkPoint.BQ_MarkPoint_C.GetDescriptionText
	 * 		Flags  -> ()
	 */
	class FString UBQ_MarkPoint_C::GetDescriptionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_MarkPoint.BQ_MarkPoint_C.GetDescriptionText");
		
		UBQ_MarkPoint_C_GetDescriptionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_MarkPoint.BQ_MarkPoint_C.GetObjectiveText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ObjectiveIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UBQ_MarkPoint_C::GetObjectiveText(int32_t ObjectiveIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_MarkPoint.BQ_MarkPoint_C.GetObjectiveText");
		
		UBQ_MarkPoint_C_GetObjectiveText_Params params {};
		params.ObjectiveIndex = ObjectiveIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_MarkPoint.BQ_MarkPoint_C.GetTitle
	 * 		Flags  -> ()
	 */
	class FString UBQ_MarkPoint_C::GetTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_MarkPoint.BQ_MarkPoint_C.GetTitle");
		
		UBQ_MarkPoint_C_GetTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_MarkPoint.BQ_MarkPoint_C.NotifyQuestStart
	 * 		Flags  -> ()
	 */
	void UBQ_MarkPoint_C::NotifyQuestStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_MarkPoint.BQ_MarkPoint_C.NotifyQuestStart");
		
		UBQ_MarkPoint_C_NotifyQuestStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_MarkPoint.BQ_MarkPoint_C.InitializeStarted
	 * 		Flags  -> ()
	 */
	void UBQ_MarkPoint_C::InitializeStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_MarkPoint.BQ_MarkPoint_C.InitializeStarted");
		
		UBQ_MarkPoint_C_InitializeStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_MarkPoint.BQ_MarkPoint_C.On Designated Building State Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBuildingState                                     NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBQ_MarkPoint_C::On_Designated_Building_State_Changed(class AActor* InInstigator, EBuildingState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_MarkPoint.BQ_MarkPoint_C.On Designated Building State Changed");
		
		UBQ_MarkPoint_C_On_Designated_Building_State_Changed_Params params {};
		params.InInstigator = InInstigator;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_MarkPoint.BQ_MarkPoint_C.CleanUpQuest
	 * 		Flags  -> ()
	 */
	void UBQ_MarkPoint_C::CleanUpQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_MarkPoint.BQ_MarkPoint_C.CleanUpQuest");
		
		UBQ_MarkPoint_C_CleanUpQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_MarkPoint.BQ_MarkPoint_C.GenerateParameters
	 * 		Flags  -> ()
	 */
	void UBQ_MarkPoint_C::GenerateParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_MarkPoint.BQ_MarkPoint_C.GenerateParameters");
		
		UBQ_MarkPoint_C_GenerateParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_MarkPoint.BQ_MarkPoint_C.ExecuteUbergraph_BQ_MarkPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBQ_MarkPoint_C::ExecuteUbergraph_BQ_MarkPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_MarkPoint.BQ_MarkPoint_C.ExecuteUbergraph_BQ_MarkPoint");
		
		UBQ_MarkPoint_C_ExecuteUbergraph_BQ_MarkPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBQ_MarkPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBQ_MarkPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BQ_MarkPoint.BQ_MarkPoint_C");
		return ptr;
	}

}


