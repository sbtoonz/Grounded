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
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_RepairWindow_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.HandleKeyEventChord");
		
		UUI_RepairWindow_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.SetFillPercentage
	 * 		Flags  -> ()
	 */
	void UUI_RepairWindow_C::SetFillPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.SetFillPercentage");
		
		UUI_RepairWindow_C_SetFillPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.GetDurabilityColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RepairWindow_C::GetDurabilityColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.GetDurabilityColor");
		
		UUI_RepairWindow_C_GetDurabilityColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.GetHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_RepairWindow_C::GetHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.GetHeaderColor");
		
		UUI_RepairWindow_C_GetHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.GetAccentTwo
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RepairWindow_C::GetAccentTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.GetAccentTwo");
		
		UUI_RepairWindow_C_GetAccentTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.GetBaseColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RepairWindow_C::GetBaseColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.GetBaseColor");
		
		UUI_RepairWindow_C_GetBaseColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.GetAccentOne
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RepairWindow_C::GetAccentOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.GetAccentOne");
		
		UUI_RepairWindow_C_GetAccentOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.GetGlobalBG
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RepairWindow_C::GetGlobalBG()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.GetGlobalBG");
		
		UUI_RepairWindow_C_GetGlobalBG_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RepairWindow_C::Initialize(class UItem* SelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.Initialize");
		
		UUI_RepairWindow_C_Initialize_Params params {};
		params.SelectedItem = SelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.BndEvt__Repair_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RepairWindow_C::BndEvt__Repair_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.BndEvt__Repair_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature");
		
		UUI_RepairWindow_C_BndEvt__Repair_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RepairWindow_C::BndEvt__Cancel_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature");
		
		UUI_RepairWindow_C_BndEvt__Cancel_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_RepairWindow_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.Destruct");
		
		UUI_RepairWindow_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.RepairItem
	 * 		Flags  -> ()
	 */
	void UUI_RepairWindow_C::RepairItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.RepairItem");
		
		UUI_RepairWindow_C_RepairItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_RepairWindow_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.OnGlobalColorChange");
		
		UUI_RepairWindow_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_RepairWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.Construct");
		
		UUI_RepairWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RepairWindow_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.PreConstruct");
		
		UUI_RepairWindow_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RepairWindow.UI_RepairWindow_C.ExecuteUbergraph_UI_RepairWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RepairWindow_C::ExecuteUbergraph_UI_RepairWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RepairWindow.UI_RepairWindow_C.ExecuteUbergraph_UI_RepairWindow");
		
		UUI_RepairWindow_C_ExecuteUbergraph_UI_RepairWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RepairWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RepairWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RepairWindow.UI_RepairWindow_C");
		return ptr;
	}

}


