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
	 * 		Name   -> Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.CheckCollisionMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OtherComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ActorComponentCondition                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BlendTriggerSphere_C::CheckCollisionMatch(class UPrimitiveComponent* OtherComponent, bool* ActorComponentCondition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.CheckCollisionMatch");
		
		ABP_BlendTriggerSphere_C_CheckCollisionMatch_Params params {};
		params.OtherComponent = OtherComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorComponentCondition != nullptr)
			*ActorComponentCondition = params.ActorComponentCondition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.TrackTriggerOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            IncrementValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BlendTriggerSphere_C::TrackTriggerOverlap(int32_t IncrementValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.TrackTriggerOverlap");
		
		ABP_BlendTriggerSphere_C_TrackTriggerOverlap_Params params {};
		params.IncrementValue = IncrementValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_BlendTriggerSphere_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.UserConstructionScript");
		
		ABP_BlendTriggerSphere_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BlendTriggerSphere_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.ReceiveTick");
		
		ABP_BlendTriggerSphere_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BlendTriggerSphere_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.ReceiveBeginPlay");
		
		ABP_BlendTriggerSphere_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.HandleEndOverlapRespawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BlendTriggerSphere_C::HandleEndOverlapRespawn(class APlayerController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.HandleEndOverlapRespawn");
		
		ABP_BlendTriggerSphere_C_HandleEndOverlapRespawn_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BlendTriggerSphere_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_BlendTriggerSphere_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BlendTriggerSphere_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_BlendTriggerSphere_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.ExecuteUbergraph_BP_BlendTriggerSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BlendTriggerSphere_C::ExecuteUbergraph_BP_BlendTriggerSphere(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BlendTriggerSphere.BP_BlendTriggerSphere_C.ExecuteUbergraph_BP_BlendTriggerSphere");
		
		ABP_BlendTriggerSphere_C_ExecuteUbergraph_BP_BlendTriggerSphere_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BlendTriggerSphere_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BlendTriggerSphere_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BlendTriggerSphere.BP_BlendTriggerSphere_C");
		return ptr;
	}

}


