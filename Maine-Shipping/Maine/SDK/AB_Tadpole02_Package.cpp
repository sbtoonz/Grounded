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
	 * 		Name   -> Function AB_Tadpole02.AB_Tadpole02_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Tadpole02_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Tadpole02.AB_Tadpole02_C.AnimGraph");
		
		UAB_Tadpole02_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Tadpole02.AB_Tadpole02_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Tadpole02_AnimGraphNode_TransitionResult_34841FB5426105A23AA2FBB8928902FF
	 * 		Flags  -> ()
	 */
	void UAB_Tadpole02_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Tadpole02_AnimGraphNode_TransitionResult_34841FB5426105A23AA2FBB8928902FF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Tadpole02.AB_Tadpole02_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Tadpole02_AnimGraphNode_TransitionResult_34841FB5426105A23AA2FBB8928902FF");
		
		UAB_Tadpole02_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Tadpole02_AnimGraphNode_TransitionResult_34841FB5426105A23AA2FBB8928902FF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Tadpole02.AB_Tadpole02_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Tadpole02_AnimGraphNode_TransitionResult_84AD42CE491E9AACDB57C2AF962C3F11
	 * 		Flags  -> ()
	 */
	void UAB_Tadpole02_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Tadpole02_AnimGraphNode_TransitionResult_84AD42CE491E9AACDB57C2AF962C3F11()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Tadpole02.AB_Tadpole02_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Tadpole02_AnimGraphNode_TransitionResult_84AD42CE491E9AACDB57C2AF962C3F11");
		
		UAB_Tadpole02_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Tadpole02_AnimGraphNode_TransitionResult_84AD42CE491E9AACDB57C2AF962C3F11_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Tadpole02.AB_Tadpole02_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Tadpole02_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Tadpole02.AB_Tadpole02_C.BlueprintUpdateAnimation");
		
		UAB_Tadpole02_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Tadpole02.AB_Tadpole02_C.ExecuteUbergraph_AB_Tadpole02
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Tadpole02_C::ExecuteUbergraph_AB_Tadpole02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Tadpole02.AB_Tadpole02_C.ExecuteUbergraph_AB_Tadpole02");
		
		UAB_Tadpole02_C_ExecuteUbergraph_AB_Tadpole02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_Tadpole02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Tadpole02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Tadpole02.AB_Tadpole02_C");
		return ptr;
	}

}


