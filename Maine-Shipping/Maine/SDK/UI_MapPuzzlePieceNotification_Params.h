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
	 * Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.SequenceEvent__ENTRYPOINTUI_MapPuzzlePieceNotification_1
	 */
	struct UUI_MapPuzzlePieceNotification_C_SequenceEvent__ENTRYPOINTUI_MapPuzzlePieceNotification_1_Params
	{	};

	/**
	 * Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetIcon
	 */
	struct UUI_MapPuzzlePieceNotification_C_GetIcon_Params
	{
	public:
		class UObject*                                             Image;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         IconBrush;                                               // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetItemTextShadowColor
	 */
	struct UUI_MapPuzzlePieceNotification_C_GetItemTextShadowColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetNameBGColor
	 */
	struct UUI_MapPuzzlePieceNotification_C_GetNameBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetAttentionSpinColor
	 */
	struct UUI_MapPuzzlePieceNotification_C_GetAttentionSpinColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetTextColor
	 */
	struct UUI_MapPuzzlePieceNotification_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetBGColor
	 */
	struct UUI_MapPuzzlePieceNotification_C_GetBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.SetData
	 */
	struct UUI_MapPuzzlePieceNotification_C_SetData_Params
	{
	public:
		struct FDataTableRowHandle                                 MapRegion;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ASurvivalPlayerState*                                SurvivalPlayerState;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.SequenceEvent_2
	 */
	struct UUI_MapPuzzlePieceNotification_C_SequenceEvent_2_Params
	{	};

	/**
	 * Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.PlayOutro
	 */
	struct UUI_MapPuzzlePieceNotification_C_PlayOutro_Params
	{	};

	/**
	 * Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.PlayIntroduction
	 */
	struct UUI_MapPuzzlePieceNotification_C_PlayIntroduction_Params
	{	};

	/**
	 * Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.OnGlobalColorChange
	 */
	struct UUI_MapPuzzlePieceNotification_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.ExecuteUbergraph_UI_MapPuzzlePieceNotification
	 */
	struct UUI_MapPuzzlePieceNotification_C_ExecuteUbergraph_UI_MapPuzzlePieceNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YJEL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
