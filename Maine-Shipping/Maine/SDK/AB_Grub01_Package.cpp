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
	 * 		Name   -> Function AB_Grub01.AB_Grub01_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Grub01_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Grub01.AB_Grub01_C.AnimGraph");
		
		UAB_Grub01_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Grub01.AB_Grub01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Grub01_AnimGraphNode_TransitionResult_E7894D21422A79FCF89039A5944145A4
	 * 		Flags  -> ()
	 */
	void UAB_Grub01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Grub01_AnimGraphNode_TransitionResult_E7894D21422A79FCF89039A5944145A4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Grub01.AB_Grub01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Grub01_AnimGraphNode_TransitionResult_E7894D21422A79FCF89039A5944145A4");
		
		UAB_Grub01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Grub01_AnimGraphNode_TransitionResult_E7894D21422A79FCF89039A5944145A4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Grub01.AB_Grub01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Grub01_AnimGraphNode_TransitionResult_8E71986D4C2E90D20624538F8C54F424
	 * 		Flags  -> ()
	 */
	void UAB_Grub01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Grub01_AnimGraphNode_TransitionResult_8E71986D4C2E90D20624538F8C54F424()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Grub01.AB_Grub01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Grub01_AnimGraphNode_TransitionResult_8E71986D4C2E90D20624538F8C54F424");
		
		UAB_Grub01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Grub01_AnimGraphNode_TransitionResult_8E71986D4C2E90D20624538F8C54F424_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Grub01.AB_Grub01_C.AnimNotify_Unburrow
	 * 		Flags  -> ()
	 */
	void UAB_Grub01_C::AnimNotify_Unburrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Grub01.AB_Grub01_C.AnimNotify_Unburrow");
		
		UAB_Grub01_C_AnimNotify_Unburrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Grub01.AB_Grub01_C.AnimNotify_Burrow
	 * 		Flags  -> ()
	 */
	void UAB_Grub01_C::AnimNotify_Burrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Grub01.AB_Grub01_C.AnimNotify_Burrow");
		
		UAB_Grub01_C_AnimNotify_Burrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_Grub01.AB_Grub01_C.ExecuteUbergraph_AB_Grub01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Grub01_C::ExecuteUbergraph_AB_Grub01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Grub01.AB_Grub01_C.ExecuteUbergraph_AB_Grub01");
		
		UAB_Grub01_C_ExecuteUbergraph_AB_Grub01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_Grub01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Grub01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Grub01.AB_Grub01_C");
		return ptr;
	}

}


