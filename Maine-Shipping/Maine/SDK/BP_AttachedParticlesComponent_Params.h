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
	 * Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.ReceiveTick
	 */
	struct UBP_AttachedParticlesComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.BeginOverlapWeedKiller
	 */
	struct UBP_AttachedParticlesComponent_C_BeginOverlapWeedKiller_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.EndOverlapWeedKiller
	 */
	struct UBP_AttachedParticlesComponent_C_EndOverlapWeedKiller_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.BeginOverlapLab
	 */
	struct UBP_AttachedParticlesComponent_C_BeginOverlapLab_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.EndOverlapLab
	 */
	struct UBP_AttachedParticlesComponent_C_EndOverlapLab_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.SetupEffects
	 */
	struct UBP_AttachedParticlesComponent_C_SetupEffects_Params
	{	};

	/**
	 * Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.SetWaterParticles
	 */
	struct UBP_AttachedParticlesComponent_C_SetWaterParticles_Params
	{
	public:
		bool                                                       InWater;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PZ5W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Water_Large_C*                                   OverlappedWaterVolume;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.EnableWaterParticleOverrride
	 */
	struct UBP_AttachedParticlesComponent_C_EnableWaterParticleOverrride_Params
	{	};

	/**
	 * Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.DisableWaterParticleOverride
	 */
	struct UBP_AttachedParticlesComponent_C_DisableWaterParticleOverride_Params
	{	};

	/**
	 * Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.ExecuteUbergraph_BP_AttachedParticlesComponent
	 */
	struct UBP_AttachedParticlesComponent_C_ExecuteUbergraph_BP_AttachedParticlesComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
