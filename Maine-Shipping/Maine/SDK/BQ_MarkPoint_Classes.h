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
	 * BlueprintGeneratedClass BQ_MarkPoint.BQ_MarkPoint_C
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UBQ_MarkPoint_C : public UBurgleQuestInstanceMarkPoint
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0088(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void Format_String_Helper(const struct FLocString& Format, class FText* Result);
		int32_t GetScienceReward();
		class FString GetDescriptionText();
		class FString GetObjectiveText(int32_t ObjectiveIndex);
		class FString GetTitle();
		void NotifyQuestStart();
		void InitializeStarted();
		void On_Designated_Building_State_Changed(class AActor* InInstigator, EBuildingState NewState);
		void CleanUpQuest();
		void GenerateParameters();
		void ExecuteUbergraph_BQ_MarkPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
