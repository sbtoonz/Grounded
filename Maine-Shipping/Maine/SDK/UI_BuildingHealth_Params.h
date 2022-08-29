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
	 * Function UI_BuildingHealth.UI_BuildingHealth_C.GetFragileBarColor
	 */
	struct UUI_BuildingHealth_C_GetFragileBarColor_Params
	{
	public:
		float                                                      FragileRatio;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ReturnValue;                                             // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingHealth.UI_BuildingHealth_C.GetHealthBarColor
	 */
	struct UUI_BuildingHealth_C_GetHealthBarColor_Params
	{
	public:
		float                                                      HealthRatio;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ReturnValue;                                             // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingHealth.UI_BuildingHealth_C.SetBuilding
	 */
	struct UUI_BuildingHealth_C_SetBuilding_Params
	{
	public:
		class ABuilding*                                           Building;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingHealth.UI_BuildingHealth_C.OnGlobalColorChange
	 */
	struct UUI_BuildingHealth_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_BuildingHealth.UI_BuildingHealth_C.UnsetActor
	 */
	struct UUI_BuildingHealth_C_UnsetActor_Params
	{	};

	/**
	 * Function UI_BuildingHealth.UI_BuildingHealth_C.Construct
	 */
	struct UUI_BuildingHealth_C_Construct_Params
	{	};

	/**
	 * Function UI_BuildingHealth.UI_BuildingHealth_C.ExecuteUbergraph_UI_BuildingHealth
	 */
	struct UUI_BuildingHealth_C_ExecuteUbergraph_UI_BuildingHealth_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_APHO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
