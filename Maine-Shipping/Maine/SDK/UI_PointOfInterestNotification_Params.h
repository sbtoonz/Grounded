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
	 * Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.SequenceEvent__ENTRYPOINTUI_PointOfInterestNotification_1
	 */
	struct UUI_PointOfInterestNotification_C_SequenceEvent__ENTRYPOINTUI_PointOfInterestNotification_1_Params
	{	};

	/**
	 * Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.GetItemTextShadowColor
	 */
	struct UUI_PointOfInterestNotification_C_GetItemTextShadowColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.GetNameBGColor
	 */
	struct UUI_PointOfInterestNotification_C_GetNameBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.GetAttentionSpinColor
	 */
	struct UUI_PointOfInterestNotification_C_GetAttentionSpinColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.GetTextColor
	 */
	struct UUI_PointOfInterestNotification_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.GetBGColor
	 */
	struct UUI_PointOfInterestNotification_C_GetBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.SetData
	 */
	struct UUI_PointOfInterestNotification_C_SetData_Params
	{
	public:
		class UPointOfInterestDataAsset*                           PointOfInterest;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASurvivalPlayerState*                                SurvivalPlayerState;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.OnLoaded_ED7E05EC4C218C9F8AFA50BC31BBE923
	 */
	struct UUI_PointOfInterestNotification_C_OnLoaded_ED7E05EC4C218C9F8AFA50BC31BBE923_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.SequenceEvent_1
	 */
	struct UUI_PointOfInterestNotification_C_SequenceEvent_1_Params
	{	};

	/**
	 * Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.PlayOutro
	 */
	struct UUI_PointOfInterestNotification_C_PlayOutro_Params
	{	};

	/**
	 * Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.PlayIntroduction
	 */
	struct UUI_PointOfInterestNotification_C_PlayIntroduction_Params
	{	};

	/**
	 * Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.OnGlobalColorChange
	 */
	struct UUI_PointOfInterestNotification_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.ExecuteUbergraph_UI_PointOfInterestNotification
	 */
	struct UUI_PointOfInterestNotification_C_ExecuteUbergraph_UI_PointOfInterestNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
