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
	 * Function BP_Pond_Biodome.BP_Pond_Biodome_C.SetRotationY
	 */
	struct ABP_Pond_Biodome_C_SetRotationY_Params
	{
	public:
		class UStaticMeshComponent*                                TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewRotationY;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Pond_Biodome.BP_Pond_Biodome_C.RotateInnerShields__FinishedFunc
	 */
	struct ABP_Pond_Biodome_C_RotateInnerShields__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Pond_Biodome.BP_Pond_Biodome_C.RotateInnerShields__UpdateFunc
	 */
	struct ABP_Pond_Biodome_C_RotateInnerShields__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Pond_Biodome.BP_Pond_Biodome_C.RotateInnerShields__StartNext__EventFunc
	 */
	struct ABP_Pond_Biodome_C_RotateInnerShields__StartNext__EventFunc_Params
	{	};

	/**
	 * Function BP_Pond_Biodome.BP_Pond_Biodome_C.RotateMidShields__FinishedFunc
	 */
	struct ABP_Pond_Biodome_C_RotateMidShields__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Pond_Biodome.BP_Pond_Biodome_C.RotateMidShields__UpdateFunc
	 */
	struct ABP_Pond_Biodome_C_RotateMidShields__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Pond_Biodome.BP_Pond_Biodome_C.RotateMidShields__StartNext__EventFunc
	 */
	struct ABP_Pond_Biodome_C_RotateMidShields__StartNext__EventFunc_Params
	{	};

	/**
	 * Function BP_Pond_Biodome.BP_Pond_Biodome_C.RotateOuterShields__FinishedFunc
	 */
	struct ABP_Pond_Biodome_C_RotateOuterShields__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Pond_Biodome.BP_Pond_Biodome_C.RotateOuterShields__UpdateFunc
	 */
	struct ABP_Pond_Biodome_C_RotateOuterShields__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Pond_Biodome.BP_Pond_Biodome_C.TL_DomeLightTransition__FinishedFunc
	 */
	struct ABP_Pond_Biodome_C_TL_DomeLightTransition__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Pond_Biodome.BP_Pond_Biodome_C.TL_DomeLightTransition__UpdateFunc
	 */
	struct ABP_Pond_Biodome_C_TL_DomeLightTransition__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Pond_Biodome.BP_Pond_Biodome_C.StartDomeOpeningSequence
	 */
	struct ABP_Pond_Biodome_C_StartDomeOpeningSequence_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Pond_Biodome.BP_Pond_Biodome_C.ReceiveBeginPlay
	 */
	struct ABP_Pond_Biodome_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Pond_Biodome.BP_Pond_Biodome_C.BndEvt__ConditionalToggle_DomeOpen_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature
	 */
	struct ABP_Pond_Biodome_C_BndEvt__ConditionalToggle_DomeOpen_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Pond_Biodome.BP_Pond_Biodome_C.ExecuteUbergraph_BP_Pond_Biodome
	 */
	struct ABP_Pond_Biodome_C_ExecuteUbergraph_BP_Pond_Biodome_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
