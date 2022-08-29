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
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.HandleSelectInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHandled                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MapLegendEntry_C::HandleSelectInput(bool* bHandled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.HandleSelectInput");
		
		UUI_MapLegendEntry_C_HandleSelectInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHandled != nullptr)
			*bHandled = params.bHandled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UUI_MapLegendEntry_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.OnKeyDown");
		
		UUI_MapLegendEntry_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.SetInvisibleStyle
	 * 		Flags  -> ()
	 */
	void UUI_MapLegendEntry_C::SetInvisibleStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.SetInvisibleStyle");
		
		UUI_MapLegendEntry_C_SetInvisibleStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.SetVisibleStyle
	 * 		Flags  -> ()
	 */
	void UUI_MapLegendEntry_C::SetVisibleStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.SetVisibleStyle");
		
		UUI_MapLegendEntry_C_SetVisibleStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.SetUnfocusedStyle
	 * 		Flags  -> ()
	 */
	void UUI_MapLegendEntry_C::SetUnfocusedStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.SetUnfocusedStyle");
		
		UUI_MapLegendEntry_C_SetUnfocusedStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.SetFocusedStyle
	 * 		Flags  -> ()
	 */
	void UUI_MapLegendEntry_C::SetFocusedStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.SetFocusedStyle");
		
		UUI_MapLegendEntry_C_SetFocusedStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.GetFocusWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UButton*                                     WidgetToFocus                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapLegendEntry_C::GetFocusWidget(class UButton** WidgetToFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.GetFocusWidget");
		
		UUI_MapLegendEntry_C_GetFocusWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WidgetToFocus != nullptr)
			*WidgetToFocus = params.WidgetToFocus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_MapLegendEntry_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.OnGlobalColorChange");
		
		UUI_MapLegendEntry_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.RefreshNumberText
	 * 		Flags  -> ()
	 */
	void UUI_MapLegendEntry_C::RefreshNumberText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.RefreshNumberText");
		
		UUI_MapLegendEntry_C_RefreshNumberText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.ShowArrowControls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MapLegendEntry_C::ShowArrowControls(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.ShowArrowControls");
		
		UUI_MapLegendEntry_C_ShowArrowControls_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.ShowSingleElementControls
	 * 		Flags  -> ()
	 */
	void UUI_MapLegendEntry_C::ShowSingleElementControls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.ShowSingleElementControls");
		
		UUI_MapLegendEntry_C_ShowSingleElementControls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_MapLegendEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.Construct");
		
		UUI_MapLegendEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.OnFocusOnSingleElementPressed
	 * 		Flags  -> ()
	 */
	void UUI_MapLegendEntry_C::OnFocusOnSingleElementPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.OnFocusOnSingleElementPressed");
		
		UUI_MapLegendEntry_C_OnFocusOnSingleElementPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_MapLegendEntry_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.OnAddedToFocusPath");
		
		UUI_MapLegendEntry_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_MapLegendEntry_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.OnRemovedFromFocusPath");
		
		UUI_MapLegendEntry_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.UpdateVisibilityControls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MapLegendEntry_C::UpdateVisibilityControls(bool Show, bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.UpdateVisibilityControls");
		
		UUI_MapLegendEntry_C_UpdateVisibilityControls_Params params {};
		params.Show = Show;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.BndEvt__VisibilityToggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MapLegendEntry_C::BndEvt__VisibilityToggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.BndEvt__VisibilityToggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_MapLegendEntry_C_BndEvt__VisibilityToggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.SetCustomPlayerVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerCharacterIdentity                           Identity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapLegendEntry_C::SetCustomPlayerVisuals(EPlayerCharacterIdentity Identity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.SetCustomPlayerVisuals");
		
		UUI_MapLegendEntry_C_SetCustomPlayerVisuals_Params params {};
		params.Identity = Identity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendEntry.UI_MapLegendEntry_C.ExecuteUbergraph_UI_MapLegendEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapLegendEntry_C::ExecuteUbergraph_UI_MapLegendEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendEntry.UI_MapLegendEntry_C.ExecuteUbergraph_UI_MapLegendEntry");
		
		UUI_MapLegendEntry_C_ExecuteUbergraph_UI_MapLegendEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MapLegendEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MapLegendEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MapLegendEntry.UI_MapLegendEntry_C");
		return ptr;
	}

}


