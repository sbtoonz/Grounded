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
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.GetInteractionText
	 */
	struct ABP_World_Droplet_Water_C_GetInteractionText_Params
	{
	public:
		EInteractionChannel                                        Channel;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NVSZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InstigatedBy;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              OutText;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.DoAbsorbActor
	 */
	struct ABP_World_Droplet_Water_C_DoAbsorbActor_Params
	{	};

	/**
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.PlayWobbleContact
	 */
	struct ABP_World_Droplet_Water_C_PlayWobbleContact_Params
	{	};

	/**
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.DoDropletMergeIn
	 */
	struct ABP_World_Droplet_Water_C_DoDropletMergeIn_Params
	{
	public:
		class ASpawnedItemDroplet*                                 Other;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.Play VFX Contact
	 */
	struct ABP_World_Droplet_Water_C_Play_VFX_Contact_Params
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.Play SFX Contact
	 */
	struct ABP_World_Droplet_Water_C_Play_SFX_Contact_Params
	{	};

	/**
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.Get UV Coords
	 */
	struct ABP_World_Droplet_Water_C_Get_UV_Coords_Params
	{
	public:
		struct FVector                                             Object_Position_WS;                                      // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             UV_Grid;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             UV_Segment;                                              // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.bumpWobble__FinishedFunc
	 */
	struct ABP_World_Droplet_Water_C_bumpWobble__FinishedFunc_Params
	{	};

	/**
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.bumpWobble__UpdateFunc
	 */
	struct ABP_World_Droplet_Water_C_bumpWobble__UpdateFunc_Params
	{	};

	/**
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.On Droplet Merge In
	 */
	struct ABP_World_Droplet_Water_C_On_Droplet_Merge_In_Params
	{
	public:
		class ASpawnedItemDroplet*                                 Other;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.On Absorb Actor
	 */
	struct ABP_World_Droplet_Water_C_On_Absorb_Actor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.NotifySwapped
	 */
	struct ABP_World_Droplet_Water_C_NotifySwapped_Params
	{
	public:
		bool                                                       bFromDamage;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.DrawAtLocation
	 */
	struct ABP_World_Droplet_Water_C_DrawAtLocation_Params
	{	};

	/**
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.ReceiveBeginPlay
	 */
	struct ABP_World_Droplet_Water_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.PlayBumpWobble
	 */
	struct ABP_World_Droplet_Water_C_PlayBumpWobble_Params
	{	};

	/**
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.PlayContactEffects
	 */
	struct ABP_World_Droplet_Water_C_PlayContactEffects_Params
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_World_Droplet_Water.BP_World_Droplet_Water_C.ExecuteUbergraph_BP_World_Droplet_Water
	 */
	struct ABP_World_Droplet_Water_C_ExecuteUbergraph_BP_World_Droplet_Water_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
