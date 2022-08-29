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
	 * Function BP_Mosquito.BP_Mosquito_C.CheckLootConditionals
	 */
	struct ABP_Mosquito_C_CheckLootConditionals_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemDataRowHandle;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.ToggleWingsVisibility
	 */
	struct ABP_Mosquito_C_ToggleWingsVisibility_Params
	{
	public:
		bool                                                       IsFlying;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.Timeline_wingFlap__FinishedFunc
	 */
	struct ABP_Mosquito_C_Timeline_wingFlap__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.Timeline_wingFlap__UpdateFunc
	 */
	struct ABP_Mosquito_C_Timeline_wingFlap__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Mosquito_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Mosquito_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.Timeline_1__FinishedFunc
	 */
	struct ABP_Mosquito_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.Timeline_1__UpdateFunc
	 */
	struct ABP_Mosquito_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.BloodFill__FinishedFunc
	 */
	struct ABP_Mosquito_C_BloodFill__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.BloodFill__UpdateFunc
	 */
	struct ABP_Mosquito_C_BloodFill__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.WingSFX__FinishedFunc
	 */
	struct ABP_Mosquito_C_WingSFX__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.WingSFX__UpdateFunc
	 */
	struct ABP_Mosquito_C_WingSFX__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.ReceiveBeginPlay
	 */
	struct ABP_Mosquito_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.On Combat Change
	 */
	struct ABP_Mosquito_C_On_Combat_Change_Params
	{
	public:
		class ASurvivalCharacter*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInCombat;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature
	 */
	struct ABP_Mosquito_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.OnAttackHit_Event
	 */
	struct ABP_Mosquito_C_OnAttackHit_Event_Params
	{
	public:
		class UAttack*                                             Attack;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.BndEvt__VitalVisuals_K2Node_ComponentBoundEvent_0_VitalChangedDelegate__DelegateSignature
	 */
	struct ABP_Mosquito_C_BndEvt__VitalVisuals_K2Node_ComponentBoundEvent_0_VitalChangedDelegate__DelegateSignature_Params
	{
	public:
		float                                                      VitalValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.K2_OnMovementModeChanged
	 */
	struct ABP_Mosquito_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.MulticastHandleMovementMode
	 */
	struct ABP_Mosquito_C_MulticastHandleMovementMode_Params
	{
	public:
		EMovementMode                                              MovementMode;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Mosquito.BP_Mosquito_C.ExecuteUbergraph_BP_Mosquito
	 */
	struct ABP_Mosquito_C_ExecuteUbergraph_BP_Mosquito_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
