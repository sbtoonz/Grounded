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
	 * BlueprintGeneratedClass BP_BurgleQuestMarkerPoint.BP_BurgleQuestMarkerPoint_C
	 * Size -> 0x0009 (FullSize[0x0651] - InheritedSize[0x0648])
	 */
	class ABP_BurgleQuestMarkerPoint_C : public ABP_MarkerBuilding_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0648(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		bool                                                       bLoadValidated;                                          // 0x0650(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ProcessLoadData();
		void ExecuteUbergraph_BP_BurgleQuestMarkerPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
