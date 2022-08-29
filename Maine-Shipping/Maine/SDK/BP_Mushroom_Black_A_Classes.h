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
	 * BlueprintGeneratedClass BP_Mushroom_Black_A.BP_Mushroom_Black_A_C
	 * Size -> 0x002F (FullSize[0x0468] - InheritedSize[0x0439])
	 */
	class ABP_Mushroom_Black_A_C : public ABP_BASE_Mushroom_C
	{
	public:
		unsigned char                                              UnknownData_Y5O8[0x7];                                   // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UParticleSystemSpawnComponent*                       BreakParticles3;                                         // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UParticleSystemSpawnComponent*                       BreakParticles1;                                         // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UParticleSystemSpawnComponent*                       BreakParticles2;                                         // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UParticleSystemSpawnComponent*                       BreakParticles4;                                         // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void HandleLootSpawnVisuals();
		void ExecuteUbergraph_BP_Mushroom_Black_A(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
