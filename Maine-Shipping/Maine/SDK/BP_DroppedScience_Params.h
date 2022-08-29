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
	 * Function BP_DroppedScience.BP_DroppedScience_C.ReceiveBeginPlay
	 */
	struct ABP_DroppedScience_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DroppedScience.BP_DroppedScience_C.CustomEvent_1
	 */
	struct ABP_DroppedScience_C_CustomEvent_1_Params
	{
	public:
		class ASurvivalPlayerCharacter*                            Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroppedScience.BP_DroppedScience_C.ExecuteUbergraph_BP_DroppedScience
	 */
	struct ABP_DroppedScience_C_ExecuteUbergraph_BP_DroppedScience_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
