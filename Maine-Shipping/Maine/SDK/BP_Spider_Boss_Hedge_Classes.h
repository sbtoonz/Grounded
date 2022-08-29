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
	 * BlueprintGeneratedClass BP_Spider_Boss_Hedge.BP_Spider_Boss_Hedge_C
	 * Size -> 0x001C (FullSize[0x1338] - InheritedSize[0x131C])
	 */
	class ABP_Spider_Boss_Hedge_C : public ABP_Spider_BASE_C
	{
	public:
		unsigned char                                              UnknownData_SLSR[0x4];                                   // 0x131C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1320(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UBoxComponent*                                       ExtendedHitBox;                                          // 0x1328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBossComponent*                                      Boss;                                                    // 0x1330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle);
		void OnTakeAnyDamage_Event_1(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathDelegate__DelegateSignature(const struct FDamageInfo& DamageInfo);
		void ExecuteUbergraph_BP_Spider_Boss_Hedge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
