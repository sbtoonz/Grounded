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
	 * 		Name   -> Function UI_Sizzle.UI_Sizzle_C.GetBreathSecondsLeft
	 * 		Flags  -> ()
	 */
	int32_t UUI_Sizzle_C::GetBreathSecondsLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Sizzle.UI_Sizzle_C.GetBreathSecondsLeft");
		
		UUI_Sizzle_C_GetBreathSecondsLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Sizzle.UI_Sizzle_C.GetBreathRatio
	 * 		Flags  -> ()
	 */
	float UUI_Sizzle_C::GetBreathRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Sizzle.UI_Sizzle_C.GetBreathRatio");
		
		UUI_Sizzle_C_GetBreathRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Sizzle.UI_Sizzle_C.GetFillColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_Sizzle_C::GetFillColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Sizzle.UI_Sizzle_C.GetFillColor");
		
		UUI_Sizzle_C_GetFillColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Sizzle.UI_Sizzle_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_Sizzle_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Sizzle.UI_Sizzle_C.OnGlobalColorChange");
		
		UUI_Sizzle_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Sizzle.UI_Sizzle_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Sizzle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Sizzle.UI_Sizzle_C.Tick");
		
		UUI_Sizzle_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Sizzle.UI_Sizzle_C.OnVisibilityChangedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Sizzle_C::OnVisibilityChangedEvent(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Sizzle.UI_Sizzle_C.OnVisibilityChangedEvent");
		
		UUI_Sizzle_C_OnVisibilityChangedEvent_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Sizzle.UI_Sizzle_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Sizzle_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Sizzle.UI_Sizzle_C.Construct");
		
		UUI_Sizzle_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Sizzle.UI_Sizzle_C.ExecuteUbergraph_UI_Sizzle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Sizzle_C::ExecuteUbergraph_UI_Sizzle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Sizzle.UI_Sizzle_C.ExecuteUbergraph_UI_Sizzle");
		
		UUI_Sizzle_C_ExecuteUbergraph_UI_Sizzle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Sizzle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Sizzle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Sizzle.UI_Sizzle_C");
		return ptr;
	}

}


