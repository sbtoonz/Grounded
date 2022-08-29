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
	 * BlueprintGeneratedClass BQ_KillUnique.BQ_KillUnique_C
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBQ_KillUnique_C : public UBurgleQuestInstanceSingleOptAct
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0070(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		class FString GetTitle();
		int32_t GetScienceReward();
		class FString GetObjectiveText(int32_t ObjectiveIndex);
		class FString GetDescriptionText();
		void InitializeStarted();
		void On_Option_Completed(class ABurgleQuestKillUniqueOptionActor* Sender);
		void CleanUpQuest();
		void GenerateParameters();
		void ExecuteUbergraph_BQ_KillUnique(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
