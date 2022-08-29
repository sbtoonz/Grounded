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
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.RedrawScreen
	 */
	struct ABP_Base_PowerTerminal_C_RedrawScreen_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.GetInteractionText
	 */
	struct ABP_Base_PowerTerminal_C_GetInteractionText_Params
	{
	public:
		EInteractionChannel                                        Channel;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_52CX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InstigatedBy;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              OutText;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.IsInteractionEnabled
	 */
	struct ABP_Base_PowerTerminal_C_IsInteractionEnabled_Params
	{
	public:
		EInteractionChannel                                        Channel;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MNHA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InstigatedBy;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionState                                          ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.UserConstructionScript
	 */
	struct ABP_Base_PowerTerminal_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.Timeline_HandleRot__FinishedFunc
	 */
	struct ABP_Base_PowerTerminal_C_Timeline_HandleRot__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.Timeline_HandleRot__UpdateFunc
	 */
	struct ABP_Base_PowerTerminal_C_Timeline_HandleRot__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.Timeline_SFX_PItch__FinishedFunc
	 */
	struct ABP_Base_PowerTerminal_C_Timeline_SFX_PItch__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.Timeline_SFX_PItch__UpdateFunc
	 */
	struct ABP_Base_PowerTerminal_C_Timeline_SFX_PItch__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.OnOpenStateChanged
	 */
	struct ABP_Base_PowerTerminal_C_OnOpenStateChanged_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KSRV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ActorInstigator;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.EnableScreenDraw
	 */
	struct ABP_Base_PowerTerminal_C_EnableScreenDraw_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.DisableScreenDraw
	 */
	struct ABP_Base_PowerTerminal_C_DisableScreenDraw_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.MakeScreenDMI
	 */
	struct ABP_Base_PowerTerminal_C_MakeScreenDMI_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.HideAllScreens
	 */
	struct ABP_Base_PowerTerminal_C_HideAllScreens_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.SetUserWidgetObjectReference
	 */
	struct ABP_Base_PowerTerminal_C_SetUserWidgetObjectReference_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ShowStart
	 */
	struct ABP_Base_PowerTerminal_C_ShowStart_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ShowLocked
	 */
	struct ABP_Base_PowerTerminal_C_ShowLocked_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ShowLockedFlash
	 */
	struct ABP_Base_PowerTerminal_C_ShowLockedFlash_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ShowUnlocked
	 */
	struct ABP_Base_PowerTerminal_C_ShowUnlocked_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ReceiveBeginPlay
	 */
	struct ABP_Base_PowerTerminal_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ShowWaiting
	 */
	struct ABP_Base_PowerTerminal_C_ShowWaiting_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.OnUpdateVisualState
	 */
	struct ABP_Base_PowerTerminal_C_OnUpdateVisualState_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.HandleOpenAudio
	 */
	struct ABP_Base_PowerTerminal_C_HandleOpenAudio_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.HandleClosedAudio
	 */
	struct ABP_Base_PowerTerminal_C_HandleClosedAudio_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.TimelineFinished
	 */
	struct ABP_Base_PowerTerminal_C_TimelineFinished_Params
	{	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ReceiveTick
	 */
	struct ABP_Base_PowerTerminal_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.BndEvt__ConditionalToggle_BatteryBackUp_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature
	 */
	struct ABP_Base_PowerTerminal_C_BndEvt__ConditionalToggle_BatteryBackUp_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.BndEvt__ConditionalToggle_HousePower_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature
	 */
	struct ABP_Base_PowerTerminal_C_BndEvt__ConditionalToggle_HousePower_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.BndEvt__ConditionalToggle_HousePowerDiverted_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature
	 */
	struct ABP_Base_PowerTerminal_C_BndEvt__ConditionalToggle_HousePowerDiverted_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ExecuteUbergraph_BP_Base_PowerTerminal
	 */
	struct ABP_Base_PowerTerminal_C_ExecuteUbergraph_BP_Base_PowerTerminal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
