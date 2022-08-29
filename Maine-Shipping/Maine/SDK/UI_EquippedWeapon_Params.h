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
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetAmmoIcon
	 */
	struct UUI_EquippedWeapon_C_GetAmmoIcon_Params
	{
	public:
		class FName                                                AmmoRowName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.DetermineAttackVisibility
	 */
	struct UUI_EquippedWeapon_C_DetermineAttackVisibility_Params
	{	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.Determine Canteen Visibility
	 */
	struct UUI_EquippedWeapon_C_Determine_Canteen_Visibility_Params
	{	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetItemIcon
	 */
	struct UUI_EquippedWeapon_C_GetItemIcon_Params
	{
	public:
		class UObject*                                             ItemIcon;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetWeaponDamageVisibility
	 */
	struct UUI_EquippedWeapon_C_GetWeaponDamageVisibility_Params
	{	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.SetUsesAmmoVisibility
	 */
	struct UUI_EquippedWeapon_C_SetUsesAmmoVisibility_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.SetCountText
	 */
	struct UUI_EquippedWeapon_C_SetCountText_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O14Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextBlock*                                          TextBlock;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.SetContextualInput
	 */
	struct UUI_EquippedWeapon_C_SetContextualInput_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetAmmoName
	 */
	struct UUI_EquippedWeapon_C_GetAmmoName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetInvCount
	 */
	struct UUI_EquippedWeapon_C_GetInvCount_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetAmmoSwapColor
	 */
	struct UUI_EquippedWeapon_C_GetAmmoSwapColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetWarningColor
	 */
	struct UUI_EquippedWeapon_C_GetWarningColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetMainHandItem
	 */
	struct UUI_EquippedWeapon_C_GetMainHandItem_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetBlockOrDrinkImgColor
	 */
	struct UUI_EquippedWeapon_C_GetBlockOrDrinkImgColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetThrowVisibility
	 */
	struct UUI_EquippedWeapon_C_GetThrowVisibility_Params
	{	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetDarkener
	 */
	struct UUI_EquippedWeapon_C_GetDarkener_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetDarkColor
	 */
	struct UUI_EquippedWeapon_C_GetDarkColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetDurabilityColor
	 */
	struct UUI_EquippedWeapon_C_GetDurabilityColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetTextColor
	 */
	struct UUI_EquippedWeapon_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetAccentTwo
	 */
	struct UUI_EquippedWeapon_C_GetAccentTwo_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetItemName
	 */
	struct UUI_EquippedWeapon_C_GetItemName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetSelectedColor
	 */
	struct UUI_EquippedWeapon_C_GetSelectedColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetBaseColor
	 */
	struct UUI_EquippedWeapon_C_GetBaseColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.Construct
	 */
	struct UUI_EquippedWeapon_C_Construct_Params
	{	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.SetEquippedItemDurability
	 */
	struct UUI_EquippedWeapon_C_SetEquippedItemDurability_Params
	{
	public:
		float                                                      New_Ratio;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.BindPlayerEvents
	 */
	struct UUI_EquippedWeapon_C_BindPlayerEvents_Params
	{	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnEquipmentChanged
	 */
	struct UUI_EquippedWeapon_C_OnEquipmentChanged_Params
	{	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnItemBroken
	 */
	struct UUI_EquippedWeapon_C_OnItemBroken_Params
	{
	public:
		class ASurvivalCharacter*                                  Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItem*                                               Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.WidgetAnimationEvt_BreakAnimation_K2Node_WidgetAnimationEvent_1
	 */
	struct UUI_EquippedWeapon_C_WidgetAnimationEvt_BreakAnimation_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.PlayItemEquippedAnimation
	 */
	struct UUI_EquippedWeapon_C_PlayItemEquippedAnimation_Params
	{	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.PlayNoItemEquippedAnimation
	 */
	struct UUI_EquippedWeapon_C_PlayNoItemEquippedAnimation_Params
	{	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnGlobalColorChange
	 */
	struct UUI_EquippedWeapon_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnMainHandChanged
	 */
	struct UUI_EquippedWeapon_C_OnMainHandChanged_Params
	{
	public:
		class UItem*                                               ChangedItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnItemCountChanged
	 */
	struct UUI_EquippedWeapon_C_OnItemCountChanged_Params
	{
	public:
		int32_t                                                    ItemCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnAmmoCountChanged
	 */
	struct UUI_EquippedWeapon_C_OnAmmoCountChanged_Params
	{
	public:
		int32_t                                                    ItemCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnItemPowerChanged
	 */
	struct UUI_EquippedWeapon_C_OnItemPowerChanged_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnDurabilityChanged
	 */
	struct UUI_EquippedWeapon_C_OnDurabilityChanged_Params
	{
	public:
		float                                                      NewRatio;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnPowerChanged
	 */
	struct UUI_EquippedWeapon_C_OnPowerChanged_Params
	{
	public:
		float                                                      NewRatio;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.EventUpdateCanteen
	 */
	struct UUI_EquippedWeapon_C_EventUpdateCanteen_Params
	{	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.EvaluateMainHandVIsuals
	 */
	struct UUI_EquippedWeapon_C_EvaluateMainHandVIsuals_Params
	{	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnMovementModeChanged
	 */
	struct UUI_EquippedWeapon_C_OnMovementModeChanged_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              PrevMovementMode;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PreviousCustomMode;                                      // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnAmmoTypeChanged
	 */
	struct UUI_EquippedWeapon_C_OnAmmoTypeChanged_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnEnhancementLevelChanged
	 */
	struct UUI_EquippedWeapon_C_OnEnhancementLevelChanged_Params
	{
	public:
		int32_t                                                    NewEnhancementLevel;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.RefreshEnhancementVisuals
	 */
	struct UUI_EquippedWeapon_C_RefreshEnhancementVisuals_Params
	{	};

	/**
	 * Function UI_EquippedWeapon.UI_EquippedWeapon_C.ExecuteUbergraph_UI_EquippedWeapon
	 */
	struct UUI_EquippedWeapon_C_ExecuteUbergraph_UI_EquippedWeapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AJ0J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
