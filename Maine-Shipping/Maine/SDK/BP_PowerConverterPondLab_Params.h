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
	 * Function BP_PowerConverterPondLab.BP_PowerConverterPondLab_C.LightTurnOn
	 */
	struct ABP_PowerConverterPondLab_C_LightTurnOn_Params
	{
	public:
		int32_t                                                    BreakerID;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PowerConverterPondLab.BP_PowerConverterPondLab_C.BndEvt__ConditionalToggle_AllBreakersOn_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature
	 */
	struct ABP_PowerConverterPondLab_C_BndEvt__ConditionalToggle_AllBreakersOn_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PowerConverterPondLab.BP_PowerConverterPondLab_C.ToggleConnectedFans
	 */
	struct ABP_PowerConverterPondLab_C_ToggleConnectedFans_Params
	{
	public:
		bool                                                       ToggleOn;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PowerConverterPondLab.BP_PowerConverterPondLab_C.ExecuteUbergraph_BP_PowerConverterPondLab
	 */
	struct ABP_PowerConverterPondLab_C_ExecuteUbergraph_BP_PowerConverterPondLab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
