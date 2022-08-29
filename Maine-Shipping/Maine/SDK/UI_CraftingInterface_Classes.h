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
	 * WidgetBlueprintGeneratedClass UI_CraftingInterface.UI_CraftingInterface_C
	 * Size -> 0x0308 (FullSize[0x0660] - InheritedSize[0x0358])
	 */
	class UUI_CraftingInterface_C : public UCraftingInterfaceWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    OnCraftedItemWithFullInventory;                          // 0x0360(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    CraftandEquipClicked;                                    // 0x0368(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ItemChange;                                              // 0x0370(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    CraftingClicked;                                         // 0x0378(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UUI_TabButton_C*                                     AllTab;                                                  // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 BackpackText;                                            // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TabButton_C*                                     BuildingTabs;                                            // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TabButton_C*                                     BushcraftTab;                                            // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      Categories;                                              // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CategoriesButton_Resources_C*                    CategoriesResourcesManmade;                              // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CategoriesButton_Resources_C*                    CategoriesResourcesWildlife;                             // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CategoriesButton_Craftable_C*                    CategoryConsumables;                                     // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CategoriesButton_Craftable_C*                    CategoryCraftingDecoration;                              // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CategoriesButton_Building_C*                     CategoryDecoration;                                      // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CategoriesButton_Craftable_C*                    CategoryEquipmentGear;                                   // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             CategoryHeaderBorder;                                    // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CategoriesButton_Craftable_C*                    CategoryMaterials;                                       // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CategoriesButton_Resources_C*                    CategoryResourcesNatural;                                // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CategoriesButton_Building_C*                     CategoryStructures;                                      // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CategoriesButton_Craftable_C*                    CategoryTools;                                           // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CategoriesButton_Building_C*                     CategoryUtility;                                         // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HeaderText_C*                                    CatHeader;                                               // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  Close;                                                   // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      CountTextHolder;                                         // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CraftedItemIcon;                                         // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DroppedBG;                                               // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            DroppedOverlay;                                          // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      DroppedText;                                             // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            DroppedTextHolder;                                       // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              GrinderIcon;                                             // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HintBox;                                                 // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      HintCanCraftText;                                        // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      HintCantCraftText;                                       // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HotCraftIcon;                                            // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 IconKeyText;                                             // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          IngredientScroll;                                        // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ItemBoxLayout;                                           // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              itemboxlayouttop;                                        // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 ItemCraftedandEquippedClicked;                           // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 ItemCraftedText;                                         // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NotCraftIcon;                                            // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NoWorkbenchIcon;                                         // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              OvenIcon;                                                // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RecipeBoxLayout;                                         // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          RecipeGridScrollBox;                                     // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      RequiresGrinderText;                                     // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      RequiresOvenText;                                        // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      RequiresWheelText;                                       // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      RequiresWorkbenchText;                                   // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TabButton_C*                                     ResourcesTab;                                            // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_3;                                           // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ScreenSpecialBG;                                         // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SelectedCategoryHeader;                                  // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        SubDescriptionBox;                                       // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUDActionWidget_C*                               SubTabNext;                                              // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUDActionWidget_C*                               SubTabPrevious;                                          // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      TabControls;                                             // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ConnectedStorageInfo_C*                          UI_ConnectedStorageInfo;                                 // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_FilterBox_C*                                     UI_FilterBox;                                            // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUDActionWidget_C*                               UI_HUDActionWidget_C_2;                                  // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUDActionWidget_C*                               UI_HUDActionWidget_C_3;                                  // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          WarningTextBlock;                                        // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              WheelIcon;                                               // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              WorkbenchIcon;                                           // 0x0558(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnItemCrafted;                                           // 0x0560(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FGameplayTag                                        SelectedCraftingCategory;                                // 0x0570(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDataTableRowHandle                                 LastCrafted;                                             // 0x0578(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGameplayTag                                        CraftingBuildingType_1;                                  // 0x0588(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0590(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ShowCraftingCategories;                                  // 0x05A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShowBuildingCategories;                                  // 0x05A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShowResourcesCategories;                                 // 0x05A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       TreatButtonHoverAsFocus;                                 // 0x05A3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3L7K[0x4];                                   // 0x05A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULocalizedTextBlock*                                 LocalizedCategoryNames;                                  // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECraftingFilter                                            CraftingFilter;                                          // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECraftingInterfaceType                                     InterfaceType;                                           // 0x05B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X97B[0x6];                                   // 0x05B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                CraftingCategoriesToDefault;                             // 0x05B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UUI_RecipeListItem_Base_C*                           SelectedRecipeListItem;                                  // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          HintHotCraft;                                            // 0x05D0(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          HintCantCraft;                                           // 0x05E0(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          HintWorkbench;                                           // 0x05F0(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          CraftedandDroppedString;                                 // 0x0600(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          HintOven;                                                // 0x0610(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          HintWheel;                                               // 0x0620(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          HintGinder;                                              // 0x0630(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          SearchResourcesString;                                   // 0x0640(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          SearchRecipesString;                                     // 0x0650(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void ClearSelections();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void ApplyScrollBoxTextFilter();
		bool HandleKeyEventChord(const struct FInputChord& InChord);
		void RefreshHintbox();
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		void SetHintText();
		void HasUninspectedRecipe(bool* HasUninspected);
		void Refresh_UI();
		class UWidget* NavigateFromDetailsBackToRecipeList(EUINavigation Navigation);
		void SelectDefaultCategory(bool* Succeeded);
		void SetLastCraftingMenuSelection(const struct FDataTableRowHandle& Recipe);
		void GetLastCraftingMenuSelection(struct FDataTableRowHandle* SelectedRecipe);
		struct FLinearColor GetAccentOne();
		void SelectNextCategory(bool Forwards);
		void CraftAndEquipItem(const struct FDataTableRowHandle& RecipeRowHandle);
		void GetSelectedCategoryHeader(class FText* CategoryName);
		struct FSlateColor GetGlobalDarkenerColor();
		struct FLinearColor GetAttentionColor();
		ESlateVisibility GetRequiresCraftingBuildingVisibility();
		void FilterValidForResources(bool* Valid);
		void FilterValidForBuildings(bool* Valid);
		void FilterValidForCrafting(bool* Valid);
		struct FSlateColor GetWarningColor();
		void SetSelectedTab(class UUI_TabButton_C* SelectedTab);
		ESlateVisibility Get_WorkbenchTab_Visibility();
		bool CraftingRecipePassesFilterCheck(const struct FRecipeData& RecipeData, const struct FGameplayTag& CurrentRecipeCategory);
		ESlateVisibility Get_ItemName_Visibility_1();
		struct FLinearColor GetDescPanelColor();
		struct FLinearColor GetAccentThreeColor();
		class FText GetSelectedCategorySubheader();
		ESlateVisibility GetKnownRecipesUsedInVisibility();
		void SelectResource(const struct FDataTableRowHandle& ResourceItemHandle, bool* Found);
		void SelectBuildingRecipe(const struct FDataTableRowHandle& BuildingRecipe, bool* Found);
		void GoToItemEntry(const struct FDataTableRowHandle& RowHandle);
		struct FSlateColor GetAccentTwoColor();
		void HasKnownRecipeInBuildingCategory(const struct FGameplayTag& RecipeCategory, bool* HasRecipe);
		void HasKnownRecipeInCraftingCategory(const struct FGameplayTag& RecipeCategory, bool* HasRecipe);
		void HasUninspectedResource(bool* HasUninspectedRecipe);
		void HasUninspectedBuidlingRecipeInCategory(const struct FGameplayTag& Category, bool* HasUninspectedRecipe);
		void HasUninspectedCraftingRecipeInCategory(const struct FGameplayTag& CategoryTag, bool* HasUninspectedRecipe);
		void GetCategoryButton(const struct FGameplayTag& CraftingCategory, class UUI_CategoriesButton_Base_C** Button);
		void Refresh_Bottom_Buttons();
		struct FSlateColor GetSubheaderColorBinding();
		ESlateVisibility Get_ItemIcon_Visibility_1();
		ESlateVisibility IsBuildingOrCraftingRecipeSelected();
		void PlaceBuildingBlueprint(const struct FDataTableRowHandle& Recipe);
		ESlateVisibility IsBuildingRecipeSelected();
		void CreateBuildingRecipeList(const struct FGameplayTag& RecipeCategory);
		struct FLinearColor GetUIAccentTwo();
		struct FSlateColor GetBasicColorBinding();
		struct FSlateColor GetHeaderColorBinding();
		void SelectCraftingRecipe(const struct FDataTableRowHandle& CraftingRecipe, bool* Found);
		ESlateVisibility DescriptionVisibility();
		void CreateResourcesList();
		void SetSelectedCategoryState(const struct FGameplayTag& Category);
		ESlateVisibility IsCraftingRecipeSelected();
		void RefreshCategories();
		void CanCraftAnyInCategory(const struct FGameplayTag& RecipeCategory, bool* CanCraftAny);
		void RefreshRecipeList();
		void RefreshRequirements();
		void CreateCraftingRecipeList(const struct FGameplayTag& RecipeCategory);
		ESlateVisibility CraftAndEquipIsVisible();
		bool CraftIsEnabled();
		void CraftItem(const struct FDataTableRowHandle& Recipe, int32_t Count);
		void SetSelected(class UUI_RecipeListItem_Base_C* SelectedItem);
		void CanCraft(const struct FDataTableRowHandle& RecipeRowHandle, bool* Craftable);
		void Construct();
		void OnCraftingItemSelected(const struct FDataTableRowHandle& SelectedRecipe, class UUI_RecipeListItem_Base_C* SelectedItem);
		void BndEvt__CraftEquip_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__Craft_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature();
		void OnCategorySelected(const struct FGameplayTag& Category);
		void CraftSelectedRecipe(int32_t Count);
		void CraftAndEquipSelectedRecipe();
		void SelectedItemCount(const struct FDataTableRowHandle& ItemRowHandle);
		void OnResourcesCategoryClicked();
		void OnResourceSelected(const struct FDataTableRowHandle& SelectedResource, class UUI_RecipeListItem_Base_C* SelectedListItem);
		void OnCraftingRecipeItemDoubleClick(const struct FDataTableRowHandle& SelectedRecipe, class UUI_RecipeListItem_Base_C* SelectedItem);
		void BndEvt__ResourceCategory_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__3_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__4_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__5_K2Node_ComponentBoundEvent_10_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__UI_CategoriesButton_Craftable_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__CategoryDefenses_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__CategoryOther_K2Node_ComponentBoundEvent_12_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__CategoryDecoration_K2Node_ComponentBoundEvent_13_OnNormalButtonClicked__DelegateSignature();
		void OnBuildingRecipeSelected(const struct FDataTableRowHandle& SelectedRecipe, class UUI_RecipeListItem_Base_C* SelectedItem);
		void OnBuildingRecipeItemDoubleClick(const struct FDataTableRowHandle& SelectedRecipe, class UUI_RecipeListItem_Base_C* SelectedItem);
		void BndEvt__PlaceBlueprint_K2Node_ComponentBoundEvent_14_OnNormalButtonClicked__DelegateSignature();
		void PlaceSelectedBuildingBlueprint();
		void BndEvt__BushcraftTab_K2Node_ComponentBoundEvent_16_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton);
		void BndEvt__WorkbenchTab_K2Node_ComponentBoundEvent_17_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton);
		void BndEvt__BuildingTabs_K2Node_ComponentBoundEvent_18_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton);
		void BndEvt__AllTab_K2Node_ComponentBoundEvent_19_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton);
		void BndEvt__Resources_K2Node_ComponentBoundEvent_20_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton);
		void OnGlobalColorChange();
		void OnUsedInRecipeFocused(const struct FDataTableRowHandle& Recipe, class UUI_RecipeListItem_Base_C* RecipeListItem);
		void OnCraftingRequirementFocused(const struct FDataTableRowHandle& Recipe, class UUI_RecipeItemSlot_C* RecipeRequirementSlot);
		void BndEvt__HotCraft_K2Node_ComponentBoundEvent_21_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__GotoEntry_K2Node_ComponentBoundEvent_22_OnNormalButtonClicked__DelegateSignature();
		void HotCraftRecipeRequirement(const struct FDataTableRowHandle& RecipeItemSlot, int32_t Count);
		void OnCraftingRequirementAltSelected(const struct FDataTableRowHandle& RecipeItem, class UUI_RecipeItemSlot_C* RecipeItemSlot);
		void OnUsedInRecipeAltSelected(const struct FDataTableRowHandle& Recipe);
		void HandleRequirementHotCraft(const struct FDataTableRowHandle& RecipeItem, class UUI_RecipeItemSlot_C* RecipeItemSlot);
		void OnItemCraftedWithFullInventory(const struct FDataTableRowHandle& ItemRowHandle);
		void Destruct();
		void BndEvt__CategoryCraftingDecoration_K2Node_ComponentBoundEvent_23_OnNormalButtonClicked__DelegateSignature();
		void OnNoCategorySelected();
		void BndEvt__UI_CraftingInterface_UI_FilterBox_K2Node_ComponentBoundEvent_8_OnFilterChanged__DelegateSignature(const class FText& Text);
		void BndEvt__UI_CraftingInterface_Craft_1_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature();
		void JumpToSelectedEntry();
		void HotCraftIngredient(int32_t Count);
		void BndEvt__UI_CraftingInterface_HotCraftMany_K2Node_ComponentBoundEvent_11_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__UI_CraftingInterface_UI_FilterBox_K2Node_ComponentBoundEvent_15_OnFocused__DelegateSignature();
		void ExecuteUbergraph_UI_CraftingInterface(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		void OnItemCrafted__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
