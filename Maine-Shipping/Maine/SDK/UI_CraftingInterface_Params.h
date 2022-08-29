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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.ClearSelections
	 */
	struct UUI_CraftingInterface_C_ClearSelections_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnKeyDown
	 */
	struct UUI_CraftingInterface_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.ApplyScrollBoxTextFilter
	 */
	struct UUI_CraftingInterface_C_ApplyScrollBoxTextFilter_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.HandleKeyEventChord
	 */
	struct UUI_CraftingInterface_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.RefreshHintbox
	 */
	struct UUI_CraftingInterface_C_RefreshHintbox_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnAnalogValueChanged
	 */
	struct UUI_CraftingInterface_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.SetHintText
	 */
	struct UUI_CraftingInterface_C_SetHintText_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.HasUninspectedRecipe
	 */
	struct UUI_CraftingInterface_C_HasUninspectedRecipe_Params
	{
	public:
		bool                                                       HasUninspected;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GNSH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.Refresh UI
	 */
	struct UUI_CraftingInterface_C_Refresh_UI_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.NavigateFromDetailsBackToRecipeList
	 */
	struct UUI_CraftingInterface_C_NavigateFromDetailsBackToRecipeList_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_COIB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.SelectDefaultCategory
	 */
	struct UUI_CraftingInterface_C_SelectDefaultCategory_Params
	{
	public:
		bool                                                       Succeeded;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0UGW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.SetLastCraftingMenuSelection
	 */
	struct UUI_CraftingInterface_C_SetLastCraftingMenuSelection_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetLastCraftingMenuSelection
	 */
	struct UUI_CraftingInterface_C_GetLastCraftingMenuSelection_Params
	{
	public:
		struct FDataTableRowHandle                                 SelectedRecipe;                                          // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetAccentOne
	 */
	struct UUI_CraftingInterface_C_GetAccentOne_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.SelectNextCategory
	 */
	struct UUI_CraftingInterface_C_SelectNextCategory_Params
	{
	public:
		bool                                                       Forwards;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TZLH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.CraftAndEquipItem
	 */
	struct UUI_CraftingInterface_C_CraftAndEquipItem_Params
	{
	public:
		struct FDataTableRowHandle                                 RecipeRowHandle;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetSelectedCategoryHeader
	 */
	struct UUI_CraftingInterface_C_GetSelectedCategoryHeader_Params
	{
	public:
		class FText                                                CategoryName;                                            // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetGlobalDarkenerColor
	 */
	struct UUI_CraftingInterface_C_GetGlobalDarkenerColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetAttentionColor
	 */
	struct UUI_CraftingInterface_C_GetAttentionColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetRequiresCraftingBuildingVisibility
	 */
	struct UUI_CraftingInterface_C_GetRequiresCraftingBuildingVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.FilterValidForResources
	 */
	struct UUI_CraftingInterface_C_FilterValidForResources_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.FilterValidForBuildings
	 */
	struct UUI_CraftingInterface_C_FilterValidForBuildings_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.FilterValidForCrafting
	 */
	struct UUI_CraftingInterface_C_FilterValidForCrafting_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetWarningColor
	 */
	struct UUI_CraftingInterface_C_GetWarningColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.SetSelectedTab
	 */
	struct UUI_CraftingInterface_C_SetSelectedTab_Params
	{
	public:
		class UUI_TabButton_C*                                     SelectedTab;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.Get_WorkbenchTab_Visibility
	 */
	struct UUI_CraftingInterface_C_Get_WorkbenchTab_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HMLQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.CraftingRecipePassesFilterCheck
	 */
	struct UUI_CraftingInterface_C_CraftingRecipePassesFilterCheck_Params
	{
	public:
		struct FRecipeData                                         RecipeData;                                              // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FGameplayTag                                        CurrentRecipeCategory;                                   // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.Get_ItemName_Visibility_1
	 */
	struct UUI_CraftingInterface_C_Get_ItemName_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetDescPanelColor
	 */
	struct UUI_CraftingInterface_C_GetDescPanelColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetAccentThreeColor
	 */
	struct UUI_CraftingInterface_C_GetAccentThreeColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetSelectedCategorySubheader
	 */
	struct UUI_CraftingInterface_C_GetSelectedCategorySubheader_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetKnownRecipesUsedInVisibility
	 */
	struct UUI_CraftingInterface_C_GetKnownRecipesUsedInVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.SelectResource
	 */
	struct UUI_CraftingInterface_C_SelectResource_Params
	{
	public:
		struct FDataTableRowHandle                                 ResourceItemHandle;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       Found;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RB7O[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.SelectBuildingRecipe
	 */
	struct UUI_CraftingInterface_C_SelectBuildingRecipe_Params
	{
	public:
		struct FDataTableRowHandle                                 BuildingRecipe;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       Found;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AOW1[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GoToItemEntry
	 */
	struct UUI_CraftingInterface_C_GoToItemEntry_Params
	{
	public:
		struct FDataTableRowHandle                                 RowHandle;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetAccentTwoColor
	 */
	struct UUI_CraftingInterface_C_GetAccentTwoColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.HasKnownRecipeInBuildingCategory
	 */
	struct UUI_CraftingInterface_C_HasKnownRecipeInBuildingCategory_Params
	{
	public:
		struct FGameplayTag                                        RecipeCategory;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasRecipe;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9JUH[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.HasKnownRecipeInCraftingCategory
	 */
	struct UUI_CraftingInterface_C_HasKnownRecipeInCraftingCategory_Params
	{
	public:
		struct FGameplayTag                                        RecipeCategory;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasRecipe;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DQ33[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.HasUninspectedResource
	 */
	struct UUI_CraftingInterface_C_HasUninspectedResource_Params
	{
	public:
		bool                                                       HasUninspectedRecipe;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0AP1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.HasUninspectedBuidlingRecipeInCategory
	 */
	struct UUI_CraftingInterface_C_HasUninspectedBuidlingRecipeInCategory_Params
	{
	public:
		struct FGameplayTag                                        Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasUninspectedRecipe;                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VADB[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.HasUninspectedCraftingRecipeInCategory
	 */
	struct UUI_CraftingInterface_C_HasUninspectedCraftingRecipeInCategory_Params
	{
	public:
		struct FGameplayTag                                        CategoryTag;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasUninspectedRecipe;                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KYY0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetCategoryButton
	 */
	struct UUI_CraftingInterface_C_GetCategoryButton_Params
	{
	public:
		struct FGameplayTag                                        CraftingCategory;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UUI_CategoriesButton_Base_C*                         Button;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.Refresh Bottom Buttons
	 */
	struct UUI_CraftingInterface_C_Refresh_Bottom_Buttons_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetSubheaderColorBinding
	 */
	struct UUI_CraftingInterface_C_GetSubheaderColorBinding_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.Get_ItemIcon_Visibility_1
	 */
	struct UUI_CraftingInterface_C_Get_ItemIcon_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.IsBuildingOrCraftingRecipeSelected
	 */
	struct UUI_CraftingInterface_C_IsBuildingOrCraftingRecipeSelected_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.PlaceBuildingBlueprint
	 */
	struct UUI_CraftingInterface_C_PlaceBuildingBlueprint_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.IsBuildingRecipeSelected
	 */
	struct UUI_CraftingInterface_C_IsBuildingRecipeSelected_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.CreateBuildingRecipeList
	 */
	struct UUI_CraftingInterface_C_CreateBuildingRecipeList_Params
	{
	public:
		struct FGameplayTag                                        RecipeCategory;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetUIAccentTwo
	 */
	struct UUI_CraftingInterface_C_GetUIAccentTwo_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetBasicColorBinding
	 */
	struct UUI_CraftingInterface_C_GetBasicColorBinding_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.GetHeaderColorBinding
	 */
	struct UUI_CraftingInterface_C_GetHeaderColorBinding_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.SelectCraftingRecipe
	 */
	struct UUI_CraftingInterface_C_SelectCraftingRecipe_Params
	{
	public:
		struct FDataTableRowHandle                                 CraftingRecipe;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       Found;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I31F[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.DescriptionVisibility
	 */
	struct UUI_CraftingInterface_C_DescriptionVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.CreateResourcesList
	 */
	struct UUI_CraftingInterface_C_CreateResourcesList_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.SetSelectedCategoryState
	 */
	struct UUI_CraftingInterface_C_SetSelectedCategoryState_Params
	{
	public:
		struct FGameplayTag                                        Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.IsCraftingRecipeSelected
	 */
	struct UUI_CraftingInterface_C_IsCraftingRecipeSelected_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.RefreshCategories
	 */
	struct UUI_CraftingInterface_C_RefreshCategories_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.CanCraftAnyInCategory
	 */
	struct UUI_CraftingInterface_C_CanCraftAnyInCategory_Params
	{
	public:
		struct FGameplayTag                                        RecipeCategory;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanCraftAny;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H01T[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.RefreshRecipeList
	 */
	struct UUI_CraftingInterface_C_RefreshRecipeList_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.RefreshRequirements
	 */
	struct UUI_CraftingInterface_C_RefreshRequirements_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.CreateCraftingRecipeList
	 */
	struct UUI_CraftingInterface_C_CreateCraftingRecipeList_Params
	{
	public:
		struct FGameplayTag                                        RecipeCategory;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.CraftAndEquipIsVisible
	 */
	struct UUI_CraftingInterface_C_CraftAndEquipIsVisible_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.CraftIsEnabled
	 */
	struct UUI_CraftingInterface_C_CraftIsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.CraftItem
	 */
	struct UUI_CraftingInterface_C_CraftItem_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    Count;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.SetSelected
	 */
	struct UUI_CraftingInterface_C_SetSelected_Params
	{
	public:
		class UUI_RecipeListItem_Base_C*                           SelectedItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.CanCraft
	 */
	struct UUI_CraftingInterface_C_CanCraft_Params
	{
	public:
		struct FDataTableRowHandle                                 RecipeRowHandle;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       Craftable;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.Construct
	 */
	struct UUI_CraftingInterface_C_Construct_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnCraftingItemSelected
	 */
	struct UUI_CraftingInterface_C_OnCraftingItemSelected_Params
	{
	public:
		struct FDataTableRowHandle                                 SelectedRecipe;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeListItem_Base_C*                           SelectedItem;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__CraftEquip_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__CraftEquip_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__Craft_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__Craft_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnCategorySelected
	 */
	struct UUI_CraftingInterface_C_OnCategorySelected_Params
	{
	public:
		struct FGameplayTag                                        Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.CraftSelectedRecipe
	 */
	struct UUI_CraftingInterface_C_CraftSelectedRecipe_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.CraftAndEquipSelectedRecipe
	 */
	struct UUI_CraftingInterface_C_CraftAndEquipSelectedRecipe_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.SelectedItemCount
	 */
	struct UUI_CraftingInterface_C_SelectedItemCount_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnResourcesCategoryClicked
	 */
	struct UUI_CraftingInterface_C_OnResourcesCategoryClicked_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnResourceSelected
	 */
	struct UUI_CraftingInterface_C_OnResourceSelected_Params
	{
	public:
		struct FDataTableRowHandle                                 SelectedResource;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeListItem_Base_C*                           SelectedListItem;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnCraftingRecipeItemDoubleClick
	 */
	struct UUI_CraftingInterface_C_OnCraftingRecipeItemDoubleClick_Params
	{
	public:
		struct FDataTableRowHandle                                 SelectedRecipe;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeListItem_Base_C*                           SelectedItem;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__ResourceCategory_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__ResourceCategory_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__3_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__3_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__4_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__4_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__5_K2Node_ComponentBoundEvent_10_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__5_K2Node_ComponentBoundEvent_10_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__UI_CategoriesButton_Craftable_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__UI_CategoriesButton_Craftable_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__CategoryDefenses_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__CategoryDefenses_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__CategoryOther_K2Node_ComponentBoundEvent_12_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__CategoryOther_K2Node_ComponentBoundEvent_12_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__CategoryDecoration_K2Node_ComponentBoundEvent_13_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__CategoryDecoration_K2Node_ComponentBoundEvent_13_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnBuildingRecipeSelected
	 */
	struct UUI_CraftingInterface_C_OnBuildingRecipeSelected_Params
	{
	public:
		struct FDataTableRowHandle                                 SelectedRecipe;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeListItem_Base_C*                           SelectedItem;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnBuildingRecipeItemDoubleClick
	 */
	struct UUI_CraftingInterface_C_OnBuildingRecipeItemDoubleClick_Params
	{
	public:
		struct FDataTableRowHandle                                 SelectedRecipe;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeListItem_Base_C*                           SelectedItem;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__PlaceBlueprint_K2Node_ComponentBoundEvent_14_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__PlaceBlueprint_K2Node_ComponentBoundEvent_14_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.PlaceSelectedBuildingBlueprint
	 */
	struct UUI_CraftingInterface_C_PlaceSelectedBuildingBlueprint_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__BushcraftTab_K2Node_ComponentBoundEvent_16_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__BushcraftTab_K2Node_ComponentBoundEvent_16_OnNormalButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_TabButton_C*                                     TabButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__WorkbenchTab_K2Node_ComponentBoundEvent_17_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__WorkbenchTab_K2Node_ComponentBoundEvent_17_OnNormalButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_TabButton_C*                                     TabButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__BuildingTabs_K2Node_ComponentBoundEvent_18_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__BuildingTabs_K2Node_ComponentBoundEvent_18_OnNormalButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_TabButton_C*                                     TabButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__AllTab_K2Node_ComponentBoundEvent_19_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__AllTab_K2Node_ComponentBoundEvent_19_OnNormalButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_TabButton_C*                                     TabButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__Resources_K2Node_ComponentBoundEvent_20_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__Resources_K2Node_ComponentBoundEvent_20_OnNormalButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_TabButton_C*                                     TabButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnGlobalColorChange
	 */
	struct UUI_CraftingInterface_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnUsedInRecipeFocused
	 */
	struct UUI_CraftingInterface_C_OnUsedInRecipeFocused_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeListItem_Base_C*                           RecipeListItem;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnCraftingRequirementFocused
	 */
	struct UUI_CraftingInterface_C_OnCraftingRequirementFocused_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeItemSlot_C*                                RecipeRequirementSlot;                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__HotCraft_K2Node_ComponentBoundEvent_21_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__HotCraft_K2Node_ComponentBoundEvent_21_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__GotoEntry_K2Node_ComponentBoundEvent_22_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__GotoEntry_K2Node_ComponentBoundEvent_22_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.HotCraftRecipeRequirement
	 */
	struct UUI_CraftingInterface_C_HotCraftRecipeRequirement_Params
	{
	public:
		struct FDataTableRowHandle                                 RecipeItemSlot;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    Count;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnCraftingRequirementAltSelected
	 */
	struct UUI_CraftingInterface_C_OnCraftingRequirementAltSelected_Params
	{
	public:
		struct FDataTableRowHandle                                 RecipeItem;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeItemSlot_C*                                RecipeItemSlot;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnUsedInRecipeAltSelected
	 */
	struct UUI_CraftingInterface_C_OnUsedInRecipeAltSelected_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.HandleRequirementHotCraft
	 */
	struct UUI_CraftingInterface_C_HandleRequirementHotCraft_Params
	{
	public:
		struct FDataTableRowHandle                                 RecipeItem;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeItemSlot_C*                                RecipeItemSlot;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnItemCraftedWithFullInventory
	 */
	struct UUI_CraftingInterface_C_OnItemCraftedWithFullInventory_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.Destruct
	 */
	struct UUI_CraftingInterface_C_Destruct_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__CategoryCraftingDecoration_K2Node_ComponentBoundEvent_23_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__CategoryCraftingDecoration_K2Node_ComponentBoundEvent_23_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnNoCategorySelected
	 */
	struct UUI_CraftingInterface_C_OnNoCategorySelected_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__UI_CraftingInterface_UI_FilterBox_K2Node_ComponentBoundEvent_8_OnFilterChanged__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__UI_CraftingInterface_UI_FilterBox_K2Node_ComponentBoundEvent_8_OnFilterChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__UI_CraftingInterface_Craft_1_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__UI_CraftingInterface_Craft_1_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.JumpToSelectedEntry
	 */
	struct UUI_CraftingInterface_C_JumpToSelectedEntry_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.HotCraftIngredient
	 */
	struct UUI_CraftingInterface_C_HotCraftIngredient_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__UI_CraftingInterface_HotCraftMany_K2Node_ComponentBoundEvent_11_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__UI_CraftingInterface_HotCraftMany_K2Node_ComponentBoundEvent_11_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.BndEvt__UI_CraftingInterface_UI_FilterBox_K2Node_ComponentBoundEvent_15_OnFocused__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_BndEvt__UI_CraftingInterface_UI_FilterBox_K2Node_ComponentBoundEvent_15_OnFocused__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.ExecuteUbergraph_UI_CraftingInterface
	 */
	struct UUI_CraftingInterface_C_ExecuteUbergraph_UI_CraftingInterface_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnClose__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInterface.UI_CraftingInterface_C.OnItemCrafted__DelegateSignature
	 */
	struct UUI_CraftingInterface_C_OnItemCrafted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
