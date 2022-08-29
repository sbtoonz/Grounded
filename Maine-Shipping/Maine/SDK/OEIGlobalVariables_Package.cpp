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
	 * 		Name   -> PredefinedFunction UGlobalVariableBundle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalVariableBundle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIGlobalVariables.GlobalVariableBundle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIGlobalVariables.GlobalVariableConditionals.IsGlobalValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       Variable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EComparisonOperator                                Operator                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGlobalVariableConditionals::IsGlobalValue(const struct FGuid& Variable, EComparisonOperator Operator, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIGlobalVariables.GlobalVariableConditionals.IsGlobalValue");
		
		UGlobalVariableConditionals_IsGlobalValue_Params params {};
		params.Variable = Variable;
		params.Operator = Operator;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIGlobalVariables.GlobalVariableConditionals.CompareGlobals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       Variable1                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EComparisonOperator                                Operator                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       Variable2                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGlobalVariableConditionals::CompareGlobals(const struct FGuid& Variable1, EComparisonOperator Operator, const struct FGuid& Variable2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIGlobalVariables.GlobalVariableConditionals.CompareGlobals");
		
		UGlobalVariableConditionals_CompareGlobals_Params params {};
		params.Variable1 = Variable1;
		params.Operator = Operator;
		params.Variable2 = Variable2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalVariableConditionals.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalVariableConditionals::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIGlobalVariables.GlobalVariableConditionals");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIGlobalVariables.GlobalVariableConditionalsBP.IsGlobalValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       Variable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EComparisonOperator                                Operator                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBoolResult                                        OutResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGlobalVariableConditionalsBP::IsGlobalValue(const struct FGuid& Variable, EComparisonOperator Operator, int32_t Value, EBoolResult* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIGlobalVariables.GlobalVariableConditionalsBP.IsGlobalValue");
		
		UGlobalVariableConditionalsBP_IsGlobalValue_Params params {};
		params.Variable = Variable;
		params.Operator = Operator;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIGlobalVariables.GlobalVariableConditionalsBP.CompareGlobals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       Variable1                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EComparisonOperator                                Operator                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       Variable2                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBoolResult                                        OutResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGlobalVariableConditionalsBP::CompareGlobals(const struct FGuid& Variable1, EComparisonOperator Operator, const struct FGuid& Variable2, EBoolResult* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIGlobalVariables.GlobalVariableConditionalsBP.CompareGlobals");
		
		UGlobalVariableConditionalsBP_CompareGlobals_Params params {};
		params.Variable1 = Variable1;
		params.Operator = Operator;
		params.Variable2 = Variable2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalVariableConditionalsBP.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalVariableConditionalsBP::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIGlobalVariables.GlobalVariableConditionalsBP");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetGlobalValueEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetGlobalValueEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIGlobalVariables.SetGlobalValueEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetGlobalIfGlobalEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetGlobalIfGlobalEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIGlobalVariables.SetGlobalIfGlobalEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIncrementGlobalValueEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIncrementGlobalValueEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIGlobalVariables.IncrementGlobalValueEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URandomizeGlobalValueEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URandomizeGlobalValueEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIGlobalVariables.RandomizeGlobalValueEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIGlobalVariables.GlobalVariableScripts.SetGlobalValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       Variable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGlobalVariableScripts::SetGlobalValue(const struct FGuid& Variable, int32_t Value, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIGlobalVariables.GlobalVariableScripts.SetGlobalValue");
		
		UGlobalVariableScripts_SetGlobalValue_Params params {};
		params.Variable = Variable;
		params.Value = Value;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIGlobalVariables.GlobalVariableScripts.SetGlobalIfGlobal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ConditionVariable                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConditionValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       Variable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGlobalVariableScripts::SetGlobalIfGlobal(const struct FGuid& ConditionVariable, int32_t ConditionValue, const struct FGuid& Variable, int32_t Value, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIGlobalVariables.GlobalVariableScripts.SetGlobalIfGlobal");
		
		UGlobalVariableScripts_SetGlobalIfGlobal_Params params {};
		params.ConditionVariable = ConditionVariable;
		params.ConditionValue = ConditionValue;
		params.Variable = Variable;
		params.Value = Value;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIGlobalVariables.GlobalVariableScripts.RandomizeGlobalValueWithGlobals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       Variable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       MinValueGlobal                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       MaxValueGlobal                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGlobalVariableScripts::RandomizeGlobalValueWithGlobals(const struct FGuid& Variable, const struct FGuid& MinValueGlobal, const struct FGuid& MaxValueGlobal, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIGlobalVariables.GlobalVariableScripts.RandomizeGlobalValueWithGlobals");
		
		UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Params params {};
		params.Variable = Variable;
		params.MinValueGlobal = MinValueGlobal;
		params.MaxValueGlobal = MaxValueGlobal;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIGlobalVariables.GlobalVariableScripts.RandomizeGlobalValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       Variable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGlobalVariableScripts::RandomizeGlobalValue(const struct FGuid& Variable, int32_t MinValue, int32_t MaxValue, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIGlobalVariables.GlobalVariableScripts.RandomizeGlobalValue");
		
		UGlobalVariableScripts_RandomizeGlobalValue_Params params {};
		params.Variable = Variable;
		params.MinValue = MinValue;
		params.MaxValue = MaxValue;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIGlobalVariables.GlobalVariableScripts.IncrementGlobalValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       Variable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IncrementValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGlobalVariableScripts::IncrementGlobalValue(const struct FGuid& Variable, int32_t IncrementValue, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIGlobalVariables.GlobalVariableScripts.IncrementGlobalValue");
		
		UGlobalVariableScripts_IncrementGlobalValue_Params params {};
		params.Variable = Variable;
		params.IncrementValue = IncrementValue;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalVariableScripts.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalVariableScripts::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIGlobalVariables.GlobalVariableScripts");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIGlobalVariables.OEIGlobalVariableLibrary.MakeGlobalVariableReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGlobalVariableReference UOEIGlobalVariableLibrary::MakeGlobalVariableReference(const struct FGuid& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIGlobalVariables.OEIGlobalVariableLibrary.MakeGlobalVariableReference");
		
		UOEIGlobalVariableLibrary_MakeGlobalVariableReference_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OEIGlobalVariables.OEIGlobalVariableLibrary.GetGlobalVariableID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGlobalVariableReference                    Variable                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UOEIGlobalVariableLibrary::GetGlobalVariableID(const struct FGlobalVariableReference& Variable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OEIGlobalVariables.OEIGlobalVariableLibrary.GetGlobalVariableID");
		
		UOEIGlobalVariableLibrary_GetGlobalVariableID_Params params {};
		params.Variable = Variable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIGlobalVariableLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIGlobalVariableLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIGlobalVariables.OEIGlobalVariableLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIGlobalVariableSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIGlobalVariableSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIGlobalVariables.OEIGlobalVariableSettings");
		return ptr;
	}

}


