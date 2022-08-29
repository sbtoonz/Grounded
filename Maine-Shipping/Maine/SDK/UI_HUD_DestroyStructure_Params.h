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
	 * Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.GetRecyleValue
	 */
	struct UUI_HUD_DestroyStructure_C_GetRecyleValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RP35[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.GetCancelFillPercent
	 */
	struct UUI_HUD_DestroyStructure_C_GetCancelFillPercent_Params
	{
	public:
		float                                                      FillValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NNIN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.OnGlobalColorChange
	 */
	struct UUI_HUD_DestroyStructure_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.UpdateData
	 */
	struct UUI_HUD_DestroyStructure_C_UpdateData_Params
	{	};

	/**
	 * Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.Construct
	 */
	struct UUI_HUD_DestroyStructure_C_Construct_Params
	{	};

	/**
	 * Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.ExecuteUbergraph_UI_HUD_DestroyStructure
	 */
	struct UUI_HUD_DestroyStructure_C_ExecuteUbergraph_UI_HUD_DestroyStructure_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
