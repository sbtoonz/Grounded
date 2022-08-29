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
	 * 		Name   -> Function BP_InsectPart.BP_InsectPart_C.TL_CreatureDissolve__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_InsectPart_C::TL_CreatureDissolve__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InsectPart.BP_InsectPart_C.TL_CreatureDissolve__FinishedFunc");
		
		ABP_InsectPart_C_TL_CreatureDissolve__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InsectPart.BP_InsectPart_C.TL_CreatureDissolve__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_InsectPart_C::TL_CreatureDissolve__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InsectPart.BP_InsectPart_C.TL_CreatureDissolve__UpdateFunc");
		
		ABP_InsectPart_C_TL_CreatureDissolve__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InsectPart.BP_InsectPart_C.CableDissolve__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_InsectPart_C::CableDissolve__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InsectPart.BP_InsectPart_C.CableDissolve__FinishedFunc");
		
		ABP_InsectPart_C_CableDissolve__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InsectPart.BP_InsectPart_C.CableDissolve__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_InsectPart_C::CableDissolve__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InsectPart.BP_InsectPart_C.CableDissolve__UpdateFunc");
		
		ABP_InsectPart_C_CableDissolve__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InsectPart.BP_InsectPart_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_InsectPart_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InsectPart.BP_InsectPart_C.ReceiveBeginPlay");
		
		ABP_InsectPart_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InsectPart.BP_InsectPart_C.BndEvt__InsectPartMesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         SleepingComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InsectPart_C::BndEvt__InsectPartMesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InsectPart.BP_InsectPart_C.BndEvt__InsectPartMesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature");
		
		ABP_InsectPart_C_BndEvt__InsectPartMesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature_Params params {};
		params.SleepingComponent = SleepingComponent;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InsectPart.BP_InsectPart_C.DissolveAfterShortTimer
	 * 		Flags  -> ()
	 */
	void ABP_InsectPart_C::DissolveAfterShortTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InsectPart.BP_InsectPart_C.DissolveAfterShortTimer");
		
		ABP_InsectPart_C_DissolveAfterShortTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InsectPart.BP_InsectPart_C.DissolveAfterFallbackTimer
	 * 		Flags  -> ()
	 */
	void ABP_InsectPart_C::DissolveAfterFallbackTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InsectPart.BP_InsectPart_C.DissolveAfterFallbackTimer");
		
		ABP_InsectPart_C_DissolveAfterFallbackTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InsectPart.BP_InsectPart_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InsectPart_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InsectPart.BP_InsectPart_C.ReceiveActorBeginOverlap");
		
		ABP_InsectPart_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InsectPart.BP_InsectPart_C.ReceiveActorEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InsectPart_C::ReceiveActorEndOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InsectPart.BP_InsectPart_C.ReceiveActorEndOverlap");
		
		ABP_InsectPart_C_ReceiveActorEndOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InsectPart.BP_InsectPart_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InsectPart_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InsectPart.BP_InsectPart_C.ReceiveTick");
		
		ABP_InsectPart_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InsectPart.BP_InsectPart_C.ExecuteUbergraph_BP_InsectPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InsectPart_C::ExecuteUbergraph_BP_InsectPart(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InsectPart.BP_InsectPart_C.ExecuteUbergraph_BP_InsectPart");
		
		ABP_InsectPart_C_ExecuteUbergraph_BP_InsectPart_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_InsectPart_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_InsectPart_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InsectPart.BP_InsectPart_C");
		return ptr;
	}

}


