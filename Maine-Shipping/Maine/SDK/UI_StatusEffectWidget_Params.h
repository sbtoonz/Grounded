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
	 * Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.SetStatusEffectTypeAndCount
	 */
	struct UUI_StatusEffectWidget_C_SetStatusEffectTypeAndCount_Params
	{
	public:
		struct FStatusEffectUIData                                 Type;                                                    // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    Count;                                                   // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.SetShowEffectText
	 */
	struct UUI_StatusEffectWidget_C_SetShowEffectText_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.OnGlobalColorChange
	 */
	struct UUI_StatusEffectWidget_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.SetStatusEffectData
	 */
	struct UUI_StatusEffectWidget_C_SetStatusEffectData_Params
	{
	public:
		struct FStatusEffectData                                   StatusEffect;                                            // 0x0000(0x0130)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.Construct
	 */
	struct UUI_StatusEffectWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.PreConstruct
	 */
	struct UUI_StatusEffectWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.ExecuteUbergraph_UI_StatusEffectWidget
	 */
	struct UUI_StatusEffectWidget_C_ExecuteUbergraph_UI_StatusEffectWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
