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
	 * Function BP_PhysicsHarvestNode.BP_PhysicsHarvestNode_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamagedDelegate__DelegateSignature
	 */
	struct ABP_PhysicsHarvestNode_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamagedDelegate__DelegateSignature_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YIW7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageInfo                                         DamageInfo;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseLODActor*                                       DamageCauser;                                            // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsKillingBlow;                                           // 0x0080(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhysicsHarvestNode.BP_PhysicsHarvestNode_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathDelegate__DelegateSignature
	 */
	struct ABP_PhysicsHarvestNode_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathDelegate__DelegateSignature_Params
	{
	public:
		struct FDamageInfo                                         DamageInfo;                                              // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PhysicsHarvestNode.BP_PhysicsHarvestNode_C.MulticastExecuteLootSpawnVisuals
	 */
	struct ABP_PhysicsHarvestNode_C_MulticastExecuteLootSpawnVisuals_Params
	{	};

	/**
	 * Function BP_PhysicsHarvestNode.BP_PhysicsHarvestNode_C.HandleLootSpawn
	 */
	struct ABP_PhysicsHarvestNode_C_HandleLootSpawn_Params
	{	};

	/**
	 * Function BP_PhysicsHarvestNode.BP_PhysicsHarvestNode_C.HandleLootSpawnVisuals
	 */
	struct ABP_PhysicsHarvestNode_C_HandleLootSpawnVisuals_Params
	{	};

	/**
	 * Function BP_PhysicsHarvestNode.BP_PhysicsHarvestNode_C.ReceiveTick
	 */
	struct ABP_PhysicsHarvestNode_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhysicsHarvestNode.BP_PhysicsHarvestNode_C.ReceiveBeginPlay
	 */
	struct ABP_PhysicsHarvestNode_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PhysicsHarvestNode.BP_PhysicsHarvestNode_C.On Hit
	 */
	struct ABP_PhysicsHarvestNode_C_On_Hit_Params
	{
	public:
		class AActor*                                              SelfActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x001C(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_PhysicsHarvestNode.BP_PhysicsHarvestNode_C.ReceiveActorBeginOverlap
	 */
	struct ABP_PhysicsHarvestNode_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhysicsHarvestNode.BP_PhysicsHarvestNode_C.ReceiveActorEndOverlap
	 */
	struct ABP_PhysicsHarvestNode_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhysicsHarvestNode.BP_PhysicsHarvestNode_C.HandleDeath
	 */
	struct ABP_PhysicsHarvestNode_C_HandleDeath_Params
	{	};

	/**
	 * Function BP_PhysicsHarvestNode.BP_PhysicsHarvestNode_C.ExecuteUbergraph_BP_PhysicsHarvestNode
	 */
	struct ABP_PhysicsHarvestNode_C_ExecuteUbergraph_BP_PhysicsHarvestNode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
