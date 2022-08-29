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
	 * Function UI_ClockSmall.UI_ClockSmall_C.DisplayGameTime
	 */
	struct UUI_ClockSmall_C_DisplayGameTime_Params
	{	};

	/**
	 * Function UI_ClockSmall.UI_ClockSmall_C.Construct
	 */
	struct UUI_ClockSmall_C_Construct_Params
	{	};

	/**
	 * Function UI_ClockSmall.UI_ClockSmall_C.Tick
	 */
	struct UUI_ClockSmall_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ClockSmall.UI_ClockSmall_C.OnGlobalColorChange
	 */
	struct UUI_ClockSmall_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_ClockSmall.UI_ClockSmall_C.ExecuteUbergraph_UI_ClockSmall
	 */
	struct UUI_ClockSmall_C_ExecuteUbergraph_UI_ClockSmall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
