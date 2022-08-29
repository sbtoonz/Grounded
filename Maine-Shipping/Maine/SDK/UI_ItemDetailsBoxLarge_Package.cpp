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
	 * 		Name   -> Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.SetAnalyzerStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FDataTableRowHandle                         ItemRowHandle2                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_ItemDetailsBoxLarge_C::SetAnalyzerStatus(const struct FDataTableRowHandle& ItemRowHandle, const struct FDataTableRowHandle& ItemRowHandle2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.SetAnalyzerStatus");
		
		UUI_ItemDetailsBoxLarge_C_SetAnalyzerStatus_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.ItemRowHandle2 = ItemRowHandle2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetDamageType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBaseItemData                               ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            DamageFlags                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemDetailsBoxLarge_C::GetDamageType(const struct FBaseItemData& ItemData, int32_t* DamageFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetDamageType");
		
		UUI_ItemDetailsBoxLarge_C_GetDamageType_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageFlags != nullptr)
			*DamageFlags = params.DamageFlags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.SetRatingInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_ItemDetailsBoxLarge_C::SetRatingInfo(const struct FDataTableRowHandle& ItemRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.SetRatingInfo");
		
		UUI_ItemDetailsBoxLarge_C_SetRatingInfo_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetBasicTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_ItemDetailsBoxLarge_C::GetBasicTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetBasicTextColor");
		
		UUI_ItemDetailsBoxLarge_C_GetBasicTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetTierTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_ItemDetailsBoxLarge_C::GetTierTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetTierTextColor");
		
		UUI_ItemDetailsBoxLarge_C_GetTierTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetTierColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ItemDetailsBoxLarge_C::GetTierColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetTierColor");
		
		UUI_ItemDetailsBoxLarge_C_GetTierColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetDescBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ItemDetailsBoxLarge_C::GetDescBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetDescBGColor");
		
		UUI_ItemDetailsBoxLarge_C_GetDescBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetSEBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ItemDetailsBoxLarge_C::GetSEBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetSEBGColor");
		
		UUI_ItemDetailsBoxLarge_C_GetSEBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetHeaderBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ItemDetailsBoxLarge_C::GetHeaderBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetHeaderBGColor");
		
		UUI_ItemDetailsBoxLarge_C_GetHeaderBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetTextHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_ItemDetailsBoxLarge_C::GetTextHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetTextHeaderColor");
		
		UUI_ItemDetailsBoxLarge_C_GetTextHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetDescriptionBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ItemDetailsBoxLarge_C::GetDescriptionBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetDescriptionBGColor");
		
		UUI_ItemDetailsBoxLarge_C_GetDescriptionBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetDescriptionFGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ItemDetailsBoxLarge_C::GetDescriptionFGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.GetDescriptionFGColor");
		
		UUI_ItemDetailsBoxLarge_C_GetDescriptionFGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.SetDescriptionDataForItemRowHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_ItemDetailsBoxLarge_C::SetDescriptionDataForItemRowHandle(const struct FDataTableRowHandle& ItemRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.SetDescriptionDataForItemRowHandle");
		
		UUI_ItemDetailsBoxLarge_C_SetDescriptionDataForItemRowHandle_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.SetDescriptionRowHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_ItemDetailsBoxLarge_C::SetDescriptionRowHandle(const struct FDataTableRowHandle& ItemRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.SetDescriptionRowHandle");
		
		UUI_ItemDetailsBoxLarge_C_SetDescriptionRowHandle_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ItemDetailsBoxLarge_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.OnGlobalColorChange");
		
		UUI_ItemDetailsBoxLarge_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.ExecuteUbergraph_UI_ItemDetailsBoxLarge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemDetailsBoxLarge_C::ExecuteUbergraph_UI_ItemDetailsBoxLarge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C.ExecuteUbergraph_UI_ItemDetailsBoxLarge");
		
		UUI_ItemDetailsBoxLarge_C_ExecuteUbergraph_UI_ItemDetailsBoxLarge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ItemDetailsBoxLarge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ItemDetailsBoxLarge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ItemDetailsBoxLarge.UI_ItemDetailsBoxLarge_C");
		return ptr;
	}

}


