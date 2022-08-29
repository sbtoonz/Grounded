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
	 * Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.SequenceEvent__ENTRYPOINTUI_ColorThemeNotification_1
	 */
	struct UUI_ColorThemeNotification_C_SequenceEvent__ENTRYPOINTUI_ColorThemeNotification_1_Params
	{	};

	/**
	 * Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetIcon
	 */
	struct UUI_ColorThemeNotification_C_GetIcon_Params
	{
	public:
		class UObject*                                             Image;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         IconBrush;                                               // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetItemTextShadowColor
	 */
	struct UUI_ColorThemeNotification_C_GetItemTextShadowColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetNameBGColor
	 */
	struct UUI_ColorThemeNotification_C_GetNameBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetAttentionSpinColor
	 */
	struct UUI_ColorThemeNotification_C_GetAttentionSpinColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetTextColor
	 */
	struct UUI_ColorThemeNotification_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetBGColor
	 */
	struct UUI_ColorThemeNotification_C_GetBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.SetData
	 */
	struct UUI_ColorThemeNotification_C_SetData_Params
	{
	public:
		class UClass*                                              ColorTheme;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASurvivalPlayerState*                                SurvivalPlayerState;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.SequenceEvent_1
	 */
	struct UUI_ColorThemeNotification_C_SequenceEvent_1_Params
	{	};

	/**
	 * Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.PlayOutro
	 */
	struct UUI_ColorThemeNotification_C_PlayOutro_Params
	{	};

	/**
	 * Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.PlayIntroduction
	 */
	struct UUI_ColorThemeNotification_C_PlayIntroduction_Params
	{	};

	/**
	 * Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.ExecuteUbergraph_UI_ColorThemeNotification
	 */
	struct UUI_ColorThemeNotification_C_ExecuteUbergraph_UI_ColorThemeNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3F1K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
