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
	 * BlueprintGeneratedClass BQ_FetchBurgleChip.BQ_FetchBurgleChip_C
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UBQ_FetchBurgleChip_C : public UBurgleQuestInstanceBurgleChip
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0080(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		int32_t GetExternalScienceReward();
		void GetOptionActor(class ABurgleQuestChipOptionActor** Actor);
		int32_t GetScienceReward();
		class FString GetObjectiveText(int32_t ObjectiveIndex);
		class FString GetDescriptionText();
		void FormatStringHelper(const struct FLocString& FormatString, class FText* Text);
		class FString GetTitle();
		void On_Tech_Chip_Redeemed(class UItem* Item, class ASurvivalPlayerController* Instigator);
		void CleanUpQuest();
		void GenerateParameters();
		void On_Key_Item_Obtained(const struct FDataTableRowHandle& KeyItemRowHandle, class ASurvivalPlayerState* AcquirerPlayerState, TArray<struct FDataTableRowHandle> RecipesLearned);
		void InitializeStarted();
		void ExecuteUbergraph_BQ_FetchBurgleChip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
