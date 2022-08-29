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
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.AddIconReferenceCategory
	 */
	struct UUI_OSConfigInterface_C_AddIconReferenceCategory_Params
	{
	public:
		struct FDataTableRowHandle                                 CategoryData;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.SetDaysAlive
	 */
	struct UUI_OSConfigInterface_C_SetDaysAlive_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.TintDropdowns
	 */
	struct UUI_OSConfigInterface_C_TintDropdowns_Params
	{
	public:
		class UComboBoxString*                                     Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.RefreshDropdowns
	 */
	struct UUI_OSConfigInterface_C_RefreshDropdowns_Params
	{	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.PopulateThemes
	 */
	struct UUI_OSConfigInterface_C_PopulateThemes_Params
	{
	public:
		class UComboBoxString*                                     Dropdown;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Nightmode;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8HCZ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.RefreshDropdownColors
	 */
	struct UUI_OSConfigInterface_C_RefreshDropdownColors_Params
	{
	public:
		class UComboBoxString*                                     Dropdown;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.GetSubheaderColor
	 */
	struct UUI_OSConfigInterface_C_GetSubheaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.GetBorderColor
	 */
	struct UUI_OSConfigInterface_C_GetBorderColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.RefreshBottomButtons
	 */
	struct UUI_OSConfigInterface_C_RefreshBottomButtons_Params
	{	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.GetHeaderColor
	 */
	struct UUI_OSConfigInterface_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.Construct
	 */
	struct UUI_OSConfigInterface_C_Construct_Params
	{	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.RefreshUI
	 */
	struct UUI_OSConfigInterface_C_RefreshUI_Params
	{	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.BndEvt__Close_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_OSConfigInterface_C_BndEvt__Close_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.OnGlobalColorChange
	 */
	struct UUI_OSConfigInterface_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.BndEvt__NarratableComboBoxString_88_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UUI_OSConfigInterface_C_BndEvt__NarratableComboBoxString_88_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.BndEvt__NightModeDropdown_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UUI_OSConfigInterface_C_BndEvt__NightModeDropdown_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.BndEvt__DayModeDropdown_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature
	 */
	struct UUI_OSConfigInterface_C_BndEvt__DayModeDropdown_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.BndEvt__NightModeDropdown_K2Node_ComponentBoundEvent_4_OnOpeningEvent__DelegateSignature
	 */
	struct UUI_OSConfigInterface_C_BndEvt__NightModeDropdown_K2Node_ComponentBoundEvent_4_OnOpeningEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.Tick
	 */
	struct UUI_OSConfigInterface_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.OnInitialized
	 */
	struct UUI_OSConfigInterface_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_OSConfigInterface.UI_OSConfigInterface_C.ExecuteUbergraph_UI_OSConfigInterface
	 */
	struct UUI_OSConfigInterface_C_ExecuteUbergraph_UI_OSConfigInterface_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZQB0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
