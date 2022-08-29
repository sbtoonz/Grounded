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
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GotoNextBuildingMaterial
	 */
	struct UUI_BuildingRadialMenu_C_GotoNextBuildingMaterial_Params
	{	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetBuildingRecipeForAnyHandle
	 */
	struct UUI_BuildingRadialMenu_C_GetBuildingRecipeForAnyHandle_Params
	{
	public:
		struct FDataTableRowHandle                                 Handle;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FDataTableRowHandle                                 BuildingRecipe;                                          // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetBuildingRecipeCategoryTag
	 */
	struct UUI_BuildingRadialMenu_C_GetBuildingRecipeCategoryTag_Params
	{
	public:
		struct FDataTableRowHandle                                 BuildingRecipe;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FGameplayTag                                        CategoryTag;                                             // 0x0010(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.Get Known and Sorted Building Recipes for Category
	 */
	struct UUI_BuildingRadialMenu_C_Get_Known_and_Sorted_Building_Recipes_for_Category_Params
	{
	public:
		struct FGameplayTag                                        BuildingCategory;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		TArray<struct FDataTableRowHandle>                         KnownBuildingRecipes;                                    // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetCategoryTitle
	 */
	struct UUI_BuildingRadialMenu_C_GetCategoryTitle_Params
	{
	public:
		int32_t                                                    Category;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                CategoryString;                                          // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetCategoryIcon
	 */
	struct UUI_BuildingRadialMenu_C_GetCategoryIcon_Params
	{
	public:
		int32_t                                                    Category;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FB3P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Texture;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetDescColor
	 */
	struct UUI_BuildingRadialMenu_C_GetDescColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.CalculateValidBuildingCategories
	 */
	struct UUI_BuildingRadialMenu_C_CalculateValidBuildingCategories_Params
	{	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetPageCountForBuildingCategory
	 */
	struct UUI_BuildingRadialMenu_C_GetPageCountForBuildingCategory_Params
	{
	public:
		struct FGameplayTag                                        Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetPageCountForCategory
	 */
	struct UUI_BuildingRadialMenu_C_GetPageCountForCategory_Params
	{
	public:
		int32_t                                                    CategoryIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetCategoryCount
	 */
	struct UUI_BuildingRadialMenu_C_GetCategoryCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetCategoryHeader_1
	 */
	struct UUI_BuildingRadialMenu_C_GetCategoryHeader_1_Params
	{
	public:
		struct FGameplayTag                                        Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UUI_BuildingRadialHeaderButton_C*                    CategoryHeader;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.PopulateBuildingCategories
	 */
	struct UUI_BuildingRadialMenu_C_PopulateBuildingCategories_Params
	{	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetRadialBGColor
	 */
	struct UUI_BuildingRadialMenu_C_GetRadialBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetNextCategory
	 */
	struct UUI_BuildingRadialMenu_C_GetNextCategory_Params
	{
	public:
		struct FGameplayTag                                        CurrentCategory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Category;                                                // 0x0008(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.GetKnownBuildingRecipesForCategory
	 */
	struct UUI_BuildingRadialMenu_C_GetKnownBuildingRecipesForCategory_Params
	{
	public:
		struct FGameplayTag                                        BuildingCategory;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		TArray<struct FDataTableRowHandle>                         KnownBuildingRecipes;                                    // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.Construct
	 */
	struct UUI_BuildingRadialMenu_C_Construct_Params
	{	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.Populate
	 */
	struct UUI_BuildingRadialMenu_C_Populate_Params
	{	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.PopulateCategories
	 */
	struct UUI_BuildingRadialMenu_C_PopulateCategories_Params
	{	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.HandleCategoryChange
	 */
	struct UUI_BuildingRadialMenu_C_HandleCategoryChange_Params
	{
	public:
		int32_t                                                    PreviousCategoryIndex;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.HandleSelectLastRecipe
	 */
	struct UUI_BuildingRadialMenu_C_HandleSelectLastRecipe_Params
	{	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.OnGlobalColorChange
	 */
	struct UUI_BuildingRadialMenu_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.Tick
	 */
	struct UUI_BuildingRadialMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.HandleNextVariant
	 */
	struct UUI_BuildingRadialMenu_C_HandleNextVariant_Params
	{	};

	/**
	 * Function UI_BuildingRadialMenu.UI_BuildingRadialMenu_C.ExecuteUbergraph_UI_BuildingRadialMenu
	 */
	struct UUI_BuildingRadialMenu_C_ExecuteUbergraph_UI_BuildingRadialMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
