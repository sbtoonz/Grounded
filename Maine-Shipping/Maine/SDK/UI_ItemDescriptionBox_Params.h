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
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.ClearItemRatingInfo
	 */
	struct UUI_ItemDescriptionBox_C_ClearItemRatingInfo_Params
	{	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetItemRatingInfoArmor
	 */
	struct UUI_ItemDescriptionBox_C_SetItemRatingInfoArmor_Params
	{
	public:
		struct FBaseItemData                                       ItemData;                                                // 0x0000(0x0598)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UItem*                                               Item;                                                    // 0x0598(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetItemRatingInfoWeapon
	 */
	struct UUI_ItemDescriptionBox_C_SetItemRatingInfoWeapon_Params
	{
	public:
		struct FBaseItemData                                       ItemData;                                                // 0x0000(0x0598)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UItem*                                               Item;                                                    // 0x0598(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetEnhancementLevel
	 */
	struct UUI_ItemDescriptionBox_C_SetEnhancementLevel_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetDamageType
	 */
	struct UUI_ItemDescriptionBox_C_GetDamageType_Params
	{
	public:
		struct FBaseItemData                                       ItemData;                                                // 0x0000(0x0598)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UItem*                                               Item;                                                    // 0x0598(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              DamageType;                                              // 0x05A0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetItemDamageMultiplier
	 */
	struct UUI_ItemDescriptionBox_C_GetItemDamageMultiplier_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Multiplier;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetBuildingRatingInfo
	 */
	struct UUI_ItemDescriptionBox_C_SetBuildingRatingInfo_Params
	{
	public:
		struct FDataTableRowHandle                                 BuildingRowHandle;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetLargeText
	 */
	struct UUI_ItemDescriptionBox_C_SetLargeText_Params
	{	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetAnalyzerStatus
	 */
	struct UUI_ItemDescriptionBox_C_SetAnalyzerStatus_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDamageType
	 */
	struct UUI_ItemDescriptionBox_C_SetDamageType_Params
	{
	public:
		struct FBaseItemData                                       ItemData;                                                // 0x0000(0x0598)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UItem*                                               Item;                                                    // 0x0598(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetItemRatingInfo
	 */
	struct UUI_ItemDescriptionBox_C_SetItemRatingInfo_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UItem*                                               Item;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetBasicTextColor
	 */
	struct UUI_ItemDescriptionBox_C_GetBasicTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetTierTextColor
	 */
	struct UUI_ItemDescriptionBox_C_GetTierTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetTierColor
	 */
	struct UUI_ItemDescriptionBox_C_GetTierColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetDescBGColor
	 */
	struct UUI_ItemDescriptionBox_C_GetDescBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetSEBGColor
	 */
	struct UUI_ItemDescriptionBox_C_GetSEBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetHeaderBGColor
	 */
	struct UUI_ItemDescriptionBox_C_GetHeaderBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetTextHeaderColor
	 */
	struct UUI_ItemDescriptionBox_C_GetTextHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetDescriptionBGColor
	 */
	struct UUI_ItemDescriptionBox_C_GetDescriptionBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetDescriptionFGColor
	 */
	struct UUI_ItemDescriptionBox_C_GetDescriptionFGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.Construct
	 */
	struct UUI_ItemDescriptionBox_C_Construct_Params
	{	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDescriptionRowHandle
	 */
	struct UUI_ItemDescriptionBox_C_SetDescriptionRowHandle_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDescriptionDataForItemRowHandle
	 */
	struct UUI_ItemDescriptionBox_C_SetDescriptionDataForItemRowHandle_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.OnGlobalColorChange
	 */
	struct UUI_ItemDescriptionBox_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.EventOnLargeText
	 */
	struct UUI_ItemDescriptionBox_C_EventOnLargeText_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.Destruct
	 */
	struct UUI_ItemDescriptionBox_C_Destruct_Params
	{	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDescriptionDataForBuildingRowHandle
	 */
	struct UUI_ItemDescriptionBox_C_SetDescriptionDataForBuildingRowHandle_Params
	{
	public:
		struct FDataTableRowHandle                                 BuildingHandle;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDescriptionDataForItem
	 */
	struct UUI_ItemDescriptionBox_C_SetDescriptionDataForItem_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDescriptionDataForItemHelper
	 */
	struct UUI_ItemDescriptionBox_C_SetDescriptionDataForItemHelper_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UItem*                                               Item;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.ExecuteUbergraph_UI_ItemDescriptionBox
	 */
	struct UUI_ItemDescriptionBox_C_ExecuteUbergraph_UI_ItemDescriptionBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
