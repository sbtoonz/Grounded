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
	 * Function BP_DivingBellSpider.BP_DivingBellSpider_C.CheckLootConditionals
	 */
	struct ABP_DivingBellSpider_C_CheckLootConditionals_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemDataRowHandle;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DivingBellSpider.BP_DivingBellSpider_C.Timeline_0__FinishedFunc
	 */
	struct ABP_DivingBellSpider_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_DivingBellSpider.BP_DivingBellSpider_C.Timeline_0__UpdateFunc
	 */
	struct ABP_DivingBellSpider_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_DivingBellSpider.BP_DivingBellSpider_C.Timeline_1__FinishedFunc
	 */
	struct ABP_DivingBellSpider_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_DivingBellSpider.BP_DivingBellSpider_C.Timeline_1__UpdateFunc
	 */
	struct ABP_DivingBellSpider_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_DivingBellSpider.BP_DivingBellSpider_C.ReceiveBeginPlay
	 */
	struct ABP_DivingBellSpider_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DivingBellSpider.BP_DivingBellSpider_C.On Combat Change
	 */
	struct ABP_DivingBellSpider_C_On_Combat_Change_Params
	{
	public:
		class ASurvivalCharacter*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInCombat;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DivingBellSpider.BP_DivingBellSpider_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamagedDelegate__DelegateSignature
	 */
	struct ABP_DivingBellSpider_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamagedDelegate__DelegateSignature_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_12MC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageInfo                                         DamageInfo;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseLODActor*                                       DamageCauser;                                            // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsKillingBlow;                                           // 0x0080(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DivingBellSpider.BP_DivingBellSpider_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature
	 */
	struct ABP_DivingBellSpider_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DivingBellSpider.BP_DivingBellSpider_C.ExecuteUbergraph_BP_DivingBellSpider
	 */
	struct ABP_DivingBellSpider_C_ExecuteUbergraph_BP_DivingBellSpider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
