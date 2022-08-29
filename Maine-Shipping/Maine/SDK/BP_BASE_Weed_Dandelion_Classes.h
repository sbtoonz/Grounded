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
	 * BlueprintGeneratedClass BP_BASE_Weed_Dandelion.BP_BASE_Weed_Dandelion_C
	 * Size -> 0x0018 (FullSize[0x0408] - InheritedSize[0x03F0])
	 */
	class ABP_BASE_Weed_Dandelion_C : public ABP_ToppleHarvestNode_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UParticleSystemSpawnComponent*                       BreakParticles1;                                         // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemSpawnComponent*                       BreakParticles2;                                         // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void HandleLootSpawnVisuals();
		void ExecuteUbergraph_BP_BASE_Weed_Dandelion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
