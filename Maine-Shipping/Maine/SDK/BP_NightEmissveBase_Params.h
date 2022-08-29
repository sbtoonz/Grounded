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
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.SetPhotoModeTickDelegates
	 */
	struct ABP_NightEmissveBase_C_SetPhotoModeTickDelegates_Params
	{	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.Find Time Of Day Manager
	 */
	struct ABP_NightEmissveBase_C_Find_Time_Of_Day_Manager_Params
	{	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.InitializeLightToggle
	 */
	struct ABP_NightEmissveBase_C_InitializeLightToggle_Params
	{	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.Toggle Lamp Internal
	 */
	struct ABP_NightEmissveBase_C_Toggle_Lamp_Internal_Params
	{
	public:
		float                                                      LightCurve;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.RegisterLightCone
	 */
	struct ABP_NightEmissveBase_C_RegisterLightCone_Params
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.RegisterSpotlight
	 */
	struct ABP_NightEmissveBase_C_RegisterSpotlight_Params
	{
	public:
		class USpotLightComponent*                                 SpotLightComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.RegisterGlowMesh
	 */
	struct ABP_NightEmissveBase_C_RegisterGlowMesh_Params
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.ToggleInEditMode
	 */
	struct ABP_NightEmissveBase_C_ToggleInEditMode_Params
	{
	public:
		class ABP_TimeOfDayLighting_C*                             TimeOfDay;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LightSwitch;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.UserConstructionScript
	 */
	struct ABP_NightEmissveBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.TL_GardenLamp_OnOff__FinishedFunc
	 */
	struct ABP_NightEmissveBase_C_TL_GardenLamp_OnOff__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.TL_GardenLamp_OnOff__UpdateFunc
	 */
	struct ABP_NightEmissveBase_C_TL_GardenLamp_OnOff__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.ReceiveBeginPlay
	 */
	struct ABP_NightEmissveBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.Toggle_GardenLamp
	 */
	struct ABP_NightEmissveBase_C_Toggle_GardenLamp_Params
	{
	public:
		int32_t                                                    NewHour;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewDay;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.ReceiveTick
	 */
	struct ABP_NightEmissveBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.OnPhotoModeExited
	 */
	struct ABP_NightEmissveBase_C_OnPhotoModeExited_Params
	{	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.UpdatePhotoModeTimeOfDay
	 */
	struct ABP_NightEmissveBase_C_UpdatePhotoModeTimeOfDay_Params
	{	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.PhotoModeEnterEnableTick
	 */
	struct ABP_NightEmissveBase_C_PhotoModeEnterEnableTick_Params
	{
	public:
		class APhotoPawn*                                          PhotoPawn;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.PhotoModeExitDisableTick
	 */
	struct ABP_NightEmissveBase_C_PhotoModeExitDisableTick_Params
	{	};

	/**
	 * Function BP_NightEmissveBase.BP_NightEmissveBase_C.ExecuteUbergraph_BP_NightEmissveBase
	 */
	struct ABP_NightEmissveBase_C_ExecuteUbergraph_BP_NightEmissveBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HSZQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
