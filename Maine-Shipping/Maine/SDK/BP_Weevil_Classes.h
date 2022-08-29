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
	 * BlueprintGeneratedClass BP_Weevil.BP_Weevil_C
	 * Size -> 0x0040 (FullSize[0x12B0] - InheritedSize[0x1270])
	 */
	class ABP_Weevil_C : public ASurvivalCreature
	{
	public:
		class UWidgetInteractComponent*                            WidgetInteract;                                          // 0x1270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInventoryComponent*                                 Inventory;                                               // 0x1278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UEquipmentComponent*                                 Equipment;                                               // 0x1280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HeadArmorMeshComponent;                                  // 0x1288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ULookTriggerComponent*                               LookTrigger;                                             // 0x1290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBanterStarterComponent*                             BanterStarter;                                           // 0x1298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ULootComponent*                                      Loot;                                                    // 0x12A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABP_BugDeath_Particle_C*                             SpawnedDeathEffect;                                      // 0x12A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
