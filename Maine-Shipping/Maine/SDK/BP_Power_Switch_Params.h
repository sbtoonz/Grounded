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
	 * Function BP_Power_Switch.BP_Power_Switch_C.UserConstructionScript
	 */
	struct ABP_Power_Switch_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Power_Switch.BP_Power_Switch_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Power_Switch_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Power_Switch.BP_Power_Switch_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Power_Switch_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Power_Switch.BP_Power_Switch_C.Timeline - SFX Pitch__FinishedFunc
	 */
	struct ABP_Power_Switch_C_Timeline_SFX_Pitch__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Power_Switch.BP_Power_Switch_C.Timeline - SFX Pitch__UpdateFunc
	 */
	struct ABP_Power_Switch_C_Timeline_SFX_Pitch__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Power_Switch.BP_Power_Switch_C.ReceiveBeginPlay
	 */
	struct ABP_Power_Switch_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Power_Switch.BP_Power_Switch_C.OnUpdateVisualState
	 */
	struct ABP_Power_Switch_C_OnUpdateVisualState_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Power_Switch.BP_Power_Switch_C.HandleOpenAudio
	 */
	struct ABP_Power_Switch_C_HandleOpenAudio_Params
	{	};

	/**
	 * Function BP_Power_Switch.BP_Power_Switch_C.HandleClosedAudio
	 */
	struct ABP_Power_Switch_C_HandleClosedAudio_Params
	{	};

	/**
	 * Function BP_Power_Switch.BP_Power_Switch_C.TimelineFinished
	 */
	struct ABP_Power_Switch_C_TimelineFinished_Params
	{	};

	/**
	 * Function BP_Power_Switch.BP_Power_Switch_C.ExecuteUbergraph_BP_Power_Switch
	 */
	struct ABP_Power_Switch_C_ExecuteUbergraph_BP_Power_Switch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
