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
	 * Function BP_VolumeFog.BP_VolumeFog_C.UserConstructionScript
	 */
	struct ABP_VolumeFog_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_VolumeFog.BP_VolumeFog_C.Update Fog Colors
	 */
	struct ABP_VolumeFog_C_Update_Fog_Colors_Params
	{
	public:
		struct FLinearColor                                        AlbedoColorNear;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        AlbedoColor;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VolumeFog.BP_VolumeFog_C.ToggleActive
	 */
	struct ABP_VolumeFog_C_ToggleActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_VolumeFog.BP_VolumeFog_C.ExecuteUbergraph_BP_VolumeFog
	 */
	struct ABP_VolumeFog_C_ExecuteUbergraph_BP_VolumeFog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
