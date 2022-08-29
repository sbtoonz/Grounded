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
	 * Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.FocusOnChildTimer
	 */
	struct UUI_StatusEffectTimerRow_C_FocusOnChildTimer_Params
	{
	public:
		bool                                                       FocusAdded;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_63L6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.DetermineEffectsToDisplay
	 */
	struct UUI_StatusEffectTimerRow_C_DetermineEffectsToDisplay_Params
	{	};

	/**
	 * Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnPossessedPlayerChange
	 */
	struct UUI_StatusEffectTimerRow_C_OnPossessedPlayerChange_Params
	{
	public:
		class ASurvivalPlayerCharacter*                            NewPlayerCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnStatusEffectAdded
	 */
	struct UUI_StatusEffectTimerRow_C_OnStatusEffectAdded_Params
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffect*                                       StatusEffect;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnEffectRemoved
	 */
	struct UUI_StatusEffectTimerRow_C_OnEffectRemoved_Params
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffect*                                       StatusEffect;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnEffectAddedOrRemoved
	 */
	struct UUI_StatusEffectTimerRow_C_OnEffectAddedOrRemoved_Params
	{	};

	/**
	 * Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnSubEffectHovered
	 */
	struct UUI_StatusEffectTimerRow_C_OnSubEffectHovered_Params
	{
	public:
		class UStatusEffect*                                       Effect;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.HandleAddStatusEffect
	 */
	struct UUI_StatusEffectTimerRow_C_HandleAddStatusEffect_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AddedThisFrame;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnSubEffectFocused
	 */
	struct UUI_StatusEffectTimerRow_C_OnSubEffectFocused_Params
	{
	public:
		class UStatusEffect*                                       Effect;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnGlobalColorChange
	 */
	struct UUI_StatusEffectTimerRow_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.Construct
	 */
	struct UUI_StatusEffectTimerRow_C_Construct_Params
	{	};

	/**
	 * Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnStatusEffectRemovalComplete
	 */
	struct UUI_StatusEffectTimerRow_C_OnStatusEffectRemovalComplete_Params
	{
	public:
		class UUI_StatusEffectTimer_C*                             UI_StatusEffectPip;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.ExecuteUbergraph_UI_StatusEffectTimerRow
	 */
	struct UUI_StatusEffectTimerRow_C_ExecuteUbergraph_UI_StatusEffectTimerRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnEffectFocused__DelegateSignature
	 */
	struct UUI_StatusEffectTimerRow_C_OnEffectFocused__DelegateSignature_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnFocusedEffectLost__DelegateSignature
	 */
	struct UUI_StatusEffectTimerRow_C_OnFocusedEffectLost__DelegateSignature_Params
	{	};

	/**
	 * Function UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C.OnEffectHovered__DelegateSignature
	 */
	struct UUI_StatusEffectTimerRow_C_OnEffectHovered__DelegateSignature_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
