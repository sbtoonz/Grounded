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
	 * Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.GetObjectUVCoords
	 */
	struct ABP_Landscape_RT_Manager_C_GetObjectUVCoords_Params
	{
	public:
		struct FVector                                             Object_Location;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             UV_Grid;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             UV_Segment;                                              // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.ClearRenderTarget
	 */
	struct ABP_Landscape_RT_Manager_C_ClearRenderTarget_Params
	{	};

	/**
	 * Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.Draw To Render Target
	 */
	struct ABP_Landscape_RT_Manager_C_Draw_To_Render_Target_Params
	{	};

	/**
	 * Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.ReceiveBeginPlay
	 */
	struct ABP_Landscape_RT_Manager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.ReceiveTick
	 */
	struct ABP_Landscape_RT_Manager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.ExecuteUbergraph_BP_Landscape_RT_Manager
	 */
	struct ABP_Landscape_RT_Manager_C_ExecuteUbergraph_BP_Landscape_RT_Manager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
