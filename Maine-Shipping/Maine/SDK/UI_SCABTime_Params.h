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
	 * Function UI_SCABTime.UI_SCABTime_C.GetDay
	 */
	struct UUI_SCABTime_C_GetDay_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_SCABTime.UI_SCABTime_C.GetTime
	 */
	struct UUI_SCABTime_C_GetTime_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_SCABTime.UI_SCABTime_C.Construct
	 */
	struct UUI_SCABTime_C_Construct_Params
	{	};

	/**
	 * Function UI_SCABTime.UI_SCABTime_C.Tick
	 */
	struct UUI_SCABTime_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SCABTime.UI_SCABTime_C.ExecuteUbergraph_UI_SCABTime
	 */
	struct UUI_SCABTime_C_ExecuteUbergraph_UI_SCABTime_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
