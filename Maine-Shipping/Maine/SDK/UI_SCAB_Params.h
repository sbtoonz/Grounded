#pragma once

/**
 * Name: Maine
 * Version: Shipping
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_SCAB.UI_SCAB_C.SequenceEvent__ENTRYPOINTUI_SCAB_2
	 */
	struct UUI_SCAB_C_SequenceEvent__ENTRYPOINTUI_SCAB_2_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.SequenceEvent__ENTRYPOINTUI_SCAB_1
	 */
	struct UUI_SCAB_C_SequenceEvent__ENTRYPOINTUI_SCAB_1_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.StaminaCapVisibility
	 */
	struct UUI_SCAB_C_StaminaCapVisibility_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.OnClosestRadarChanged
	 */
	struct UUI_SCAB_C_OnClosestRadarChanged_Params
	{
	public:
		class UTransmitterComponent*                               NewClosestTransmitter;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.HandleSignalEvent
	 */
	struct UUI_SCAB_C_HandleSignalEvent_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.StopAlertAnimations
	 */
	struct UUI_SCAB_C_StopAlertAnimations_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.OnThirstLevelChanged
	 */
	struct UUI_SCAB_C_OnThirstLevelChanged_Params
	{
	public:
		EUI_ThirstLevel                                            ThirstLevelIn;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.GetThirstLevel
	 */
	struct UUI_SCAB_C_GetThirstLevel_Params
	{
	public:
		float                                                      ThirstRatio;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUI_ThirstLevel                                            ThirstLevel;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.OnHungerLevelChanged
	 */
	struct UUI_SCAB_C_OnHungerLevelChanged_Params
	{
	public:
		EUI_HungerLevel                                            HungerLevelIn;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0WOK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.GetHungerLevel
	 */
	struct UUI_SCAB_C_GetHungerLevel_Params
	{
	public:
		float                                                      HungerRatio;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUI_HungerLevel                                            HungerLevel;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.OnHealthLevelChanged
	 */
	struct UUI_SCAB_C_OnHealthLevelChanged_Params
	{
	public:
		EUI_HealthLevel                                            HealthLevel;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.GetHealthLevel
	 */
	struct UUI_SCAB_C_GetHealthLevel_Params
	{
	public:
		float                                                      HealthRatio;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUI_HealthLevel                                            CurrentHealthLevel;                                      // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.OnHealthRatioChanged
	 */
	struct UUI_SCAB_C_OnHealthRatioChanged_Params
	{
	public:
		float                                                      HealthRatio;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.OnStaminaChanged
	 */
	struct UUI_SCAB_C_OnStaminaChanged_Params
	{
	public:
		float                                                      StaminaRatio;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.Get_C_ColorAndOpacity_1
	 */
	struct UUI_SCAB_C_Get_C_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.GetKeyboardVis
	 */
	struct UUI_SCAB_C_GetKeyboardVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.GetGamepadVis
	 */
	struct UUI_SCAB_C_GetGamepadVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.SetupSCABAnims
	 */
	struct UUI_SCAB_C_SetupSCABAnims_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.SetSCABSignalVisibility
	 */
	struct UUI_SCAB_C_SetSCABSignalVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.Get_T_SlapBG_ColorAndOpacity_1
	 */
	struct UUI_SCAB_C_Get_T_SlapBG_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.Get_SCABFore_ColorAndOpacity_1
	 */
	struct UUI_SCAB_C_Get_SCABFore_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.SCABCaseDay
	 */
	struct UUI_SCAB_C_SCABCaseDay_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.SCABCaseNight
	 */
	struct UUI_SCAB_C_SCABCaseNight_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.SetThirstWidgetVisibility
	 */
	struct UUI_SCAB_C_SetThirstWidgetVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.SetHungerWidgetVisibility
	 */
	struct UUI_SCAB_C_SetHungerWidgetVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.StopAllScabAnims
	 */
	struct UUI_SCAB_C_StopAllScabAnims_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.Set
	 */
	struct UUI_SCAB_C_Set_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.SetScabAnimVisibility
	 */
	struct UUI_SCAB_C_SetScabAnimVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.SetFaceWidgetVisibility
	 */
	struct UUI_SCAB_C_SetFaceWidgetVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.GetEnergyLevel
	 */
	struct UUI_SCAB_C_GetEnergyLevel_Params
	{
	public:
		EUI_EnergyLevel                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZP20[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.GetEnergyRatio
	 */
	struct UUI_SCAB_C_GetEnergyRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6IK2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.GetHealthRatio
	 */
	struct UUI_SCAB_C_GetHealthRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MKI1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.HideSCABAnim
	 */
	struct UUI_SCAB_C_HideSCABAnim_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.ReshowHungerWidget
	 */
	struct UUI_SCAB_C_ReshowHungerWidget_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.ReshowThirstWidget
	 */
	struct UUI_SCAB_C_ReshowThirstWidget_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.ShowTime
	 */
	struct UUI_SCAB_C_ShowTime_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.ShowSCABAnim
	 */
	struct UUI_SCAB_C_ShowSCABAnim_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.OnGlobalColorChange
	 */
	struct UUI_SCAB_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.ReshowFaceWidgets
	 */
	struct UUI_SCAB_C_ReshowFaceWidgets_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.UpdateStaminaRatio
	 */
	struct UUI_SCAB_C_UpdateStaminaRatio_Params
	{
	public:
		float                                                      NewRatio;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.UpdateHealthRatio
	 */
	struct UUI_SCAB_C_UpdateHealthRatio_Params
	{
	public:
		float                                                      NewHealthRatio;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.UpdateHungerRatio
	 */
	struct UUI_SCAB_C_UpdateHungerRatio_Params
	{
	public:
		float                                                      NewRatio;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.UpdateThirstRatio
	 */
	struct UUI_SCAB_C_UpdateThirstRatio_Params
	{
	public:
		float                                                      NewRatio;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.UpdateTimeOfDay
	 */
	struct UUI_SCAB_C_UpdateTimeOfDay_Params
	{
	public:
		int32_t                                                    NewHour;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewDay;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.OnPossessedPlayerChange
	 */
	struct UUI_SCAB_C_OnPossessedPlayerChange_Params
	{
	public:
		class ASurvivalPlayerCharacter*                            NewPlayerCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.ThreatModeHUD
	 */
	struct UUI_SCAB_C_ThreatModeHUD_Params
	{
	public:
		class ASurvivalCharacter*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInCombat;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.OnClosestValidTransmitterChanged
	 */
	struct UUI_SCAB_C_OnClosestValidTransmitterChanged_Params
	{
	public:
		class UTransmitterComponent*                               NewClosestTransmitter;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.SFX_AnimHunger_Forward_01
	 */
	struct UUI_SCAB_C_SFX_AnimHunger_Forward_01_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.SFX_AnimHunger_Reverse_01
	 */
	struct UUI_SCAB_C_SFX_AnimHunger_Reverse_01_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.Construct
	 */
	struct UUI_SCAB_C_Construct_Params
	{	};

	/**
	 * Function UI_SCAB.UI_SCAB_C.ExecuteUbergraph_UI_SCAB
	 */
	struct UUI_SCAB_C_ExecuteUbergraph_UI_SCAB_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
