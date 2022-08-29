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
	 * BlueprintGeneratedClass BP_WaterBoatman.BP_WaterBoatman_C
	 * Size -> 0x0030 (FullSize[0x24E0] - InheritedSize[0x24B0])
	 */
	class ABP_WaterBoatman_C : public ASwimmingSurvivalCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x24B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UVitalVisualsComponent*                              VitalVisuals;                                            // 0x24B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Bubbles;                                           // 0x24C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ULootComponent*                                      Loot;                                                    // 0x24C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AirBubbleMesh;                                           // 0x24D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABP_BugDeath_Particle_C*                             SpawnedDeathEffect;                                      // 0x24D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle);
		void Update_Air_Bubble_Scale(float NewScale);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamagedDelegate__DelegateSignature(float Damage, const struct FDamageInfo& DamageInfo, class AController* InstigatedBy, class UBaseLODActor* DamageCauser, bool IsKillingBlow);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation);
		void BndEvt__VitalVisuals_K2Node_ComponentBoundEvent_3_VitalChangedDelegate__DelegateSignature(float VitalValue);
		void ExecuteUbergraph_BP_WaterBoatman(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
