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
	 * Function UI_RatingBar.UI_RatingBar_C.SetStyle
	 */
	struct UUI_RatingBar_C_SetStyle_Params
	{	};

	/**
	 * Function UI_RatingBar.UI_RatingBar_C.GetNarration
	 */
	struct UUI_RatingBar_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_372A[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RatingBar.UI_RatingBar_C.SetPercent
	 */
	struct UUI_RatingBar_C_SetPercent_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RatingBar.UI_RatingBar_C.OnGlobalColorChange
	 */
	struct UUI_RatingBar_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_RatingBar.UI_RatingBar_C.Construct
	 */
	struct UUI_RatingBar_C_Construct_Params
	{	};

	/**
	 * Function UI_RatingBar.UI_RatingBar_C.ExecuteUbergraph_UI_RatingBar
	 */
	struct UUI_RatingBar_C_ExecuteUbergraph_UI_RatingBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VBB1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
