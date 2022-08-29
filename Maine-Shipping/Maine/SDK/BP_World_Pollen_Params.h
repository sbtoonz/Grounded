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
	 * Function BP_World_Pollen.BP_World_Pollen_C.IsInteractionEnabled
	 */
	struct ABP_World_Pollen_C_IsInteractionEnabled_Params
	{
	public:
		EInteractionChannel                                        Channel;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1IJG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InstigatedBy;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionState                                          ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_World_Pollen.BP_World_Pollen_C.ReceiveBeginPlay
	 */
	struct ABP_World_Pollen_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_World_Pollen.BP_World_Pollen_C.ExecuteUbergraph_BP_World_Pollen
	 */
	struct ABP_World_Pollen_C_ExecuteUbergraph_BP_World_Pollen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
