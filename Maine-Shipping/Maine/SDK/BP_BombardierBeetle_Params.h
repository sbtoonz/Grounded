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
	 * Function BP_BombardierBeetle.BP_BombardierBeetle_C.CheckLootConditionals
	 */
	struct ABP_BombardierBeetle_C_CheckLootConditionals_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemDataRowHandle;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BombardierBeetle.BP_BombardierBeetle_C.Timeline_0__FinishedFunc
	 */
	struct ABP_BombardierBeetle_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_BombardierBeetle.BP_BombardierBeetle_C.Timeline_0__UpdateFunc
	 */
	struct ABP_BombardierBeetle_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_BombardierBeetle.BP_BombardierBeetle_C.Timeline_1__FinishedFunc
	 */
	struct ABP_BombardierBeetle_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_BombardierBeetle.BP_BombardierBeetle_C.Timeline_1__UpdateFunc
	 */
	struct ABP_BombardierBeetle_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_BombardierBeetle.BP_BombardierBeetle_C.HandleLootEffects
	 */
	struct ABP_BombardierBeetle_C_HandleLootEffects_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BombardierBeetle.BP_BombardierBeetle_C.On Combat Change
	 */
	struct ABP_BombardierBeetle_C_On_Combat_Change_Params
	{
	public:
		class ASurvivalCharacter*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInCombat;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BombardierBeetle.BP_BombardierBeetle_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature
	 */
	struct ABP_BombardierBeetle_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BombardierBeetle.BP_BombardierBeetle_C.ReceiveBeginPlay
	 */
	struct ABP_BombardierBeetle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BombardierBeetle.BP_BombardierBeetle_C.ExecuteUbergraph_BP_BombardierBeetle
	 */
	struct ABP_BombardierBeetle_C_ExecuteUbergraph_BP_BombardierBeetle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
