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
	 * Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.HandleSelectInput
	 */
	struct UUI_MapLegendResourceSurveyEntry_C_HandleSelectInput_Params
	{
	public:
		bool                                                       bHandled;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J80P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.UpdateDisplayName
	 */
	struct UUI_MapLegendResourceSurveyEntry_C_UpdateDisplayName_Params
	{	};

	/**
	 * Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.OnInitialized
	 */
	struct UUI_MapLegendResourceSurveyEntry_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.Destruct
	 */
	struct UUI_MapLegendResourceSurveyEntry_C_Destruct_Params
	{	};

	/**
	 * Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.HandleSurveyedResourceChanged
	 */
	struct UUI_MapLegendResourceSurveyEntry_C_HandleSurveyedResourceChanged_Params
	{
	public:
		class UResourceSurveyComponent*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDataTableRowHandle                                 ResourceHandle;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.HandleResourceSurveyVisibleChanged
	 */
	struct UUI_MapLegendResourceSurveyEntry_C_HandleResourceSurveyVisibleChanged_Params
	{
	public:
		class ASurvivalPlayerState*                                Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bResourceSurveyVisible;                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.ExecuteUbergraph_UI_MapLegendResourceSurveyEntry
	 */
	struct UUI_MapLegendResourceSurveyEntry_C_ExecuteUbergraph_UI_MapLegendResourceSurveyEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
