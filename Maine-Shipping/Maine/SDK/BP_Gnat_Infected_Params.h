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
	 * Function BP_Gnat_Infected.BP_Gnat_Infected_C.CheckLootConditionals
	 */
	struct ABP_Gnat_Infected_C_CheckLootConditionals_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemDataRowHandle;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Gnat_Infected.BP_Gnat_Infected_C.Handle Boop
	 */
	struct ABP_Gnat_Infected_C_Handle_Boop_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Gnat_Infected.BP_Gnat_Infected_C.BndEvt__BP_Gnat_Infected_HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature
	 */
	struct ABP_Gnat_Infected_C_BndEvt__BP_Gnat_Infected_HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Gnat_Infected.BP_Gnat_Infected_C.ReceiveBeginPlay
	 */
	struct ABP_Gnat_Infected_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Gnat_Infected.BP_Gnat_Infected_C.On Play Reaction
	 */
	struct ABP_Gnat_Infected_C_On_Play_Reaction_Params
	{
	public:
		class UReactionComponent*                                  Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHitReactionType                                           ReactionType;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Gnat_Infected.BP_Gnat_Infected_C.ExecuteUbergraph_BP_Gnat_Infected
	 */
	struct ABP_Gnat_Infected_C_ExecuteUbergraph_BP_Gnat_Infected_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
