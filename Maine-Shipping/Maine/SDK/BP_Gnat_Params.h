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
	 * Function BP_Gnat.BP_Gnat_C.CheckLootConditionals
	 */
	struct ABP_Gnat_C_CheckLootConditionals_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemDataRowHandle;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Gnat.BP_Gnat_C.UserConstructionScript
	 */
	struct ABP_Gnat_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Gnat.BP_Gnat_C.Timeline_wingDeath__FinishedFunc
	 */
	struct ABP_Gnat_C_Timeline_wingDeath__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Gnat.BP_Gnat_C.Timeline_wingDeath__UpdateFunc
	 */
	struct ABP_Gnat_C_Timeline_wingDeath__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Gnat.BP_Gnat_C.Timeline_wingFlap__FinishedFunc
	 */
	struct ABP_Gnat_C_Timeline_wingFlap__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Gnat.BP_Gnat_C.Timeline_wingFlap__UpdateFunc
	 */
	struct ABP_Gnat_C_Timeline_wingFlap__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Gnat.BP_Gnat_C.ReceiveBeginPlay
	 */
	struct ABP_Gnat_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Gnat.BP_Gnat_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Gnat_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Gnat.BP_Gnat_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHealthStateChangedDelegate__DelegateSignature
	 */
	struct ABP_Gnat_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHealthStateChangedDelegate__DelegateSignature_Params
	{
	public:
		EHealthState                                               NewHealthState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Gnat.BP_Gnat_C.Handle Boop
	 */
	struct ABP_Gnat_C_Handle_Boop_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Gnat.BP_Gnat_C.ExecuteUbergraph_BP_Gnat
	 */
	struct ABP_Gnat_C_ExecuteUbergraph_BP_Gnat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
