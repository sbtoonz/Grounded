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
	 * 		Name   -> Function AB_Firefly01.AB_Firefly01_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Firefly01_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Firefly01.AB_Firefly01_C.AnimGraph");
		
		UAB_Firefly01_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Firefly01.AB_Firefly01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Firefly01_AnimGraphNode_PowerIK_Ground_3A6ED3ED45BB2BD5C3726AAD2D925D88
	 * 		Flags  -> ()
	 */
	void UAB_Firefly01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Firefly01_AnimGraphNode_PowerIK_Ground_3A6ED3ED45BB2BD5C3726AAD2D925D88()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Firefly01.AB_Firefly01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Firefly01_AnimGraphNode_PowerIK_Ground_3A6ED3ED45BB2BD5C3726AAD2D925D88");
		
		UAB_Firefly01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Firefly01_AnimGraphNode_PowerIK_Ground_3A6ED3ED45BB2BD5C3726AAD2D925D88_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Firefly01.AB_Firefly01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Firefly01_AnimGraphNode_TransitionResult_9D7B25D04FD217FD31E185B393C5A335
	 * 		Flags  -> ()
	 */
	void UAB_Firefly01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Firefly01_AnimGraphNode_TransitionResult_9D7B25D04FD217FD31E185B393C5A335()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Firefly01.AB_Firefly01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Firefly01_AnimGraphNode_TransitionResult_9D7B25D04FD217FD31E185B393C5A335");
		
		UAB_Firefly01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Firefly01_AnimGraphNode_TransitionResult_9D7B25D04FD217FD31E185B393C5A335_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Firefly01.AB_Firefly01_C.ExecuteUbergraph_AB_Firefly01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Firefly01_C::ExecuteUbergraph_AB_Firefly01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Firefly01.AB_Firefly01_C.ExecuteUbergraph_AB_Firefly01");
		
		UAB_Firefly01_C_ExecuteUbergraph_AB_Firefly01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_Firefly01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Firefly01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Firefly01.AB_Firefly01_C");
		return ptr;
	}

}


