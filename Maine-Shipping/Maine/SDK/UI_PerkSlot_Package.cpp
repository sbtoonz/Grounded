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
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.SetBorderStyle
	 * 		Flags  -> ()
	 */
	void UUI_PerkSlot_C::SetBorderStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.SetBorderStyle");
		
		UUI_PerkSlot_C_SetBorderStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.SetUnhoveredState
	 * 		Flags  -> ()
	 */
	void UUI_PerkSlot_C::SetUnhoveredState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.SetUnhoveredState");
		
		UUI_PerkSlot_C_SetUnhoveredState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.SetHoveredState
	 * 		Flags  -> ()
	 */
	void UUI_PerkSlot_C::SetHoveredState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.SetHoveredState");
		
		UUI_PerkSlot_C_SetHoveredState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkStatus                                 PerkStatus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_PerkSlot_C::Initialize(const struct FPerkStatus& PerkStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.Initialize");
		
		UUI_PerkSlot_C_Initialize_Params params {};
		params.PerkStatus = PerkStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PerkSlot_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_PerkSlot_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_PerkSlot_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.OnAddedToFocusPath");
		
		UUI_PerkSlot_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.SetFocused
	 * 		Flags  -> ()
	 */
	void UUI_PerkSlot_C::SetFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.SetFocused");
		
		UUI_PerkSlot_C_SetFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PerkSlot_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_PerkSlot_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PerkSlot_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UUI_PerkSlot_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_PerkSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.Construct");
		
		UUI_PerkSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_PerkSlot_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.OnGlobalColorChange");
		
		UUI_PerkSlot_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PerkSlot_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UUI_PerkSlot_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.ExecuteUbergraph_UI_PerkSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PerkSlot_C::ExecuteUbergraph_UI_PerkSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.ExecuteUbergraph_UI_PerkSlot");
		
		UUI_PerkSlot_C_ExecuteUbergraph_UI_PerkSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.OnFocus__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_PerkSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PerkSlot_C::OnFocus__DelegateSignature(class UUI_PerkSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.OnFocus__DelegateSignature");
		
		UUI_PerkSlot_C_OnFocus__DelegateSignature_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.OnMouseDoubleClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_PerkSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PerkSlot_C::OnMouseDoubleClick__DelegateSignature(class UUI_PerkSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.OnMouseDoubleClick__DelegateSignature");
		
		UUI_PerkSlot_C_OnMouseDoubleClick__DelegateSignature_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.OnMouseClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_PerkSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PerkSlot_C::OnMouseClick__DelegateSignature(class UUI_PerkSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.OnMouseClick__DelegateSignature");
		
		UUI_PerkSlot_C_OnMouseClick__DelegateSignature_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PerkSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PerkSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PerkSlot.UI_PerkSlot_C");
		return ptr;
	}

}


