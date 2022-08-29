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
	 * Function UI_HeldScienceCount.UI_HeldScienceCount_C.GetNarration
	 */
	struct UUI_HeldScienceCount_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7588[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HeldScienceCount.UI_HeldScienceCount_C.OnPossessedPlayerChange
	 */
	struct UUI_HeldScienceCount_C_OnPossessedPlayerChange_Params
	{
	public:
		class ASurvivalPlayerCharacter*                            NewPlayerCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HeldScienceCount.UI_HeldScienceCount_C.On Science Found Changed
	 */
	struct UUI_HeldScienceCount_C_On_Science_Found_Changed_Params
	{
	public:
		int32_t                                                    ScienceAdded;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalScience;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HeldScienceCount.UI_HeldScienceCount_C.OnGlobalColorChange
	 */
	struct UUI_HeldScienceCount_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_HeldScienceCount.UI_HeldScienceCount_C.ExecuteUbergraph_UI_HeldScienceCount
	 */
	struct UUI_HeldScienceCount_C_ExecuteUbergraph_UI_HeldScienceCount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
