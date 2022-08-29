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
	 * Function BP_Mite_Haze.BP_Mite_Haze_C.CheckLootConditionals
	 */
	struct ABP_Mite_Haze_C_CheckLootConditionals_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemDataRowHandle;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Mite_Haze.BP_Mite_Haze_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature
	 */
	struct ABP_Mite_Haze_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Mite_Haze.BP_Mite_Haze_C.ReceiveBeginPlay
	 */
	struct ABP_Mite_Haze_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Mite_Haze.BP_Mite_Haze_C.On Combat Change
	 */
	struct ABP_Mite_Haze_C_On_Combat_Change_Params
	{
	public:
		class ASurvivalCharacter*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInCombat;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Mite_Haze.BP_Mite_Haze_C.ExecuteUbergraph_BP_Mite_Haze
	 */
	struct ABP_Mite_Haze_C_ExecuteUbergraph_BP_Mite_Haze_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif