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
	 * 		Name   -> Function UI_InspectWindow.UI_InspectWindow_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_InspectWindow_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InspectWindow.UI_InspectWindow_C.HandleKeyEventChord");
		
		UUI_InspectWindow_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InspectWindow.UI_InspectWindow_C.OnAnalogValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UUI_InspectWindow_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InspectWindow.UI_InspectWindow_C.OnAnalogValueChanged");
		
		UUI_InspectWindow_C_OnAnalogValueChanged_Params params {};
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InspectWindow.UI_InspectWindow_C.GetHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_InspectWindow_C::GetHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InspectWindow.UI_InspectWindow_C.GetHeaderColor");
		
		UUI_InspectWindow_C_GetHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InspectWindow.UI_InspectWindow_C.GetExpandoColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InspectWindow_C::GetExpandoColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InspectWindow.UI_InspectWindow_C.GetExpandoColor");
		
		UUI_InspectWindow_C_GetExpandoColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InspectWindow.UI_InspectWindow_C.GetBGDarkener
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InspectWindow_C::GetBGDarkener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InspectWindow.UI_InspectWindow_C.GetBGDarkener");
		
		UUI_InspectWindow_C_GetBGDarkener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InspectWindow.UI_InspectWindow_C.GetAccentTwo
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InspectWindow_C::GetAccentTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InspectWindow.UI_InspectWindow_C.GetAccentTwo");
		
		UUI_InspectWindow_C_GetAccentTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InspectWindow.UI_InspectWindow_C.BndEvt__UI_BottomButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_InspectWindow_C::BndEvt__UI_BottomButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InspectWindow.UI_InspectWindow_C.BndEvt__UI_BottomButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InspectWindow_C_BndEvt__UI_BottomButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InspectWindow.UI_InspectWindow_C.SetInspectionItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InspectWindow_C::SetInspectionItem(class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InspectWindow.UI_InspectWindow_C.SetInspectionItem");
		
		UUI_InspectWindow_C_SetInspectionItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InspectWindow.UI_InspectWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_InspectWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InspectWindow.UI_InspectWindow_C.Construct");
		
		UUI_InspectWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InspectWindow.UI_InspectWindow_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_InspectWindow_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InspectWindow.UI_InspectWindow_C.Destruct");
		
		UUI_InspectWindow_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InspectWindow.UI_InspectWindow_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_InspectWindow_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InspectWindow.UI_InspectWindow_C.OnGlobalColorChange");
		
		UUI_InspectWindow_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InspectWindow.UI_InspectWindow_C.EventLargeFonts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InspectWindow_C::EventLargeFonts(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InspectWindow.UI_InspectWindow_C.EventLargeFonts");
		
		UUI_InspectWindow_C_EventLargeFonts_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InspectWindow.UI_InspectWindow_C.SetInspectItemFromData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         DataTableRowHandle                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_InspectWindow_C::SetInspectItemFromData(const struct FDataTableRowHandle& DataTableRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InspectWindow.UI_InspectWindow_C.SetInspectItemFromData");
		
		UUI_InspectWindow_C_SetInspectItemFromData_Params params {};
		params.DataTableRowHandle = DataTableRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InspectWindow.UI_InspectWindow_C.ExecuteUbergraph_UI_InspectWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InspectWindow_C::ExecuteUbergraph_UI_InspectWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InspectWindow.UI_InspectWindow_C.ExecuteUbergraph_UI_InspectWindow");
		
		UUI_InspectWindow_C_ExecuteUbergraph_UI_InspectWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_InspectWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_InspectWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InspectWindow.UI_InspectWindow_C");
		return ptr;
	}

}


