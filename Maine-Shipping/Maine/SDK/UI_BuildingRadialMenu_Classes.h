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
	 * WidgetBlueprintGeneratedClass UI_BuildingRadialMenu.UI_BuildingRadialMenu_C
	 * Size -> 0x0030 (FullSize[0x0490] - InheritedSize[0x0460])
	 */
	class UUI_BuildingRadialMenu_C : public UUI_RadialMenu_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0460(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FGameplayTag                                        CurrentBuildingCategory;                                 // 0x0468(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FDataTableRowHandle>                         BuildingRecipesForCategory;                              // 0x0470(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FGameplayTag>                                AvailableCategories;                                     // 0x0480(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GotoNextBuildingMaterial();
		void GetBuildingRecipeForAnyHandle(const struct FDataTableRowHandle& Handle, struct FDataTableRowHandle* BuildingRecipe);
		void GetBuildingRecipeCategoryTag(const struct FDataTableRowHandle& BuildingRecipe, struct FGameplayTag* CategoryTag);
		void Get_Known_and_Sorted_Building_Recipes_for_Category(const struct FGameplayTag& BuildingCategory, TArray<struct FDataTableRowHandle>* KnownBuildingRecipes);
		void GetCategoryTitle(int32_t Category, class FName* CategoryString);
		void GetCategoryIcon(int32_t Category, class UTexture2D** Texture);
		struct FLinearColor GetDescColor();
		void CalculateValidBuildingCategories();
		void GetPageCountForBuildingCategory(const struct FGameplayTag& Category, int32_t* Count);
		void GetPageCountForCategory(int32_t CategoryIndex, int32_t* Count);
		void GetCategoryCount(int32_t* Count);
		void GetCategoryHeader_1(const struct FGameplayTag& Category, class UUI_BuildingRadialHeaderButton_C** CategoryHeader);
		void PopulateBuildingCategories();
		struct FLinearColor GetRadialBGColor();
		void GetNextCategory(const struct FGameplayTag& CurrentCategory, struct FGameplayTag* Category);
		void GetKnownBuildingRecipesForCategory(const struct FGameplayTag& BuildingCategory, TArray<struct FDataTableRowHandle>* KnownBuildingRecipes);
		void Construct();
		void Populate();
		void PopulateCategories();
		void HandleCategoryChange(int32_t PreviousCategoryIndex);
		void HandleSelectLastRecipe();
		void OnGlobalColorChange();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void HandleNextVariant();
		void ExecuteUbergraph_UI_BuildingRadialMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
