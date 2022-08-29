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
	 * Function BP_Spider_BASE.BP_Spider_BASE_C.CreateEyeDMI
	 */
	struct ABP_Spider_BASE_C_CreateEyeDMI_Params
	{	};

	/**
	 * Function BP_Spider_BASE.BP_Spider_BASE_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Spider_BASE_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Spider_BASE.BP_Spider_BASE_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Spider_BASE_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Spider_BASE.BP_Spider_BASE_C.Timeline_1__FinishedFunc
	 */
	struct ABP_Spider_BASE_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Spider_BASE.BP_Spider_BASE_C.Timeline_1__UpdateFunc
	 */
	struct ABP_Spider_BASE_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Spider_BASE.BP_Spider_BASE_C.On Combat Change
	 */
	struct ABP_Spider_BASE_C_On_Combat_Change_Params
	{
	public:
		class ASurvivalCharacter*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInCombat;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Spider_BASE.BP_Spider_BASE_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHandleEffectsEvent__DelegateSignature
	 */
	struct ABP_Spider_BASE_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_OnHandleEffectsEvent__DelegateSignature_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spider_BASE.BP_Spider_BASE_C.ReceiveBeginPlay
	 */
	struct ABP_Spider_BASE_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Spider_BASE.BP_Spider_BASE_C.ArachnophobiaSafeModeChanged
	 */
	struct ABP_Spider_BASE_C_ArachnophobiaSafeModeChanged_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spider_BASE.BP_Spider_BASE_C.ReceiveEndPlay
	 */
	struct ABP_Spider_BASE_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spider_BASE.BP_Spider_BASE_C.ExecuteUbergraph_BP_Spider_BASE
	 */
	struct ABP_Spider_BASE_C_ExecuteUbergraph_BP_Spider_BASE_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
