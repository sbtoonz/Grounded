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
	 * 		Name   -> Function UI_MapEntryBox.UI_MapEntryBox_C.GetEntryTypeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapEntryType                                      EntryType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLocString                                  EntryName                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapEntryBox_C::GetEntryTypeName(EMapEntryType EntryType, struct FLocString* EntryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapEntryBox.UI_MapEntryBox_C.GetEntryTypeName");
		
		UUI_MapEntryBox_C_GetEntryTypeName_Params params {};
		params.EntryType = EntryType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntryName != nullptr)
			*EntryName = params.EntryName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapEntryBox.UI_MapEntryBox_C.HideMapEntry
	 * 		Flags  -> ()
	 */
	void UUI_MapEntryBox_C::HideMapEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapEntryBox.UI_MapEntryBox_C.HideMapEntry");
		
		UUI_MapEntryBox_C_HideMapEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapEntryBox.UI_MapEntryBox_C.ShowMapEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseMapEntryWidget*                         MapEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMapEntryType                                      EntryType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bViaMouseHover                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MapEntryBox_C::ShowMapEntry(class UBaseMapEntryWidget* MapEntry, EMapEntryType EntryType, bool bViaMouseHover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapEntryBox.UI_MapEntryBox_C.ShowMapEntry");
		
		UUI_MapEntryBox_C_ShowMapEntry_Params params {};
		params.MapEntry = MapEntry;
		params.EntryType = EntryType;
		params.bViaMouseHover = bViaMouseHover;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapEntryBox.UI_MapEntryBox_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_MapEntryBox_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapEntryBox.UI_MapEntryBox_C.OnGlobalColorChange");
		
		UUI_MapEntryBox_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapEntryBox.UI_MapEntryBox_C.ExecuteUbergraph_UI_MapEntryBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapEntryBox_C::ExecuteUbergraph_UI_MapEntryBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapEntryBox.UI_MapEntryBox_C.ExecuteUbergraph_UI_MapEntryBox");
		
		UUI_MapEntryBox_C_ExecuteUbergraph_UI_MapEntryBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MapEntryBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MapEntryBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MapEntryBox.UI_MapEntryBox_C");
		return ptr;
	}

}


