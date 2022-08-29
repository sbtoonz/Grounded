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
	 * 		Name   -> Function BP_RawScience_A.BP_RawScience_A_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_RawScience_A_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RawScience_A.BP_RawScience_A_C.Timeline_0__FinishedFunc");
		
		ABP_RawScience_A_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RawScience_A.BP_RawScience_A_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_RawScience_A_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RawScience_A.BP_RawScience_A_C.Timeline_0__UpdateFunc");
		
		ABP_RawScience_A_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RawScience_A.BP_RawScience_A_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RawScience_A_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RawScience_A.BP_RawScience_A_C.ReceiveBeginPlay");
		
		ABP_RawScience_A_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RawScience_A.BP_RawScience_A_C.OnCollectedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RawScience_A_C::OnCollectedEvent(class ASurvivalPlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RawScience_A.BP_RawScience_A_C.OnCollectedEvent");
		
		ABP_RawScience_A_C_OnCollectedEvent_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RawScience_A.BP_RawScience_A_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RawScience_A_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RawScience_A.BP_RawScience_A_C.ReceiveTick");
		
		ABP_RawScience_A_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RawScience_A.BP_RawScience_A_C.CreateRandomRotatorInRange
	 * 		Flags  -> ()
	 */
	void ABP_RawScience_A_C::CreateRandomRotatorInRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RawScience_A.BP_RawScience_A_C.CreateRandomRotatorInRange");
		
		ABP_RawScience_A_C_CreateRandomRotatorInRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RawScience_A.BP_RawScience_A_C.ExecuteUbergraph_BP_RawScience_A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RawScience_A_C::ExecuteUbergraph_BP_RawScience_A(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RawScience_A.BP_RawScience_A_C.ExecuteUbergraph_BP_RawScience_A");
		
		ABP_RawScience_A_C_ExecuteUbergraph_BP_RawScience_A_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RawScience_A_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RawScience_A_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RawScience_A.BP_RawScience_A_C");
		return ptr;
	}

}


