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
	 * BlueprintGeneratedClass BQ_KillGroup.BQ_KillGroup_C
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UBQ_KillGroup_C : public UBurgleQuestInstanceKillGroup
	{
	public:
		void GetCreatureNameHelper(class FString* Name);
		int32_t GetScienceReward();
		class FString GetObjectiveText(int32_t ObjectiveIndex);
		class FString GetDescriptionText();
		class FString GetTitle();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
