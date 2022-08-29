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
	 * Function BQ_Craft.BQ_Craft_C.Is Accepted Item
	 */
	struct UBQ_Craft_C_Is_Accepted_Item_Params
	{
	public:
		struct FDataTableRowHandle                                 Item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X957[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BQ_Craft.BQ_Craft_C.Is Accepted Recipe
	 */
	struct UBQ_Craft_C_Is_Accepted_Recipe_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9THF[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BQ_Craft.BQ_Craft_C.GenerateCountHelper
	 */
	struct UBQ_Craft_C_GenerateCountHelper_Params
	{	};

	/**
	 * Function BQ_Craft.BQ_Craft_C.GetRecipeProgressRange
	 */
	struct UBQ_Craft_C_GetRecipeProgressRange_Params
	{
	public:
		struct FRecipeData                                         Recipe;                                                  // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FFloatRange                                         Range;                                                   // 0x0090(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_Craft.BQ_Craft_C.GetScienceReward
	 */
	struct UBQ_Craft_C_GetScienceReward_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RMOA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BQ_Craft.BQ_Craft_C.GetObjectiveText
	 */
	struct UBQ_Craft_C_GetObjectiveText_Params
	{
	public:
		int32_t                                                    ObjectiveIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7AOB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_Craft.BQ_Craft_C.GetDescriptionText
	 */
	struct UBQ_Craft_C_GetDescriptionText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_Craft.BQ_Craft_C.GenerateParametersHelper
	 */
	struct UBQ_Craft_C_GenerateParametersHelper_Params
	{	};

	/**
	 * Function BQ_Craft.BQ_Craft_C.GetTitle
	 */
	struct UBQ_Craft_C_GetTitle_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_Craft.BQ_Craft_C.Get Recipe Display Name
	 */
	struct UBQ_Craft_C_Get_Recipe_Display_Name_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_Craft.BQ_Craft_C.GenerateParameters
	 */
	struct UBQ_Craft_C_GenerateParameters_Params
	{	};

	/**
	 * Function BQ_Craft.BQ_Craft_C.CleanUpQuest
	 */
	struct UBQ_Craft_C_CleanUpQuest_Params
	{	};

	/**
	 * Function BQ_Craft.BQ_Craft_C.InitializeStarted
	 */
	struct UBQ_Craft_C_InitializeStarted_Params
	{	};

	/**
	 * Function BQ_Craft.BQ_Craft_C.On Item Crafted
	 */
	struct UBQ_Craft_C_On_Item_Crafted_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemHandle;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ASurvivalPlayerState*                                InstigatorPlayerState;                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BQ_Craft.BQ_Craft_C.ExecuteUbergraph_BQ_Craft
	 */
	struct UBQ_Craft_C_ExecuteUbergraph_BQ_Craft_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AKDO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
