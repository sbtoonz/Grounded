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
	 * Function BP_InsectPart.BP_InsectPart_C.TL_CreatureDissolve__FinishedFunc
	 */
	struct ABP_InsectPart_C_TL_CreatureDissolve__FinishedFunc_Params
	{	};

	/**
	 * Function BP_InsectPart.BP_InsectPart_C.TL_CreatureDissolve__UpdateFunc
	 */
	struct ABP_InsectPart_C_TL_CreatureDissolve__UpdateFunc_Params
	{	};

	/**
	 * Function BP_InsectPart.BP_InsectPart_C.CableDissolve__FinishedFunc
	 */
	struct ABP_InsectPart_C_CableDissolve__FinishedFunc_Params
	{	};

	/**
	 * Function BP_InsectPart.BP_InsectPart_C.CableDissolve__UpdateFunc
	 */
	struct ABP_InsectPart_C_CableDissolve__UpdateFunc_Params
	{	};

	/**
	 * Function BP_InsectPart.BP_InsectPart_C.ReceiveBeginPlay
	 */
	struct ABP_InsectPart_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_InsectPart.BP_InsectPart_C.BndEvt__InsectPartMesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature
	 */
	struct ABP_InsectPart_C_BndEvt__InsectPartMesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 SleepingComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InsectPart.BP_InsectPart_C.DissolveAfterShortTimer
	 */
	struct ABP_InsectPart_C_DissolveAfterShortTimer_Params
	{	};

	/**
	 * Function BP_InsectPart.BP_InsectPart_C.DissolveAfterFallbackTimer
	 */
	struct ABP_InsectPart_C_DissolveAfterFallbackTimer_Params
	{	};

	/**
	 * Function BP_InsectPart.BP_InsectPart_C.ReceiveActorBeginOverlap
	 */
	struct ABP_InsectPart_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InsectPart.BP_InsectPart_C.ReceiveActorEndOverlap
	 */
	struct ABP_InsectPart_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InsectPart.BP_InsectPart_C.ReceiveTick
	 */
	struct ABP_InsectPart_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InsectPart.BP_InsectPart_C.ExecuteUbergraph_BP_InsectPart
	 */
	struct ABP_InsectPart_C_ExecuteUbergraph_BP_InsectPart_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
