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
	 * Function BP_WidgetManager.BP_WidgetManager_C.CreateStringInputWindow
	 */
	struct UBP_WidgetManager_C_CreateStringInputWindow_Params
	{
	public:
		class FString                                              TitleText;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              BodyText;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsPassword;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3GD4[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_StringInputPopup_C*                              ConfirmationWindow;                                      // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WidgetManager.BP_WidgetManager_C.OpenQuestsMenu
	 */
	struct UBP_WidgetManager_C_OpenQuestsMenu_Params
	{	};

	/**
	 * Function BP_WidgetManager.BP_WidgetManager_C.ClearStates
	 */
	struct UBP_WidgetManager_C_ClearStates_Params
	{	};

	/**
	 * Function BP_WidgetManager.BP_WidgetManager_C.CreateConfirmationWindow
	 */
	struct UBP_WidgetManager_C_CreateConfirmationWindow_Params
	{
	public:
		class FString                                              TitleText;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              BodyText;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       OkButtonOnly;                                            // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HXBT[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_ConfirmationPopUp_C*                             ConfirmationWindow;                                      // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WidgetManager.BP_WidgetManager_C.OpenMapMenu
	 */
	struct UBP_WidgetManager_C_OpenMapMenu_Params
	{	};

	/**
	 * Function BP_WidgetManager.BP_WidgetManager_C.GetOrOpenInGameMenu
	 */
	struct UBP_WidgetManager_C_GetOrOpenInGameMenu_Params
	{
	public:
		class UUI_InGameMenu_C*                                    Menu;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WidgetManager.BP_WidgetManager_C.OpenCraftingMenu
	 */
	struct UBP_WidgetManager_C_OpenCraftingMenu_Params
	{	};

	/**
	 * Function BP_WidgetManager.BP_WidgetManager_C.OpenInventoryMenu
	 */
	struct UBP_WidgetManager_C_OpenInventoryMenu_Params
	{	};

	/**
	 * Function BP_WidgetManager.BP_WidgetManager_C.HandleQuickMenuOpen
	 */
	struct UBP_WidgetManager_C_HandleQuickMenuOpen_Params
	{	};

	/**
	 * Function BP_WidgetManager.BP_WidgetManager_C.OnGameStateReset
	 */
	struct UBP_WidgetManager_C_OnGameStateReset_Params
	{	};

	/**
	 * Function BP_WidgetManager.BP_WidgetManager_C.ExecuteUbergraph_BP_WidgetManager
	 */
	struct UBP_WidgetManager_C_ExecuteUbergraph_BP_WidgetManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
