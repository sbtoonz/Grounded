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
	 * Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.SetNameAndIcon
	 */
	struct UUI_RecipeLearnedListItem_C_SetNameAndIcon_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             Icon;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.GetAssociatedItemRow
	 */
	struct UUI_RecipeLearnedListItem_C_GetAssociatedItemRow_Params
	{
	public:
		struct FDataTableRowHandle                                 RowHandle;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.SetData
	 */
	struct UUI_RecipeLearnedListItem_C_SetData_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.PlayIntroduction
	 */
	struct UUI_RecipeLearnedListItem_C_PlayIntroduction_Params
	{	};

	/**
	 * Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.PlayOutro
	 */
	struct UUI_RecipeLearnedListItem_C_PlayOutro_Params
	{	};

	/**
	 * Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.OnGlobalColorChange
	 */
	struct UUI_RecipeLearnedListItem_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.DetermineColors
	 */
	struct UUI_RecipeLearnedListItem_C_DetermineColors_Params
	{	};

	/**
	 * Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.PreConstruct
	 */
	struct UUI_RecipeLearnedListItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.ExecuteUbergraph_UI_RecipeLearnedListItem
	 */
	struct UUI_RecipeLearnedListItem_C_ExecuteUbergraph_UI_RecipeLearnedListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
