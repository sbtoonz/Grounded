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
	 * Function UI_WaveWarning.UI_WaveWarning_C.HandleWaveAttackStateChanged
	 */
	struct UUI_WaveWarning_C_HandleWaveAttackStateChanged_Params
	{
	public:
		EWaveAttackState                                           WaveAttackState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W081[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_WaveWarning.UI_WaveWarning_C.Construct
	 */
	struct UUI_WaveWarning_C_Construct_Params
	{	};

	/**
	 * Function UI_WaveWarning.UI_WaveWarning_C.OnGlobalColorChange
	 */
	struct UUI_WaveWarning_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_WaveWarning.UI_WaveWarning_C.OnWaveComplete
	 */
	struct UUI_WaveWarning_C_OnWaveComplete_Params
	{	};

	/**
	 * Function UI_WaveWarning.UI_WaveWarning_C.OnWaveSpawned
	 */
	struct UUI_WaveWarning_C_OnWaveSpawned_Params
	{	};

	/**
	 * Function UI_WaveWarning.UI_WaveWarning_C.Destruct
	 */
	struct UUI_WaveWarning_C_Destruct_Params
	{	};

	/**
	 * Function UI_WaveWarning.UI_WaveWarning_C.OnWaveAttackStateChange
	 */
	struct UUI_WaveWarning_C_OnWaveAttackStateChange_Params
	{
	public:
		EWaveAttackState                                           WaveAttackState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WaveWarning.UI_WaveWarning_C.ExecuteUbergraph_UI_WaveWarning
	 */
	struct UUI_WaveWarning_C_ExecuteUbergraph_UI_WaveWarning_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
