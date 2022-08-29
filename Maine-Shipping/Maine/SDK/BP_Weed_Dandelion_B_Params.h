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
	 * Function BP_Weed_Dandelion_B.BP_Weed_Dandelion_B_C.ReceiveBeginPlay
	 */
	struct ABP_Weed_Dandelion_B_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Weed_Dandelion_B.BP_Weed_Dandelion_B_C.Handle Death
	 */
	struct ABP_Weed_Dandelion_B_C_Handle_Death_Params
	{
	public:
		struct FDamageInfo                                         DamageInfo;                                              // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_Weed_Dandelion_B.BP_Weed_Dandelion_B_C.ExecuteUbergraph_BP_Weed_Dandelion_B
	 */
	struct ABP_Weed_Dandelion_B_C_ExecuteUbergraph_BP_Weed_Dandelion_B_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B0IU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
