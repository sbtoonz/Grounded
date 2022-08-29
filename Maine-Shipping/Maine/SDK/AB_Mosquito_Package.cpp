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
	 * 		Name   -> Function AB_Mosquito.AB_Mosquito_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Mosquito_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Mosquito.AB_Mosquito_C.AnimGraph");
		
		UAB_Mosquito_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Mosquito.AB_Mosquito_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Mosquito_AnimGraphNode_PowerIK_Ground_24DE53C448C0435E5E418DB2C33CB62C
	 * 		Flags  -> ()
	 */
	void UAB_Mosquito_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Mosquito_AnimGraphNode_PowerIK_Ground_24DE53C448C0435E5E418DB2C33CB62C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Mosquito.AB_Mosquito_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Mosquito_AnimGraphNode_PowerIK_Ground_24DE53C448C0435E5E418DB2C33CB62C");
		
		UAB_Mosquito_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Mosquito_AnimGraphNode_PowerIK_Ground_24DE53C448C0435E5E418DB2C33CB62C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Mosquito.AB_Mosquito_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Mosquito_AnimGraphNode_TransitionResult_A0F7A8C14DE3FE7853F5199037401D8B
	 * 		Flags  -> ()
	 */
	void UAB_Mosquito_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Mosquito_AnimGraphNode_TransitionResult_A0F7A8C14DE3FE7853F5199037401D8B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Mosquito.AB_Mosquito_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Mosquito_AnimGraphNode_TransitionResult_A0F7A8C14DE3FE7853F5199037401D8B");
		
		UAB_Mosquito_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Mosquito_AnimGraphNode_TransitionResult_A0F7A8C14DE3FE7853F5199037401D8B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Mosquito.AB_Mosquito_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Mosquito_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Mosquito.AB_Mosquito_C.BlueprintUpdateAnimation");
		
		UAB_Mosquito_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Mosquito.AB_Mosquito_C.ExecuteUbergraph_AB_Mosquito
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Mosquito_C::ExecuteUbergraph_AB_Mosquito(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Mosquito.AB_Mosquito_C.ExecuteUbergraph_AB_Mosquito");
		
		UAB_Mosquito_C_ExecuteUbergraph_AB_Mosquito_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_Mosquito_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Mosquito_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Mosquito.AB_Mosquito_C");
		return ptr;
	}

}


