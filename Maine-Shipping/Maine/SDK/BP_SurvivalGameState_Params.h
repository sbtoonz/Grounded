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
	 * Function BP_SurvivalGameState.BP_SurvivalGameState_C.HandlePartyKeyItemObtained
	 */
	struct ABP_SurvivalGameState_C_HandlePartyKeyItemObtained_Params
	{
	public:
		struct FDataTableRowHandle                                 QuestItem;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ASurvivalPlayerState*                                AcquirerPlayerState;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalGameState.BP_SurvivalGameState_C.ReceiveBeginPlay
	 */
	struct ABP_SurvivalGameState_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SurvivalGameState.BP_SurvivalGameState_C.OnKeyItemObtained
	 */
	struct ABP_SurvivalGameState_C_OnKeyItemObtained_Params
	{
	public:
		struct FDataTableRowHandle                                 KeyItemRowHandle;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ASurvivalPlayerState*                                AcquirerPlayerState;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FDataTableRowHandle>                         RecipesLearned;                                          // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_SurvivalGameState.BP_SurvivalGameState_C.MulticastHandleEndOfDemo
	 */
	struct ABP_SurvivalGameState_C_MulticastHandleEndOfDemo_Params
	{	};

	/**
	 * Function BP_SurvivalGameState.BP_SurvivalGameState_C.ReceiveEndPlay
	 */
	struct ABP_SurvivalGameState_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalGameState.BP_SurvivalGameState_C.OnHourChanged
	 */
	struct ABP_SurvivalGameState_C_OnHourChanged_Params
	{
	public:
		int32_t                                                    NewHour;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewDay;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalGameState.BP_SurvivalGameState_C.HandleEndEarlyAccessConent
	 */
	struct ABP_SurvivalGameState_C_HandleEndEarlyAccessConent_Params
	{	};

	/**
	 * Function BP_SurvivalGameState.BP_SurvivalGameState_C.EndOfEarlyAccessContentConfirmationWindow_Accept
	 */
	struct ABP_SurvivalGameState_C_EndOfEarlyAccessContentConfirmationWindow_Accept_Params
	{	};

	/**
	 * Function BP_SurvivalGameState.BP_SurvivalGameState_C.HandlePatchSaveGameRepair
	 */
	struct ABP_SurvivalGameState_C_HandlePatchSaveGameRepair_Params
	{
	public:
		struct FGameVersion                                        LoadedVersion;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		EGamePackageType                                           GamePackageType;                                         // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SurvivalGameState.BP_SurvivalGameState_C.BndEvt__BP_SurvivalGameState_PartyComponent_K2Node_ComponentBoundEvent_0_OnKeyItemObtainedDelegate__DelegateSignature
	 */
	struct ABP_SurvivalGameState_C_BndEvt__BP_SurvivalGameState_PartyComponent_K2Node_ComponentBoundEvent_0_OnKeyItemObtainedDelegate__DelegateSignature_Params
	{
	public:
		struct FDataTableRowHandle                                 KeyItemRowHandle;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ASurvivalPlayerState*                                AcquirerPlayerState;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FDataTableRowHandle>                         RecipesLearned;                                          // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_SurvivalGameState.BP_SurvivalGameState_C.ExecuteUbergraph_BP_SurvivalGameState
	 */
	struct ABP_SurvivalGameState_C_ExecuteUbergraph_BP_SurvivalGameState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H0KP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
