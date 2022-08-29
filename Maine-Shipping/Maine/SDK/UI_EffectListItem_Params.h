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
	 * Function UI_EffectListItem.UI_EffectListItem_C.SetStatusEffectTimeRemaining
	 */
	struct UUI_EffectListItem_C_SetStatusEffectTimeRemaining_Params
	{	};

	/**
	 * Function UI_EffectListItem.UI_EffectListItem_C.GetEffectSecondsLeft
	 */
	struct UUI_EffectListItem_C_GetEffectSecondsLeft_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EffectListItem.UI_EffectListItem_C.Tick
	 */
	struct UUI_EffectListItem_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EffectListItem.UI_EffectListItem_C.SetStatusEffectData
	 */
	struct UUI_EffectListItem_C_SetStatusEffectData_Params
	{
	public:
		struct FStatusEffectData                                   StatusEffect;                                            // 0x0000(0x0130)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_EffectListItem.UI_EffectListItem_C.OnGlobalColorChange
	 */
	struct UUI_EffectListItem_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_EffectListItem.UI_EffectListItem_C.SetStatusEffectUIData
	 */
	struct UUI_EffectListItem_C_SetStatusEffectUIData_Params
	{
	public:
		struct FStatusEffectData                                   StatusEffectData;                                        // 0x0000(0x0130)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_EffectListItem.UI_EffectListItem_C.SetStatusEffect
	 */
	struct UUI_EffectListItem_C_SetStatusEffect_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EffectListItem.UI_EffectListItem_C.ExecuteUbergraph_UI_EffectListItem
	 */
	struct UUI_EffectListItem_C_ExecuteUbergraph_UI_EffectListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XAPJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
