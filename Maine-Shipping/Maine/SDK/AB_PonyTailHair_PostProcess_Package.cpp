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
	 * 		Name   -> Function AB_PonyTailHair_PostProcess.AB_PonyTailHair_PostProcess_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_PonyTailHair_PostProcess_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PonyTailHair_PostProcess.AB_PonyTailHair_PostProcess_C.AnimGraph");
		
		UAB_PonyTailHair_PostProcess_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PonyTailHair_PostProcess.AB_PonyTailHair_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PonyTailHair_PostProcess_AnimGraphNode_RigidBody_D085880E4BD4EABB16D3DF8CC49DFAD6
	 * 		Flags  -> ()
	 */
	void UAB_PonyTailHair_PostProcess_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PonyTailHair_PostProcess_AnimGraphNode_RigidBody_D085880E4BD4EABB16D3DF8CC49DFAD6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PonyTailHair_PostProcess.AB_PonyTailHair_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PonyTailHair_PostProcess_AnimGraphNode_RigidBody_D085880E4BD4EABB16D3DF8CC49DFAD6");
		
		UAB_PonyTailHair_PostProcess_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PonyTailHair_PostProcess_AnimGraphNode_RigidBody_D085880E4BD4EABB16D3DF8CC49DFAD6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PonyTailHair_PostProcess.AB_PonyTailHair_PostProcess_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void UAB_PonyTailHair_PostProcess_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PonyTailHair_PostProcess.AB_PonyTailHair_PostProcess_C.BlueprintInitializeAnimation");
		
		UAB_PonyTailHair_PostProcess_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PonyTailHair_PostProcess.AB_PonyTailHair_PostProcess_C.ExecuteUbergraph_AB_PonyTailHair_PostProcess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PonyTailHair_PostProcess_C::ExecuteUbergraph_AB_PonyTailHair_PostProcess(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PonyTailHair_PostProcess.AB_PonyTailHair_PostProcess_C.ExecuteUbergraph_AB_PonyTailHair_PostProcess");
		
		UAB_PonyTailHair_PostProcess_C_ExecuteUbergraph_AB_PonyTailHair_PostProcess_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_PonyTailHair_PostProcess_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_PonyTailHair_PostProcess_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_PonyTailHair_PostProcess.AB_PonyTailHair_PostProcess_C");
		return ptr;
	}

}


