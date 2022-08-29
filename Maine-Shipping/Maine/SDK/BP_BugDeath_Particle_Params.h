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
	 * Function BP_BugDeath_Particle.BP_BugDeath_Particle_C.FadeOutDecal
	 */
	struct ABP_BugDeath_Particle_C_FadeOutDecal_Params
	{	};

	/**
	 * Function BP_BugDeath_Particle.BP_BugDeath_Particle_C.FadeDecalParentCall
	 */
	struct ABP_BugDeath_Particle_C_FadeDecalParentCall_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BugDeath_Particle.BP_BugDeath_Particle_C.ReceiveBeginPlay
	 */
	struct ABP_BugDeath_Particle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BugDeath_Particle.BP_BugDeath_Particle_C.ExecuteUbergraph_BP_BugDeath_Particle
	 */
	struct ABP_BugDeath_Particle_C_ExecuteUbergraph_BP_BugDeath_Particle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D55S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
