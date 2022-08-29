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
	 * BlueprintGeneratedClass BP_StickyWeb_Manager.BP_StickyWeb_Manager_C
	 * Size -> 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
	 */
	class ABP_StickyWeb_Manager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FActiveStickyWebs>                           ActiveStickyWebs;                                        // 0x0240(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ReceiveBeginPlay();
		void CustomEvent_1();
		void ExecuteUbergraph_BP_StickyWeb_Manager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
