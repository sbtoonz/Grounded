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
	 * Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetSourceText
	 */
	struct UUI_StatusEffectDescription_C_SetSourceText_Params
	{	};

	/**
	 * Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetDebuffTint
	 */
	struct UUI_StatusEffectDescription_C_SetDebuffTint_Params
	{	};

	/**
	 * Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetBuffTint
	 */
	struct UUI_StatusEffectDescription_C_SetBuffTint_Params
	{	};

	/**
	 * Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetDescriptionText
	 */
	struct UUI_StatusEffectDescription_C_SetDescriptionText_Params
	{
	public:
		struct FLocString                                          DescSetter;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetImage
	 */
	struct UUI_StatusEffectDescription_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          IconSetter;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetTitleText
	 */
	struct UUI_StatusEffectDescription_C_SetTitleText_Params
	{
	public:
		struct FLocString                                          TitleSetter;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.OnListItemObjectSet
	 */
	struct UUI_StatusEffectDescription_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.BP_OnItemExpansionChanged
	 */
	struct UUI_StatusEffectDescription_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.OnGlobalColorChange
	 */
	struct UUI_StatusEffectDescription_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.BP_OnEntryReleased
	 */
	struct UUI_StatusEffectDescription_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.BP_OnItemSelectionChanged
	 */
	struct UUI_StatusEffectDescription_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetEffect
	 */
	struct UUI_StatusEffectDescription_C_SetEffect_Params
	{
	public:
		class UStatusEffect*                                       StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.Tick
	 */
	struct UUI_StatusEffectDescription_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.UpdateTimeRemaining
	 */
	struct UUI_StatusEffectDescription_C_UpdateTimeRemaining_Params
	{	};

	/**
	 * Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.ExecuteUbergraph_UI_StatusEffectDescription
	 */
	struct UUI_StatusEffectDescription_C_ExecuteUbergraph_UI_StatusEffectDescription_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HNOE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
