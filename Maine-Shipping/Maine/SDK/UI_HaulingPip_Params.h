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
	 * Function UI_HaulingPip.UI_HaulingPip_C.SetFilled
	 */
	struct UUI_HaulingPip_C_SetFilled_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HaulingPip.UI_HaulingPip_C.PreConstruct
	 */
	struct UUI_HaulingPip_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HaulingPip.UI_HaulingPip_C.OnGlobalColorChange
	 */
	struct UUI_HaulingPip_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_HaulingPip.UI_HaulingPip_C.ExecuteUbergraph_UI_HaulingPip
	 */
	struct UUI_HaulingPip_C_ExecuteUbergraph_UI_HaulingPip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
