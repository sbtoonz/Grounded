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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_StaticHarvestNode.BP_StaticHarvestNode_C
	 * Size -> 0x0068 (FullSize[0x0358] - InheritedSize[0x02F0])
	 */
	class ABP_StaticHarvestNode_C : public AHarvestNode
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UProceduralAnimationComponent*                       ProceduralAnimation;                                     // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UForceFeedbackComponent*                             DestroyForceFeedback;                                    // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UForceFeedbackComponent*                             DamageForceFeedback;                                     // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAttractionComponent*                                Attraction;                                              // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ULootComponent*                                      Loot;                                                    // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      ShakeStrength;                                           // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldFall;                                              // 0x0334(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShouldShake;                                             // 0x0335(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsReadyForLootSpawn;                                     // 0x0336(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasSpawnedLoot;                                          // 0x0337(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinDelayBeforeLootSpawn;                                 // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinLootSpawnForce;                                       // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDelayBeforeLootSpawn;                                 // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VOZV[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            Mid;                                                     // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldDissolve;                                          // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JLQN[0x3];                                   // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DissolveDuration;                                        // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HandleHit(bool IsKillingBlow, class UBaseLODActor* DamageCauser, class AController* InstigatedBy);
		void Handle_Death(const struct FDamageInfo& DamageInfo);
		void UserConstructionScript();
		void MulticastDoShake();
		void MulticastExecuteLootSpawnVisuals();
		void HandleLootSpawn();
		void DelayAndSpawnLoot();
		void SetReadyForLootSpawn();
		void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void HandleLootSpawnVisuals();
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathDelegate__DelegateSignature(const struct FDamageInfo& DamageInfo);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_4_DamagedDelegate__DelegateSignature(float Damage, const struct FDamageInfo& DamageInfo, class AController* InstigatedBy, class UBaseLODActor* DamageCauser, bool IsKillingBlow);
		void HandlePreDeathToExplosive();
		void ExecuteUbergraph_BP_StaticHarvestNode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
