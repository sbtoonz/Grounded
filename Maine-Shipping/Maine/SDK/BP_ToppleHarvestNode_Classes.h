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
	 * BlueprintGeneratedClass BP_ToppleHarvestNode.BP_ToppleHarvestNode_C
	 * Size -> 0x0098 (FullSize[0x03F0] - InheritedSize[0x0358])
	 */
	class ABP_ToppleHarvestNode_C : public ABP_StaticHarvestNode_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UStaticMeshComponent*                                StumpMesh;                                               // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     TipImpulseLocation;                                      // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<class UStaticMeshComponent*>                        StaticMeshChunks;                                        // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    MaxDetachedDamageChunk;                                  // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentChunkIndex;                                       // 0x0384(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMeshTop;                                           // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PreviousChunk;                                           // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundCue*                                           PhysicsImpactAudio;                                      // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowPhysicsHitAudio;                                    // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D4MR[0x7];                                   // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              StumpObjectClass;                                        // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UPrimitiveComponent*>                         ComponentsToSimulateDelayed;                             // 0x03B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      LastPhysicsHitTime;                                      // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PhysicsHitAudioDelay;                                    // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ChunkDestroyVFX;                                         // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              ChunkDestroyTimers;                                      // 0x03D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UStaticMeshComponent*>                        ChunksPendingDestroy;                                    // 0x03E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void UpdateCurrentChunkIndex();
		void HandleChunkTimers();
		void Handle_Death(const struct FDamageInfo& DamageInfo);
		void FinalizeDetachAndDestroy();
		void DetachAndDestroy(class UPrimitiveComponent* Component);
		void UpdateDetachedChunks(bool bImmediate);
		void OnRep_StaticMeshChunkIndex();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void DestroyChunkAfterDelay(class UStaticMeshComponent* StaticMesh, float Delay);
		void MulticastDropTop(const struct FVector& DamageSourceLocation);
		void DestroyChunk(class UStaticMeshComponent* Chunk);
		void HandleHit(bool IsKillingBlow, class UBaseLODActor* DamageCauser, class AController* InstigatedBy);
		void MulticastTopUpdateTransform(const struct FVector& Transform, const struct FRotator& Rotation, const struct FVector& LinearVelocity, const struct FVector& AngularVelocity);
		void On_Hit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathDelegate__DelegateSignature(const struct FDamageInfo& DamageInfo);
		void MulticastRemoveBase();
		void UpdatePhysicsStateForClients();
		void ExecuteUbergraph_BP_ToppleHarvestNode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
