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
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.StopLoadingScreenOnClient
	 */
	struct ABP_SurvivalPlayerController_C_StopLoadingScreenOnClient_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.HandleGameModeChanged
	 */
	struct ABP_SurvivalPlayerController_C_HandleGameModeChanged_Params
	{
	public:
		int32_t                                                    GameModeSelection;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGameMode                                                  GameMode;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.InpActEvt_VoiceChat_K2Node_InputActionEvent_4
	 */
	struct ABP_SurvivalPlayerController_C_InpActEvt_VoiceChat_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.InpActEvt_VoiceChat_K2Node_InputActionEvent_3
	 */
	struct ABP_SurvivalPlayerController_C_InpActEvt_VoiceChat_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.InpActEvt_Alt_U_K2Node_InputKeyEvent_1
	 */
	struct ABP_SurvivalPlayerController_C_InpActEvt_Alt_U_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.InpActEvt_MainePhoto_ToggleUI_K2Node_InputActionEvent_2
	 */
	struct ABP_SurvivalPlayerController_C_InpActEvt_MainePhoto_ToggleUI_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.InpActEvt_MainePhoto_ToggleSettings_K2Node_InputActionEvent_1
	 */
	struct ABP_SurvivalPlayerController_C_InpActEvt_MainePhoto_ToggleSettings_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.ServerSpawnAsPlayer
	 */
	struct ABP_SurvivalPlayerController_C_ServerSpawnAsPlayer_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.IdentityCheck
	 */
	struct ABP_SurvivalPlayerController_C_IdentityCheck_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.ServerToggleSpectatorMode
	 */
	struct ABP_SurvivalPlayerController_C_ServerToggleSpectatorMode_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.ReceiveBeginPlay
	 */
	struct ABP_SurvivalPlayerController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.BroadcastGameModeChange
	 */
	struct ABP_SurvivalPlayerController_C_BroadcastGameModeChange_Params
	{
	public:
		EGameMode                                                  GameMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.UpdateSelectedGameMode
	 */
	struct ABP_SurvivalPlayerController_C_UpdateSelectedGameMode_Params
	{
	public:
		EGameMode                                                  GameMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.StopLoadingScreen
	 */
	struct ABP_SurvivalPlayerController_C_StopLoadingScreen_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.HandlePhotoModeUnallowedInMP
	 */
	struct ABP_SurvivalPlayerController_C_HandlePhotoModeUnallowedInMP_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.OnPhotoModeExitedAudio
	 */
	struct ABP_SurvivalPlayerController_C_OnPhotoModeExitedAudio_Params
	{	};

	/**
	 * Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.ExecuteUbergraph_BP_SurvivalPlayerController
	 */
	struct ABP_SurvivalPlayerController_C_ExecuteUbergraph_BP_SurvivalPlayerController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9I8C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
