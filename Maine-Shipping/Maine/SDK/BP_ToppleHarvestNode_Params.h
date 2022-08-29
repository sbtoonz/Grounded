#pragma once

/**
 * Name: Maine
 * Version: Shipping
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.UpdateCurrentChunkIndex
	 */
	struct ABP_ToppleHarvestNode_C_UpdateCurrentChunkIndex_Params
	{	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.HandleChunkTimers
	 */
	struct ABP_ToppleHarvestNode_C_HandleChunkTimers_Params
	{	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.Handle Death
	 */
	struct ABP_ToppleHarvestNode_C_Handle_Death_Params
	{
	public:
		struct FDamageInfo                                         DamageInfo;                                              // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.FinalizeDetachAndDestroy
	 */
	struct ABP_ToppleHarvestNode_C_FinalizeDetachAndDestroy_Params
	{	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.DetachAndDestroy
	 */
	struct ABP_ToppleHarvestNode_C_DetachAndDestroy_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.UpdateDetachedChunks
	 */
	struct ABP_ToppleHarvestNode_C_UpdateDetachedChunks_Params
	{
	public:
		bool                                                       bImmediate;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y2D9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.OnRep_StaticMeshChunkIndex
	 */
	struct ABP_ToppleHarvestNode_C_OnRep_StaticMeshChunkIndex_Params
	{	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.ReceiveBeginPlay
	 */
	struct ABP_ToppleHarvestNode_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.ReceiveTick
	 */
	struct ABP_ToppleHarvestNode_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.DestroyChunkAfterDelay
	 */
	struct ABP_ToppleHarvestNode_C_DestroyChunkAfterDelay_Params
	{
	public:
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Delay;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.MulticastDropTop
	 */
	struct ABP_ToppleHarvestNode_C_MulticastDropTop_Params
	{
	public:
		struct FVector                                             DamageSourceLocation;                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.DestroyChunk
	 */
	struct ABP_ToppleHarvestNode_C_DestroyChunk_Params
	{
	public:
		class UStaticMeshComponent*                                Chunk;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.HandleHit
	 */
	struct ABP_ToppleHarvestNode_C_HandleHit_Params
	{
	public:
		bool                                                       IsKillingBlow;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EZXQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBaseLODActor*                                       DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.MulticastTopUpdateTransform
	 */
	struct ABP_ToppleHarvestNode_C_MulticastTopUpdateTransform_Params
	{
	public:
		struct FVector                                             Transform;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LinearVelocity;                                          // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AngularVelocity;                                         // 0x0024(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.On Hit
	 */
	struct ABP_ToppleHarvestNode_C_On_Hit_Params
	{
	public:
		class AActor*                                              SelfActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x001C(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathDelegate__DelegateSignature
	 */
	struct ABP_ToppleHarvestNode_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathDelegate__DelegateSignature_Params
	{
	public:
		struct FDamageInfo                                         DamageInfo;                                              // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.MulticastRemoveBase
	 */
	struct ABP_ToppleHarvestNode_C_MulticastRemoveBase_Params
	{	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.UpdatePhysicsStateForClients
	 */
	struct ABP_ToppleHarvestNode_C_UpdatePhysicsStateForClients_Params
	{	};

	/**
	 * Function BP_ToppleHarvestNode.BP_ToppleHarvestNode_C.ExecuteUbergraph_BP_ToppleHarvestNode
	 */
	struct ABP_ToppleHarvestNode_C_ExecuteUbergraph_BP_ToppleHarvestNode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
