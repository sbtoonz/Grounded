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
	 * Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.HideChannelIfUnbound
	 */
	struct UUI_HUDInteractionManager_C_HideChannelIfUnbound_Params
	{
	public:
		EInteractionChannel                                        Channel;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.RefreshInteractable
	 */
	struct UUI_HUDInteractionManager_C_RefreshInteractable_Params
	{
	public:
		bool                                                       IsNew;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.GetInteractableInRange
	 */
	struct UUI_HUDInteractionManager_C_GetInteractableInRange_Params
	{
	public:
		unsigned char                                              UnknownData_NWUE[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.SetLargeFont
	 */
	struct UUI_HUDInteractionManager_C_SetLargeFont_Params
	{	};

	/**
	 * Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.OnInteractableChanged
	 */
	struct UUI_HUDInteractionManager_C_OnInteractableChanged_Params
	{	};

	/**
	 * Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.HandleInteractWidget
	 */
	struct UUI_HUDInteractionManager_C_HandleInteractWidget_Params
	{
	public:
		class UUI_HUDControl_C*                                    ControlWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionChannel                                        InteractionChannel;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.Construct
	 */
	struct UUI_HUDInteractionManager_C_Construct_Params
	{	};

	/**
	 * Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.Destruct
	 */
	struct UUI_HUDInteractionManager_C_Destruct_Params
	{	};

	/**
	 * Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.EventLargeFonts
	 */
	struct UUI_HUDInteractionManager_C_EventLargeFonts_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.OnGlobalColorChange
	 */
	struct UUI_HUDInteractionManager_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.OnPossessedPlayerChange
	 */
	struct UUI_HUDInteractionManager_C_OnPossessedPlayerChange_Params
	{
	public:
		class ASurvivalPlayerCharacter*                            NewPlayerCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.RefreshAfterDelay
	 */
	struct UUI_HUDInteractionManager_C_RefreshAfterDelay_Params
	{	};

	/**
	 * Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.ExecuteUbergraph_UI_HUDInteractionManager
	 */
	struct UUI_HUDInteractionManager_C_ExecuteUbergraph_UI_HUDInteractionManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
