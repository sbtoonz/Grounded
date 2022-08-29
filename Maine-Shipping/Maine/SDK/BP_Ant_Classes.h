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
	 * BlueprintGeneratedClass BP_Ant.BP_Ant_C
	 * Size -> 0x0070 (FullSize[0x12E0] - InheritedSize[0x1270])
	 */
	class ABP_Ant_C : public ASurvivalCreature
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       LeftEyeWeakspot;                                         // 0x1278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       RightEyeWeakspot;                                        // 0x1280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UColonyMemberComponent*                              ColonyMember;                                            // 0x1288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBanterStarterComponent*                             BanterStarter;                                           // 0x1290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ULookTriggerComponent*                               LookTrigger;                                             // 0x1298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UHaulingComponent*                                   Hauling;                                                 // 0x12A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ULootComponent*                                      Loot;                                                    // 0x12A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_EyeColor02_NewTrack_0_BA54A2FF4111E65189C7D4B59E0D5669; // 0x12B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_EyeColor02__Direction_BA54A2FF4111E65189C7D4B59E0D5669; // 0x12B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V5VE[0x3];                                   // 0x12B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_EyeColor02;                                     // 0x12B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_EyeColor_NewTrack_0_CADEB1BB42E6F490B0021E9666027DE3; // 0x12C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_EyeColor__Direction_CADEB1BB42E6F490B0021E9666027DE3; // 0x12C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6OEM[0x3];                                   // 0x12C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_EyeColor;                                       // 0x12C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MID_Eye;                                                 // 0x12D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                redEyeParamName;                                         // 0x12D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle);
		void Timeline_EyeColor__FinishedFunc();
		void Timeline_EyeColor__UpdateFunc();
		void Timeline_EyeColor02__FinishedFunc();
		void Timeline_EyeColor02__UpdateFunc();
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathDelegate__DelegateSignature(const struct FDamageInfo& DamageInfo);
		void On_Combat_Change(class ASurvivalCharacter* Character, bool bInCombat);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Ant(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
