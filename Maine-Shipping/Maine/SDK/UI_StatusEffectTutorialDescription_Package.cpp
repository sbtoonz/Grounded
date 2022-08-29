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
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.SetDebuffTint
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTutorialDescription_C::SetDebuffTint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.SetDebuffTint");
		
		UUI_StatusEffectTutorialDescription_C_SetDebuffTint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.SetBuffTint
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTutorialDescription_C::SetBuffTint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.SetBuffTint");
		
		UUI_StatusEffectTutorialDescription_C_SetBuffTint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.SetDescriptionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLocString                                  DescSetter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTutorialDescription_C::SetDescriptionText(const struct FLocString& DescSetter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.SetDescriptionText");
		
		UUI_StatusEffectTutorialDescription_C_SetDescriptionText_Params params {};
		params.DescSetter = DescSetter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.SetImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  IconSetter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTutorialDescription_C::SetImage(class UTexture2D* IconSetter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.SetImage");
		
		UUI_StatusEffectTutorialDescription_C_SetImage_Params params {};
		params.IconSetter = IconSetter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.SetTitleText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLocString                                  TitleSetter                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTutorialDescription_C::SetTitleText(const struct FLocString& TitleSetter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.SetTitleText");
		
		UUI_StatusEffectTutorialDescription_C_SetTitleText_Params params {};
		params.TitleSetter = TitleSetter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BP_OnEntryReleased
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTutorialDescription_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BP_OnEntryReleased");
		
		UUI_StatusEffectTutorialDescription_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BP_OnItemExpansionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StatusEffectTutorialDescription_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BP_OnItemExpansionChanged");
		
		UUI_StatusEffectTutorialDescription_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BP_OnItemSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StatusEffectTutorialDescription_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BP_OnItemSelectionChanged");
		
		UUI_StatusEffectTutorialDescription_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StatusEffectTutorialDescription_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.PreConstruct");
		
		UUI_StatusEffectTutorialDescription_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTutorialDescription_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.OnGlobalColorChange");
		
		UUI_StatusEffectTutorialDescription_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_StatusEffectTutorialDescription_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.OnRemovedFromFocusPath");
		
		UUI_StatusEffectTutorialDescription_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_StatusEffectTutorialDescription_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.OnAddedToFocusPath");
		
		UUI_StatusEffectTutorialDescription_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BndEvt__BtnBG_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTutorialDescription_C::BndEvt__BtnBG_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BndEvt__BtnBG_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_StatusEffectTutorialDescription_C_BndEvt__BtnBG_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BndEvt__BtnBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTutorialDescription_C::BndEvt__BtnBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BndEvt__BtnBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UUI_StatusEffectTutorialDescription_C_BndEvt__BtnBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BndEvt__BtnBG_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTutorialDescription_C::BndEvt__BtnBG_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BndEvt__BtnBG_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UUI_StatusEffectTutorialDescription_C_BndEvt__BtnBG_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.OnListItemObjectSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTutorialDescription_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.OnListItemObjectSet");
		
		UUI_StatusEffectTutorialDescription_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.RefreshDisplay
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectTutorialDescription_C::RefreshDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.RefreshDisplay");
		
		UUI_StatusEffectTutorialDescription_C_RefreshDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.ExecuteUbergraph_UI_StatusEffectTutorialDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectTutorialDescription_C::ExecuteUbergraph_UI_StatusEffectTutorialDescription(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.ExecuteUbergraph_UI_StatusEffectTutorialDescription");
		
		UUI_StatusEffectTutorialDescription_C_ExecuteUbergraph_UI_StatusEffectTutorialDescription_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_StatusEffectTutorialDescription_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_StatusEffectTutorialDescription_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C");
		return ptr;
	}

}


