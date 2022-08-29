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
	 * 		Name   -> Function UI_ItemDescHeader.UI_ItemDescHeader_C.SetLargeFont
	 * 		Flags  -> ()
	 */
	void UUI_ItemDescHeader_C::SetLargeFont()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescHeader.UI_ItemDescHeader_C.SetLargeFont");
		
		UUI_ItemDescHeader_C_SetLargeFont_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescHeader.UI_ItemDescHeader_C.SetDescHeaderText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      HeaderString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_ItemDescHeader_C::SetDescHeaderText(const class FString& HeaderString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescHeader.UI_ItemDescHeader_C.SetDescHeaderText");
		
		UUI_ItemDescHeader_C_SetDescHeaderText_Params params {};
		params.HeaderString = HeaderString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescHeader.UI_ItemDescHeader_C.GetHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_ItemDescHeader_C::GetHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescHeader.UI_ItemDescHeader_C.GetHeaderColor");
		
		UUI_ItemDescHeader_C_GetHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescHeader.UI_ItemDescHeader_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ItemDescHeader_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescHeader.UI_ItemDescHeader_C.Construct");
		
		UUI_ItemDescHeader_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescHeader.UI_ItemDescHeader_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ItemDescHeader_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescHeader.UI_ItemDescHeader_C.OnGlobalColorChange");
		
		UUI_ItemDescHeader_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescHeader.UI_ItemDescHeader_C.EventLargeFonts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ItemDescHeader_C::EventLargeFonts(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescHeader.UI_ItemDescHeader_C.EventLargeFonts");
		
		UUI_ItemDescHeader_C_EventLargeFonts_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescHeader.UI_ItemDescHeader_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_ItemDescHeader_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescHeader.UI_ItemDescHeader_C.Destruct");
		
		UUI_ItemDescHeader_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemDescHeader.UI_ItemDescHeader_C.ExecuteUbergraph_UI_ItemDescHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemDescHeader_C::ExecuteUbergraph_UI_ItemDescHeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemDescHeader.UI_ItemDescHeader_C.ExecuteUbergraph_UI_ItemDescHeader");
		
		UUI_ItemDescHeader_C_ExecuteUbergraph_UI_ItemDescHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ItemDescHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ItemDescHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ItemDescHeader.UI_ItemDescHeader_C");
		return ptr;
	}

}


