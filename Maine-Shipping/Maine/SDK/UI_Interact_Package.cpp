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
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetInteractionTypeBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionType                                   InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm)
	 */
	void UUI_Interact_C::GetInteractionTypeBrush(EInteractionType InteractionType, struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetInteractionTypeBrush");
		
		UUI_Interact_C_GetInteractionTypeBrush_Params params {};
		params.InteractionType = InteractionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetIsVisibleMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Interact_C::GetIsVisibleMaster(bool* IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetIsVisibleMaster");
		
		UUI_Interact_C_GetIsVisibleMaster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsVisible != nullptr)
			*IsVisible = params.IsVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.RefreshItemProcessing
	 * 		Flags  -> ()
	 */
	void UUI_Interact_C::RefreshItemProcessing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.RefreshItemProcessing");
		
		UUI_Interact_C_RefreshItemProcessing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetInteractionInputVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Interact_C::GetInteractionInputVisibility(ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetInteractionInputVisibility");
		
		UUI_Interact_C_GetInteractionInputVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.IsInteractionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionChannel                                Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Interact_C::IsInteractionEnabled(EInteractionChannel Channel, bool* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.IsInteractionEnabled");
		
		UUI_Interact_C_IsInteractionEnabled_Params params {};
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.IsMissingIngredientsVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionType                                   InteractType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Interact_C::IsMissingIngredientsVisibility(EInteractionType InteractType, ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.IsMissingIngredientsVisibility");
		
		UUI_Interact_C_IsMissingIngredientsVisibility_Params params {};
		params.InteractType = InteractType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetInteractionOpacities
	 * 		Flags  -> ()
	 */
	void UUI_Interact_C::GetInteractionOpacities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetInteractionOpacities");
		
		UUI_Interact_C_GetInteractionOpacities_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetInteractionSlashDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Interact_C::GetInteractionSlashDisplay(ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetInteractionSlashDisplay");
		
		UUI_Interact_C_GetInteractionSlashDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetHoldInteractionVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Interact_C::GetHoldInteractionVisibility(ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetHoldInteractionVisibility");
		
		UUI_Interact_C_GetHoldInteractionVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetPrimaryInteractionVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Interact_C::GetPrimaryInteractionVisibility(ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetPrimaryInteractionVisibility");
		
		UUI_Interact_C_GetPrimaryInteractionVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetPrimaryInteractionDisplayName
	 * 		Flags  -> ()
	 */
	class FText UUI_Interact_C::GetPrimaryInteractionDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetPrimaryInteractionDisplayName");
		
		UUI_Interact_C_GetPrimaryInteractionDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetHoldInteractionDisplayName
	 * 		Flags  -> ()
	 */
	class FText UUI_Interact_C::GetHoldInteractionDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetHoldInteractionDisplayName");
		
		UUI_Interact_C_GetHoldInteractionDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetInteractionDisplayName
	 * 		Flags  -> ()
	 */
	class FText UUI_Interact_C::GetInteractionDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetInteractionDisplayName");
		
		UUI_Interact_C_GetInteractionDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.HoldKeyVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_Interact_C::HoldKeyVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.HoldKeyVis");
		
		UUI_Interact_C_HoldKeyVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.FillCircleEvent
	 * 		Flags  -> ()
	 */
	void UUI_Interact_C::FillCircleEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.FillCircleEvent");
		
		UUI_Interact_C_FillCircleEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.InteractionTypeToVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionType                                   InteractType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Interact_C::InteractionTypeToVisibility(EInteractionType InteractType, ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.InteractionTypeToVisibility");
		
		UUI_Interact_C_InteractionTypeToVisibility_Params params {};
		params.InteractType = InteractType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetDarkener
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_Interact_C::GetDarkener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetDarkener");
		
		UUI_Interact_C_GetDarkener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.Get_InventoryFull_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_Interact_C::Get_InventoryFull_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.Get_InventoryFull_ColorAndOpacity_1");
		
		UUI_Interact_C_Get_InventoryFull_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetAccentTwo
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_Interact_C::GetAccentTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetAccentTwo");
		
		UUI_Interact_C_GetAccentTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetBasicTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_Interact_C::GetBasicTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetBasicTextColor");
		
		UUI_Interact_C_GetBasicTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetInteractableInRange
	 * 		Flags  -> ()
	 */
	void UUI_Interact_C::GetInteractableInRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetInteractableInRange");
		
		UUI_Interact_C_GetInteractableInRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetInteractionControlVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_Interact_C::GetInteractionControlVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetInteractionControlVisibility");
		
		UUI_Interact_C_GetInteractionControlVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.FacebuttonVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_Interact_C::FacebuttonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.FacebuttonVisibility");
		
		UUI_Interact_C_FacebuttonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetFillColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_Interact_C::GetFillColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetFillColor");
		
		UUI_Interact_C_GetFillColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.IsAlsoHoldHappening
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Happening                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Interact_C::IsAlsoHoldHappening(bool* Happening)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.IsAlsoHoldHappening");
		
		UUI_Interact_C_IsAlsoHoldHappening_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Happening != nullptr)
			*Happening = params.Happening;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.Get_OnlyFill_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_Interact_C::Get_OnlyFill_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.Get_OnlyFill_Visibility_1");
		
		UUI_Interact_C_Get_OnlyFill_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.Get_AlsoFill_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_Interact_C::Get_AlsoFill_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.Get_AlsoFill_Visibility_1");
		
		UUI_Interact_C_Get_AlsoFill_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetVisibilityHoldFill
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_Interact_C::GetVisibilityHoldFill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetVisibilityHoldFill");
		
		UUI_Interact_C_GetVisibilityHoldFill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.KeypressVisbility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_Interact_C::KeypressVisbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.KeypressVisbility");
		
		UUI_Interact_C_KeypressVisbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.Get_InputKey_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_Interact_C::Get_InputKey_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.Get_InputKey_Visibility_1");
		
		UUI_Interact_C_Get_InputKey_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.CanCancelVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_Interact_C::CanCancelVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.CanCancelVisibility");
		
		UUI_Interact_C_CanCancelVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.Get_GrabHand_Brush_1
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UUI_Interact_C::Get_GrabHand_Brush_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.Get_GrabHand_Brush_1");
		
		UUI_Interact_C_Get_GrabHand_Brush_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.RefreshBuildingRequirements
	 * 		Flags  -> ()
	 */
	void UUI_Interact_C::RefreshBuildingRequirements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.RefreshBuildingRequirements");
		
		UUI_Interact_C_RefreshBuildingRequirements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetVisibilityForBuildingRequirements
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_Interact_C::GetVisibilityForBuildingRequirements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetVisibilityForBuildingRequirements");
		
		UUI_Interact_C_GetVisibilityForBuildingRequirements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.GetInputKeyText
	 * 		Flags  -> ()
	 */
	class FText UUI_Interact_C::GetInputKeyText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.GetInputKeyText");
		
		UUI_Interact_C_GetInputKeyText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Interact_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.Construct");
		
		UUI_Interact_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Interact_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.Tick");
		
		UUI_Interact_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.On Change Interactable
	 * 		Flags  -> ()
	 */
	void UUI_Interact_C::On_Change_Interactable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.On Change Interactable");
		
		UUI_Interact_C_On_Change_Interactable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.Refresh UI
	 * 		Flags  -> ()
	 */
	void UUI_Interact_C::Refresh_UI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.Refresh UI");
		
		UUI_Interact_C_Refresh_UI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.BindPlayerEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SurvivalPlayerCharacter_C*               Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Interact_C::BindPlayerEvents(class ABP_SurvivalPlayerCharacter_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.BindPlayerEvents");
		
		UUI_Interact_C_BindPlayerEvents_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_Interact_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.OnGlobalColorChange");
		
		UUI_Interact_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Interact.UI_Interact_C.ExecuteUbergraph_UI_Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Interact_C::ExecuteUbergraph_UI_Interact(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Interact.UI_Interact_C.ExecuteUbergraph_UI_Interact");
		
		UUI_Interact_C_ExecuteUbergraph_UI_Interact_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Interact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Interact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Interact.UI_Interact_C");
		return ptr;
	}

}


