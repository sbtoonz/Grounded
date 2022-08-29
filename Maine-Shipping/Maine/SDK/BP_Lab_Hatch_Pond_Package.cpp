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
	 * 		Name   -> Function BP_Lab_Hatch_Pond.BP_Lab_Hatch_Pond_C.HatchRotation__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Lab_Hatch_Pond_C::HatchRotation__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lab_Hatch_Pond.BP_Lab_Hatch_Pond_C.HatchRotation__FinishedFunc");
		
		ABP_Lab_Hatch_Pond_C_HatchRotation__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lab_Hatch_Pond.BP_Lab_Hatch_Pond_C.HatchRotation__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Lab_Hatch_Pond_C::HatchRotation__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lab_Hatch_Pond.BP_Lab_Hatch_Pond_C.HatchRotation__UpdateFunc");
		
		ABP_Lab_Hatch_Pond_C_HatchRotation__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lab_Hatch_Pond.BP_Lab_Hatch_Pond_C.OpenHatch
	 * 		Flags  -> ()
	 */
	void ABP_Lab_Hatch_Pond_C::OpenHatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lab_Hatch_Pond.BP_Lab_Hatch_Pond_C.OpenHatch");
		
		ABP_Lab_Hatch_Pond_C_OpenHatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lab_Hatch_Pond.BP_Lab_Hatch_Pond_C.BndEvt__ConditionalToggle_HatchOpened_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Lab_Hatch_Pond_C::BndEvt__ConditionalToggle_HatchOpened_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature(bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lab_Hatch_Pond.BP_Lab_Hatch_Pond_C.BndEvt__ConditionalToggle_HatchOpened_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature");
		
		ABP_Lab_Hatch_Pond_C_BndEvt__ConditionalToggle_HatchOpened_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature_Params params {};
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lab_Hatch_Pond.BP_Lab_Hatch_Pond_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Lab_Hatch_Pond_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lab_Hatch_Pond.BP_Lab_Hatch_Pond_C.ReceiveBeginPlay");
		
		ABP_Lab_Hatch_Pond_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lab_Hatch_Pond.BP_Lab_Hatch_Pond_C.ExecuteUbergraph_BP_Lab_Hatch_Pond
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lab_Hatch_Pond_C::ExecuteUbergraph_BP_Lab_Hatch_Pond(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lab_Hatch_Pond.BP_Lab_Hatch_Pond_C.ExecuteUbergraph_BP_Lab_Hatch_Pond");
		
		ABP_Lab_Hatch_Pond_C_ExecuteUbergraph_BP_Lab_Hatch_Pond_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Lab_Hatch_Pond_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Lab_Hatch_Pond_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lab_Hatch_Pond.BP_Lab_Hatch_Pond_C");
		return ptr;
	}

}


