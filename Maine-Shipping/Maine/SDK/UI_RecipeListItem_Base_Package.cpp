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
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.FilterTextMatches
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        FilterText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RecipeListItem_Base_C::FilterTextMatches(const class FText& FilterText, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.FilterTextMatches");
		
		UUI_RecipeListItem_Base_C_FilterTextMatches_Params params {};
		params.FilterText = FilterText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetLargeFont
	 * 		Flags  -> ()
	 */
	void UUI_RecipeListItem_Base_C::SetLargeFont()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetLargeFont");
		
		UUI_RecipeListItem_Base_C_SetLargeFont_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.HasFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasFocus                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RecipeListItem_Base_C::HasFocus(bool* HasFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.HasFocus");
		
		UUI_RecipeListItem_Base_C_HasFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasFocus != nullptr)
			*HasFocus = params.HasFocus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.RefreshIcons
	 * 		Flags  -> ()
	 */
	void UUI_RecipeListItem_Base_C::RefreshIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.RefreshIcons");
		
		UUI_RecipeListItem_Base_C_RefreshIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.FocusOnWidget
	 * 		Flags  -> ()
	 */
	void UUI_RecipeListItem_Base_C::FocusOnWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.FocusOnWidget");
		
		UUI_RecipeListItem_Base_C_FocusOnWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.Get Crafting Building Icon Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Crafting_Tag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UUI_RecipeListItem_Base_C::Get_Crafting_Building_Icon_Visibility(const struct FGameplayTag& Crafting_Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.Get Crafting Building Icon Visibility");
		
		UUI_RecipeListItem_Base_C_Get_Crafting_Building_Icon_Visibility_Params params {};
		params.Crafting_Tag = Crafting_Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetNeedWorkbenchTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_RecipeListItem_Base_C::GetNeedWorkbenchTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetNeedWorkbenchTooltip");
		
		UUI_RecipeListItem_Base_C_GetNeedWorkbenchTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetWorkbenchIcon
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RecipeListItem_Base_C::GetWorkbenchIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetWorkbenchIcon");
		
		UUI_RecipeListItem_Base_C_GetWorkbenchIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetBuildingRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeRowHandle                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_RecipeListItem_Base_C::SetBuildingRecipe(const struct FDataTableRowHandle& RecipeRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetBuildingRecipe");
		
		UUI_RecipeListItem_Base_C_SetBuildingRecipe_Params params {};
		params.RecipeRowHandle = RecipeRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetCraftingRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeRowHandle                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_RecipeListItem_Base_C::SetCraftingRecipe(const struct FDataTableRowHandle& RecipeRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetCraftingRecipe");
		
		UUI_RecipeListItem_Base_C_SetCraftingRecipe_Params params {};
		params.RecipeRowHandle = RecipeRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetCannotDoTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_RecipeListItem_Base_C::GetCannotDoTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetCannotDoTooltip");
		
		UUI_RecipeListItem_Base_C_GetCannotDoTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetCanDoVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_RecipeListItem_Base_C::GetCanDoVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetCanDoVis");
		
		UUI_RecipeListItem_Base_C_GetCanDoVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetCannotCraftColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RecipeListItem_Base_C::GetCannotCraftColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetCannotCraftColor");
		
		UUI_RecipeListItem_Base_C_GetCannotCraftColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetNewItemVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_RecipeListItem_Base_C::GetNewItemVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetNewItemVis");
		
		UUI_RecipeListItem_Base_C_GetNewItemVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetAttentionColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RecipeListItem_Base_C::GetAttentionColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetAttentionColor");
		
		UUI_RecipeListItem_Base_C_GetAttentionColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetEnabledStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  ItemText                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UButton*                                     RecipeButton                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeListItem_Base_C::SetEnabledStyle(class UTextBlock** ItemText, class UButton** RecipeButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetEnabledStyle");
		
		UUI_RecipeListItem_Base_C_SetEnabledStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemText != nullptr)
			*ItemText = params.ItemText;
		if (RecipeButton != nullptr)
			*RecipeButton = params.RecipeButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetDisabledStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  ItemText                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UButton*                                     RecipeButton                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeListItem_Base_C::SetDisabledStyle(class UTextBlock** ItemText, class UButton** RecipeButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetDisabledStyle");
		
		UUI_RecipeListItem_Base_C_SetDisabledStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemText != nullptr)
			*ItemText = params.ItemText;
		if (RecipeButton != nullptr)
			*RecipeButton = params.RecipeButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_RecipeListItem_Base_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.Construct");
		
		UUI_RecipeListItem_Base_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RecipeListItem_Base_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_RecipeListItem_Base_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RecipeListItem_Base_C::SetSelected(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetSelected");
		
		UUI_RecipeListItem_Base_C_SetSelected_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetEnabledState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RecipeListItem_Base_C::SetEnabledState(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetEnabledState");
		
		UUI_RecipeListItem_Base_C_SetEnabledState_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.BndEvt__RecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RecipeListItem_Base_C::BndEvt__RecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.BndEvt__RecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_RecipeListItem_Base_C_BndEvt__RecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.BndEvt__RecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RecipeListItem_Base_C::BndEvt__RecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.BndEvt__RecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UUI_RecipeListItem_Base_C_BndEvt__RecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_RecipeListItem_Base_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnAddedToFocusPath");
		
		UUI_RecipeListItem_Base_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.BndEvt__RecipeButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RecipeListItem_Base_C::BndEvt__RecipeButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.BndEvt__RecipeButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UUI_RecipeListItem_Base_C_BndEvt__RecipeButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_RecipeListItem_Base_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnGlobalColorChange");
		
		UUI_RecipeListItem_Base_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_RecipeListItem_Base_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnRemovedFromFocusPath");
		
		UUI_RecipeListItem_Base_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.PlayAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeListItem_Base_C::PlayAnim(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.PlayAnim");
		
		UUI_RecipeListItem_Base_C_PlayAnim_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_RecipeListItem_Base_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.Destruct");
		
		UUI_RecipeListItem_Base_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.EventLargeFonts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RecipeListItem_Base_C::EventLargeFonts(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.EventLargeFonts");
		
		UUI_RecipeListItem_Base_C_EventLargeFonts_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.ExecuteUbergraph_UI_RecipeListItem_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeListItem_Base_C::ExecuteUbergraph_UI_RecipeListItem_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.ExecuteUbergraph_UI_RecipeListItem_Base");
		
		UUI_RecipeListItem_Base_C_ExecuteUbergraph_UI_RecipeListItem_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnFocused__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeListItem_Base_C*                   RecipeListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeListItem_Base_C::OnFocused__DelegateSignature(const struct FDataTableRowHandle& Recipe, class UUI_RecipeListItem_Base_C* RecipeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnFocused__DelegateSignature");
		
		UUI_RecipeListItem_Base_C_OnFocused__DelegateSignature_Params params {};
		params.Recipe = Recipe;
		params.RecipeListItem = RecipeListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnMouseDoubleClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeListItem_Base_C*                   RecipeListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeListItem_Base_C::OnMouseDoubleClick__DelegateSignature(const struct FDataTableRowHandle& Recipe, class UUI_RecipeListItem_Base_C* RecipeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnMouseDoubleClick__DelegateSignature");
		
		UUI_RecipeListItem_Base_C_OnMouseDoubleClick__DelegateSignature_Params params {};
		params.Recipe = Recipe;
		params.RecipeListItem = RecipeListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnMouseDown__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UUI_RecipeListItem_Base_C*                   RecipeListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeListItem_Base_C::OnMouseDown__DelegateSignature(const struct FDataTableRowHandle& Recipe, class UUI_RecipeListItem_Base_C* RecipeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnMouseDown__DelegateSignature");
		
		UUI_RecipeListItem_Base_C_OnMouseDown__DelegateSignature_Params params {};
		params.Recipe = Recipe;
		params.RecipeListItem = RecipeListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RecipeListItem_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RecipeListItem_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RecipeListItem_Base.UI_RecipeListItem_Base_C");
		return ptr;
	}

}


