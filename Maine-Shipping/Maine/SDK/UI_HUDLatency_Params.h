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
	 * Function UI_HUDLatency.UI_HUDLatency_C.GetPingLevel
	 */
	struct UUI_HUDLatency_C_GetPingLevel_Params
	{
	public:
		int32_t                                                    PingValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUI_PingLevel                                              PingLevel;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDLatency.UI_HUDLatency_C.OnPingChanged
	 */
	struct UUI_HUDLatency_C_OnPingChanged_Params
	{
	public:
		int32_t                                                    Ping;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDLatency.UI_HUDLatency_C.OnGlobalColorChange
	 */
	struct UUI_HUDLatency_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_HUDLatency.UI_HUDLatency_C.ExecuteUbergraph_UI_HUDLatency
	 */
	struct UUI_HUDLatency_C_ExecuteUbergraph_UI_HUDLatency_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
