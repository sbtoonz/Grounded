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
	 * 		Name   -> Function AB_DivingBellSpider.AB_DivingBellSpider_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_DivingBellSpider_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_DivingBellSpider.AB_DivingBellSpider_C.AnimGraph");
		
		UAB_DivingBellSpider_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_DivingBellSpider.AB_DivingBellSpider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DivingBellSpider_AnimGraphNode_TransitionResult_5AD1F46B43A0D7A106DED0A4BE0D55EA
	 * 		Flags  -> ()
	 */
	void UAB_DivingBellSpider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DivingBellSpider_AnimGraphNode_TransitionResult_5AD1F46B43A0D7A106DED0A4BE0D55EA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_DivingBellSpider.AB_DivingBellSpider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DivingBellSpider_AnimGraphNode_TransitionResult_5AD1F46B43A0D7A106DED0A4BE0D55EA");
		
		UAB_DivingBellSpider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DivingBellSpider_AnimGraphNode_TransitionResult_5AD1F46B43A0D7A106DED0A4BE0D55EA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_DivingBellSpider.AB_DivingBellSpider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DivingBellSpider_AnimGraphNode_TransitionResult_7861582346BC1C1B4AAF92AD836FC0D7
	 * 		Flags  -> ()
	 */
	void UAB_DivingBellSpider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DivingBellSpider_AnimGraphNode_TransitionResult_7861582346BC1C1B4AAF92AD836FC0D7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_DivingBellSpider.AB_DivingBellSpider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DivingBellSpider_AnimGraphNode_TransitionResult_7861582346BC1C1B4AAF92AD836FC0D7");
		
		UAB_DivingBellSpider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DivingBellSpider_AnimGraphNode_TransitionResult_7861582346BC1C1B4AAF92AD836FC0D7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_DivingBellSpider.AB_DivingBellSpider_C.ExecuteUbergraph_AB_DivingBellSpider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_DivingBellSpider_C::ExecuteUbergraph_AB_DivingBellSpider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_DivingBellSpider.AB_DivingBellSpider_C.ExecuteUbergraph_AB_DivingBellSpider");
		
		UAB_DivingBellSpider_C_ExecuteUbergraph_AB_DivingBellSpider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_DivingBellSpider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_DivingBellSpider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_DivingBellSpider.AB_DivingBellSpider_C");
		return ptr;
	}

}


