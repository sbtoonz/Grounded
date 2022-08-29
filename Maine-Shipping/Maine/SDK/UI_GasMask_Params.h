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
	 * Function UI_GasMask.UI_GasMask_C.RefreshVisuals
	 */
	struct UUI_GasMask_C_RefreshVisuals_Params
	{	};

	/**
	 * Function UI_GasMask.UI_GasMask_C.GetMaskDurabilityBarPercent
	 */
	struct UUI_GasMask_C_GetMaskDurabilityBarPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WRPN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_GasMask.UI_GasMask_C.OnGlobalColorChange
	 */
	struct UUI_GasMask_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_GasMask.UI_GasMask_C.Construct
	 */
	struct UUI_GasMask_C_Construct_Params
	{	};

	/**
	 * Function UI_GasMask.UI_GasMask_C.ExecuteUbergraph_UI_GasMask
	 */
	struct UUI_GasMask_C_ExecuteUbergraph_UI_GasMask_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
