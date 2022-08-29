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
	 * BlueprintGeneratedClass BP_HedgeBerryA.BP_HedgeBerryA_C
	 * Size -> 0x0027 (FullSize[0x0360] - InheritedSize[0x0339])
	 */
	class ABP_HedgeBerryA_C : public ABP_PhysicsHarvestNode_C
	{
	public:
		unsigned char                                              UnknownData_YR57[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0340(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UVisualStateComponent*                               VisualState;                                             // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       Squishmode;                                              // 0x0350(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       PreSquashed;                                             // 0x0351(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WXUU[0x6];                                   // 0x0352(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         SquishmodeMesh;                                          // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateStaticMesh();
		void OnRep_Squishmode();
		void UserConstructionScript();
		void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ExecuteUbergraph_BP_HedgeBerryA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
