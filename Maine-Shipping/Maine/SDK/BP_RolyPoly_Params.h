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
	 * Function BP_RolyPoly.BP_RolyPoly_C.ReceiveBeginPlay
	 */
	struct ABP_RolyPoly_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RolyPoly.BP_RolyPoly_C.On Combat Change
	 */
	struct ABP_RolyPoly_C_On_Combat_Change_Params
	{
	public:
		class ASurvivalCharacter*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInCombat;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RolyPoly.BP_RolyPoly_C.ExecuteUbergraph_BP_RolyPoly
	 */
	struct ABP_RolyPoly_C_ExecuteUbergraph_BP_RolyPoly_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
