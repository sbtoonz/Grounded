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
	 * Function BP_VFX_MultiSystemAttack.BP_VFX_MultiSystemAttack_C.ReceiveBeginPlay
	 */
	struct ABP_VFX_MultiSystemAttack_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_VFX_MultiSystemAttack.BP_VFX_MultiSystemAttack_C.KillParent
	 */
	struct ABP_VFX_MultiSystemAttack_C_KillParent_Params
	{
	public:
		class UParticleSystemComponent*                            PSystem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VFX_MultiSystemAttack.BP_VFX_MultiSystemAttack_C.ExecuteUbergraph_BP_VFX_MultiSystemAttack
	 */
	struct ABP_VFX_MultiSystemAttack_C_ExecuteUbergraph_BP_VFX_MultiSystemAttack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
