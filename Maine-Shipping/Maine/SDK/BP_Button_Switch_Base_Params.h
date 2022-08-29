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
	 * Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.UserConstructionScript
	 */
	struct ABP_Button_Switch_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.ButtonAnimationTimeline__FinishedFunc
	 */
	struct ABP_Button_Switch_Base_C_ButtonAnimationTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.ButtonAnimationTimeline__UpdateFunc
	 */
	struct ABP_Button_Switch_Base_C_ButtonAnimationTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.LightTimeline__FinishedFunc
	 */
	struct ABP_Button_Switch_Base_C_LightTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.LightTimeline__UpdateFunc
	 */
	struct ABP_Button_Switch_Base_C_LightTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.OnOpenStateChanged
	 */
	struct ABP_Button_Switch_Base_C_OnOpenStateChanged_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NFH2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ActorInstigator;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.ImplementableOnLightTimelineFinished
	 */
	struct ABP_Button_Switch_Base_C_ImplementableOnLightTimelineFinished_Params
	{
	public:
		ETimelineDirection                                         TimelineDirection;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.OnUpdateVisualState
	 */
	struct ABP_Button_Switch_Base_C_OnUpdateVisualState_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.ExecuteUbergraph_BP_Button_Switch_Base
	 */
	struct ABP_Button_Switch_Base_C_ExecuteUbergraph_BP_Button_Switch_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
