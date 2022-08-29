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
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.SetLargeFonts
	 * 		Flags  -> ()
	 */
	void UUI_RecipeItemSlot_C::SetLargeFonts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.SetLargeFonts");
		
		UUI_RecipeItemSlot_C_SetLargeFonts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.HasFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasFocus                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RecipeItemSlot_C::HasFocus(bool* HasFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.HasFocus");
		
		UUI_RecipeItemSlot_C_HasFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasFocus != nullptr)
			*HasFocus = params.HasFocus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetHotCraftFillColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RecipeItemSlot_C::GetHotCraftFillColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetHotCraftFillColor");
		
		UUI_RecipeItemSlot_C_GetHotCraftFillColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetHoldToCraft
	 * 		Flags  -> ()
	 */
	float UUI_RecipeItemSlot_C::GetHoldToCraft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetHoldToCraft");
		
		UUI_RecipeItemSlot_C_GetHoldToCraft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.Get_AnimFore_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RecipeItemSlot_C::Get_AnimFore_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.Get_AnimFore_ColorAndOpacity_1");
		
		UUI_RecipeItemSlot_C_Get_AnimFore_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetHotCraftAnimVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_RecipeItemSlot_C::GetHotCraftAnimVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetHotCraftAnimVis");
		
		UUI_RecipeItemSlot_C_GetHotCraftAnimVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetGlobalSelected
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RecipeItemSlot_C::GetGlobalSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetGlobalSelected");
		
		UUI_RecipeItemSlot_C_GetGlobalSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.SetHasEnough
	 * 		Flags  -> ()
	 */
	void UUI_RecipeItemSlot_C::SetHasEnough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.SetHasEnough");
		
		UUI_RecipeItemSlot_C_SetHasEnough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.SetCannotHotCraft
	 * 		Flags  -> ()
	 */
	void UUI_RecipeItemSlot_C::SetCannotHotCraft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.SetCannotHotCraft");
		
		UUI_RecipeItemSlot_C_SetCannotHotCraft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.SetCanHotCraft
	 * 		Flags  -> ()
	 */
	void UUI_RecipeItemSlot_C::SetCanHotCraft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.SetCanHotCraft");
		
		UUI_RecipeItemSlot_C_SetCanHotCraft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetCraftStates
	 * 		Flags  -> ()
	 */
	void UUI_RecipeItemSlot_C::GetCraftStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetCraftStates");
		
		UUI_RecipeItemSlot_C_GetCraftStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.CanHotCraft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanHotCraft                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RecipeItemSlot_C::CanHotCraft(bool* CanHotCraft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.CanHotCraft");
		
		UUI_RecipeItemSlot_C_CanHotCraft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanHotCraft != nullptr)
			*CanHotCraft = params.CanHotCraft;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetFillPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percentage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeItemSlot_C::GetFillPercentage(float* Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetFillPercentage");
		
		UUI_RecipeItemSlot_C_GetFillPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percentage != nullptr)
			*Percentage = params.Percentage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetBasicTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_RecipeItemSlot_C::GetBasicTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetBasicTooltip");
		
		UUI_RecipeItemSlot_C_GetBasicTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetGlobalBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RecipeItemSlot_C::GetGlobalBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetGlobalBGColor");
		
		UUI_RecipeItemSlot_C_GetGlobalBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetSCABOSAccentTwo
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RecipeItemSlot_C::GetSCABOSAccentTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetSCABOSAccentTwo");
		
		UUI_RecipeItemSlot_C_GetSCABOSAccentTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetMissingColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RecipeItemSlot_C::GetMissingColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetMissingColor");
		
		UUI_RecipeItemSlot_C_GetMissingColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FBaseItemData                               ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            HaveCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasEnough                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NeedCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeItemSlot_C::Setup(const struct FDataTableRowHandle& ItemRowHandle, const struct FBaseItemData& ItemData, int32_t HaveCount, bool HasEnough, int32_t NeedCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.Setup");
		
		UUI_RecipeItemSlot_C_Setup_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.ItemData = ItemData;
		params.HaveCount = HaveCount;
		params.HasEnough = HasEnough;
		params.NeedCount = NeedCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeItemSlot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.Tick");
		
		UUI_RecipeItemSlot_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RecipeItemSlot_C::SetSelected(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.SetSelected");
		
		UUI_RecipeItemSlot_C_SetSelected_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_RecipeItemSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.Construct");
		
		UUI_RecipeItemSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RecipeItemSlot_C::BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUI_RecipeItemSlot_C_BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RecipeItemSlot_C::BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_RecipeItemSlot_C_BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RecipeItemSlot_C::BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UUI_RecipeItemSlot_C_BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RecipeItemSlot_C::BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UUI_RecipeItemSlot_C_BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RecipeItemSlot_C::BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_RecipeItemSlot_C_BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.ManageCraftStates
	 * 		Flags  -> ()
	 */
	void UUI_RecipeItemSlot_C::ManageCraftStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.ManageCraftStates");
		
		UUI_RecipeItemSlot_C_ManageCraftStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_RecipeItemSlot_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnGlobalColorChange");
		
		UUI_RecipeItemSlot_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_RecipeItemSlot_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnAddedToFocusPath");
		
		UUI_RecipeItemSlot_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_RecipeItemSlot_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnRemovedFromFocusPath");
		
		UUI_RecipeItemSlot_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.EventLargeFonts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RecipeItemSlot_C::EventLargeFonts(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.EventLargeFonts");
		
		UUI_RecipeItemSlot_C_EventLargeFonts_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_RecipeItemSlot_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.Destruct");
		
		UUI_RecipeItemSlot_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.ExecuteUbergraph_UI_RecipeItemSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeItemSlot_C::ExecuteUbergraph_UI_RecipeItemSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.ExecuteUbergraph_UI_RecipeItemSlot");
		
		UUI_RecipeItemSlot_C_ExecuteUbergraph_UI_RecipeItemSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnFocused__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeItemSlot_C*                        RecipeItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeItemSlot_C::OnFocused__DelegateSignature(const struct FDataTableRowHandle& ItemRowHandle, class UUI_RecipeItemSlot_C* RecipeItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnFocused__DelegateSignature");
		
		UUI_RecipeItemSlot_C_OnFocused__DelegateSignature_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.RecipeItemSlot = RecipeItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnHoldComplete__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeItemSlot_C*                        RecipeItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeItemSlot_C::OnHoldComplete__DelegateSignature(const struct FDataTableRowHandle& ItemRowHandle, class UUI_RecipeItemSlot_C* RecipeItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnHoldComplete__DelegateSignature");
		
		UUI_RecipeItemSlot_C_OnHoldComplete__DelegateSignature_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.RecipeItemSlot = RecipeItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnMouseDoubleClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeItemSlot_C*                        RecipeItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeItemSlot_C::OnMouseDoubleClick__DelegateSignature(const struct FDataTableRowHandle& ItemRowHandle, class UUI_RecipeItemSlot_C* RecipeItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnMouseDoubleClick__DelegateSignature");
		
		UUI_RecipeItemSlot_C_OnMouseDoubleClick__DelegateSignature_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.RecipeItemSlot = RecipeItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnMouseDown__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeItemSlot_C*                        RecipeItemSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeItemSlot_C::OnMouseDown__DelegateSignature(const struct FDataTableRowHandle& ItemRowHandle, class UUI_RecipeItemSlot_C* RecipeItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnMouseDown__DelegateSignature");
		
		UUI_RecipeItemSlot_C_OnMouseDown__DelegateSignature_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.RecipeItemSlot = RecipeItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RecipeItemSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RecipeItemSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RecipeItemSlot.UI_RecipeItemSlot_C");
		return ptr;
	}

}


