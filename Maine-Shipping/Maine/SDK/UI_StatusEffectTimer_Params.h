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
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.GetEffectWithLongestTimer
	 */
	struct UUI_StatusEffectTimer_C_GetEffectWithLongestTimer_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.UpdateStackText
	 */
	struct UUI_StatusEffectTimer_C_UpdateStackText_Params
	{	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.GetFirstStatusEffect
	 */
	struct UUI_StatusEffectTimer_C_GetFirstStatusEffect_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.TryRemoveEffect
	 */
	struct UUI_StatusEffectTimer_C_TryRemoveEffect_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Removed;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.TryAddEffect
	 */
	struct UUI_StatusEffectTimer_C_TryAddEffect_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AddedThisFrame;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       EffectAdded;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_246O[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnGlobalColorChange
	 */
	struct UUI_StatusEffectTimer_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.Tick
	 */
	struct UUI_StatusEffectTimer_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.Initialize
	 */
	struct UUI_StatusEffectTimer_C_Initialize_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AddedThisFrame;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.HandleColorSet
	 */
	struct UUI_StatusEffectTimer_C_HandleColorSet_Params
	{	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnAddedToFocusPath
	 */
	struct UUI_StatusEffectTimer_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnRemovedFromFocusPath
	 */
	struct UUI_StatusEffectTimer_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.BndEvt__UI_StatusEffectTimer_FocusButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_StatusEffectTimer_C_BndEvt__UI_StatusEffectTimer_FocusButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.BndEvt__UI_StatusEffectTimer_FocusButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_StatusEffectTimer_C_BndEvt__UI_StatusEffectTimer_FocusButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.PlayAnim
	 */
	struct UUI_StatusEffectTimer_C_PlayAnim_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.FocusOn
	 */
	struct UUI_StatusEffectTimer_C_FocusOn_Params
	{	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.HandleRemove
	 */
	struct UUI_StatusEffectTimer_C_HandleRemove_Params
	{	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnRemoveEffectComplete
	 */
	struct UUI_StatusEffectTimer_C_OnRemoveEffectComplete_Params
	{	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnTimerReset
	 */
	struct UUI_StatusEffectTimer_C_OnTimerReset_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.ExecuteUbergraph_UI_StatusEffectTimer
	 */
	struct UUI_StatusEffectTimer_C_ExecuteUbergraph_UI_StatusEffectTimer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnEffectFocused__DelegateSignature
	 */
	struct UUI_StatusEffectTimer_C_OnEffectFocused__DelegateSignature_Params
	{
	public:
		class UStatusEffect*                                       Effect;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnEffectHovered__DelegateSignature
	 */
	struct UUI_StatusEffectTimer_C_OnEffectHovered__DelegateSignature_Params
	{
	public:
		class UStatusEffect*                                       Effect;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimer.UI_StatusEffectTimer_C.OnStatusEffectComplete__DelegateSignature
	 */
	struct UUI_StatusEffectTimer_C_OnStatusEffectComplete__DelegateSignature_Params
	{
	public:
		class UUI_StatusEffectTimer_C*                             UI_StatusEffectPip;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
