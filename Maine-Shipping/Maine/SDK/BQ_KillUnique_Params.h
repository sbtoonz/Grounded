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
	 * Function BQ_KillUnique.BQ_KillUnique_C.GetTitle
	 */
	struct UBQ_KillUnique_C_GetTitle_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_KillUnique.BQ_KillUnique_C.GetScienceReward
	 */
	struct UBQ_KillUnique_C_GetScienceReward_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_KillUnique.BQ_KillUnique_C.GetObjectiveText
	 */
	struct UBQ_KillUnique_C_GetObjectiveText_Params
	{
	public:
		int32_t                                                    ObjectiveIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UJH3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_KillUnique.BQ_KillUnique_C.GetDescriptionText
	 */
	struct UBQ_KillUnique_C_GetDescriptionText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_KillUnique.BQ_KillUnique_C.InitializeStarted
	 */
	struct UBQ_KillUnique_C_InitializeStarted_Params
	{	};

	/**
	 * Function BQ_KillUnique.BQ_KillUnique_C.On Option Completed
	 */
	struct UBQ_KillUnique_C_On_Option_Completed_Params
	{
	public:
		class ABurgleQuestKillUniqueOptionActor*                   Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_KillUnique.BQ_KillUnique_C.CleanUpQuest
	 */
	struct UBQ_KillUnique_C_CleanUpQuest_Params
	{	};

	/**
	 * Function BQ_KillUnique.BQ_KillUnique_C.GenerateParameters
	 */
	struct UBQ_KillUnique_C_GenerateParameters_Params
	{	};

	/**
	 * Function BQ_KillUnique.BQ_KillUnique_C.ExecuteUbergraph_BQ_KillUnique
	 */
	struct UBQ_KillUnique_C_ExecuteUbergraph_BQ_KillUnique_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BEF6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
