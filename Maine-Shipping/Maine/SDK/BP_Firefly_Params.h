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
	 * Function BP_Firefly.BP_Firefly_C.CheckLootConditionals
	 */
	struct ABP_Firefly_C_CheckLootConditionals_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemDataRowHandle;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.ToggleWingsVisibility
	 */
	struct ABP_Firefly_C_ToggleWingsVisibility_Params
	{
	public:
		bool                                                       IsFlying;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.UpdateLightDisplay
	 */
	struct ABP_Firefly_C_UpdateLightDisplay_Params
	{	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.UpdateLightState
	 */
	struct ABP_Firefly_C_UpdateLightState_Params
	{	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Firefly_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Firefly_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.Timeline_1__FinishedFunc
	 */
	struct ABP_Firefly_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.Timeline_1__UpdateFunc
	 */
	struct ABP_Firefly_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.Timeline_2__FinishedFunc
	 */
	struct ABP_Firefly_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.Timeline_2__UpdateFunc
	 */
	struct ABP_Firefly_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.Timeline_3__FinishedFunc
	 */
	struct ABP_Firefly_C_Timeline_3__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.Timeline_3__UpdateFunc
	 */
	struct ABP_Firefly_C_Timeline_3__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.ReceiveBeginPlay
	 */
	struct ABP_Firefly_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.Animate Butt Glow
	 */
	struct ABP_Firefly_C_Animate_Butt_Glow_Params
	{	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathDelegate__DelegateSignature
	 */
	struct ABP_Firefly_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathDelegate__DelegateSignature_Params
	{
	public:
		struct FDamageInfo                                         DamageInfo;                                              // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.On Combat Change
	 */
	struct ABP_Firefly_C_On_Combat_Change_Params
	{
	public:
		class ASurvivalCharacter*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInCombat;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.K2_OnMovementModeChanged
	 */
	struct ABP_Firefly_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature
	 */
	struct ABP_Firefly_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.MulticastHandleWingVIsuals
	 */
	struct ABP_Firefly_C_MulticastHandleWingVIsuals_Params
	{
	public:
		EMovementMode                                              MovementMode;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.OnHourChanged_Event_1
	 */
	struct ABP_Firefly_C_OnHourChanged_Event_1_Params
	{
	public:
		int32_t                                                    NewHour;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewDay;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.Get Distance Glow Multiplier
	 */
	struct ABP_Firefly_C_Get_Distance_Glow_Multiplier_Params
	{	};

	/**
	 * Function BP_Firefly.BP_Firefly_C.ExecuteUbergraph_BP_Firefly
	 */
	struct ABP_Firefly_C_ExecuteUbergraph_BP_Firefly_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
