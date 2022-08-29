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
	 * BlueprintGeneratedClass BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C
	 * Size -> 0x00B8 (FullSize[0x0168] - InheritedSize[0x00B0])
	 */
	class UBP_AttachedParticlesComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            AttachedEmitter;                                         // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            WaterEmitter;                                            // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            WaterBubblesEmitter;                                     // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ParticleSystemDefault;                                   // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ParticleSystemWater;                                     // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ParticleSystemBubbles;                                   // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ParticleSystemWeedKiller;                                // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              BP_WaterLarge;                                           // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UBoxComponent*>                               WaterTriggers;                                           // 0x00F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class ATriggerVolume*>                              WeedKillerVolumes;                                       // 0x0108(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ATriggerBox*>                                 LabVolumesTriggers;                                      // 0x0118(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class ABP_SurvivalPlayerCharacter_C*                       LocalPlayerCharacter;                                    // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterHeight;                                             // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPlayerOverlapping;                                     // 0x0134(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasSetup;                                                // 0x0135(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IR3T[0x2];                                   // 0x0136(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                WeedKillerVolumeTrigger;                                 // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LabVolumeTrigger;                                        // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MouthSocket;                                             // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   LocalPlayerCapsule;                                      // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasWaterParticles;                                       // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UGG8[0x3];                                   // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumberOfWaterVolumes;                                    // 0x015C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpawnParticleCeiling;                                    // 0x0160(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpawnParticleFloor;                                      // 0x0164(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTick(float DeltaSeconds);
		void BeginOverlapWeedKiller(class AActor* OverlappedActor, class AActor* OtherActor);
		void EndOverlapWeedKiller(class AActor* OverlappedActor, class AActor* OtherActor);
		void BeginOverlapLab(class AActor* OverlappedActor, class AActor* OtherActor);
		void EndOverlapLab(class AActor* OverlappedActor, class AActor* OtherActor);
		void SetupEffects();
		void SetWaterParticles(bool InWater, class ABP_Water_Large_C* OverlappedWaterVolume);
		void EnableWaterParticleOverrride();
		void DisableWaterParticleOverride();
		void ExecuteUbergraph_BP_AttachedParticlesComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
