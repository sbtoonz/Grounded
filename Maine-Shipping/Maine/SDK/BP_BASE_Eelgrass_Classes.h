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
	 * BlueprintGeneratedClass BP_BASE_Eelgrass.BP_BASE_Eelgrass_C
	 * Size -> 0x00B0 (FullSize[0x04A0] - InheritedSize[0x03F0])
	 */
	class ABP_BASE_Eelgrass_C : public ABP_ToppleHarvestNode_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		float                                                      TL_DissolveEelgrass_DissolveAmount_9AA54D5D4343D843BD6D9EB8A4E6241C; // 0x03F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         TL_DissolveEelgrass__Direction_9AA54D5D4343D843BD6D9EB8A4E6241C; // 0x03FC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ID51[0x3];                                   // 0x03FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_DissolveEelgrass;                                     // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FTransform>                                  SocketTransforms;                                        // 0x0408(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       DeathTriggered;                                          // 0x0418(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_3O05[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     DestroyedEmitter;                                        // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDamageInfo                                         DamageInfo;                                              // 0x0428(0x0068) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<class UMaterialInstanceDynamic*>                    MIDs;                                                    // 0x0490(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnRep_DeathTriggered();
		void TL_DissolveEelgrass__FinishedFunc();
		void TL_DissolveEelgrass__UpdateFunc();
		void ReceiveBeginPlay();
		void HandleDeathEffects();
		void Handle_Death(const struct FDamageInfo& DamageInfo);
		void ExecuteUbergraph_BP_BASE_Eelgrass(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
