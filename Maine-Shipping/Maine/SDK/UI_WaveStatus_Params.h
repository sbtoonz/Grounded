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
	 * Function UI_WaveStatus.UI_WaveStatus_C.UpdateWaveThreatIcon
	 */
	struct UUI_WaveStatus_C_UpdateWaveThreatIcon_Params
	{	};

	/**
	 * Function UI_WaveStatus.UI_WaveStatus_C.UpdateStringVisibility
	 */
	struct UUI_WaveStatus_C_UpdateStringVisibility_Params
	{	};

	/**
	 * Function UI_WaveStatus.UI_WaveStatus_C.UpdateString
	 */
	struct UUI_WaveStatus_C_UpdateString_Params
	{	};

	/**
	 * Function UI_WaveStatus.UI_WaveStatus_C.OnBuildingFragileChanged
	 */
	struct UUI_WaveStatus_C_OnBuildingFragileChanged_Params
	{
	public:
		bool                                                       IsFragile;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QNTN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABuilding*                                           ABuilding;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WaveStatus.UI_WaveStatus_C.Construct
	 */
	struct UUI_WaveStatus_C_Construct_Params
	{	};

	/**
	 * Function UI_WaveStatus.UI_WaveStatus_C.Tick
	 */
	struct UUI_WaveStatus_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WaveStatus.UI_WaveStatus_C.OnWaveSpawned
	 */
	struct UUI_WaveStatus_C_OnWaveSpawned_Params
	{	};

	/**
	 * Function UI_WaveStatus.UI_WaveStatus_C.OnWaveComplete
	 */
	struct UUI_WaveStatus_C_OnWaveComplete_Params
	{	};

	/**
	 * Function UI_WaveStatus.UI_WaveStatus_C.ExecuteUbergraph_UI_WaveStatus
	 */
	struct UUI_WaveStatus_C_ExecuteUbergraph_UI_WaveStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
