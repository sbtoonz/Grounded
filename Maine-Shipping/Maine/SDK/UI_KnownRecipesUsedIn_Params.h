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
	 * Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.RefreshUI
	 */
	struct UUI_KnownRecipesUsedIn_C_RefreshUI_Params
	{	};

	/**
	 * Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.FocusOnRecipe
	 */
	struct UUI_KnownRecipesUsedIn_C_FocusOnRecipe_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.HandleKeyEventChord
	 */
	struct UUI_KnownRecipesUsedIn_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X7MI[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.GetFocusedKnownRecipe
	 */
	struct UUI_KnownRecipesUsedIn_C_GetFocusedKnownRecipe_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.CreateChildHelper
	 */
	struct UUI_KnownRecipesUsedIn_C_CreateChildHelper_Params
	{
	public:
		class UClass*                                              WidgetType;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_RecipeListItem_Base_C*                           NewItem;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.GetColorAndOpacity_1
	 */
	struct UUI_KnownRecipesUsedIn_C_GetColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.SetIngredient
	 */
	struct UUI_KnownRecipesUsedIn_C_SetIngredient_Params
	{
	public:
		struct FDataTableRowHandle                                 IngredientRowHandle;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.OnCraftingRecipeClicked
	 */
	struct UUI_KnownRecipesUsedIn_C_OnCraftingRecipeClicked_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeListItem_Base_C*                           RecipeListItem;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.OnGlobalColorChange
	 */
	struct UUI_KnownRecipesUsedIn_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.OnRecipeListItemFocused
	 */
	struct UUI_KnownRecipesUsedIn_C_OnRecipeListItemFocused_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeListItem_Base_C*                           RecipeListItem;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.ExecuteUbergraph_UI_KnownRecipesUsedIn
	 */
	struct UUI_KnownRecipesUsedIn_C_ExecuteUbergraph_UI_KnownRecipesUsedIn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.HandleRecipeAltSelected__DelegateSignature
	 */
	struct UUI_KnownRecipesUsedIn_C_HandleRecipeAltSelected__DelegateSignature_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.HandleRecipeFocused__DelegateSignature
	 */
	struct UUI_KnownRecipesUsedIn_C_HandleRecipeFocused__DelegateSignature_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeListItem_Base_C*                           RecipeListItem;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C.HandleRecipeSelected__DelegateSignature
	 */
	struct UUI_KnownRecipesUsedIn_C_HandleRecipeSelected__DelegateSignature_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
