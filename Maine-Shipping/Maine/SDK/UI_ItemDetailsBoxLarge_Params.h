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
	 * Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.SetAnalyzerStatus
	 */
	struct UUI_ItemDetailsBoxLarge_C_SetAnalyzerStatus_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FDataTableRowHandle                                 ItemRowHandle2;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetDamageType
	 */
	struct UUI_ItemDetailsBoxLarge_C_GetDamageType_Params
	{
	public:
		struct FBaseItemData                                       ItemData;                                                // 0x0000(0x0598)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    DamageFlags;                                             // 0x0598(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.SetRatingInfo
	 */
	struct UUI_ItemDetailsBoxLarge_C_SetRatingInfo_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetBasicTextColor
	 */
	struct UUI_ItemDetailsBoxLarge_C_GetBasicTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetTierTextColor
	 */
	struct UUI_ItemDetailsBoxLarge_C_GetTierTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetTierColor
	 */
	struct UUI_ItemDetailsBoxLarge_C_GetTierColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetDescBGColor
	 */
	struct UUI_ItemDetailsBoxLarge_C_GetDescBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetSEBGColor
	 */
	struct UUI_ItemDetailsBoxLarge_C_GetSEBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetHeaderBGColor
	 */
	struct UUI_ItemDetailsBoxLarge_C_GetHeaderBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetTextHeaderColor
	 */
	struct UUI_ItemDetailsBoxLarge_C_GetTextHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetDescriptionBGColor
	 */
	struct UUI_ItemDetailsBoxLarge_C_GetDescriptionBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetDescriptionFGColor
	 */
	struct UUI_ItemDetailsBoxLarge_C_GetDescriptionFGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.SetDescriptionDataForItemRowHandle
	 */
	struct UUI_ItemDetailsBoxLarge_C_SetDescriptionDataForItemRowHandle_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.SetDescriptionRowHandle
	 */
	struct UUI_ItemDetailsBoxLarge_C_SetDescriptionRowHandle_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.OnGlobalColorChange
	 */
	struct UUI_ItemDetailsBoxLarge_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.ExecuteUbergraph_UI_ItemDetailsBoxLarge
	 */
	struct UUI_ItemDetailsBoxLarge_C_ExecuteUbergraph_UI_ItemDetailsBoxLarge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
