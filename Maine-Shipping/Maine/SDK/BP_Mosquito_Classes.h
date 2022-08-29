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
	 * BlueprintGeneratedClass BP_Mosquito.BP_Mosquito_C
	 * Size -> 0x0110 (FullSize[0x2450] - InheritedSize[0x2340])
	 */
	class ABP_Mosquito_C : public AFlyingSurvivalCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2340(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UBanterStarterComponent*                             BanterStarter;                                           // 0x2348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ULookTriggerComponent*                               LookTrigger;                                             // 0x2350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPlayerScalingReceiverComponent*                     PlayerScalingReceiver;                                   // 0x2358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     FlapAudio;                                               // 0x2360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAttackCapsuleComponent*                             AttackCapsule;                                           // 0x2368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   PlayerBlocker;                                           // 0x2370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    HitBox;                                                  // 0x2378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVitalVisualsComponent*                              VitalVisuals;                                            // 0x2380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     wing_grp_R;                                              // 0x2388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                wing_flipbook_R;                                         // 0x2390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Gnat01_Wing_Bee1;                                     // 0x2398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                wing_dark_R;                                             // 0x23A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     wing_pivot_R;                                            // 0x23A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     wing_grp_L;                                              // 0x23B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                wing_flipbook_L;                                         // 0x23B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Gnat01_Wing_Bee;                                      // 0x23C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                wing_dark_L;                                             // 0x23C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     wing_pivot_L;                                            // 0x23D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ULootComponent*                                      Loot;                                                    // 0x23D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      WingSFX_Pitch_D09C8CFA460DAFC59E6D0381562A1876;          // 0x23E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         WingSFX__Direction_D09C8CFA460DAFC59E6D0381562A1876;     // 0x23E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2ZB4[0x3];                                   // 0x23E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  WingSFX;                                                 // 0x23E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      BloodFill_NewTrack_0_40B816464B53B5454B4DAE9AB7255332;   // 0x23F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         BloodFill__Direction_40B816464B53B5454B4DAE9AB7255332;   // 0x23F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_00XS[0x3];                                   // 0x23F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  BloodFill;                                               // 0x23F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_1_NewTrack_0_C64E6FFD4C27F319B4055AA12DAD0996;  // 0x2400(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_C64E6FFD4C27F319B4055AA12DAD0996;  // 0x2404(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WMC3[0x3];                                   // 0x2405(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x2408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_F81C20BA41D4AE587F469EAE21517D7A;  // 0x2410(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_F81C20BA41D4AE587F469EAE21517D7A;  // 0x2414(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H28E[0x3];                                   // 0x2415(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x2418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_wingFlap_wingFlap_C09BEC2D436CC7D685D21ABB8D90F8C2; // 0x2420(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_wingFlap__Direction_C09BEC2D436CC7D685D21ABB8D90F8C2; // 0x2424(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DIPV[0x3];                                   // 0x2425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_wingFlap;                                       // 0x2428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MID_Eye;                                                 // 0x2430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                redEyeParamName;                                         // 0x2438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_BugDeath_Particle_C*                             SpawnedDeathEffect;                                      // 0x2440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MID_Body;                                                // 0x2448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle);
		void ToggleWingsVisibility(bool IsFlying);
		void Timeline_wingFlap__FinishedFunc();
		void Timeline_wingFlap__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void BloodFill__FinishedFunc();
		void BloodFill__UpdateFunc();
		void WingSFX__FinishedFunc();
		void WingSFX__UpdateFunc();
		void ReceiveBeginPlay();
		void On_Combat_Change(class ASurvivalCharacter* Character, bool bInCombat);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation);
		void OnAttackHit_Event(class UAttack* Attack);
		void BndEvt__VitalVisuals_K2Node_ComponentBoundEvent_0_VitalChangedDelegate__DelegateSignature(float VitalValue);
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void MulticastHandleMovementMode(EMovementMode MovementMode);
		void ExecuteUbergraph_BP_Mosquito(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
