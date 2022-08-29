﻿#pragma once

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
	 * Function BP_BASE_Eelgrass.BP_BASE_Eelgrass_C.OnRep_DeathTriggered
	 */
	struct ABP_BASE_Eelgrass_C_OnRep_DeathTriggered_Params
	{	};

	/**
	 * Function BP_BASE_Eelgrass.BP_BASE_Eelgrass_C.TL_DissolveEelgrass__FinishedFunc
	 */
	struct ABP_BASE_Eelgrass_C_TL_DissolveEelgrass__FinishedFunc_Params
	{	};

	/**
	 * Function BP_BASE_Eelgrass.BP_BASE_Eelgrass_C.TL_DissolveEelgrass__UpdateFunc
	 */
	struct ABP_BASE_Eelgrass_C_TL_DissolveEelgrass__UpdateFunc_Params
	{	};

	/**
	 * Function BP_BASE_Eelgrass.BP_BASE_Eelgrass_C.ReceiveBeginPlay
	 */
	struct ABP_BASE_Eelgrass_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BASE_Eelgrass.BP_BASE_Eelgrass_C.HandleDeathEffects
	 */
	struct ABP_BASE_Eelgrass_C_HandleDeathEffects_Params
	{	};

	/**
	 * Function BP_BASE_Eelgrass.BP_BASE_Eelgrass_C.Handle Death
	 */
	struct ABP_BASE_Eelgrass_C_Handle_Death_Params
	{
	public:
		struct FDamageInfo                                         DamageInfo;                                              // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_BASE_Eelgrass.BP_BASE_Eelgrass_C.ExecuteUbergraph_BP_BASE_Eelgrass
	 */
	struct ABP_BASE_Eelgrass_C_ExecuteUbergraph_BP_BASE_Eelgrass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
