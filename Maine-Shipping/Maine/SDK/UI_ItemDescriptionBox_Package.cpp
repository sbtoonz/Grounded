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
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.ClearItemRatingInfo
	 * 		Flags  -> ()
	 */
	void UUI_ItemDescriptionBox_C::ClearItemRatingInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.ClearItemRatingInfo");
		
		UUI_ItemDescriptionBox_C_ClearItemRatingInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetItemRatingInfoArmor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBaseItemData                               ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemDescriptionBox_C::SetItemRatingInfoArmor(const struct FBaseItemData& ItemData, class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetItemRatingInfoArmor");
		
		UUI_ItemDescriptionBox_C_SetItemRatingInfoArmor_Params params {};
		params.ItemData = ItemData;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetItemRatingInfoWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBaseItemData                               ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemDescriptionBox_C::SetItemRatingInfoWeapon(const struct FBaseItemData& ItemData, class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetItemRatingInfoWeapon");
		
		UUI_ItemDescriptionBox_C_SetItemRatingInfoWeapon_Params params {};
		params.ItemData = ItemData;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetEnhancementLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemDescriptionBox_C::SetEnhancementLevel(class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetEnhancementLevel");
		
		UUI_ItemDescriptionBox_C_SetEnhancementLevel_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetDamageType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBaseItemData                               ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemDescriptionBox_C::GetDamageType(const struct FBaseItemData& ItemData, class UItem* Item, class UClass** DamageType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetDamageType");
		
		UUI_ItemDescriptionBox_C_GetDamageType_Params params {};
		params.ItemData = ItemData;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageType != nullptr)
			*DamageType = params.DamageType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetItemDamageMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Multiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemDescriptionBox_C::GetItemDamageMultiplier(class UItem* Item, float* Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetItemDamageMultiplier");
		
		UUI_ItemDescriptionBox_C_GetItemDamageMultiplier_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Multiplier != nullptr)
			*Multiplier = params.Multiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetBuildingRatingInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         BuildingRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_ItemDescriptionBox_C::SetBuildingRatingInfo(const struct FDataTableRowHandle& BuildingRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetBuildingRatingInfo");
		
		UUI_ItemDescriptionBox_C_SetBuildingRatingInfo_Params params {};
		params.BuildingRowHandle = BuildingRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetLargeText
	 * 		Flags  -> ()
	 */
	void UUI_ItemDescriptionBox_C::SetLargeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetLargeText");
		
		UUI_ItemDescriptionBox_C_SetLargeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetAnalyzerStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_ItemDescriptionBox_C::SetAnalyzerStatus(const struct FDataTableRowHandle& ItemRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetAnalyzerStatus");
		
		UUI_ItemDescriptionBox_C_SetAnalyzerStatus_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDamageType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBaseItemData                               ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemDescriptionBox_C::SetDamageType(const struct FBaseItemData& ItemData, class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDamageType");
		
		UUI_ItemDescriptionBox_C_SetDamageType_Params params {};
		params.ItemData = ItemData;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetItemRatingInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemDescriptionBox_C::SetItemRatingInfo(const struct FDataTableRowHandle& ItemRowHandle, class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetItemRatingInfo");
		
		UUI_ItemDescriptionBox_C_SetItemRatingInfo_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetBasicTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_ItemDescriptionBox_C::GetBasicTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetBasicTextColor");
		
		UUI_ItemDescriptionBox_C_GetBasicTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetTierTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_ItemDescriptionBox_C::GetTierTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetTierTextColor");
		
		UUI_ItemDescriptionBox_C_GetTierTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetTierColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ItemDescriptionBox_C::GetTierColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetTierColor");
		
		UUI_ItemDescriptionBox_C_GetTierColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetDescBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ItemDescriptionBox_C::GetDescBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetDescBGColor");
		
		UUI_ItemDescriptionBox_C_GetDescBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetSEBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ItemDescriptionBox_C::GetSEBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetSEBGColor");
		
		UUI_ItemDescriptionBox_C_GetSEBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetHeaderBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ItemDescriptionBox_C::GetHeaderBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetHeaderBGColor");
		
		UUI_ItemDescriptionBox_C_GetHeaderBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetTextHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_ItemDescriptionBox_C::GetTextHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetTextHeaderColor");
		
		UUI_ItemDescriptionBox_C_GetTextHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetDescriptionBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ItemDescriptionBox_C::GetDescriptionBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetDescriptionBGColor");
		
		UUI_ItemDescriptionBox_C_GetDescriptionBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetDescriptionFGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ItemDescriptionBox_C::GetDescriptionFGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.GetDescriptionFGColor");
		
		UUI_ItemDescriptionBox_C_GetDescriptionFGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ItemDescriptionBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.Construct");
		
		UUI_ItemDescriptionBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDescriptionRowHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_ItemDescriptionBox_C::SetDescriptionRowHandle(const struct FDataTableRowHandle& ItemRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDescriptionRowHandle");
		
		UUI_ItemDescriptionBox_C_SetDescriptionRowHandle_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDescriptionDataForItemRowHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_ItemDescriptionBox_C::SetDescriptionDataForItemRowHandle(const struct FDataTableRowHandle& ItemRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDescriptionDataForItemRowHandle");
		
		UUI_ItemDescriptionBox_C_SetDescriptionDataForItemRowHandle_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ItemDescriptionBox_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.OnGlobalColorChange");
		
		UUI_ItemDescriptionBox_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.EventOnLargeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemDescriptionBox_C::EventOnLargeText(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.EventOnLargeText");
		
		UUI_ItemDescriptionBox_C_EventOnLargeText_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_ItemDescriptionBox_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.Destruct");
		
		UUI_ItemDescriptionBox_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDescriptionDataForBuildingRowHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         BuildingHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_ItemDescriptionBox_C::SetDescriptionDataForBuildingRowHandle(const struct FDataTableRowHandle& BuildingHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDescriptionDataForBuildingRowHandle");
		
		UUI_ItemDescriptionBox_C_SetDescriptionDataForBuildingRowHandle_Params params {};
		params.BuildingHandle = BuildingHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDescriptionDataForItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemDescriptionBox_C::SetDescriptionDataForItem(class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDescriptionDataForItem");
		
		UUI_ItemDescriptionBox_C_SetDescriptionDataForItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDescriptionDataForItemHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemDescriptionBox_C::SetDescriptionDataForItemHelper(const struct FDataTableRowHandle& ItemRowHandle, class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.SetDescriptionDataForItemHelper");
		
		UUI_ItemDescriptionBox_C_SetDescriptionDataForItemHelper_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.ExecuteUbergraph_UI_ItemDescriptionBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemDescriptionBox_C::ExecuteUbergraph_UI_ItemDescriptionBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescriptionBox.UI_ItemDescriptionBox_C.ExecuteUbergraph_UI_ItemDescriptionBox");
		
		UUI_ItemDescriptionBox_C_ExecuteUbergraph_UI_ItemDescriptionBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ItemDescriptionBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ItemDescriptionBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ItemDescriptionBox.UI_ItemDescriptionBox_C");
		return ptr;
	}

}


