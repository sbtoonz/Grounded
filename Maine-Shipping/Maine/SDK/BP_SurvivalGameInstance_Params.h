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
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.GetCurrentNightUIThemeInstance
	 */
	struct UBP_SurvivalGameInstance_C_GetCurrentNightUIThemeInstance_Params
	{
	public:
		class UGlobalColorTheme_Base_C*                            Instance;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.GetCurrentUIThemeInstance
	 */
	struct UBP_SurvivalGameInstance_C_GetCurrentUIThemeInstance_Params
	{
	public:
		class UGlobalColorTheme_Base_C*                            Instance;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnFailure_4E51F35E4A9471FE5AD0B7BE74317409
	 */
	struct UBP_SurvivalGameInstance_C_OnFailure_4E51F35E4A9471FE5AD0B7BE74317409_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnSuccess_4E51F35E4A9471FE5AD0B7BE74317409
	 */
	struct UBP_SurvivalGameInstance_C_OnSuccess_4E51F35E4A9471FE5AD0B7BE74317409_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnFailure_EC380EAC42E15B600864FDA296D727FC
	 */
	struct UBP_SurvivalGameInstance_C_OnFailure_EC380EAC42E15B600864FDA296D727FC_Params
	{	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnSuccess_EC380EAC42E15B600864FDA296D727FC
	 */
	struct UBP_SurvivalGameInstance_C_OnSuccess_EC380EAC42E15B600864FDA296D727FC_Params
	{
	public:
		float                                                      TimeOffsetSec;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NetworkDelaySec;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.ReceiveInit
	 */
	struct UBP_SurvivalGameInstance_C_ReceiveInit_Params
	{	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.ReceiveShutdown
	 */
	struct UBP_SurvivalGameInstance_C_ReceiveShutdown_Params
	{	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.LogIntoAnalytics
	 */
	struct UBP_SurvivalGameInstance_C_LogIntoAnalytics_Params
	{	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleSetIsSinglePlayer
	 */
	struct UBP_SurvivalGameInstance_C_HandleSetIsSinglePlayer_Params
	{
	public:
		bool                                                       SinglePlayer;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnInviteReceived
	 */
	struct UBP_SurvivalGameInstance_C_OnInviteReceived_Params
	{
	public:
		struct FBlueprintSessionResult                             Result;                                                  // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleAcceptedInvite
	 */
	struct UBP_SurvivalGameInstance_C_HandleAcceptedInvite_Params
	{	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleDismissInvite
	 */
	struct UBP_SurvivalGameInstance_C_HandleDismissInvite_Params
	{	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.CloseCurrentInviteWindow
	 */
	struct UBP_SurvivalGameInstance_C_CloseCurrentInviteWindow_Params
	{	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleJoinGameFailure
	 */
	struct UBP_SurvivalGameInstance_C_HandleJoinGameFailure_Params
	{
	public:
		EJoinSessionFailureResult                                  Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.AskForInviteGamePassword
	 */
	struct UBP_SurvivalGameInstance_C_AskForInviteGamePassword_Params
	{	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnPasswordEntered
	 */
	struct UBP_SurvivalGameInstance_C_OnPasswordEntered_Params
	{
	public:
		class FString                                              UserText;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnCancel
	 */
	struct UBP_SurvivalGameInstance_C_OnCancel_Params
	{	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleJoinOnlineInvite
	 */
	struct UBP_SurvivalGameInstance_C_HandleJoinOnlineInvite_Params
	{	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleAcceptTCUIInvite
	 */
	struct UBP_SurvivalGameInstance_C_HandleAcceptTCUIInvite_Params
	{
	public:
		struct FBlueprintSessionResult                             Result;                                                  // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.ExecuteUbergraph_BP_SurvivalGameInstance
	 */
	struct UBP_SurvivalGameInstance_C_ExecuteUbergraph_BP_SurvivalGameInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QZJI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
