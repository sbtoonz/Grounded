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
	 * Function UI_NotificationHelper.UI_NotificationHelper_C.Get_NotificationItemIcon_ColorAndOpacity_1
	 */
	struct UUI_NotificationHelper_C_Get_NotificationItemIcon_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NotificationHelper.UI_NotificationHelper_C.GetHelperText
	 */
	struct UUI_NotificationHelper_C_GetHelperText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_NotificationHelper.UI_NotificationHelper_C.Get_TextBlock_0_ColorAndOpacity_1
	 */
	struct UUI_NotificationHelper_C_Get_TextBlock_0_ColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_NotificationHelper.UI_NotificationHelper_C.PlayIntroduction
	 */
	struct UUI_NotificationHelper_C_PlayIntroduction_Params
	{	};

	/**
	 * Function UI_NotificationHelper.UI_NotificationHelper_C.SetItemPickupCount
	 */
	struct UUI_NotificationHelper_C_SetItemPickupCount_Params
	{
	public:
		struct FDataTableRowHandle                                 Item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    ItemCount;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NotificationHelper.UI_NotificationHelper_C.FadeOut
	 */
	struct UUI_NotificationHelper_C_FadeOut_Params
	{	};

	/**
	 * Function UI_NotificationHelper.UI_NotificationHelper_C.SetText
	 */
	struct UUI_NotificationHelper_C_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FColor                                              Color;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NotificationHelper.UI_NotificationHelper_C.Construct
	 */
	struct UUI_NotificationHelper_C_Construct_Params
	{	};

	/**
	 * Function UI_NotificationHelper.UI_NotificationHelper_C.Tick
	 */
	struct UUI_NotificationHelper_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NotificationHelper.UI_NotificationHelper_C.OnGlobalColorChange
	 */
	struct UUI_NotificationHelper_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_NotificationHelper.UI_NotificationHelper_C.OnCharacterRespawn
	 */
	struct UUI_NotificationHelper_C_OnCharacterRespawn_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NotificationHelper.UI_NotificationHelper_C.OnInventoryChanged
	 */
	struct UUI_NotificationHelper_C_OnInventoryChanged_Params
	{	};

	/**
	 * Function UI_NotificationHelper.UI_NotificationHelper_C.ExecuteUbergraph_UI_NotificationHelper
	 */
	struct UUI_NotificationHelper_C_ExecuteUbergraph_UI_NotificationHelper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NotificationHelper.UI_NotificationHelper_C.OnFadeoutComplete__DelegateSignature
	 */
	struct UUI_NotificationHelper_C_OnFadeoutComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
