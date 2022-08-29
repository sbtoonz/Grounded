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
	 * BlueprintGeneratedClass BP_PhysicsHarvestNode.BP_PhysicsHarvestNode_C
	 * Size -> 0x0049 (FullSize[0x0339] - InheritedSize[0x02F0])
	 */
	class ABP_PhysicsHarvestNode_C : public AHarvestNode
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ULootComponent*                                      Loot;                                                    // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UForceFeedbackComponent*                             DestroyForceFeedback;                                    // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UForceFeedbackComponent*                             DamageForceFeedback;                                     // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAttractionComponent*                                Attraction;                                              // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       HasSpawnedLoot;                                          // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JG19[0x3];                                   // 0x0321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastPhysicsHitTime;                                      // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PhysicsHitAudioDelay;                                    // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LU7Z[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           PhysicsImpactAudio;                                      // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInWater;                                                // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamagedDelegate__DelegateSignature(float Damage, const struct FDamageInfo& DamageInfo, class AController* InstigatedBy, class UBaseLODActor* DamageCauser, bool IsKillingBlow);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathDelegate__DelegateSignature(const struct FDamageInfo& DamageInfo);
		void MulticastExecuteLootSpawnVisuals();
		void HandleLootSpawn();
		void HandleLootSpawnVisuals();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void On_Hit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ReceiveActorEndOverlap(class AActor* OtherActor);
		void HandleDeath();
		void ExecuteUbergraph_BP_PhysicsHarvestNode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
