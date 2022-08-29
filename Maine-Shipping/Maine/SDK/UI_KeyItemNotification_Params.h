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
	 * Function UI_KeyItemNotification.UI_KeyItemNotification_C.SequenceEvent__ENTRYPOINTUI_KeyItemNotification_1
	 */
	struct UUI_KeyItemNotification_C_SequenceEvent__ENTRYPOINTUI_KeyItemNotification_1_Params
	{	};

	/**
	 * Function UI_KeyItemNotification.UI_KeyItemNotification_C.IsReadyForOutro
	 */
	struct UUI_KeyItemNotification_C_IsReadyForOutro_Params
	{
	public:
		bool                                                       IsReady;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetIcon
	 */
	struct UUI_KeyItemNotification_C_GetIcon_Params
	{
	public:
		class UObject*                                             Image;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         IconBrush;                                               // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetAssociatedItemRow
	 */
	struct UUI_KeyItemNotification_C_GetAssociatedItemRow_Params
	{
	public:
		struct FDataTableRowHandle                                 RowHandle;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetItemTextShadowColor
	 */
	struct UUI_KeyItemNotification_C_GetItemTextShadowColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetNameBGColor
	 */
	struct UUI_KeyItemNotification_C_GetNameBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetAttentionSpinColor
	 */
	struct UUI_KeyItemNotification_C_GetAttentionSpinColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetTextColor
	 */
	struct UUI_KeyItemNotification_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetBGColor
	 */
	struct UUI_KeyItemNotification_C_GetBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyItemNotification.UI_KeyItemNotification_C.SetData
	 */
	struct UUI_KeyItemNotification_C_SetData_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemAquired;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ASurvivalPlayerState*                                SurvivalPlayerState;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FDataTableRowHandle>                         RecipesLearned;                                          // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_KeyItemNotification.UI_KeyItemNotification_C.SequenceEvent_1
	 */
	struct UUI_KeyItemNotification_C_SequenceEvent_1_Params
	{	};

	/**
	 * Function UI_KeyItemNotification.UI_KeyItemNotification_C.PlayIntroduction
	 */
	struct UUI_KeyItemNotification_C_PlayIntroduction_Params
	{	};

	/**
	 * Function UI_KeyItemNotification.UI_KeyItemNotification_C.PlayOutro
	 */
	struct UUI_KeyItemNotification_C_PlayOutro_Params
	{	};

	/**
	 * Function UI_KeyItemNotification.UI_KeyItemNotification_C.OnGlobalColorChange
	 */
	struct UUI_KeyItemNotification_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_KeyItemNotification.UI_KeyItemNotification_C.ExecuteUbergraph_UI_KeyItemNotification
	 */
	struct UUI_KeyItemNotification_C_ExecuteUbergraph_UI_KeyItemNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_36WJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
