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
	 * 		Name   -> Function AB_Bombardier.AB_Bombardier_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Bombardier_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Bombardier.AB_Bombardier_C.AnimGraph");
		
		UAB_Bombardier_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Bombardier.AB_Bombardier_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bombardier_AnimGraphNode_TransitionResult_AC40BDC04053F6D48F58C49A7459064B
	 * 		Flags  -> ()
	 */
	void UAB_Bombardier_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bombardier_AnimGraphNode_TransitionResult_AC40BDC04053F6D48F58C49A7459064B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Bombardier.AB_Bombardier_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bombardier_AnimGraphNode_TransitionResult_AC40BDC04053F6D48F58C49A7459064B");
		
		UAB_Bombardier_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bombardier_AnimGraphNode_TransitionResult_AC40BDC04053F6D48F58C49A7459064B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Bombardier.AB_Bombardier_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bombardier_AnimGraphNode_TransitionResult_16D2A728480DE9FC35F3B8BC95C4531A
	 * 		Flags  -> ()
	 */
	void UAB_Bombardier_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bombardier_AnimGraphNode_TransitionResult_16D2A728480DE9FC35F3B8BC95C4531A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Bombardier.AB_Bombardier_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bombardier_AnimGraphNode_TransitionResult_16D2A728480DE9FC35F3B8BC95C4531A");
		
		UAB_Bombardier_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bombardier_AnimGraphNode_TransitionResult_16D2A728480DE9FC35F3B8BC95C4531A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Bombardier.AB_Bombardier_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bombardier_AnimGraphNode_TransitionResult_115A0DB7418C0E3EB0E1D7BBFF41EE81
	 * 		Flags  -> ()
	 */
	void UAB_Bombardier_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bombardier_AnimGraphNode_TransitionResult_115A0DB7418C0E3EB0E1D7BBFF41EE81()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Bombardier.AB_Bombardier_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bombardier_AnimGraphNode_TransitionResult_115A0DB7418C0E3EB0E1D7BBFF41EE81");
		
		UAB_Bombardier_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bombardier_AnimGraphNode_TransitionResult_115A0DB7418C0E3EB0E1D7BBFF41EE81_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Bombardier.AB_Bombardier_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bombardier_AnimGraphNode_TransitionResult_A5C6FD374F254B49DBDD57ABAF322488
	 * 		Flags  -> ()
	 */
	void UAB_Bombardier_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bombardier_AnimGraphNode_TransitionResult_A5C6FD374F254B49DBDD57ABAF322488()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Bombardier.AB_Bombardier_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bombardier_AnimGraphNode_TransitionResult_A5C6FD374F254B49DBDD57ABAF322488");
		
		UAB_Bombardier_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bombardier_AnimGraphNode_TransitionResult_A5C6FD374F254B49DBDD57ABAF322488_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Bombardier.AB_Bombardier_C.ExecuteUbergraph_AB_Bombardier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Bombardier_C::ExecuteUbergraph_AB_Bombardier(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Bombardier.AB_Bombardier_C.ExecuteUbergraph_AB_Bombardier");
		
		UAB_Bombardier_C_ExecuteUbergraph_AB_Bombardier_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_Bombardier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Bombardier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Bombardier.AB_Bombardier_C");
		return ptr;
	}

}


