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
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.FocusOnRecipeRequirement
	 */
	struct UUI_CraftingRequirements_C_FocusOnRecipeRequirement_Params
	{
	public:
		struct FDataTableRowHandle                                 RecipeRequirement;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.GetFocusedRecipeItemSlot
	 */
	struct UUI_CraftingRequirements_C_GetFocusedRecipeItemSlot_Params
	{
	public:
		class UUI_RecipeItemSlot_C*                                ItemRowHandle;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.HandleKeyEventChord
	 */
	struct UUI_CraftingRequirements_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TX1J[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.GetFocusedRecipeItem
	 */
	struct UUI_CraftingRequirements_C_GetFocusedRecipeItem_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.GetSubheaderColor
	 */
	struct UUI_CraftingRequirements_C_GetSubheaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.UpdateToolRequirementsListVersion
	 */
	struct UUI_CraftingRequirements_C_UpdateToolRequirementsListVersion_Params
	{
	public:
		struct FDataTableRowHandle                                 RecipeResult;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FDataTableRowHandle                                 ToolRequirement;                                         // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.UpdateRequirementsListVersion
	 */
	struct UUI_CraftingRequirements_C_UpdateRequirementsListVersion_Params
	{
	public:
		struct FDataTableRowHandle                                 RecipeResult;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		TArray<struct FRecipeRequirements>                         RecipeRequirements;                                      // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.HasItemEquipped
	 */
	struct UUI_CraftingRequirements_C_HasItemEquipped_Params
	{
	public:
		struct FDataTableRowHandle                                 Item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       HasItem;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RMR8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.UpdateItemRequirements
	 */
	struct UUI_CraftingRequirements_C_UpdateItemRequirements_Params
	{
	public:
		struct FRecipeData                                         ItemRecipe;                                              // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.UpdateBuildingRequirements
	 */
	struct UUI_CraftingRequirements_C_UpdateBuildingRequirements_Params
	{
	public:
		struct FBuildingRecipeData                                 BuildingRecipe;                                          // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.UpdateToolRequirements
	 */
	struct UUI_CraftingRequirements_C_UpdateToolRequirements_Params
	{
	public:
		struct FDataTableRowHandle                                 RecipeResult;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FDataTableRowHandle                                 ToolRequirement;                                         // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.GetItemCount
	 */
	struct UUI_CraftingRequirements_C_GetItemCount_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemData;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    Count;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.HasEnoughOfItem
	 */
	struct UUI_CraftingRequirements_C_HasEnoughOfItem_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemData;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    ItemCount;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasEnough;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A6X0[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.PreConstruct
	 */
	struct UUI_CraftingRequirements_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.OnRequirementClicked
	 */
	struct UUI_CraftingRequirements_C_OnRequirementClicked_Params
	{
	public:
		struct FDataTableRowHandle                                 IngredientRowHandle;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeItemSlot_C*                                RecipeItemSlot;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.OnRequirementDoubleClicked
	 */
	struct UUI_CraftingRequirements_C_OnRequirementDoubleClicked_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeItemSlot_C*                                RecipeItemSlot;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.OnGlobalColorChange
	 */
	struct UUI_CraftingRequirements_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.OnRequirementFocused
	 */
	struct UUI_CraftingRequirements_C_OnRequirementFocused_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeItemSlot_C*                                RecipeItemSlot;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.ExecuteUbergraph_UI_CraftingRequirements
	 */
	struct UUI_CraftingRequirements_C_ExecuteUbergraph_UI_CraftingRequirements_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.HandleRecipeItemAltSelected__DelegateSignature
	 */
	struct UUI_CraftingRequirements_C_HandleRecipeItemAltSelected__DelegateSignature_Params
	{
	public:
		struct FDataTableRowHandle                                 RecipeItem;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeItemSlot_C*                                RecipeItemSlot;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.HandleRecipeItemFocused__DelegateSignature
	 */
	struct UUI_CraftingRequirements_C_HandleRecipeItemFocused__DelegateSignature_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeItemSlot_C*                                RecipeItemSlot;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingRequirements.UI_CraftingRequirements_C.HandleRecipeItemSelected__DelegateSignature
	 */
	struct UUI_CraftingRequirements_C_HandleRecipeItemSelected__DelegateSignature_Params
	{
	public:
		struct FDataTableRowHandle                                 RecipeItem;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeItemSlot_C*                                RecipeItemSlot;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
