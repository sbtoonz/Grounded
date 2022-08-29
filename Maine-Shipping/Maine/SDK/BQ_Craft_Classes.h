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
	 * BlueprintGeneratedClass BQ_Craft.BQ_Craft_C
	 * Size -> 0x000C (FullSize[0x0074] - InheritedSize[0x0068])
	 */
	class UBQ_Craft_C : public UBurgleQuestInstanceSingleRow
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0068(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		int32_t                                                    ScienceRewardMultiplier;                                 // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Is_Accepted_Item(const struct FDataTableRowHandle& Item, bool* Result);
		void Is_Accepted_Recipe(const struct FDataTableRowHandle& Recipe, bool* Result);
		void GenerateCountHelper();
		void GetRecipeProgressRange(const struct FRecipeData& Recipe, struct FFloatRange* Range);
		int32_t GetScienceReward();
		class FString GetObjectiveText(int32_t ObjectiveIndex);
		class FString GetDescriptionText();
		void GenerateParametersHelper();
		class FString GetTitle();
		void Get_Recipe_Display_Name(class FString* Name);
		void GenerateParameters();
		void CleanUpQuest();
		void InitializeStarted();
		void On_Item_Crafted(const struct FDataTableRowHandle& ItemHandle, class ASurvivalPlayerState* InstigatorPlayerState);
		void ExecuteUbergraph_BQ_Craft(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
