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
	 * Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.HandleHit
	 */
	struct ABP_StaticHarvestNode_C_HandleHit_Params
	{
	public:
		bool                                                       IsKillingBlow;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NZCE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBaseLODActor*                                       DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.Handle Death
	 */
	struct ABP_StaticHarvestNode_C_Handle_Death_Params
	{
	public:
		struct FDamageInfo                                         DamageInfo;                                              // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.UserConstructionScript
	 */
	struct ABP_StaticHarvestNode_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.MulticastDoShake
	 */
	struct ABP_StaticHarvestNode_C_MulticastDoShake_Params
	{	};

	/**
	 * Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.MulticastExecuteLootSpawnVisuals
	 */
	struct ABP_StaticHarvestNode_C_MulticastExecuteLootSpawnVisuals_Params
	{	};

	/**
	 * Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.HandleLootSpawn
	 */
	struct ABP_StaticHarvestNode_C_HandleLootSpawn_Params
	{	};

	/**
	 * Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.DelayAndSpawnLoot
	 */
	struct ABP_StaticHarvestNode_C_DelayAndSpawnLoot_Params
	{	};

	/**
	 * Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.SetReadyForLootSpawn
	 */
	struct ABP_StaticHarvestNode_C_SetReadyForLootSpawn_Params
	{	};

	/**
	 * Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_StaticHarvestNode_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.HandleLootSpawnVisuals
	 */
	struct ABP_StaticHarvestNode_C_HandleLootSpawnVisuals_Params
	{	};

	/**
	 * Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathDelegate__DelegateSignature
	 */
	struct ABP_StaticHarvestNode_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathDelegate__DelegateSignature_Params
	{
	public:
		struct FDamageInfo                                         DamageInfo;                                              // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_4_DamagedDelegate__DelegateSignature
	 */
	struct ABP_StaticHarvestNode_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_4_DamagedDelegate__DelegateSignature_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ERWB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageInfo                                         DamageInfo;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseLODActor*                                       DamageCauser;                                            // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsKillingBlow;                                           // 0x0080(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.HandlePreDeathToExplosive
	 */
	struct ABP_StaticHarvestNode_C_HandlePreDeathToExplosive_Params
	{	};

	/**
	 * Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.ExecuteUbergraph_BP_StaticHarvestNode
	 */
	struct ABP_StaticHarvestNode_C_ExecuteUbergraph_BP_StaticHarvestNode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
