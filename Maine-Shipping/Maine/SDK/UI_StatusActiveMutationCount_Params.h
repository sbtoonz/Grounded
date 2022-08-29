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
	 * Function UI_StatusActiveMutationCount.UI_StatusActiveMutationCount_C.GetNarration
	 */
	struct UUI_StatusActiveMutationCount_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ASZB[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_StatusActiveMutationCount.UI_StatusActiveMutationCount_C.SetCount
	 */
	struct UUI_StatusActiveMutationCount_C_SetCount_Params
	{
	public:
		int32_t                                                    Active;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Max;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusActiveMutationCount.UI_StatusActiveMutationCount_C.OnGlobalColorChange
	 */
	struct UUI_StatusActiveMutationCount_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_StatusActiveMutationCount.UI_StatusActiveMutationCount_C.ExecuteUbergraph_UI_StatusActiveMutationCount
	 */
	struct UUI_StatusActiveMutationCount_C_ExecuteUbergraph_UI_StatusActiveMutationCount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
