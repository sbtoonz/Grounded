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
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.SequenceEvent__ENTRYPOINTUI_SCAB_2
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::SequenceEvent__ENTRYPOINTUI_SCAB_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.SequenceEvent__ENTRYPOINTUI_SCAB_2");
		
		UUI_SCAB_C_SequenceEvent__ENTRYPOINTUI_SCAB_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.SequenceEvent__ENTRYPOINTUI_SCAB_1
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::SequenceEvent__ENTRYPOINTUI_SCAB_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.SequenceEvent__ENTRYPOINTUI_SCAB_1");
		
		UUI_SCAB_C_SequenceEvent__ENTRYPOINTUI_SCAB_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.StaminaCapVisibility
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::StaminaCapVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.StaminaCapVisibility");
		
		UUI_SCAB_C_StaminaCapVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.OnClosestRadarChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTransmitterComponent*                       NewClosestTransmitter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::OnClosestRadarChanged(class UTransmitterComponent* NewClosestTransmitter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.OnClosestRadarChanged");
		
		UUI_SCAB_C_OnClosestRadarChanged_Params params {};
		params.NewClosestTransmitter = NewClosestTransmitter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.HandleSignalEvent
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::HandleSignalEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.HandleSignalEvent");
		
		UUI_SCAB_C_HandleSignalEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.StopAlertAnimations
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::StopAlertAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.StopAlertAnimations");
		
		UUI_SCAB_C_StopAlertAnimations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.OnThirstLevelChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUI_ThirstLevel                                    ThirstLevelIn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::OnThirstLevelChanged(EUI_ThirstLevel ThirstLevelIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.OnThirstLevelChanged");
		
		UUI_SCAB_C_OnThirstLevelChanged_Params params {};
		params.ThirstLevelIn = ThirstLevelIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.GetThirstLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ThirstRatio                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUI_ThirstLevel                                    ThirstLevel                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::GetThirstLevel(float ThirstRatio, EUI_ThirstLevel* ThirstLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.GetThirstLevel");
		
		UUI_SCAB_C_GetThirstLevel_Params params {};
		params.ThirstRatio = ThirstRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ThirstLevel != nullptr)
			*ThirstLevel = params.ThirstLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.OnHungerLevelChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUI_HungerLevel                                    HungerLevelIn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::OnHungerLevelChanged(EUI_HungerLevel HungerLevelIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.OnHungerLevelChanged");
		
		UUI_SCAB_C_OnHungerLevelChanged_Params params {};
		params.HungerLevelIn = HungerLevelIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.GetHungerLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HungerRatio                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUI_HungerLevel                                    HungerLevel                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::GetHungerLevel(float HungerRatio, EUI_HungerLevel* HungerLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.GetHungerLevel");
		
		UUI_SCAB_C_GetHungerLevel_Params params {};
		params.HungerRatio = HungerRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HungerLevel != nullptr)
			*HungerLevel = params.HungerLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.OnHealthLevelChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUI_HealthLevel                                    HealthLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::OnHealthLevelChanged(EUI_HealthLevel HealthLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.OnHealthLevelChanged");
		
		UUI_SCAB_C_OnHealthLevelChanged_Params params {};
		params.HealthLevel = HealthLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.GetHealthLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthRatio                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUI_HealthLevel                                    CurrentHealthLevel                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::GetHealthLevel(float HealthRatio, EUI_HealthLevel* CurrentHealthLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.GetHealthLevel");
		
		UUI_SCAB_C_GetHealthLevel_Params params {};
		params.HealthRatio = HealthRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentHealthLevel != nullptr)
			*CurrentHealthLevel = params.CurrentHealthLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.OnHealthRatioChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthRatio                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::OnHealthRatioChanged(float HealthRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.OnHealthRatioChanged");
		
		UUI_SCAB_C_OnHealthRatioChanged_Params params {};
		params.HealthRatio = HealthRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.OnStaminaChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StaminaRatio                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::OnStaminaChanged(float StaminaRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.OnStaminaChanged");
		
		UUI_SCAB_C_OnStaminaChanged_Params params {};
		params.StaminaRatio = StaminaRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.Get_C_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_SCAB_C::Get_C_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.Get_C_ColorAndOpacity_1");
		
		UUI_SCAB_C_Get_C_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.GetKeyboardVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_SCAB_C::GetKeyboardVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.GetKeyboardVis");
		
		UUI_SCAB_C_GetKeyboardVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.GetGamepadVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_SCAB_C::GetGamepadVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.GetGamepadVis");
		
		UUI_SCAB_C_GetGamepadVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.SetupSCABAnims
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::SetupSCABAnims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.SetupSCABAnims");
		
		UUI_SCAB_C_SetupSCABAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.SetSCABSignalVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SCAB_C::SetSCABSignalVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.SetSCABSignalVisibility");
		
		UUI_SCAB_C_SetSCABSignalVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.Get_T_SlapBG_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_SCAB_C::Get_T_SlapBG_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.Get_T_SlapBG_ColorAndOpacity_1");
		
		UUI_SCAB_C_Get_T_SlapBG_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.Get_SCABFore_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_SCAB_C::Get_SCABFore_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.Get_SCABFore_ColorAndOpacity_1");
		
		UUI_SCAB_C_Get_SCABFore_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.SCABCaseDay
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::SCABCaseDay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.SCABCaseDay");
		
		UUI_SCAB_C_SCABCaseDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.SCABCaseNight
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::SCABCaseNight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.SCABCaseNight");
		
		UUI_SCAB_C_SCABCaseNight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.SetThirstWidgetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SCAB_C::SetThirstWidgetVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.SetThirstWidgetVisibility");
		
		UUI_SCAB_C_SetThirstWidgetVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.SetHungerWidgetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SCAB_C::SetHungerWidgetVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.SetHungerWidgetVisibility");
		
		UUI_SCAB_C_SetHungerWidgetVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.StopAllScabAnims
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::StopAllScabAnims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.StopAllScabAnims");
		
		UUI_SCAB_C_StopAllScabAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.Set
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::Set()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.Set");
		
		UUI_SCAB_C_Set_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.SetScabAnimVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SCAB_C::SetScabAnimVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.SetScabAnimVisibility");
		
		UUI_SCAB_C_SetScabAnimVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.SetFaceWidgetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SCAB_C::SetFaceWidgetVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.SetFaceWidgetVisibility");
		
		UUI_SCAB_C_SetFaceWidgetVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.GetEnergyLevel
	 * 		Flags  -> ()
	 */
	EUI_EnergyLevel UUI_SCAB_C::GetEnergyLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.GetEnergyLevel");
		
		UUI_SCAB_C_GetEnergyLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.GetEnergyRatio
	 * 		Flags  -> ()
	 */
	float UUI_SCAB_C::GetEnergyRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.GetEnergyRatio");
		
		UUI_SCAB_C_GetEnergyRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.GetHealthRatio
	 * 		Flags  -> ()
	 */
	float UUI_SCAB_C::GetHealthRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.GetHealthRatio");
		
		UUI_SCAB_C_GetHealthRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.HideSCABAnim
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::HideSCABAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.HideSCABAnim");
		
		UUI_SCAB_C_HideSCABAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.ReshowHungerWidget
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::ReshowHungerWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.ReshowHungerWidget");
		
		UUI_SCAB_C_ReshowHungerWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.ReshowThirstWidget
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::ReshowThirstWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.ReshowThirstWidget");
		
		UUI_SCAB_C_ReshowThirstWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.ShowTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SCAB_C::ShowTime(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.ShowTime");
		
		UUI_SCAB_C_ShowTime_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.ShowSCABAnim
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::ShowSCABAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.ShowSCABAnim");
		
		UUI_SCAB_C_ShowSCABAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.OnGlobalColorChange");
		
		UUI_SCAB_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.ReshowFaceWidgets
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::ReshowFaceWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.ReshowFaceWidgets");
		
		UUI_SCAB_C_ReshowFaceWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.UpdateStaminaRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRatio                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::UpdateStaminaRatio(float NewRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.UpdateStaminaRatio");
		
		UUI_SCAB_C_UpdateStaminaRatio_Params params {};
		params.NewRatio = NewRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.UpdateHealthRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewHealthRatio                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::UpdateHealthRatio(float NewHealthRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.UpdateHealthRatio");
		
		UUI_SCAB_C_UpdateHealthRatio_Params params {};
		params.NewHealthRatio = NewHealthRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.UpdateHungerRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRatio                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::UpdateHungerRatio(float NewRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.UpdateHungerRatio");
		
		UUI_SCAB_C_UpdateHungerRatio_Params params {};
		params.NewRatio = NewRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.UpdateThirstRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRatio                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::UpdateThirstRatio(float NewRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.UpdateThirstRatio");
		
		UUI_SCAB_C_UpdateThirstRatio_Params params {};
		params.NewRatio = NewRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.UpdateTimeOfDay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewHour                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewDay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::UpdateTimeOfDay(int32_t NewHour, int32_t NewDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.UpdateTimeOfDay");
		
		UUI_SCAB_C_UpdateTimeOfDay_Params params {};
		params.NewHour = NewHour;
		params.NewDay = NewDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.OnPossessedPlayerChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    NewPlayerCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::OnPossessedPlayerChange(class ASurvivalPlayerCharacter* NewPlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.OnPossessedPlayerChange");
		
		UUI_SCAB_C_OnPossessedPlayerChange_Params params {};
		params.NewPlayerCharacter = NewPlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.ThreatModeHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInCombat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SCAB_C::ThreatModeHUD(class ASurvivalCharacter* Character, bool bInCombat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.ThreatModeHUD");
		
		UUI_SCAB_C_ThreatModeHUD_Params params {};
		params.Character = Character;
		params.bInCombat = bInCombat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.OnClosestValidTransmitterChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTransmitterComponent*                       NewClosestTransmitter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::OnClosestValidTransmitterChanged(class UTransmitterComponent* NewClosestTransmitter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.OnClosestValidTransmitterChanged");
		
		UUI_SCAB_C_OnClosestValidTransmitterChanged_Params params {};
		params.NewClosestTransmitter = NewClosestTransmitter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.SFX_AnimHunger_Forward_01
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::SFX_AnimHunger_Forward_01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.SFX_AnimHunger_Forward_01");
		
		UUI_SCAB_C_SFX_AnimHunger_Forward_01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.SFX_AnimHunger_Reverse_01
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::SFX_AnimHunger_Reverse_01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.SFX_AnimHunger_Reverse_01");
		
		UUI_SCAB_C_SFX_AnimHunger_Reverse_01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.Construct");
		
		UUI_SCAB_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB.UI_SCAB_C.ExecuteUbergraph_UI_SCAB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_C::ExecuteUbergraph_UI_SCAB(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB.UI_SCAB_C.ExecuteUbergraph_UI_SCAB");
		
		UUI_SCAB_C_ExecuteUbergraph_UI_SCAB_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SCAB_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SCAB_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SCAB.UI_SCAB_C");
		return ptr;
	}

}


