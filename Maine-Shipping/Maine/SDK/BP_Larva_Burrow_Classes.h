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
	 * BlueprintGeneratedClass BP_Larva_Burrow.BP_Larva_Burrow_C
	 * Size -> 0x0070 (FullSize[0x1360] - InheritedSize[0x12F0])
	 */
	class ABP_Larva_Burrow_C : public ABurrowSurvivalCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x12F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UBanterStarterComponent*                             BanterStarter;                                           // 0x12F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ULookTriggerComponent*                               LookTrigger;                                             // 0x1300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     BurrowAudio;                                             // 0x1308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleSystem_burrowed;                                 // 0x1310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ULootComponent*                                      Loot;                                                    // 0x1318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_NewTrack_0_29E7A9C449651ED670EEF4812906C527;  // 0x1320(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_29E7A9C449651ED670EEF4812906C527;  // 0x1324(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LS1P[0x3];                                   // 0x1325(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x1328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_1141014C4FFED9221B87C4BEB704A120;  // 0x1330(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_1141014C4FFED9221B87C4BEB704A120;  // 0x1334(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1UUV[0x3];                                   // 0x1335(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x1338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       IsBurrowAudio;                                           // 0x1340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IE9D[0x7];                                   // 0x1341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            MID_Eye;                                                 // 0x1348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                redEyeParamName;                                         // 0x1350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_BugDeath_Particle_C*                             SpawnedDeathEffect;                                      // 0x1358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle);
		void HandleBurrowAudio(EBurrowState BurrowState);
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void ReceiveBeginPlay();
		void BndEvt__BurrowComponent_K2Node_ComponentBoundEvent_2_BurrowStateChangedDelegate__DelegateSignature(EBurrowState BurrowState);
		void On_Combat_Change(class ASurvivalCharacter* Character, bool bInCombat);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation);
		void ExecuteUbergraph_BP_Larva_Burrow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
