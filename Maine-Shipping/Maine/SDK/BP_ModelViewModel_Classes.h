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
	 * BlueprintGeneratedClass BP_ModelViewModel.BP_ModelViewModel_C
	 * Size -> 0x0030 (FullSize[0x0260] - InheritedSize[0x0230])
	 */
	class ABP_ModelViewModel_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USkeletalMeshComponent*                              ChildArmorMesh;                                          // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              PetArmorMesh;                                            // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetSkeletalMeshBounds(struct FVector* Bounds);
		void GetMeshBounds(struct FVector* BoundsMin);
		void SetStaticMesh(class UStaticMesh* StaticMesh, TArray<class UMaterialInterface*> Materials, bool CenterMeshAtRotationOrigin);
		void SetSkeletalMesh(class USkeletalMesh* SkeletalMesh, TArray<class UMaterialInterface*> Materials, bool CenterMeshAtRotationOrigin);
		void AddChildMesh(class USkeletalMesh* SkeletalMesh);
		void ExecuteUbergraph_BP_ModelViewModel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
