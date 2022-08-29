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
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.SetDebuffTint
	 */
	struct UUI_StatusEffectTutorialDescription_C_SetDebuffTint_Params
	{	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.SetBuffTint
	 */
	struct UUI_StatusEffectTutorialDescription_C_SetBuffTint_Params
	{	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.SetDescriptionText
	 */
	struct UUI_StatusEffectTutorialDescription_C_SetDescriptionText_Params
	{
	public:
		struct FLocString                                          DescSetter;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.SetImage
	 */
	struct UUI_StatusEffectTutorialDescription_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          IconSetter;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.SetTitleText
	 */
	struct UUI_StatusEffectTutorialDescription_C_SetTitleText_Params
	{
	public:
		struct FLocString                                          TitleSetter;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BP_OnEntryReleased
	 */
	struct UUI_StatusEffectTutorialDescription_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BP_OnItemExpansionChanged
	 */
	struct UUI_StatusEffectTutorialDescription_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BP_OnItemSelectionChanged
	 */
	struct UUI_StatusEffectTutorialDescription_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.PreConstruct
	 */
	struct UUI_StatusEffectTutorialDescription_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.OnGlobalColorChange
	 */
	struct UUI_StatusEffectTutorialDescription_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.OnRemovedFromFocusPath
	 */
	struct UUI_StatusEffectTutorialDescription_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.OnAddedToFocusPath
	 */
	struct UUI_StatusEffectTutorialDescription_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BndEvt__BtnBG_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_StatusEffectTutorialDescription_C_BndEvt__BtnBG_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BndEvt__BtnBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_StatusEffectTutorialDescription_C_BndEvt__BtnBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.BndEvt__BtnBG_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_StatusEffectTutorialDescription_C_BndEvt__BtnBG_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.OnListItemObjectSet
	 */
	struct UUI_StatusEffectTutorialDescription_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.RefreshDisplay
	 */
	struct UUI_StatusEffectTutorialDescription_C_RefreshDisplay_Params
	{	};

	/**
	 * Function UI_StatusEffectTutorialDescription.UI_StatusEffectTutorialDescription_C.ExecuteUbergraph_UI_StatusEffectTutorialDescription
	 */
	struct UUI_StatusEffectTutorialDescription_C_ExecuteUbergraph_UI_StatusEffectTutorialDescription_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
