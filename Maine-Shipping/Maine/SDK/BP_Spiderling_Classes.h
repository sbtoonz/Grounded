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
	 * BlueprintGeneratedClass BP_Spiderling.BP_Spiderling_C
	 * Size -> 0x002C (FullSize[0x1348] - InheritedSize[0x131C])
	 */
	class ABP_Spiderling_C : public ABP_Spider_BASE_C
	{
	public:
		unsigned char                                              UnknownData_N3F3[0x4];                                   // 0x131C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1320(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UStaticMeshComponent*                                AbdomenSafeMesh_1;                                       // 0x1328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                CarapaceSafeMesh_1;                                      // 0x1330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   AbdomenHitbox;                                           // 0x1338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   CarapaceHitbox;                                          // 0x1340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle);
		void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathDelegate__DelegateSignature(const struct FDamageInfo& DamageInfo);
		void ExecuteUbergraph_BP_Spiderling(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
