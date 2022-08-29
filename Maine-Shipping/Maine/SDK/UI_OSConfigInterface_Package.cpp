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
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.AddIconReferenceCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         CategoryData                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_OSConfigInterface_C::AddIconReferenceCategory(const struct FDataTableRowHandle& CategoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.AddIconReferenceCategory");
		
		UUI_OSConfigInterface_C_AddIconReferenceCategory_Params params {};
		params.CategoryData = CategoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.SetDaysAlive
	 * 		Flags  -> ()
	 */
	class FText UUI_OSConfigInterface_C::SetDaysAlive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.SetDaysAlive");
		
		UUI_OSConfigInterface_C_SetDaysAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.TintDropdowns
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OSConfigInterface_C::TintDropdowns(class UComboBoxString* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.TintDropdowns");
		
		UUI_OSConfigInterface_C_TintDropdowns_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.RefreshDropdowns
	 * 		Flags  -> ()
	 */
	void UUI_OSConfigInterface_C::RefreshDropdowns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.RefreshDropdowns");
		
		UUI_OSConfigInterface_C_RefreshDropdowns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.PopulateThemes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                             Dropdown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Nightmode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_OSConfigInterface_C::PopulateThemes(class UComboBoxString* Dropdown, bool Nightmode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.PopulateThemes");
		
		UUI_OSConfigInterface_C_PopulateThemes_Params params {};
		params.Dropdown = Dropdown;
		params.Nightmode = Nightmode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.RefreshDropdownColors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                             Dropdown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OSConfigInterface_C::RefreshDropdownColors(class UComboBoxString* Dropdown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.RefreshDropdownColors");
		
		UUI_OSConfigInterface_C_RefreshDropdownColors_Params params {};
		params.Dropdown = Dropdown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.GetSubheaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_OSConfigInterface_C::GetSubheaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.GetSubheaderColor");
		
		UUI_OSConfigInterface_C_GetSubheaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.GetBorderColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_OSConfigInterface_C::GetBorderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.GetBorderColor");
		
		UUI_OSConfigInterface_C_GetBorderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.RefreshBottomButtons
	 * 		Flags  -> ()
	 */
	void UUI_OSConfigInterface_C::RefreshBottomButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.RefreshBottomButtons");
		
		UUI_OSConfigInterface_C_RefreshBottomButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.GetHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_OSConfigInterface_C::GetHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.GetHeaderColor");
		
		UUI_OSConfigInterface_C_GetHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_OSConfigInterface_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.Construct");
		
		UUI_OSConfigInterface_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.RefreshUI
	 * 		Flags  -> ()
	 */
	void UUI_OSConfigInterface_C::RefreshUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.RefreshUI");
		
		UUI_OSConfigInterface_C_RefreshUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.BndEvt__Close_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_OSConfigInterface_C::BndEvt__Close_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.BndEvt__Close_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature");
		
		UUI_OSConfigInterface_C_BndEvt__Close_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_OSConfigInterface_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.OnGlobalColorChange");
		
		UUI_OSConfigInterface_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.BndEvt__NarratableComboBoxString_88_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OSConfigInterface_C::BndEvt__NarratableComboBoxString_88_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.BndEvt__NarratableComboBoxString_88_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");
		
		UUI_OSConfigInterface_C_BndEvt__NarratableComboBoxString_88_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.BndEvt__NightModeDropdown_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OSConfigInterface_C::BndEvt__NightModeDropdown_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.BndEvt__NightModeDropdown_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
		
		UUI_OSConfigInterface_C_BndEvt__NightModeDropdown_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.BndEvt__DayModeDropdown_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_OSConfigInterface_C::BndEvt__DayModeDropdown_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.BndEvt__DayModeDropdown_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature");
		
		UUI_OSConfigInterface_C_BndEvt__DayModeDropdown_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.BndEvt__NightModeDropdown_K2Node_ComponentBoundEvent_4_OnOpeningEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_OSConfigInterface_C::BndEvt__NightModeDropdown_K2Node_ComponentBoundEvent_4_OnOpeningEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.BndEvt__NightModeDropdown_K2Node_ComponentBoundEvent_4_OnOpeningEvent__DelegateSignature");
		
		UUI_OSConfigInterface_C_BndEvt__NightModeDropdown_K2Node_ComponentBoundEvent_4_OnOpeningEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OSConfigInterface_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.Tick");
		
		UUI_OSConfigInterface_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUI_OSConfigInterface_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.OnInitialized");
		
		UUI_OSConfigInterface_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_OSConfigInterface.UI_OSConfigInterface_C.ExecuteUbergraph_UI_OSConfigInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OSConfigInterface_C::ExecuteUbergraph_UI_OSConfigInterface(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OSConfigInterface.UI_OSConfigInterface_C.ExecuteUbergraph_UI_OSConfigInterface");
		
		UUI_OSConfigInterface_C_ExecuteUbergraph_UI_OSConfigInterface_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_OSConfigInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_OSConfigInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_OSConfigInterface.UI_OSConfigInterface_C");
		return ptr;
	}

}


