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
	 * BlueprintGeneratedClass BP_Sprig_Cluster.BP_Sprig_Cluster_C
	 * Size -> 0x0008 (FullSize[0x0360] - InheritedSize[0x0358])
	 */
	class ABP_Sprig_Cluster_C : public ABP_StaticHarvestNode_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Sprig_Cluster(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
