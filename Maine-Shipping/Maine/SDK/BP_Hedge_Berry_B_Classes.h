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
	 * BlueprintGeneratedClass BP_Hedge_Berry_B.BP_Hedge_Berry_B_C
	 * Size -> 0x0010 (FullSize[0x0408] - InheritedSize[0x03F8])
	 */
	class ABP_Hedge_Berry_B_C : public ABP_BASE_Hedge_Berry_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USceneComponent*                                     SpawnPoint;                                              // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Hedge_Berry_B(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
