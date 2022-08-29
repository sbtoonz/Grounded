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
	 * Function UI_TierDescription.UI_TierDescription_C.SetTool
	 */
	struct UUI_TierDescription_C_SetTool_Params
	{
	public:
		int32_t                                                    RequiredDamageTypeFlags;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TierDescription.UI_TierDescription_C.SetTier
	 */
	struct UUI_TierDescription_C_SetTier_Params
	{
	public:
		int32_t                                                    Tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TierDescription.UI_TierDescription_C.OnGlobalColorChange
	 */
	struct UUI_TierDescription_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_TierDescription.UI_TierDescription_C.ExecuteUbergraph_UI_TierDescription
	 */
	struct UUI_TierDescription_C_ExecuteUbergraph_UI_TierDescription_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
