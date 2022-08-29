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
	 * BlueprintGeneratedClass BP_InfectedHazeAmbientExplosion.BP_InfectedHazeAmbientExplosion_C
	 * Size -> 0x00B4 (FullSize[0x02E4] - InheritedSize[0x0230])
	 */
	class ABP_InfectedHazeAmbientExplosion_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UStaticMeshComponent*                                SM_Weevil02_Gib_06;                                      // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Weevil02_Gib_05;                                      // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Weevil02_Gib_04;                                      // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Weevil02_Gib_01;                                      // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Weevil02_Gib_02;                                      // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Weevil02_Gib_03;                                      // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      TL_MeshDissolve_DissolveAmount_446D0F6F45CFC639465410A2266866C5; // 0x0270(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         TL_MeshDissolve__Direction_446D0F6F45CFC639465410A2266866C5; // 0x0274(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_51RW[0x3];                                   // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_MeshDissolve;                                         // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      TL_DecalEmissive_EmissiveValue_CEED249C4EDBCE64C7C2C2BD108EB63D; // 0x0280(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         TL_DecalEmissive__Direction_CEED249C4EDBCE64C7C2C2BD108EB63D; // 0x0284(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4VID[0x3];                                   // 0x0285(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_DecalEmissive;                                        // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<EObjectTypeQuery>                                   ObjectTypes;                                             // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UMeshComponent*>                              MeshArray;                                               // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UMaterialInstanceDynamic*>                    WeevilMIDs;                                              // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UMaterialInstanceDynamic*                            SplatterMID;                                             // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HitLocation;                                             // 0x02C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MeshSleepCount;                                          // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     SplatterDecal;                                           // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ClosestPlayerSquared;                                    // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TL_DecalEmissive__FinishedFunc();
		void TL_DecalEmissive__UpdateFunc();
		void TL_MeshDissolve__FinishedFunc();
		void TL_MeshDissolve__UpdateFunc();
		void ReceiveBeginPlay();
		void BndEvt__SM_Weevil02_Gib_03_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName);
		void BndEvt__SM_Weevil02_Gib_02_K2Node_ComponentBoundEvent_2_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName);
		void BndEvt__SM_Weevil02_Gib_01_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName);
		void BndEvt__SM_Weevil02_Gib_04_K2Node_ComponentBoundEvent_4_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName);
		void BndEvt__SM_Weevil02_Gib_05_K2Node_ComponentBoundEvent_5_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName);
		void BndEvt__SM_Weevil02_Gib_06_K2Node_ComponentBoundEvent_6_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName);
		void ExecuteUbergraph_BP_InfectedHazeAmbientExplosion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
