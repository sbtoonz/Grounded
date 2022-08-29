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
	 * Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.SequenceEvent__ENTRYPOINTUI_TechTreeUnlockedNotification_1
	 */
	struct UUI_TechTreeUnlockedNotification_C_SequenceEvent__ENTRYPOINTUI_TechTreeUnlockedNotification_1_Params
	{	};

	/**
	 * Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetIcon
	 */
	struct UUI_TechTreeUnlockedNotification_C_GetIcon_Params
	{
	public:
		class UObject*                                             Image;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         IconBrush;                                               // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetItemTextShadowColor
	 */
	struct UUI_TechTreeUnlockedNotification_C_GetItemTextShadowColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetNameBGColor
	 */
	struct UUI_TechTreeUnlockedNotification_C_GetNameBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetAttentionSpinColor
	 */
	struct UUI_TechTreeUnlockedNotification_C_GetAttentionSpinColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetTextColor
	 */
	struct UUI_TechTreeUnlockedNotification_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetBGColor
	 */
	struct UUI_TechTreeUnlockedNotification_C_GetBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.SetData
	 */
	struct UUI_TechTreeUnlockedNotification_C_SetData_Params
	{
	public:
		struct FDataTableRowHandle                                 TechTreeUnlocked;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ASurvivalPlayerState*                                SurvivalPlayerState;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.SequenceEvent_1
	 */
	struct UUI_TechTreeUnlockedNotification_C_SequenceEvent_1_Params
	{	};

	/**
	 * Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.PlayIntroduction
	 */
	struct UUI_TechTreeUnlockedNotification_C_PlayIntroduction_Params
	{	};

	/**
	 * Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.PlayOutro
	 */
	struct UUI_TechTreeUnlockedNotification_C_PlayOutro_Params
	{	};

	/**
	 * Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.OnGlobalColorChange
	 */
	struct UUI_TechTreeUnlockedNotification_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.ExecuteUbergraph_UI_TechTreeUnlockedNotification
	 */
	struct UUI_TechTreeUnlockedNotification_C_ExecuteUbergraph_UI_TechTreeUnlockedNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6WL6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
