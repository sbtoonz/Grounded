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
	 * 		Name   -> Function UI_PopupBG.UI_PopupBG_C.SetSubHeaderText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLocString                                  NewSubHeaderLocalizedText                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PopupBG_C::SetSubHeaderText(const struct FLocString& NewSubHeaderLocalizedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PopupBG.UI_PopupBG_C.SetSubHeaderText");
		
		UUI_PopupBG_C_SetSubHeaderText_Params params {};
		params.NewSubHeaderLocalizedText = NewSubHeaderLocalizedText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PopupBG.UI_PopupBG_C.SetHeaderText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLocString                                  NewHeaderLocalizedText                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PopupBG_C::SetHeaderText(const struct FLocString& NewHeaderLocalizedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PopupBG.UI_PopupBG_C.SetHeaderText");
		
		UUI_PopupBG_C_SetHeaderText_Params params {};
		params.NewHeaderLocalizedText = NewHeaderLocalizedText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PopupBG.UI_PopupBG_C.GetAccentThree
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PopupBG_C::GetAccentThree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PopupBG.UI_PopupBG_C.GetAccentThree");
		
		UUI_PopupBG_C_GetAccentThree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PopupBG.UI_PopupBG_C.GetSCABBaseColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_PopupBG_C::GetSCABBaseColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PopupBG.UI_PopupBG_C.GetSCABBaseColor");
		
		UUI_PopupBG_C_GetSCABBaseColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PopupBG.UI_PopupBG_C.GetGlobalBGDarkener
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_PopupBG_C::GetGlobalBGDarkener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PopupBG.UI_PopupBG_C.GetGlobalBGDarkener");
		
		UUI_PopupBG_C_GetGlobalBGDarkener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PopupBG.UI_PopupBG_C.GetGlobalBG
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_PopupBG_C::GetGlobalBG()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PopupBG.UI_PopupBG_C.GetGlobalBG");
		
		UUI_PopupBG_C_GetGlobalBG_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PopupBG.UI_PopupBG_C.GetAccentTwo
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_PopupBG_C::GetAccentTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PopupBG.UI_PopupBG_C.GetAccentTwo");
		
		UUI_PopupBG_C_GetAccentTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PopupBG.UI_PopupBG_C.GetAccentOne
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_PopupBG_C::GetAccentOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PopupBG.UI_PopupBG_C.GetAccentOne");
		
		UUI_PopupBG_C_GetAccentOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PopupBG.UI_PopupBG_C.GetHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_PopupBG_C::GetHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PopupBG.UI_PopupBG_C.GetHeaderColor");
		
		UUI_PopupBG_C_GetHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PopupBG.UI_PopupBG_C.GetSubheaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_PopupBG_C::GetSubheaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PopupBG.UI_PopupBG_C.GetSubheaderColor");
		
		UUI_PopupBG_C_GetSubheaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PopupBG.UI_PopupBG_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_PopupBG_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PopupBG.UI_PopupBG_C.Construct");
		
		UUI_PopupBG_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PopupBG.UI_PopupBG_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_PopupBG_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PopupBG.UI_PopupBG_C.OnGlobalColorChange");
		
		UUI_PopupBG_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PopupBG.UI_PopupBG_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PopupBG_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PopupBG.UI_PopupBG_C.PreConstruct");
		
		UUI_PopupBG_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PopupBG.UI_PopupBG_C.ExecuteUbergraph_UI_PopupBG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PopupBG_C::ExecuteUbergraph_UI_PopupBG(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PopupBG.UI_PopupBG_C.ExecuteUbergraph_UI_PopupBG");
		
		UUI_PopupBG_C_ExecuteUbergraph_UI_PopupBG_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PopupBG.UI_PopupBG_C.OnQuickItemTypeSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHotBarQuickSlotType                               QuickSlotType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_PopupBG_C::OnQuickItemTypeSelected__DelegateSignature(EHotBarQuickSlotType QuickSlotType, const struct FDataTableRowHandle& ItemRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PopupBG.UI_PopupBG_C.OnQuickItemTypeSelected__DelegateSignature");
		
		UUI_PopupBG_C_OnQuickItemTypeSelected__DelegateSignature_Params params {};
		params.QuickSlotType = QuickSlotType;
		params.ItemRowHandle = ItemRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PopupBG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PopupBG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PopupBG.UI_PopupBG_C");
		return ptr;
	}

}


