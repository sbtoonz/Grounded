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
	 * Function UI_MapResourceSurveyOverlay.UI_MapResourceSurveyOverlay_C.OnInitialized
	 */
	struct UUI_MapResourceSurveyOverlay_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_MapResourceSurveyOverlay.UI_MapResourceSurveyOverlay_C.HandleRescan
	 */
	struct UUI_MapResourceSurveyOverlay_C_HandleRescan_Params
	{
	public:
		class UResourceSurveyComponent*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapResourceSurveyOverlay.UI_MapResourceSurveyOverlay_C.Destruct
	 */
	struct UUI_MapResourceSurveyOverlay_C_Destruct_Params
	{	};

	/**
	 * Function UI_MapResourceSurveyOverlay.UI_MapResourceSurveyOverlay_C.Tick
	 */
	struct UUI_MapResourceSurveyOverlay_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapResourceSurveyOverlay.UI_MapResourceSurveyOverlay_C.ExecuteUbergraph_UI_MapResourceSurveyOverlay
	 */
	struct UUI_MapResourceSurveyOverlay_C_ExecuteUbergraph_UI_MapResourceSurveyOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
