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
	 * WidgetBlueprintGeneratedClass UI_EmoteRadialMenu.UI_EmoteRadialMenu_C
	 * Size -> 0x0020 (FullSize[0x0480] - InheritedSize[0x0460])
	 */
	class UUI_EmoteRadialMenu_C : public UUI_RadialMenu_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0460(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		unsigned char                                              CurrentEmoteCategory;                                    // 0x0468(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LDGX[0x7];                                   // 0x0469(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDataTableRowHandle>                         EmotesForCategory;                                       // 0x0470(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FLinearColor GetDescColor();
		void CalculateValidBuildingCategories();
		void GetPageCountForBuildingCategory(int32_t* Count);
		void GetPageCountForCategory(int32_t CategoryIndex, int32_t* Count);
		void GetCategoryCount(int32_t* Count);
		void GetCategoryHeader_1(unsigned char Category, class UUI_BuildingRadialHeaderButton_C** CategoryHeader);
		void PopulateEmoteCategories();
		struct FLinearColor GetRadialBGColor();
		void GetEmotesForCategory(TArray<struct FDataTableRowHandle>* KnownBuildingRecipes);
		void Construct();
		void Populate();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void PopulateCategories();
		void CreateInitialSlots();
		void HandleCategoryChange(int32_t PreviousCategoryIndex);
		void ExecuteUbergraph_UI_EmoteRadialMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
