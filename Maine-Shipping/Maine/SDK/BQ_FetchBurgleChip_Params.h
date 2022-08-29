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
	 * Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetExternalScienceReward
	 */
	struct UBQ_FetchBurgleChip_C_GetExternalScienceReward_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetOptionActor
	 */
	struct UBQ_FetchBurgleChip_C_GetOptionActor_Params
	{
	public:
		class ABurgleQuestChipOptionActor*                         Actor;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetScienceReward
	 */
	struct UBQ_FetchBurgleChip_C_GetScienceReward_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetObjectiveText
	 */
	struct UBQ_FetchBurgleChip_C_GetObjectiveText_Params
	{
	public:
		int32_t                                                    ObjectiveIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_26A7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetDescriptionText
	 */
	struct UBQ_FetchBurgleChip_C_GetDescriptionText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.FormatStringHelper
	 */
	struct UBQ_FetchBurgleChip_C_FormatStringHelper_Params
	{
	public:
		struct FLocString                                          FormatString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetTitle
	 */
	struct UBQ_FetchBurgleChip_C_GetTitle_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.On Tech Chip Redeemed
	 */
	struct UBQ_FetchBurgleChip_C_On_Tech_Chip_Redeemed_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASurvivalPlayerController*                           Instigator;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.CleanUpQuest
	 */
	struct UBQ_FetchBurgleChip_C_CleanUpQuest_Params
	{	};

	/**
	 * Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GenerateParameters
	 */
	struct UBQ_FetchBurgleChip_C_GenerateParameters_Params
	{	};

	/**
	 * Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.On Key Item Obtained
	 */
	struct UBQ_FetchBurgleChip_C_On_Key_Item_Obtained_Params
	{
	public:
		struct FDataTableRowHandle                                 KeyItemRowHandle;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ASurvivalPlayerState*                                AcquirerPlayerState;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FDataTableRowHandle>                         RecipesLearned;                                          // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.InitializeStarted
	 */
	struct UBQ_FetchBurgleChip_C_InitializeStarted_Params
	{	};

	/**
	 * Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.ExecuteUbergraph_BQ_FetchBurgleChip
	 */
	struct UBQ_FetchBurgleChip_C_ExecuteUbergraph_BQ_FetchBurgleChip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FTYP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
