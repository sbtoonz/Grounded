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
	 * BlueprintGeneratedClass BP_SmallPlantB_Dry.BP_SmallPlantB_Dry_C
	 * Size -> 0x0008 (FullSize[0x0450] - InheritedSize[0x0448])
	 */
	class ABP_SmallPlantB_Dry_C : public ABP_SmallPlantA_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0448(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_SmallPlantB_Dry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
