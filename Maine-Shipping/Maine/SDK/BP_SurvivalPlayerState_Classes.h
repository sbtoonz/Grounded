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
	 * BlueprintGeneratedClass BP_SurvivalPlayerState.BP_SurvivalPlayerState_C
	 * Size -> 0x0020 (FullSize[0x05E8] - InheritedSize[0x05C8])
	 */
	class ABP_SurvivalPlayerState_C : public ASurvivalPlayerState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FDataTableRowHandle                                 PersonalMilkNugQuest;                                    // 0x05D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void TriggerPersonalMolarQuestAfterDelay(float Delay);
		void ExecuteUbergraph_BP_SurvivalPlayerState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
