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
	 * Function UI_StatusEffectTimerGrid.UI_StatusEffectTimerGrid_C.Construct
	 */
	struct UUI_StatusEffectTimerGrid_C_Construct_Params
	{	};

	/**
	 * Function UI_StatusEffectTimerGrid.UI_StatusEffectTimerGrid_C.OnSubEffectHovered
	 */
	struct UUI_StatusEffectTimerGrid_C_OnSubEffectHovered_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimerGrid.UI_StatusEffectTimerGrid_C.OnGlobalColorChange
	 */
	struct UUI_StatusEffectTimerGrid_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_StatusEffectTimerGrid.UI_StatusEffectTimerGrid_C.OnChildFocusedEffectDestroyed
	 */
	struct UUI_StatusEffectTimerGrid_C_OnChildFocusedEffectDestroyed_Params
	{	};

	/**
	 * Function UI_StatusEffectTimerGrid.UI_StatusEffectTimerGrid_C.OnSubEffectFocused
	 */
	struct UUI_StatusEffectTimerGrid_C_OnSubEffectFocused_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimerGrid.UI_StatusEffectTimerGrid_C.ExecuteUbergraph_UI_StatusEffectTimerGrid
	 */
	struct UUI_StatusEffectTimerGrid_C_ExecuteUbergraph_UI_StatusEffectTimerGrid_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimerGrid.UI_StatusEffectTimerGrid_C.OnEffectFocused__DelegateSignature
	 */
	struct UUI_StatusEffectTimerGrid_C_OnEffectFocused__DelegateSignature_Params
	{
	public:
		class UStatusEffect*                                       StatuEffect;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimerGrid.UI_StatusEffectTimerGrid_C.OnFocusedEffectLost__DelegateSignature
	 */
	struct UUI_StatusEffectTimerGrid_C_OnFocusedEffectLost__DelegateSignature_Params
	{	};

	/**
	 * Function UI_StatusEffectTimerGrid.UI_StatusEffectTimerGrid_C.OnEffectHovered__DelegateSignature
	 */
	struct UUI_StatusEffectTimerGrid_C_OnEffectHovered__DelegateSignature_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
