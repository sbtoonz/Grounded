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
	 * Function UI_RecipeNotification.UI_RecipeNotification_C.SequenceEvent__ENTRYPOINTUI_RecipeNotification_1
	 */
	struct UUI_RecipeNotification_C_SequenceEvent__ENTRYPOINTUI_RecipeNotification_1_Params
	{	};

	/**
	 * Function UI_RecipeNotification.UI_RecipeNotification_C.GetIcon
	 */
	struct UUI_RecipeNotification_C_GetIcon_Params
	{
	public:
		class UObject*                                             Image;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         IconBrush;                                               // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function UI_RecipeNotification.UI_RecipeNotification_C.GetAssociatedItemRow
	 */
	struct UUI_RecipeNotification_C_GetAssociatedItemRow_Params
	{
	public:
		struct FDataTableRowHandle                                 RowHandle;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function UI_RecipeNotification.UI_RecipeNotification_C.SetPlayerText
	 */
	struct UUI_RecipeNotification_C_SetPlayerText_Params
	{
	public:
		class APlayerState*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsRecipeUnlock;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RTY1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RecipeNotification.UI_RecipeNotification_C.SetData
	 */
	struct UUI_RecipeNotification_C_SetData_Params
	{
	public:
		struct FDataTableRowHandle                                 RecipeAquired;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ASurvivalPlayerState*                                SurvivalPlayerState;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeNotification.UI_RecipeNotification_C.Get_Text_ShadowColorAndOpacity_1
	 */
	struct UUI_RecipeNotification_C_Get_Text_ShadowColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeNotification.UI_RecipeNotification_C.Get_PlayerNameBG_BrushColor_1
	 */
	struct UUI_RecipeNotification_C_Get_PlayerNameBG_BrushColor_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeNotification.UI_RecipeNotification_C.Get_NewItemBG_ColorAndOpacity_2
	 */
	struct UUI_RecipeNotification_C_Get_NewItemBG_ColorAndOpacity_2_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeNotification.UI_RecipeNotification_C.Get_NewItemBG_ColorAndOpacity_1
	 */
	struct UUI_RecipeNotification_C_Get_NewItemBG_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeNotification.UI_RecipeNotification_C.Get_ExclamitoryIcon_ColorAndOpacity_1
	 */
	struct UUI_RecipeNotification_C_Get_ExclamitoryIcon_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeNotification.UI_RecipeNotification_C.Get_Text_ColorAndOpacity_1
	 */
	struct UUI_RecipeNotification_C_Get_Text_ColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_RecipeNotification.UI_RecipeNotification_C.GetResourceColor
	 */
	struct UUI_RecipeNotification_C_GetResourceColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeNotification.UI_RecipeNotification_C.SequenceEvent_1
	 */
	struct UUI_RecipeNotification_C_SequenceEvent_1_Params
	{	};

	/**
	 * Function UI_RecipeNotification.UI_RecipeNotification_C.PlayIntroduction
	 */
	struct UUI_RecipeNotification_C_PlayIntroduction_Params
	{	};

	/**
	 * Function UI_RecipeNotification.UI_RecipeNotification_C.PlayOutro
	 */
	struct UUI_RecipeNotification_C_PlayOutro_Params
	{	};

	/**
	 * Function UI_RecipeNotification.UI_RecipeNotification_C.ExecuteUbergraph_UI_RecipeNotification
	 */
	struct UUI_RecipeNotification_C_ExecuteUbergraph_UI_RecipeNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V4TI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
