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
	 * 		Name   -> Function UI_PhotoModeCheckBox.UI_PhotoModeCheckBox_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PhotoModeCheckBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeCheckBox.UI_PhotoModeCheckBox_C.PreConstruct");
		
		UUI_PhotoModeCheckBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeCheckBox.UI_PhotoModeCheckBox_C.OnFocusedHoveredChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FocusedOrHovered                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PhotoModeCheckBox_C::OnFocusedHoveredChanged(bool FocusedOrHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeCheckBox.UI_PhotoModeCheckBox_C.OnFocusedHoveredChanged");
		
		UUI_PhotoModeCheckBox_C_OnFocusedHoveredChanged_Params params {};
		params.FocusedOrHovered = FocusedOrHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeCheckBox.UI_PhotoModeCheckBox_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_PhotoModeCheckBox_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeCheckBox.UI_PhotoModeCheckBox_C.OnMouseEnter");
		
		UUI_PhotoModeCheckBox_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeCheckBox.UI_PhotoModeCheckBox_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_PhotoModeCheckBox_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeCheckBox.UI_PhotoModeCheckBox_C.OnMouseLeave");
		
		UUI_PhotoModeCheckBox_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PhotoModeCheckBox.UI_PhotoModeCheckBox_C.ExecuteUbergraph_UI_PhotoModeCheckBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PhotoModeCheckBox_C::ExecuteUbergraph_UI_PhotoModeCheckBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PhotoModeCheckBox.UI_PhotoModeCheckBox_C.ExecuteUbergraph_UI_PhotoModeCheckBox");
		
		UUI_PhotoModeCheckBox_C_ExecuteUbergraph_UI_PhotoModeCheckBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PhotoModeCheckBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PhotoModeCheckBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PhotoModeCheckBox.UI_PhotoModeCheckBox_C");
		return ptr;
	}

}


