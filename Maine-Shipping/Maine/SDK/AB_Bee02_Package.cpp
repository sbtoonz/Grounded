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
	 * 		Name   -> Function AB_Bee02.AB_Bee02_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Bee02_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Bee02.AB_Bee02_C.AnimGraph");
		
		UAB_Bee02_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Bee02.AB_Bee02_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bee02_AnimGraphNode_TransitionResult_B5B118FB4BDAD426AD8B27BD81287716
	 * 		Flags  -> ()
	 */
	void UAB_Bee02_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bee02_AnimGraphNode_TransitionResult_B5B118FB4BDAD426AD8B27BD81287716()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Bee02.AB_Bee02_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bee02_AnimGraphNode_TransitionResult_B5B118FB4BDAD426AD8B27BD81287716");
		
		UAB_Bee02_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bee02_AnimGraphNode_TransitionResult_B5B118FB4BDAD426AD8B27BD81287716_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Bee02.AB_Bee02_C.ExecuteUbergraph_AB_Bee02
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Bee02_C::ExecuteUbergraph_AB_Bee02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Bee02.AB_Bee02_C.ExecuteUbergraph_AB_Bee02");
		
		UAB_Bee02_C_ExecuteUbergraph_AB_Bee02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_Bee02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Bee02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Bee02.AB_Bee02_C");
		return ptr;
	}

}


