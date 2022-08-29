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
	 * Function BP_Fan_B.BP_Fan_B_C.StopSound
	 */
	struct ABP_Fan_B_C_StopSound_Params
	{	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.OnRep_IsOn
	 */
	struct ABP_Fan_B_C_OnRep_IsOn_Params
	{	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.UserConstructionScript
	 */
	struct ABP_Fan_B_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.Fan_Rotation__FinishedFunc
	 */
	struct ABP_Fan_B_C_Fan_Rotation__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.Fan_Rotation__UpdateFunc
	 */
	struct ABP_Fan_B_C_Fan_Rotation__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.Timeline - SFX Automation__FinishedFunc
	 */
	struct ABP_Fan_B_C_Timeline_SFX_Automation__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.Timeline - SFX Automation__UpdateFunc
	 */
	struct ABP_Fan_B_C_Timeline_SFX_Automation__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.ReceiveBeginPlay
	 */
	struct ABP_Fan_B_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.ReceiveTick
	 */
	struct ABP_Fan_B_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Fan_B_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_821D[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.MulticastAddForce
	 */
	struct ABP_Fan_B_C_MulticastAddForce_Params
	{
	public:
		class UCharacterMovementComponent*                         CharMovementTarget;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NewForce;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.StopFan
	 */
	struct ABP_Fan_B_C_StopFan_Params
	{	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.StartFan
	 */
	struct ABP_Fan_B_C_StartFan_Params
	{	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.TimerFanOn
	 */
	struct ABP_Fan_B_C_TimerFanOn_Params
	{	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Fan_B_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.PauseFanForOptimization
	 */
	struct ABP_Fan_B_C_PauseFanForOptimization_Params
	{	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.UnpauseFanForOptimization
	 */
	struct ABP_Fan_B_C_UnpauseFanForOptimization_Params
	{	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.SetFanState
	 */
	struct ABP_Fan_B_C_SetFanState_Params
	{
	public:
		bool                                                       NewFanState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.ToggleFanVisuals
	 */
	struct ABP_Fan_B_C_ToggleFanVisuals_Params
	{
	public:
		bool                                                       NewFanVisualState;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.TimerFanOff
	 */
	struct ABP_Fan_B_C_TimerFanOff_Params
	{	};

	/**
	 * Function BP_Fan_B.BP_Fan_B_C.ExecuteUbergraph_BP_Fan_B
	 */
	struct ABP_Fan_B_C_ExecuteUbergraph_BP_Fan_B_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
