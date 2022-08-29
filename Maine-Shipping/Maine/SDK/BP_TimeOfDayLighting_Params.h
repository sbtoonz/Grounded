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
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.GetPostProcessMain
	 */
	struct ABP_TimeOfDayLighting_C_GetPostProcessMain_Params
	{
	public:
		class UPostProcessComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.GetSunLight
	 */
	struct ABP_TimeOfDayLighting_C_GetSunLight_Params
	{
	public:
		class UDirectionalLightComponent*                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetPreviousTrigger
	 */
	struct ABP_TimeOfDayLighting_C_SetPreviousTrigger_Params
	{
	public:
		class ABP_BlendTrigger_C*                                  PreviousTrigger;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SortTriggerArrayByPriority
	 */
	struct ABP_TimeOfDayLighting_C_SortTriggerArrayByPriority_Params
	{
	public:
		TArray<class ABP_BlendTrigger_C*>                          BlendTriggerArray;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class ABP_BlendTrigger_C*>                          OutBlendTriggerArray;                                    // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.RegisterBlendTrigger
	 */
	struct ABP_TimeOfDayLighting_C_RegisterBlendTrigger_Params
	{
	public:
		class ABP_BlendTrigger_C*                                  BlendTrigger;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Deregister;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K8M7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.Photo Mode Hourly Event Updates
	 */
	struct ABP_TimeOfDayLighting_C_Photo_Mode_Hourly_Event_Updates_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.Get Current Hour
	 */
	struct ABP_TimeOfDayLighting_C_Get_Current_Hour_Params
	{
	public:
		int32_t                                                    Current_Hour;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateOakTreeShadow
	 */
	struct ABP_TimeOfDayLighting_C_UpdateOakTreeShadow_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdatePostProcess
	 */
	struct ABP_TimeOfDayLighting_C_UpdatePostProcess_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateTransitions
	 */
	struct ABP_TimeOfDayLighting_C_UpdateTransitions_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateCollections
	 */
	struct ABP_TimeOfDayLighting_C_UpdateCollections_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateVolumetricFog
	 */
	struct ABP_TimeOfDayLighting_C_UpdateVolumetricFog_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateSkylight
	 */
	struct ABP_TimeOfDayLighting_C_UpdateSkylight_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateSky
	 */
	struct ABP_TimeOfDayLighting_C_UpdateSky_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateMoon
	 */
	struct ABP_TimeOfDayLighting_C_UpdateMoon_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateSun
	 */
	struct ABP_TimeOfDayLighting_C_UpdateSun_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.GetNearestWaterBounds
	 */
	struct ABP_TimeOfDayLighting_C_GetNearestWaterBounds_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.GetAllReferences
	 */
	struct ABP_TimeOfDayLighting_C_GetAllReferences_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetBlendIntensity
	 */
	struct ABP_TimeOfDayLighting_C_SetBlendIntensity_Params
	{
	public:
		float                                                      NewIntensity;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UserConstructionScript
	 */
	struct ABP_TimeOfDayLighting_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.TL_HourlyPostProcessTransition__FinishedFunc
	 */
	struct ABP_TimeOfDayLighting_C_TL_HourlyPostProcessTransition__FinishedFunc_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.TL_HourlyPostProcessTransition__UpdateFunc
	 */
	struct ABP_TimeOfDayLighting_C_TL_HourlyPostProcessTransition__UpdateFunc_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.CausticsFadeIn__FinishedFunc
	 */
	struct ABP_TimeOfDayLighting_C_CausticsFadeIn__FinishedFunc_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.CausticsFadeIn__UpdateFunc
	 */
	struct ABP_TimeOfDayLighting_C_CausticsFadeIn__UpdateFunc_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.ReceiveBeginPlay
	 */
	struct ABP_TimeOfDayLighting_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.ReceiveTick
	 */
	struct ABP_TimeOfDayLighting_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.CubemapSwap
	 */
	struct ABP_TimeOfDayLighting_C_CubemapSwap_Params
	{
	public:
		int32_t                                                    NewHour;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewDay;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateHourlyVariables
	 */
	struct ABP_TimeOfDayLighting_C_UpdateHourlyVariables_Params
	{
	public:
		int32_t                                                    NewHour;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewDay;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.DisableFog
	 */
	struct ABP_TimeOfDayLighting_C_DisableFog_Params
	{
	public:
		int32_t                                                    NewHour;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewDay;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateDailyVariables
	 */
	struct ABP_TimeOfDayLighting_C_UpdateDailyVariables_Params
	{
	public:
		int32_t                                                    NewDay;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetSunAngle
	 */
	struct ABP_TimeOfDayLighting_C_SetSunAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.ClearArrays
	 */
	struct ABP_TimeOfDayLighting_C_ClearArrays_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.ToggleDOF
	 */
	struct ABP_TimeOfDayLighting_C_ToggleDOF_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetDOFDistance
	 */
	struct ABP_TimeOfDayLighting_C_SetDOFDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetDOFBlur
	 */
	struct ABP_TimeOfDayLighting_C_SetDOFBlur_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetDOFDepthBlur
	 */
	struct ABP_TimeOfDayLighting_C_SetDOFDepthBlur_Params
	{
	public:
		float                                                      Blur;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetHourlyEvents
	 */
	struct ABP_TimeOfDayLighting_C_SetHourlyEvents_Params
	{
	public:
		class UCalendarComponent*                                  Calendar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetHourlyPostProcess
	 */
	struct ABP_TimeOfDayLighting_C_SetHourlyPostProcess_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetSkylightCubemaps
	 */
	struct ABP_TimeOfDayLighting_C_SetSkylightCubemaps_Params
	{
	public:
		class UCalendarComponent*                                  Calendar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetHourlyFogEvents
	 */
	struct ABP_TimeOfDayLighting_C_SetHourlyFogEvents_Params
	{
	public:
		class UCalendarComponent*                                  Calendar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetCutsceneFog
	 */
	struct ABP_TimeOfDayLighting_C_SetCutsceneFog_Params
	{
	public:
		float                                                      FogMultiplier;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetFoliageViewDistance
	 */
	struct ABP_TimeOfDayLighting_C_SetFoliageViewDistance_Params
	{
	public:
		float                                                      ViewDistanceOverride;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetPondCubemaps
	 */
	struct ABP_TimeOfDayLighting_C_SetPondCubemaps_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetDefaultCubemaps
	 */
	struct ABP_TimeOfDayLighting_C_SetDefaultCubemaps_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.Set Water Caustic Masks
	 */
	struct ABP_TimeOfDayLighting_C_Set_Water_Caustic_Masks_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.OnActiveBlendablesChanged
	 */
	struct ABP_TimeOfDayLighting_C_OnActiveBlendablesChanged_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.Update Hourly Events
	 */
	struct ABP_TimeOfDayLighting_C_Update_Hourly_Events_Params
	{	};

	/**
	 * Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.ExecuteUbergraph_BP_TimeOfDayLighting
	 */
	struct ABP_TimeOfDayLighting_C_ExecuteUbergraph_BP_TimeOfDayLighting_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
