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
	 * BlueprintGeneratedClass BP_BASE_GrassBlade_Burned.BP_BASE_GrassBlade_Burned_C
	 * Size -> 0x00A0 (FullSize[0x03F8] - InheritedSize[0x0358])
	 */
	class ABP_BASE_GrassBlade_Burned_C : public ABP_StaticHarvestNode_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		float                                                      Timeline_0_DissolveAmount_340980DD44488C6F746C609FF5756A9F; // 0x0360(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_340980DD44488C6F746C609FF5756A9F;  // 0x0364(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L2O8[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       DeathTriggered;                                          // 0x0370(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_IIEV[0x7];                                   // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDamageInfo                                         DamageInfo;                                              // 0x0378(0x0068) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<struct FTransform>                                  SocketTransforms;                                        // 0x03E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UParticleSystem*                                     DestroyParticles;                                        // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_DeathTriggered();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void HandleDeathEffects();
		void Handle_Death(const struct FDamageInfo& DamageInfo);
		void ExecuteUbergraph_BP_BASE_GrassBlade_Burned(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
