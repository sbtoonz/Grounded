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
	 * BlueprintGeneratedClass BP_ArcR.BP_ArcR_C
	 * Size -> 0x0098 (FullSize[0x12D8] - InheritedSize[0x1240])
	 */
	class ABP_ArcR_C : public ASurvivalCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1240(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UPlayerScalingReceiverComponent*                     PlayerScalingReceiver;                                   // 0x1248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ULootComponent*                                      Loot;                                                    // 0x1250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAudioComponent*                                     sfx_hoverloop;                                           // 0x1258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UCapsuleComponent*                                   MeshCapsule;                                             // 0x1260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_TazT_Hover;                                           // 0x1268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLightBack;                                           // 0x1270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLightFront;                                          // 0x1278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAttackCapsuleComponent*                             AttackCapsule;                                           // 0x1280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      TL_SirenFade_Alpha_B05D30D9406B933261ABA494357E31D7;     // 0x1288(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         TL_SirenFade__Direction_B05D30D9406B933261ABA494357E31D7; // 0x128C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TFPH[0x3];                                   // 0x128D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_SirenFade;                                            // 0x1290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            TazT_Eye_L;                                              // 0x1298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            TazT_Eye_R;                                              // 0x12A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Siren_Glow;                                              // 0x12A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Fan_Rim;                                                 // 0x12B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MatIndex_Fan;                                            // 0x12B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MatIndex_Eye_L;                                          // 0x12BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MatIndex_Eye_R;                                          // 0x12C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MatIndex_Siren;                                          // 0x12C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   Siren_Material_Instance;                                 // 0x12C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   FanRim_Material_Instance;                                // 0x12D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle);
		void TL_SirenFade__FinishedFunc();
		void TL_SirenFade__UpdateFunc();
		void SirenToggle(class ASurvivalCharacter* Character, bool bInCombat);
		void ReceiveBeginPlay();
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHealthStateChangedDelegate__DelegateSignature(EHealthState NewHealthState);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation);
		void HandleLootEffects(class AActor* DestroyedActor);
		void ExecuteUbergraph_BP_ArcR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
