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
	 * Function UI_InGameMenu.UI_InGameMenu_C.OnPreviewKeyDown
	 */
	struct UUI_InGameMenu_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.OnKeyDown
	 */
	struct UUI_InGameMenu_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.HandleKeyEventChord
	 */
	struct UUI_InGameMenu_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VZGT[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.Get Halloween Stuff
	 */
	struct UUI_InGameMenu_C_Get_Halloween_Stuff_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.SCABOSLerpDirectionBack
	 */
	struct UUI_InGameMenu_C_SCABOSLerpDirectionBack_Params
	{
	public:
		class UImage*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.SCABOSLerpDirectionForward
	 */
	struct UUI_InGameMenu_C_SCABOSLerpDirectionForward_Params
	{
	public:
		class UImage*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetMaterialB
	 */
	struct UUI_InGameMenu_C_GetMaterialB_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.PreviousMenuTab
	 */
	struct UUI_InGameMenu_C_PreviousMenuTab_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.AdvanceMenuTab
	 */
	struct UUI_InGameMenu_C_AdvanceMenuTab_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetMinuteText
	 */
	struct UUI_InGameMenu_C_GetMinuteText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetHourText
	 */
	struct UUI_InGameMenu_C_GetHourText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetDaysAliveText
	 */
	struct UUI_InGameMenu_C_GetDaysAliveText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetBGColor
	 */
	struct UUI_InGameMenu_C_GetBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetScienceColor
	 */
	struct UUI_InGameMenu_C_GetScienceColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetMaterialColorA
	 */
	struct UUI_InGameMenu_C_GetMaterialColorA_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetSubheaderColor
	 */
	struct UUI_InGameMenu_C_GetSubheaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.ActivateInGameMenuScreenOfType
	 */
	struct UUI_InGameMenu_C_ActivateInGameMenuScreenOfType_Params
	{
	public:
		EInGameMenuScreenType                                      MenuType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.SetLastSelectedInGameMenuScreen
	 */
	struct UUI_InGameMenu_C_SetLastSelectedInGameMenuScreen_Params
	{
	public:
		EInGameMenuScreenType                                      MenuType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B6YN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.RefreshTabColors
	 */
	struct UUI_InGameMenu_C_RefreshTabColors_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSBGDarkener
	 */
	struct UUI_InGameMenu_C_GetSCABOSBGDarkener_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSAccentThree
	 */
	struct UUI_InGameMenu_C_GetSCABOSAccentThree_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetHeaderColor
	 */
	struct UUI_InGameMenu_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetBasicTextColor
	 */
	struct UUI_InGameMenu_C_GetBasicTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSBaseColor
	 */
	struct UUI_InGameMenu_C_GetSCABOSBaseColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSBG
	 */
	struct UUI_InGameMenu_C_GetSCABOSBG_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSAccentOne
	 */
	struct UUI_InGameMenu_C_GetSCABOSAccentOne_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSAccentTwo
	 */
	struct UUI_InGameMenu_C_GetSCABOSAccentTwo_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetGamepadVisibility
	 */
	struct UUI_InGameMenu_C_GetGamepadVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.IsTabSelected
	 */
	struct UUI_InGameMenu_C_IsTabSelected_Params
	{
	public:
		class UUI_TabButton_C*                                     Tab;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.GetScienceCountText
	 */
	struct UUI_InGameMenu_C_GetScienceCountText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.StopInGameHum
	 */
	struct UUI_InGameMenu_C_StopInGameHum_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.SetTabCheckedState
	 */
	struct UUI_InGameMenu_C_SetTabCheckedState_Params
	{
	public:
		class UUI_TabButton_C*                                     Selected;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.Construct
	 */
	struct UUI_InGameMenu_C_Construct_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.Close Menu
	 */
	struct UUI_InGameMenu_C_Close_Menu_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.ObjectivesChanged
	 */
	struct UUI_InGameMenu_C_ObjectivesChanged_Params
	{
	public:
		class UQuest*                                              QuestData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__InventoryTab_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InGameMenu_C_BndEvt__InventoryTab_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_TabButton_C*                                     TabButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__DebugItemsTab_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InGameMenu_C_BndEvt__DebugItemsTab_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_TabButton_C*                                     TabButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__ObjectivesTab_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InGameMenu_C_BndEvt__ObjectivesTab_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_TabButton_C*                                     TabButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__CraftingTab_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InGameMenu_C_BndEvt__CraftingTab_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_TabButton_C*                                     TabButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.Destruct
	 */
	struct UUI_InGameMenu_C_Destruct_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__OptionsTab_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InGameMenu_C_BndEvt__OptionsTab_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_TabButton_C*                                     TabButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.SetInventorySubMenuActive
	 */
	struct UUI_InGameMenu_C_SetInventorySubMenuActive_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.SetCraftingSubmenuActive
	 */
	struct UUI_InGameMenu_C_SetCraftingSubmenuActive_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.SetDebugSubmenuActive
	 */
	struct UUI_InGameMenu_C_SetDebugSubmenuActive_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.SetObjectivesSubmenuActive
	 */
	struct UUI_InGameMenu_C_SetObjectivesSubmenuActive_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.AdvanceTab
	 */
	struct UUI_InGameMenu_C_AdvanceTab_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.PreviousTab
	 */
	struct UUI_InGameMenu_C_PreviousTab_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.Set OptionsSubmenuActive
	 */
	struct UUI_InGameMenu_C_Set_OptionsSubmenuActive_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.RefreshWidget
	 */
	struct UUI_InGameMenu_C_RefreshWidget_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__MapTab_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InGameMenu_C_BndEvt__MapTab_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_TabButton_C*                                     TabButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.SetMapSubmenuActive
	 */
	struct UUI_InGameMenu_C_SetMapSubmenuActive_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.SetKeyItemsSubmenuActive
	 */
	struct UUI_InGameMenu_C_SetKeyItemsSubmenuActive_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__KeyItemsTab_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InGameMenu_C_BndEvt__KeyItemsTab_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_TabButton_C*                                     TabButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.OnClose
	 */
	struct UUI_InGameMenu_C_OnClose_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.SetTabButtonActive
	 */
	struct UUI_InGameMenu_C_SetTabButtonActive_Params
	{
	public:
		class UUI_TabButton_C*                                     UITabButton;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.OnGlobalColorChange
	 */
	struct UUI_InGameMenu_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.ToggleInventorySubmenu
	 */
	struct UUI_InGameMenu_C_ToggleInventorySubmenu_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.ToggleCraftingSubmenu
	 */
	struct UUI_InGameMenu_C_ToggleCraftingSubmenu_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.ToggleMapSubmenu
	 */
	struct UUI_InGameMenu_C_ToggleMapSubmenu_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.ToggleObjectivesSubmenu
	 */
	struct UUI_InGameMenu_C_ToggleObjectivesSubmenu_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.ToggleKeyItemsSubmenu
	 */
	struct UUI_InGameMenu_C_ToggleKeyItemsSubmenu_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.ToggleDebugSubmenu
	 */
	struct UUI_InGameMenu_C_ToggleDebugSubmenu_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.ToggleOptionsSubmenu
	 */
	struct UUI_InGameMenu_C_ToggleOptionsSubmenu_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__StatusTab_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InGameMenu_C_BndEvt__StatusTab_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_TabButton_C*                                     TabButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.SetStatusSubmenuActive
	 */
	struct UUI_InGameMenu_C_SetStatusSubmenuActive_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.ToggleStatusSubmenu
	 */
	struct UUI_InGameMenu_C_ToggleStatusSubmenu_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.HandleAudio
	 */
	struct UUI_InGameMenu_C_HandleAudio_Params
	{	};

	/**
	 * Function UI_InGameMenu.UI_InGameMenu_C.ExecuteUbergraph_UI_InGameMenu
	 */
	struct UUI_InGameMenu_C_ExecuteUbergraph_UI_InGameMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YC07[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
