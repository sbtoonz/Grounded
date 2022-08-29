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
	 * Function BQ_MarkPoint.BQ_MarkPoint_C.Format String Helper
	 */
	struct UBQ_MarkPoint_C_Format_String_Helper_Params
	{
	public:
		struct FLocString                                          Format;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class FText                                                Result;                                                  // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BQ_MarkPoint.BQ_MarkPoint_C.GetScienceReward
	 */
	struct UBQ_MarkPoint_C_GetScienceReward_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QUBF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BQ_MarkPoint.BQ_MarkPoint_C.GetDescriptionText
	 */
	struct UBQ_MarkPoint_C_GetDescriptionText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_MarkPoint.BQ_MarkPoint_C.GetObjectiveText
	 */
	struct UBQ_MarkPoint_C_GetObjectiveText_Params
	{
	public:
		int32_t                                                    ObjectiveIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U1JL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_MarkPoint.BQ_MarkPoint_C.GetTitle
	 */
	struct UBQ_MarkPoint_C_GetTitle_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_MarkPoint.BQ_MarkPoint_C.NotifyQuestStart
	 */
	struct UBQ_MarkPoint_C_NotifyQuestStart_Params
	{	};

	/**
	 * Function BQ_MarkPoint.BQ_MarkPoint_C.InitializeStarted
	 */
	struct UBQ_MarkPoint_C_InitializeStarted_Params
	{	};

	/**
	 * Function BQ_MarkPoint.BQ_MarkPoint_C.On Designated Building State Changed
	 */
	struct UBQ_MarkPoint_C_On_Designated_Building_State_Changed_Params
	{
	public:
		class AActor*                                              InInstigator;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBuildingState                                             NewState;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_MarkPoint.BQ_MarkPoint_C.CleanUpQuest
	 */
	struct UBQ_MarkPoint_C_CleanUpQuest_Params
	{	};

	/**
	 * Function BQ_MarkPoint.BQ_MarkPoint_C.GenerateParameters
	 */
	struct UBQ_MarkPoint_C_GenerateParameters_Params
	{	};

	/**
	 * Function BQ_MarkPoint.BQ_MarkPoint_C.ExecuteUbergraph_BQ_MarkPoint
	 */
	struct UBQ_MarkPoint_C_ExecuteUbergraph_BQ_MarkPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F6SC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
