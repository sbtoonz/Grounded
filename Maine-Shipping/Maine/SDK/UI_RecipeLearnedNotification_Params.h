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
	 * Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.IsReadyForOutro
	 */
	struct UUI_RecipeLearnedNotification_C_IsReadyForOutro_Params
	{
	public:
		bool                                                       IsReady;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V4RQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.SetData
	 */
	struct UUI_RecipeLearnedNotification_C_SetData_Params
	{
	public:
		TArray<struct FDataTableRowHandle>                         RecipesLearned;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.GetAssociatedItemRow
	 */
	struct UUI_RecipeLearnedNotification_C_GetAssociatedItemRow_Params
	{
	public:
		struct FDataTableRowHandle                                 RowHandle;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.PlayIntroduction
	 */
	struct UUI_RecipeLearnedNotification_C_PlayIntroduction_Params
	{	};

	/**
	 * Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.PlayOutro
	 */
	struct UUI_RecipeLearnedNotification_C_PlayOutro_Params
	{	};

	/**
	 * Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.OnGlobalColorChange
	 */
	struct UUI_RecipeLearnedNotification_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.ExecuteUbergraph_UI_RecipeLearnedNotification
	 */
	struct UUI_RecipeLearnedNotification_C_ExecuteUbergraph_UI_RecipeLearnedNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
