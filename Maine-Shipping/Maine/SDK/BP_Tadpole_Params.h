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
	 * Function BP_Tadpole.BP_Tadpole_C.CheckLootConditionals
	 */
	struct ABP_Tadpole_C_CheckLootConditionals_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemDataRowHandle;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Tadpole.BP_Tadpole_C.pitch_smoothing__FinishedFunc
	 */
	struct ABP_Tadpole_C_pitch_smoothing__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Tadpole.BP_Tadpole_C.pitch_smoothing__UpdateFunc
	 */
	struct ABP_Tadpole_C_pitch_smoothing__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Tadpole.BP_Tadpole_C.ReceiveTick
	 */
	struct ABP_Tadpole_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tadpole.BP_Tadpole_C.ReceiveBeginPlay
	 */
	struct ABP_Tadpole_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Tadpole.BP_Tadpole_C.Audio_TadpoleMvmt
	 */
	struct ABP_Tadpole_C_Audio_TadpoleMvmt_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OldLocation;                                             // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OldVelocity;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tadpole.BP_Tadpole_C.SpeedUpdate
	 */
	struct ABP_Tadpole_C_SpeedUpdate_Params
	{	};

	/**
	 * Function BP_Tadpole.BP_Tadpole_C.EvaluateAudio
	 */
	struct ABP_Tadpole_C_EvaluateAudio_Params
	{	};

	/**
	 * Function BP_Tadpole.BP_Tadpole_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathDelegate__DelegateSignature
	 */
	struct ABP_Tadpole_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathDelegate__DelegateSignature_Params
	{
	public:
		struct FDamageInfo                                         DamageInfo;                                              // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Tadpole.BP_Tadpole_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature
	 */
	struct ABP_Tadpole_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHandleEffectsEvent__DelegateSignature_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tadpole.BP_Tadpole_C.ExecuteUbergraph_BP_Tadpole
	 */
	struct ABP_Tadpole_C_ExecuteUbergraph_BP_Tadpole_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
