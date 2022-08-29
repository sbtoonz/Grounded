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
	 * 		Name   -> Function UI_TerminalBG.UI_TerminalBG_C.GetMaterialBColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_TerminalBG_C::GetMaterialBColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TerminalBG.UI_TerminalBG_C.GetMaterialBColor");
		
		UUI_TerminalBG_C_GetMaterialBColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TerminalBG.UI_TerminalBG_C.GetAccentThree
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_TerminalBG_C::GetAccentThree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TerminalBG.UI_TerminalBG_C.GetAccentThree");
		
		UUI_TerminalBG_C_GetAccentThree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TerminalBG.UI_TerminalBG_C.GetSCABBaseColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_TerminalBG_C::GetSCABBaseColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TerminalBG.UI_TerminalBG_C.GetSCABBaseColor");
		
		UUI_TerminalBG_C_GetSCABBaseColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TerminalBG.UI_TerminalBG_C.GetGlobalBGDarkener
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_TerminalBG_C::GetGlobalBGDarkener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TerminalBG.UI_TerminalBG_C.GetGlobalBGDarkener");
		
		UUI_TerminalBG_C_GetGlobalBGDarkener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TerminalBG.UI_TerminalBG_C.GetGlobalBG
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_TerminalBG_C::GetGlobalBG()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TerminalBG.UI_TerminalBG_C.GetGlobalBG");
		
		UUI_TerminalBG_C_GetGlobalBG_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TerminalBG.UI_TerminalBG_C.GetAccentTwo
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_TerminalBG_C::GetAccentTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TerminalBG.UI_TerminalBG_C.GetAccentTwo");
		
		UUI_TerminalBG_C_GetAccentTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TerminalBG.UI_TerminalBG_C.GetAccentOne
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_TerminalBG_C::GetAccentOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TerminalBG.UI_TerminalBG_C.GetAccentOne");
		
		UUI_TerminalBG_C_GetAccentOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TerminalBG.UI_TerminalBG_C.GetHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_TerminalBG_C::GetHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TerminalBG.UI_TerminalBG_C.GetHeaderColor");
		
		UUI_TerminalBG_C_GetHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TerminalBG.UI_TerminalBG_C.GetSubheaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_TerminalBG_C::GetSubheaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TerminalBG.UI_TerminalBG_C.GetSubheaderColor");
		
		UUI_TerminalBG_C_GetSubheaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TerminalBG.UI_TerminalBG_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_TerminalBG_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TerminalBG.UI_TerminalBG_C.Construct");
		
		UUI_TerminalBG_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TerminalBG.UI_TerminalBG_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_TerminalBG_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TerminalBG.UI_TerminalBG_C.OnGlobalColorChange");
		
		UUI_TerminalBG_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TerminalBG.UI_TerminalBG_C.ExecuteUbergraph_UI_TerminalBG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TerminalBG_C::ExecuteUbergraph_UI_TerminalBG(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TerminalBG.UI_TerminalBG_C.ExecuteUbergraph_UI_TerminalBG");
		
		UUI_TerminalBG_C_ExecuteUbergraph_UI_TerminalBG_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TerminalBG.UI_TerminalBG_C.OnQuickItemTypeSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHotBarQuickSlotType                               QuickSlotType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_TerminalBG_C::OnQuickItemTypeSelected__DelegateSignature(EHotBarQuickSlotType QuickSlotType, const struct FDataTableRowHandle& ItemRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TerminalBG.UI_TerminalBG_C.OnQuickItemTypeSelected__DelegateSignature");
		
		UUI_TerminalBG_C_OnQuickItemTypeSelected__DelegateSignature_Params params {};
		params.QuickSlotType = QuickSlotType;
		params.ItemRowHandle = ItemRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TerminalBG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TerminalBG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TerminalBG.UI_TerminalBG_C");
		return ptr;
	}

}


