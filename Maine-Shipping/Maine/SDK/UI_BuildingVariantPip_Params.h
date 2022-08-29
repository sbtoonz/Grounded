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
	 * Function UI_BuildingVariantPip.UI_BuildingVariantPip_C.UpdateColor
	 */
	struct UUI_BuildingVariantPip_C_UpdateColor_Params
	{	};

	/**
	 * Function UI_BuildingVariantPip.UI_BuildingVariantPip_C.SetSelected
	 */
	struct UUI_BuildingVariantPip_C_SetSelected_Params
	{
	public:
		bool                                                       bState;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BuildingVariantPip.UI_BuildingVariantPip_C.OnGlobalColorChange
	 */
	struct UUI_BuildingVariantPip_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_BuildingVariantPip.UI_BuildingVariantPip_C.ExecuteUbergraph_UI_BuildingVariantPip
	 */
	struct UUI_BuildingVariantPip_C_ExecuteUbergraph_UI_BuildingVariantPip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
