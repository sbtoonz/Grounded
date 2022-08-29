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
	 * BlueprintGeneratedClass BP_BASE_GrassBlade_Dead.BP_BASE_GrassBlade_Dead_C
	 * Size -> 0x00A0 (FullSize[0x03F8] - InheritedSize[0x0358])
	 */
	class ABP_BASE_GrassBlade_Dead_C : public ABP_StaticHarvestNode_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		float                                                      TL_DissolveGrassBlade_DissolveAmount_74D4A8B0433AE235136BBFB664527F55; // 0x0360(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         TL_DissolveGrassBlade__Direction_74D4A8B0433AE235136BBFB664527F55; // 0x0364(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1I07[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_DissolveGrassBlade;                                   // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       DeathTriggered;                                          // 0x0370(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_YHE5[0x7];                                   // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDamageInfo                                         DamageInfo;                                              // 0x0378(0x0068) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UParticleSystem*                                     DestroyedEmitter;                                        // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FTransform>                                  SocketTransforms;                                        // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnRep_DeathTriggered();
		void TL_DissolveGrassBlade__FinishedFunc();
		void TL_DissolveGrassBlade__UpdateFunc();
		void Handle_Death(const struct FDamageInfo& DamageInfo);
		void HandleDeathEffects();
		void ExecuteUbergraph_BP_BASE_GrassBlade_Dead(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
