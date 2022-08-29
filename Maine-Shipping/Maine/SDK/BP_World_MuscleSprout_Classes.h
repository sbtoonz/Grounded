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
	 * BlueprintGeneratedClass BP_World_MuscleSprout.BP_World_MuscleSprout_C
	 * Size -> 0x0020 (FullSize[0x0460] - InheritedSize[0x0440])
	 */
	class ABP_World_MuscleSprout_C : public ABP_WorldItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FConversationReference                              BurgleTutorialConversation;                              // 0x0448(0x0018) Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void UpdateSurvivalTutorial(class UItem* Item);
		void ExecuteUbergraph_BP_World_MuscleSprout(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
