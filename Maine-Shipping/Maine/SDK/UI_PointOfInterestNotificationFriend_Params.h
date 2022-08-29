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
	 * Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.SequenceEvent__ENTRYPOINTUI_PointOfInterestNotificationFriend_1
	 */
	struct UUI_PointOfInterestNotificationFriend_C_SequenceEvent__ENTRYPOINTUI_PointOfInterestNotificationFriend_1_Params
	{	};

	/**
	 * Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetIcon
	 */
	struct UUI_PointOfInterestNotificationFriend_C_GetIcon_Params
	{
	public:
		class UObject*                                             Image;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         IconBrush;                                               // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetItemTextShadowColor
	 */
	struct UUI_PointOfInterestNotificationFriend_C_GetItemTextShadowColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetNameBGColor
	 */
	struct UUI_PointOfInterestNotificationFriend_C_GetNameBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetAttentionSpinColor
	 */
	struct UUI_PointOfInterestNotificationFriend_C_GetAttentionSpinColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetTextColor
	 */
	struct UUI_PointOfInterestNotificationFriend_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.GetBGColor
	 */
	struct UUI_PointOfInterestNotificationFriend_C_GetBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.SetData
	 */
	struct UUI_PointOfInterestNotificationFriend_C_SetData_Params
	{
	public:
		class UPointOfInterestDataAsset*                           PointOfInterest;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASurvivalPlayerState*                                SurvivalPlayerState;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.OnLoaded_01F70C494080528415A5329E1CE9E8B6
	 */
	struct UUI_PointOfInterestNotificationFriend_C_OnLoaded_01F70C494080528415A5329E1CE9E8B6_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.SequenceEvent_1
	 */
	struct UUI_PointOfInterestNotificationFriend_C_SequenceEvent_1_Params
	{	};

	/**
	 * Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.SequenceEvent_2
	 */
	struct UUI_PointOfInterestNotificationFriend_C_SequenceEvent_2_Params
	{	};

	/**
	 * Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.PlayOutro
	 */
	struct UUI_PointOfInterestNotificationFriend_C_PlayOutro_Params
	{	};

	/**
	 * Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.PlayIntroduction
	 */
	struct UUI_PointOfInterestNotificationFriend_C_PlayIntroduction_Params
	{	};

	/**
	 * Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.OnGlobalColorChange
	 */
	struct UUI_PointOfInterestNotificationFriend_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C.ExecuteUbergraph_UI_PointOfInterestNotificationFriend
	 */
	struct UUI_PointOfInterestNotificationFriend_C_ExecuteUbergraph_UI_PointOfInterestNotificationFriend_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
