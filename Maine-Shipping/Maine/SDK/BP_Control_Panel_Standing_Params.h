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
	 * Function BP_Control_Panel_Standing.BP_Control_Panel_Standing_C.UserConstructionScript
	 */
	struct ABP_Control_Panel_Standing_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Control_Panel_Standing.BP_Control_Panel_Standing_C.ReceiveBeginPlay
	 */
	struct ABP_Control_Panel_Standing_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Control_Panel_Standing.BP_Control_Panel_Standing_C.ImplementableOnLightTimelineFinished
	 */
	struct ABP_Control_Panel_Standing_C_ImplementableOnLightTimelineFinished_Params
	{
	public:
		ETimelineDirection                                         TimelineDirection;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Control_Panel_Standing.BP_Control_Panel_Standing_C.ExecuteUbergraph_BP_Control_Panel_Standing
	 */
	struct ABP_Control_Panel_Standing_C_ExecuteUbergraph_BP_Control_Panel_Standing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
