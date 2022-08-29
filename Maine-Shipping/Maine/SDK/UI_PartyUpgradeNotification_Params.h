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
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.SequenceEvent__ENTRYPOINTUI_PartyUpgradeNotification_1
	 */
	struct UUI_PartyUpgradeNotification_C_SequenceEvent__ENTRYPOINTUI_PartyUpgradeNotification_1_Params
	{	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.GetUpgradeIcon
	 */
	struct UUI_PartyUpgradeNotification_C_GetUpgradeIcon_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Icon;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.GetUpgradeName
	 */
	struct UUI_PartyUpgradeNotification_C_GetUpgradeName_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.GetIcon
	 */
	struct UUI_PartyUpgradeNotification_C_GetIcon_Params
	{
	public:
		class UObject*                                             Image;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         IconBrush;                                               // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.GetAssociatedItemRow
	 */
	struct UUI_PartyUpgradeNotification_C_GetAssociatedItemRow_Params
	{
	public:
		struct FDataTableRowHandle                                 RowHandle;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.SetPlayerText
	 */
	struct UUI_PartyUpgradeNotification_C_SetPlayerText_Params
	{
	public:
		class APlayerState*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsRecipeUnlock;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_11GQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.SetData
	 */
	struct UUI_PartyUpgradeNotification_C_SetData_Params
	{
	public:
		struct FGameplayTag                                        ItemStackTag;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class ASurvivalPlayerState*                                SurvivalPlayerState;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_Text_ShadowColorAndOpacity_1
	 */
	struct UUI_PartyUpgradeNotification_C_Get_Text_ShadowColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_PlayerNameBG_BrushColor_1
	 */
	struct UUI_PartyUpgradeNotification_C_Get_PlayerNameBG_BrushColor_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_NewItemBG_ColorAndOpacity_2
	 */
	struct UUI_PartyUpgradeNotification_C_Get_NewItemBG_ColorAndOpacity_2_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_NewItemBG_ColorAndOpacity_1
	 */
	struct UUI_PartyUpgradeNotification_C_Get_NewItemBG_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_ExclamitoryIcon_ColorAndOpacity_1
	 */
	struct UUI_PartyUpgradeNotification_C_Get_ExclamitoryIcon_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_Text_ColorAndOpacity_1
	 */
	struct UUI_PartyUpgradeNotification_C_Get_Text_ColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.GetResourceColor
	 */
	struct UUI_PartyUpgradeNotification_C_GetResourceColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.SequenceEvent_1
	 */
	struct UUI_PartyUpgradeNotification_C_SequenceEvent_1_Params
	{	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.PlayIntroduction
	 */
	struct UUI_PartyUpgradeNotification_C_PlayIntroduction_Params
	{	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.PlayOutro
	 */
	struct UUI_PartyUpgradeNotification_C_PlayOutro_Params
	{	};

	/**
	 * Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.ExecuteUbergraph_UI_PartyUpgradeNotification
	 */
	struct UUI_PartyUpgradeNotification_C_ExecuteUbergraph_UI_PartyUpgradeNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CVDC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
