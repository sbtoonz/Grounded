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
	 * 		Name   -> Function UI_DeathCountdown.UI_DeathCountdown_C.Show
	 * 		Flags  -> ()
	 */
	void UUI_DeathCountdown_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathCountdown.UI_DeathCountdown_C.Show");
		
		UUI_DeathCountdown_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathCountdown.UI_DeathCountdown_C.Hide
	 * 		Flags  -> ()
	 */
	void UUI_DeathCountdown_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathCountdown.UI_DeathCountdown_C.Hide");
		
		UUI_DeathCountdown_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathCountdown.UI_DeathCountdown_C.GetNarration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNarrationChunk>                     Chunks                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bVerbose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_DeathCountdown_C::GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathCountdown.UI_DeathCountdown_C.GetNarration");
		
		UUI_DeathCountdown_C_GetNarration_Params params {};
		params.bVerbose = bVerbose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Chunks != nullptr)
			*Chunks = params.Chunks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathCountdown.UI_DeathCountdown_C.UpdateWarningImageVisibility
	 * 		Flags  -> ()
	 */
	void UUI_DeathCountdown_C::UpdateWarningImageVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathCountdown.UI_DeathCountdown_C.UpdateWarningImageVisibility");
		
		UUI_DeathCountdown_C_UpdateWarningImageVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathCountdown.UI_DeathCountdown_C.GetDeathPercent
	 * 		Flags  -> ()
	 */
	float UUI_DeathCountdown_C::GetDeathPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathCountdown.UI_DeathCountdown_C.GetDeathPercent");
		
		UUI_DeathCountdown_C_GetDeathPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathCountdown.UI_DeathCountdown_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_DeathCountdown_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathCountdown.UI_DeathCountdown_C.Construct");
		
		UUI_DeathCountdown_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathCountdown.UI_DeathCountdown_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DeathCountdown_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathCountdown.UI_DeathCountdown_C.Tick");
		
		UUI_DeathCountdown_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathCountdown.UI_DeathCountdown_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_DeathCountdown_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathCountdown.UI_DeathCountdown_C.OnGlobalColorChange");
		
		UUI_DeathCountdown_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathCountdown.UI_DeathCountdown_C.UpdateAll
	 * 		Flags  -> ()
	 */
	void UUI_DeathCountdown_C::UpdateAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathCountdown.UI_DeathCountdown_C.UpdateAll");
		
		UUI_DeathCountdown_C_UpdateAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathCountdown.UI_DeathCountdown_C.ExecuteUbergraph_UI_DeathCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DeathCountdown_C::ExecuteUbergraph_UI_DeathCountdown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathCountdown.UI_DeathCountdown_C.ExecuteUbergraph_UI_DeathCountdown");
		
		UUI_DeathCountdown_C_ExecuteUbergraph_UI_DeathCountdown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_DeathCountdown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_DeathCountdown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_DeathCountdown.UI_DeathCountdown_C");
		return ptr;
	}

}


