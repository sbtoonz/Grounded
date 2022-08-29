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
	 * Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.SequenceEvent__ENTRYPOINTUI_BulkRecipeUnlockNotification_1
	 */
	struct UUI_BulkRecipeUnlockNotification_C_SequenceEvent__ENTRYPOINTUI_BulkRecipeUnlockNotification_1_Params
	{	};

	/**
	 * Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.GetIcon
	 */
	struct UUI_BulkRecipeUnlockNotification_C_GetIcon_Params
	{
	public:
		class UObject*                                             Image;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         IconBrush;                                               // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.IsReadyForOutro
	 */
	struct UUI_BulkRecipeUnlockNotification_C_IsReadyForOutro_Params
	{
	public:
		bool                                                       IsReady;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.SetPlayerText
	 */
	struct UUI_BulkRecipeUnlockNotification_C_SetPlayerText_Params
	{
	public:
		class APlayerState*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERecipeUnlockSource                                        RecipeUnlockSource;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WHF5[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.Get_Text_ShadowColorAndOpacity_1
	 */
	struct UUI_BulkRecipeUnlockNotification_C_Get_Text_ShadowColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.Get_PlayerNameBG_BrushColor_1
	 */
	struct UUI_BulkRecipeUnlockNotification_C_Get_PlayerNameBG_BrushColor_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.SetData
	 */
	struct UUI_BulkRecipeUnlockNotification_C_SetData_Params
	{
	public:
		ERecipeUnlockSource                                        UnlockSource;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7G95[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASurvivalPlayerState*                                SurvivalPlayerState;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FDataTableRowHandle>                         RecipesLearned;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              DisplayName;                                             // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.PlayIntroduction
	 */
	struct UUI_BulkRecipeUnlockNotification_C_PlayIntroduction_Params
	{	};

	/**
	 * Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.PlayOutro
	 */
	struct UUI_BulkRecipeUnlockNotification_C_PlayOutro_Params
	{	};

	/**
	 * Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.OnGlobalColorChange
	 */
	struct UUI_BulkRecipeUnlockNotification_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.SequenceEvent_1
	 */
	struct UUI_BulkRecipeUnlockNotification_C_SequenceEvent_1_Params
	{	};

	/**
	 * Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.Construct
	 */
	struct UUI_BulkRecipeUnlockNotification_C_Construct_Params
	{	};

	/**
	 * Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.ExecuteUbergraph_UI_BulkRecipeUnlockNotification
	 */
	struct UUI_BulkRecipeUnlockNotification_C_ExecuteUbergraph_UI_BulkRecipeUnlockNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
