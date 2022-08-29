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
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.UpdateCurrentChunkIndex
	 * 		Flags  -> ()
	 */
	void ABP_ToppleHarvestNode_C::UpdateCurrentChunkIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.UpdateCurrentChunkIndex");
		
		ABP_ToppleHarvestNode_C_UpdateCurrentChunkIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.HandleChunkTimers
	 * 		Flags  -> ()
	 */
	void ABP_ToppleHarvestNode_C::HandleChunkTimers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.HandleChunkTimers");
		
		ABP_ToppleHarvestNode_C_HandleChunkTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.Handle Death
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDamageInfo                                 DamageInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_ToppleHarvestNode_C::Handle_Death(const struct FDamageInfo& DamageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.Handle Death");
		
		ABP_ToppleHarvestNode_C_Handle_Death_Params params {};
		params.DamageInfo = DamageInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.FinalizeDetachAndDestroy
	 * 		Flags  -> ()
	 */
	void ABP_ToppleHarvestNode_C::FinalizeDetachAndDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.FinalizeDetachAndDestroy");
		
		ABP_ToppleHarvestNode_C_FinalizeDetachAndDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.DetachAndDestroy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToppleHarvestNode_C::DetachAndDestroy(class UPrimitiveComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.DetachAndDestroy");
		
		ABP_ToppleHarvestNode_C_DetachAndDestroy_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.UpdateDetachedChunks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bImmediate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ToppleHarvestNode_C::UpdateDetachedChunks(bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.UpdateDetachedChunks");
		
		ABP_ToppleHarvestNode_C_UpdateDetachedChunks_Params params {};
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.OnRep_StaticMeshChunkIndex
	 * 		Flags  -> ()
	 */
	void ABP_ToppleHarvestNode_C::OnRep_StaticMeshChunkIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.OnRep_StaticMeshChunkIndex");
		
		ABP_ToppleHarvestNode_C_OnRep_StaticMeshChunkIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ToppleHarvestNode_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.ReceiveBeginPlay");
		
		ABP_ToppleHarvestNode_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToppleHarvestNode_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.ReceiveTick");
		
		ABP_ToppleHarvestNode_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.DestroyChunkAfterDelay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        StaticMesh                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToppleHarvestNode_C::DestroyChunkAfterDelay(class UStaticMeshComponent* StaticMesh, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.DestroyChunkAfterDelay");
		
		ABP_ToppleHarvestNode_C_DestroyChunkAfterDelay_Params params {};
		params.StaticMesh = StaticMesh;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.MulticastDropTop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     DamageSourceLocation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToppleHarvestNode_C::MulticastDropTop(const struct FVector& DamageSourceLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.MulticastDropTop");
		
		ABP_ToppleHarvestNode_C_MulticastDropTop_Params params {};
		params.DamageSourceLocation = DamageSourceLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.DestroyChunk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Chunk                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToppleHarvestNode_C::DestroyChunk(class UStaticMeshComponent* Chunk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.DestroyChunk");
		
		ABP_ToppleHarvestNode_C_DestroyChunk_Params params {};
		params.Chunk = Chunk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.HandleHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsKillingBlow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBaseLODActor*                               DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToppleHarvestNode_C::HandleHit(bool IsKillingBlow, class UBaseLODActor* DamageCauser, class AController* InstigatedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.HandleHit");
		
		ABP_ToppleHarvestNode_C_HandleHit_Params params {};
		params.IsKillingBlow = IsKillingBlow;
		params.DamageCauser = DamageCauser;
		params.InstigatedBy = InstigatedBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.MulticastTopUpdateTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LinearVelocity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AngularVelocity                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToppleHarvestNode_C::MulticastTopUpdateTransform(const struct FVector& Transform, const struct FRotator& Rotation, const struct FVector& LinearVelocity, const struct FVector& AngularVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.MulticastTopUpdateTransform");
		
		ABP_ToppleHarvestNode_C_MulticastTopUpdateTransform_Params params {};
		params.Transform = Transform;
		params.Rotation = Rotation;
		params.LinearVelocity = LinearVelocity;
		params.AngularVelocity = AngularVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.On Hit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SelfActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_ToppleHarvestNode_C::On_Hit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.On Hit");
		
		ABP_ToppleHarvestNode_C_On_Hit_Params params {};
		params.SelfActor = SelfActor;
		params.OtherActor = OtherActor;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDamageInfo                                 DamageInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_ToppleHarvestNode_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathDelegate__DelegateSignature(const struct FDamageInfo& DamageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathDelegate__DelegateSignature");
		
		ABP_ToppleHarvestNode_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathDelegate__DelegateSignature_Params params {};
		params.DamageInfo = DamageInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.MulticastRemoveBase
	 * 		Flags  -> ()
	 */
	void ABP_ToppleHarvestNode_C::MulticastRemoveBase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.MulticastRemoveBase");
		
		ABP_ToppleHarvestNode_C_MulticastRemoveBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.UpdatePhysicsStateForClients
	 * 		Flags  -> ()
	 */
	void ABP_ToppleHarvestNode_C::UpdatePhysicsStateForClients()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.UpdatePhysicsStateForClients");
		
		ABP_ToppleHarvestNode_C_UpdatePhysicsStateForClients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.ExecuteUbergraph_BP_ToppleHarvestNode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ToppleHarvestNode_C::ExecuteUbergraph_BP_ToppleHarvestNode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.ExecuteUbergraph_BP_ToppleHarvestNode");
		
		ABP_ToppleHarvestNode_C_ExecuteUbergraph_BP_ToppleHarvestNode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ToppleHarvestNode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ToppleHarvestNode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ToppleHarvestNode.BP_ToppleHarvestNode_C");
		return ptr;
	}

}


