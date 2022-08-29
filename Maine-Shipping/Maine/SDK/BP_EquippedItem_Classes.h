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
	 * BlueprintGeneratedClass BP_EquippedItem.BP_EquippedItem_C
	 * Size -> 0x0020 (FullSize[0x0440] - InheritedSize[0x0420])
	 */
	class ABP_EquippedItem_C : public ASpawnedItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     SceneRoot;                                               // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UDropletContentsComponent*                           DropletContents;                                         // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		bool ValidateItemData(TArray<class FText>* ValidationErrors);
		EInteractionState IsInteractionEnabled(EInteractionChannel Channel, class AActor* InstigatedBy);
		void ReceiveBeginPlay();
		void PowerStateChanged(bool PowerState);
		void ExecuteUbergraph_BP_EquippedItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
