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
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.IsInteractionEnabled
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_IsInteractionEnabled_Params
	{
	public:
		EInteractionChannel                                        Channel;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8F4W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InstigatedBy;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionState                                          ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.GetInteractionText
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_GetInteractionText_Params
	{
	public:
		EInteractionChannel                                        Channel;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_828S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InstigatedBy;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              OutText;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.UserConstructionScript
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.Anim_InnerDialRotation__FinishedFunc
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_Anim_InnerDialRotation__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.Anim_InnerDialRotation__UpdateFunc
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_Anim_InnerDialRotation__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.Light Off
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_Light_Off_Params
	{	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.LightOn
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_LightOn_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.OnOpenStateChanged
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_OnOpenStateChanged_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RZG1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ActorInstigator;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.ReceiveBeginPlay
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.BndEvt__ConditionalToggle_IsOn_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_BndEvt__ConditionalToggle_IsOn_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.ToggleConnectedFans
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_ToggleConnectedFans_Params
	{
	public:
		bool                                                       ToggleOn;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.ToggleIsOnGlobalVariableImplementation
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_ToggleIsOnGlobalVariableImplementation_Params
	{	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.BndEvt__ConditionalToggle_Vis_PostPowerSurge_Off_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_BndEvt__ConditionalToggle_Vis_PostPowerSurge_Off_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.PanelEmissiveOn
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_PanelEmissiveOn_Params
	{	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.PanelEmissiveEnabled
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_PanelEmissiveEnabled_Params
	{	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.PanelEmissiveDisabled
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_PanelEmissiveDisabled_Params
	{	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.OnUpdateVisualState
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_OnUpdateVisualState_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.PlayOpenSound
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_PlayOpenSound_Params
	{	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.EvaluatePanelVFX
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_EvaluatePanelVFX_Params
	{	};

	/**
	 * Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.ExecuteUbergraph_BP_Pond_Breaker_Switch_Base
	 */
	struct ABP_Pond_Breaker_Switch_Base_C_ExecuteUbergraph_BP_Pond_Breaker_Switch_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
