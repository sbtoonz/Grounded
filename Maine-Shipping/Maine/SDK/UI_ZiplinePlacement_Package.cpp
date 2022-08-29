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
	 * 		Name   -> Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.UpdateErrorString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AZiplineSelectorPawn*                        Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UZiplineAnchor*                              Anchor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ZiplinePlacement_C::UpdateErrorString(class AZiplineSelectorPawn* Pawn, class UZiplineAnchor* Anchor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.UpdateErrorString");
		
		UUI_ZiplinePlacement_C_UpdateErrorString_Params params {};
		params.Pawn = Pawn;
		params.Anchor = Anchor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ZiplinePlacement_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.OnGlobalColorChange");
		
		UUI_ZiplinePlacement_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.Notify Zipline Mode Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AZiplineSelectorPawn*                        Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ZiplinePlacement_C::Notify_Zipline_Mode_Changed(class AZiplineSelectorPawn* Selector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.Notify Zipline Mode Changed");
		
		UUI_ZiplinePlacement_C_Notify_Zipline_Mode_Changed_Params params {};
		params.Selector = Selector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.On Target Zipline Anchor Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AZiplineSelectorPawn*                        Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UZiplineAnchor*                              Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ZiplinePlacement_C::On_Target_Zipline_Anchor_Changed(class AZiplineSelectorPawn* Sender, class UZiplineAnchor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.On Target Zipline Anchor Changed");
		
		UUI_ZiplinePlacement_C_On_Target_Zipline_Anchor_Changed_Params params {};
		params.Sender = Sender;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.HandleZiplineAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UZiplineAnchor*                              Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AZiplineLine*                                Line                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ZiplinePlacement_C::HandleZiplineAttached(class UZiplineAnchor* Sender, class AZiplineLine* Line)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.HandleZiplineAttached");
		
		UUI_ZiplinePlacement_C_HandleZiplineAttached_Params params {};
		params.Sender = Sender;
		params.Line = Line;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.ExecuteUbergraph_UI_ZiplinePlacement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ZiplinePlacement_C::ExecuteUbergraph_UI_ZiplinePlacement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ZiplinePlacement.UI_ZiplinePlacement_C.ExecuteUbergraph_UI_ZiplinePlacement");
		
		UUI_ZiplinePlacement_C_ExecuteUbergraph_UI_ZiplinePlacement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ZiplinePlacement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ZiplinePlacement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ZiplinePlacement.UI_ZiplinePlacement_C");
		return ptr;
	}

}


