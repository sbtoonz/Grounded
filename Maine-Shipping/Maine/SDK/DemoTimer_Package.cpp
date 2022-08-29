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
	 * 		Name   -> Function DemoTimer.DemoTimer_C.GetWarningColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UDemoTimer_C::GetWarningColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoTimer.DemoTimer_C.GetWarningColor");
		
		UDemoTimer_C_GetWarningColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DemoTimer.DemoTimer_C.Construct
	 * 		Flags  -> ()
	 */
	void UDemoTimer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoTimer.DemoTimer_C.Construct");
		
		UDemoTimer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DemoTimer.DemoTimer_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDemoTimer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoTimer.DemoTimer_C.Tick");
		
		UDemoTimer_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DemoTimer.DemoTimer_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UDemoTimer_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoTimer.DemoTimer_C.OnGlobalColorChange");
		
		UDemoTimer_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DemoTimer.DemoTimer_C.ShowWhenNotPaused
	 * 		Flags  -> ()
	 */
	void UDemoTimer_C::ShowWhenNotPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoTimer.DemoTimer_C.ShowWhenNotPaused");
		
		UDemoTimer_C_ShowWhenNotPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DemoTimer.DemoTimer_C.ShowTimerOnMinuteChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewMinute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDemoTimer_C::ShowTimerOnMinuteChanged(int32_t NewMinute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoTimer.DemoTimer_C.ShowTimerOnMinuteChanged");
		
		UDemoTimer_C_ShowTimerOnMinuteChanged_Params params {};
		params.NewMinute = NewMinute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DemoTimer.DemoTimer_C.ExecuteUbergraph_DemoTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDemoTimer_C::ExecuteUbergraph_DemoTimer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoTimer.DemoTimer_C.ExecuteUbergraph_DemoTimer");
		
		UDemoTimer_C_ExecuteUbergraph_DemoTimer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemoTimer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemoTimer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DemoTimer.DemoTimer_C");
		return ptr;
	}

}


