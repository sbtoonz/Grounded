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
	 * Function BP_WaterBoatmanAI.BP_WaterBoatmanAI_C.ReceiveBeginPlay
	 */
	struct ABP_WaterBoatmanAI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_WaterBoatmanAI.BP_WaterBoatmanAI_C.ReceiveTick
	 */
	struct ABP_WaterBoatmanAI_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WaterBoatmanAI.BP_WaterBoatmanAI_C.ExecuteUbergraph_BP_WaterBoatmanAI
	 */
	struct ABP_WaterBoatmanAI_C_ExecuteUbergraph_BP_WaterBoatmanAI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
