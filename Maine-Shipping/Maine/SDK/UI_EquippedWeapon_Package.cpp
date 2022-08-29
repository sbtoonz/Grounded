/**
 * Name: Maine
 * Version: Shipping
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetAmmoIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::GetAmmoIcon(const class FName& AmmoRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetAmmoIcon");
		
		UUI_EquippedWeapon_C_GetAmmoIcon_Params params {};
		params.AmmoRowName = AmmoRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.DetermineAttackVisibility
	 * 		Flags  -> ()
	 */
	void UUI_EquippedWeapon_C::DetermineAttackVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.DetermineAttackVisibility");
		
		UUI_EquippedWeapon_C_DetermineAttackVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.Determine Canteen Visibility
	 * 		Flags  -> ()
	 */
	void UUI_EquippedWeapon_C::Determine_Canteen_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.Determine Canteen Visibility");
		
		UUI_EquippedWeapon_C_Determine_Canteen_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetItemIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ItemIcon                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::GetItemIcon(class UObject** ItemIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetItemIcon");
		
		UUI_EquippedWeapon_C_GetItemIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemIcon != nullptr)
			*ItemIcon = params.ItemIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetWeaponDamageVisibility
	 * 		Flags  -> ()
	 */
	void UUI_EquippedWeapon_C::GetWeaponDamageVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetWeaponDamageVisibility");
		
		UUI_EquippedWeapon_C_GetWeaponDamageVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.SetUsesAmmoVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::SetUsesAmmoVisibility(class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.SetUsesAmmoVisibility");
		
		UUI_EquippedWeapon_C_SetUsesAmmoVisibility_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.SetCountText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  TextBlock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::SetCountText(int32_t Count, class UTextBlock* TextBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.SetCountText");
		
		UUI_EquippedWeapon_C_SetCountText_Params params {};
		params.Count = Count;
		params.TextBlock = TextBlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.SetContextualInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::SetContextualInput(class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.SetContextualInput");
		
		UUI_EquippedWeapon_C_SetContextualInput_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetAmmoName
	 * 		Flags  -> ()
	 */
	class FText UUI_EquippedWeapon_C::GetAmmoName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetAmmoName");
		
		UUI_EquippedWeapon_C_GetAmmoName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetInvCount
	 * 		Flags  -> ()
	 */
	class FText UUI_EquippedWeapon_C::GetInvCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetInvCount");
		
		UUI_EquippedWeapon_C_GetInvCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetAmmoSwapColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_EquippedWeapon_C::GetAmmoSwapColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetAmmoSwapColor");
		
		UUI_EquippedWeapon_C_GetAmmoSwapColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetWarningColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_EquippedWeapon_C::GetWarningColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetWarningColor");
		
		UUI_EquippedWeapon_C_GetWarningColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetMainHandItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::GetMainHandItem(class UItem** Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetMainHandItem");
		
		UUI_EquippedWeapon_C_GetMainHandItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetBlockOrDrinkImgColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_EquippedWeapon_C::GetBlockOrDrinkImgColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetBlockOrDrinkImgColor");
		
		UUI_EquippedWeapon_C_GetBlockOrDrinkImgColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetThrowVisibility
	 * 		Flags  -> ()
	 */
	void UUI_EquippedWeapon_C::GetThrowVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetThrowVisibility");
		
		UUI_EquippedWeapon_C_GetThrowVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetDarkener
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_EquippedWeapon_C::GetDarkener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetDarkener");
		
		UUI_EquippedWeapon_C_GetDarkener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetDarkColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_EquippedWeapon_C::GetDarkColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetDarkColor");
		
		UUI_EquippedWeapon_C_GetDarkColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetDurabilityColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_EquippedWeapon_C::GetDurabilityColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetDurabilityColor");
		
		UUI_EquippedWeapon_C_GetDurabilityColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_EquippedWeapon_C::GetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetTextColor");
		
		UUI_EquippedWeapon_C_GetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetAccentTwo
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_EquippedWeapon_C::GetAccentTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetAccentTwo");
		
		UUI_EquippedWeapon_C_GetAccentTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetItemName
	 * 		Flags  -> ()
	 */
	class FText UUI_EquippedWeapon_C::GetItemName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetItemName");
		
		UUI_EquippedWeapon_C_GetItemName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetSelectedColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_EquippedWeapon_C::GetSelectedColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetSelectedColor");
		
		UUI_EquippedWeapon_C_GetSelectedColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetBaseColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_EquippedWeapon_C::GetBaseColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.GetBaseColor");
		
		UUI_EquippedWeapon_C_GetBaseColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_EquippedWeapon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.Construct");
		
		UUI_EquippedWeapon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.SetEquippedItemDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              New_Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::SetEquippedItemDurability(float New_Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.SetEquippedItemDurability");
		
		UUI_EquippedWeapon_C_SetEquippedItemDurability_Params params {};
		params.New_Ratio = New_Ratio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.BindPlayerEvents
	 * 		Flags  -> ()
	 */
	void UUI_EquippedWeapon_C::BindPlayerEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.BindPlayerEvents");
		
		UUI_EquippedWeapon_C_BindPlayerEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnEquipmentChanged
	 * 		Flags  -> ()
	 */
	void UUI_EquippedWeapon_C::OnEquipmentChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnEquipmentChanged");
		
		UUI_EquippedWeapon_C_OnEquipmentChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnItemBroken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::OnItemBroken(class ASurvivalCharacter* Owner, class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnItemBroken");
		
		UUI_EquippedWeapon_C_OnItemBroken_Params params {};
		params.Owner = Owner;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.WidgetAnimationEvt_BreakAnimation_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UUI_EquippedWeapon_C::WidgetAnimationEvt_BreakAnimation_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.WidgetAnimationEvt_BreakAnimation_K2Node_WidgetAnimationEvent_1");
		
		UUI_EquippedWeapon_C_WidgetAnimationEvt_BreakAnimation_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.PlayItemEquippedAnimation
	 * 		Flags  -> ()
	 */
	void UUI_EquippedWeapon_C::PlayItemEquippedAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.PlayItemEquippedAnimation");
		
		UUI_EquippedWeapon_C_PlayItemEquippedAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.PlayNoItemEquippedAnimation
	 * 		Flags  -> ()
	 */
	void UUI_EquippedWeapon_C::PlayNoItemEquippedAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.PlayNoItemEquippedAnimation");
		
		UUI_EquippedWeapon_C_PlayNoItemEquippedAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_EquippedWeapon_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnGlobalColorChange");
		
		UUI_EquippedWeapon_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnMainHandChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       ChangedItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::OnMainHandChanged(class UItem* ChangedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnMainHandChanged");
		
		UUI_EquippedWeapon_C_OnMainHandChanged_Params params {};
		params.ChangedItem = ChangedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnItemCountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::OnItemCountChanged(int32_t ItemCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnItemCountChanged");
		
		UUI_EquippedWeapon_C_OnItemCountChanged_Params params {};
		params.ItemCount = ItemCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnAmmoCountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::OnAmmoCountChanged(int32_t ItemCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnAmmoCountChanged");
		
		UUI_EquippedWeapon_C_OnAmmoCountChanged_Params params {};
		params.ItemCount = ItemCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnItemPowerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::OnItemPowerChanged(class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnItemPowerChanged");
		
		UUI_EquippedWeapon_C_OnItemPowerChanged_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnDurabilityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRatio                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::OnDurabilityChanged(float NewRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnDurabilityChanged");
		
		UUI_EquippedWeapon_C_OnDurabilityChanged_Params params {};
		params.NewRatio = NewRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnPowerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRatio                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::OnPowerChanged(float NewRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnPowerChanged");
		
		UUI_EquippedWeapon_C_OnPowerChanged_Params params {};
		params.NewRatio = NewRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.EventUpdateCanteen
	 * 		Flags  -> ()
	 */
	void UUI_EquippedWeapon_C::EventUpdateCanteen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.EventUpdateCanteen");
		
		UUI_EquippedWeapon_C_EventUpdateCanteen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.EvaluateMainHandVIsuals
	 * 		Flags  -> ()
	 */
	void UUI_EquippedWeapon_C::EvaluateMainHandVIsuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.EvaluateMainHandVIsuals");
		
		UUI_EquippedWeapon_C_EvaluateMainHandVIsuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnMovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PreviousCustomMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::OnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnMovementModeChanged");
		
		UUI_EquippedWeapon_C_OnMovementModeChanged_Params params {};
		params.Character = Character;
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnAmmoTypeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::OnAmmoTypeChanged(const class FName& ItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnAmmoTypeChanged");
		
		UUI_EquippedWeapon_C_OnAmmoTypeChanged_Params params {};
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnEnhancementLevelChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewEnhancementLevel                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::OnEnhancementLevelChanged(int32_t NewEnhancementLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.OnEnhancementLevelChanged");
		
		UUI_EquippedWeapon_C_OnEnhancementLevelChanged_Params params {};
		params.NewEnhancementLevel = NewEnhancementLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.RefreshEnhancementVisuals
	 * 		Flags  -> ()
	 */
	void UUI_EquippedWeapon_C::RefreshEnhancementVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.RefreshEnhancementVisuals");
		
		UUI_EquippedWeapon_C_RefreshEnhancementVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EquippedWeapon.UI_EquippedWeapon_C.ExecuteUbergraph_UI_EquippedWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EquippedWeapon_C::ExecuteUbergraph_UI_EquippedWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EquippedWeapon.UI_EquippedWeapon_C.ExecuteUbergraph_UI_EquippedWeapon");
		
		UUI_EquippedWeapon_C_ExecuteUbergraph_UI_EquippedWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EquippedWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EquippedWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EquippedWeapon.UI_EquippedWeapon_C");
		return ptr;
	}

}


