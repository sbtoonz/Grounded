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
	 * BlueprintGeneratedClass BP_InsectPart.BP_InsectPart_C
	 * Size -> 0x0073 (FullSize[0x02A3] - InheritedSize[0x0230])
	 */
	class ABP_InsectPart_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USceneComponent*                                     Root;                                                    // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                InsectPartMesh;                                          // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      CableDissolve_CableDissolveAmount_268F75E34A028FE0D6EFCFA9583DE26D; // 0x0248(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         CableDissolve__Direction_268F75E34A028FE0D6EFCFA9583DE26D; // 0x024C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CL3I[0x3];                                   // 0x024D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  CableDissolve;                                           // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      TL_CreatureDissolve_DissolveAmount_4ECC820247A457E5C29F54BEFA4543ED; // 0x0258(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         TL_CreatureDissolve__Direction_4ECC820247A457E5C29F54BEFA4543ED; // 0x025C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FN9L[0x3];                                   // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_CreatureDissolve;                                     // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<class UMaterialInstanceDynamic*>                    InsectPartMIDs;                                          // 0x0268(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UCableComponent*>                             InsectPartCables;                                        // 0x0278(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UMaterialInstanceDynamic*                            CableMID;                                                // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     GoopEmitter;                                             // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShortTimer;                                              // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FallbackTimer;                                           // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DissolveOnRest;                                          // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDissolving;                                            // 0x02A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bInWater;                                                // 0x02A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void TL_CreatureDissolve__FinishedFunc();
		void TL_CreatureDissolve__UpdateFunc();
		void CableDissolve__FinishedFunc();
		void CableDissolve__UpdateFunc();
		void ReceiveBeginPlay();
		void BndEvt__InsectPartMesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName);
		void DissolveAfterShortTimer();
		void DissolveAfterFallbackTimer();
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ReceiveActorEndOverlap(class AActor* OtherActor);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_InsectPart(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
