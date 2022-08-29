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
	 * Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.IsInteractionEnabled
	 */
	struct ABP_Trap_Haze_Fungus_C_IsInteractionEnabled_Params
	{
	public:
		EInteractionChannel                                        Channel;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PIYL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InstigatedBy;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionState                                          ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.TL_VertexAnim__FinishedFunc
	 */
	struct ABP_Trap_Haze_Fungus_C_TL_VertexAnim__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.TL_VertexAnim__UpdateFunc
	 */
	struct ABP_Trap_Haze_Fungus_C_TL_VertexAnim__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.TL_Unshrivel__FinishedFunc
	 */
	struct ABP_Trap_Haze_Fungus_C_TL_Unshrivel__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.TL_Unshrivel__UpdateFunc
	 */
	struct ABP_Trap_Haze_Fungus_C_TL_Unshrivel__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.OnTrigger
	 */
	struct ABP_Trap_Haze_Fungus_C_OnTrigger_Params
	{
	public:
		ETrapTriggerState                                          TrapTriggerState;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.ReceiveBeginPlay
	 */
	struct ABP_Trap_Haze_Fungus_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.ExecuteUbergraph_BP_Trap_Haze_Fungus
	 */
	struct ABP_Trap_Haze_Fungus_C_ExecuteUbergraph_BP_Trap_Haze_Fungus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
