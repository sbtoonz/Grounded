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
	 * Function UI_ScannerBraceletLabel.UI_ScannerBraceletLabel_C.GetNarration
	 */
	struct UUI_ScannerBraceletLabel_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7MD9[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ScannerBraceletLabel.UI_ScannerBraceletLabel_C.OnGlobalColorChange
	 */
	struct UUI_ScannerBraceletLabel_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_ScannerBraceletLabel.UI_ScannerBraceletLabel_C.ExecuteUbergraph_UI_ScannerBraceletLabel
	 */
	struct UUI_ScannerBraceletLabel_C_ExecuteUbergraph_UI_ScannerBraceletLabel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
