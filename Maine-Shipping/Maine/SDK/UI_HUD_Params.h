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
	 * Function UI_HUD.UI_HUD_C.HandlePetTamed
	 */
	struct UUI_HUD_C_HandlePetTamed_Params
	{
	public:
		class ASurvivalCreature*                                   Pet;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.UpdateInteractableVisibility
	 */
	struct UUI_HUD_C_UpdateInteractableVisibility_Params
	{	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetDeathBarVisibility
	 */
	struct UUI_HUD_C_GetDeathBarVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.Get Building Relocate Visibility
	 */
	struct UUI_HUD_C_Get_Building_Relocate_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E1W7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetBuildingCancelVisibility
	 */
	struct UUI_HUD_C_GetBuildingCancelVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LOP5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetIsZiplining
	 */
	struct UUI_HUD_C_GetIsZiplining_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnShowFarHUDMarkersChanged
	 */
	struct UUI_HUD_C_OnShowFarHUDMarkersChanged_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_04UK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnPowerItemDepleted
	 */
	struct UUI_HUD_C_OnPowerItemDepleted_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetGlidingVisibility
	 */
	struct UUI_HUD_C_GetGlidingVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KPV3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.Get_HUDCanvasPanel_Visibility_1
	 */
	struct UUI_HUD_C_Get_HUDCanvasPanel_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetStunVisibility
	 */
	struct UUI_HUD_C_GetStunVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetStunRatio
	 */
	struct UUI_HUD_C_GetStunRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2DDF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetRecycleBuildingVisibility
	 */
	struct UUI_HUD_C_GetRecycleBuildingVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetSlotsUsedVisibility
	 */
	struct UUI_HUD_C_GetSlotsUsedVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetHotBarVisibilty
	 */
	struct UUI_HUD_C_GetHotBarVisibilty_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetRestWaitingVisibility
	 */
	struct UUI_HUD_C_GetRestWaitingVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T2OU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetBreathVisibility
	 */
	struct UUI_HUD_C_GetBreathVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VFNE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetBuildingTargetVisibility
	 */
	struct UUI_HUD_C_GetBuildingTargetVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetCancelVisibility
	 */
	struct UUI_HUD_C_GetCancelVisibility_Params
	{
	public:
		ESlateVisibility                                           Visiblity;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetBuildingHealthVisibility
	 */
	struct UUI_HUD_C_GetBuildingHealthVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9UEH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetScienceColor
	 */
	struct UUI_HUD_C_GetScienceColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetFGColor
	 */
	struct UUI_HUD_C_GetFGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetHeaderColor
	 */
	struct UUI_HUD_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetText_1
	 */
	struct UUI_HUD_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetVisibilityRockInteract
	 */
	struct UUI_HUD_C_GetVisibilityRockInteract_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6SGL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetEquippedWeaponCountVisibility
	 */
	struct UUI_HUD_C_GetEquippedWeaponCountVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetTorchBurnVisibility
	 */
	struct UUI_HUD_C_GetTorchBurnVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetBlockRatio
	 */
	struct UUI_HUD_C_GetBlockRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D8N3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.RemoveHUDMarker
	 */
	struct UUI_HUD_C_RemoveHUDMarker_Params
	{
	public:
		class UHUDMarkerData*                                      MarkerData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.CreateHUDMarker
	 */
	struct UUI_HUD_C_CreateHUDMarker_Params
	{
	public:
		class UHUDMarkerData*                                      MarkerData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_HUDMarker_C*                                     HUDMarker;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetPlaceBuildingVisibility
	 */
	struct UUI_HUD_C_GetPlaceBuildingVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TO11[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetTimeText
	 */
	struct UUI_HUD_C_GetTimeText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.UpdateStatNotification
	 */
	struct UUI_HUD_C_UpdateStatNotification_Params
	{	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetDropHaulVisibility
	 */
	struct UUI_HUD_C_GetDropHaulVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z0B8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.RegisterNewOwner
	 */
	struct UUI_HUD_C_RegisterNewOwner_Params
	{
	public:
		class ABP_SurvivalPlayerCharacter_C*                       NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetThirstRatio
	 */
	struct UUI_HUD_C_GetThirstRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P49G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetHungerRatio
	 */
	struct UUI_HUD_C_GetHungerRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D8ZY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.DisableChatLog
	 */
	struct UUI_HUD_C_DisableChatLog_Params
	{	};

	/**
	 * Function UI_HUD.UI_HUD_C.EnableChatLog
	 */
	struct UUI_HUD_C_EnableChatLog_Params
	{	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetEnergyRatio
	 */
	struct UUI_HUD_C_GetEnergyRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4QP5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetStaminaRatio
	 */
	struct UUI_HUD_C_GetStaminaRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PLBU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.RemoveNameplateWidget
	 */
	struct UUI_HUD_C_RemoveNameplateWidget_Params
	{
	public:
		class UHUDMarkerData*                                      MarkerData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.CreateNameplateWidget
	 */
	struct UUI_HUD_C_CreateNameplateWidget_Params
	{
	public:
		class UHUDMarkerData*                                      MarkerData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_PlayerNameplate_C*                               Nameplate;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetHealthRatio
	 */
	struct UUI_HUD_C_GetHealthRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4D94[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetHideHUD
	 */
	struct UUI_HUD_C_GetHideHUD_Params
	{
	public:
		bool                                                       HideHud;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EIHN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.GetInteractionTarget
	 */
	struct UUI_HUD_C_GetInteractionTarget_Params
	{
	public:
		unsigned char                                              UnknownData_GK7U[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnZiplineModeChanged
	 */
	struct UUI_HUD_C_OnZiplineModeChanged_Params
	{
	public:
		class AZiplineSelectorPawn*                                Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnMarkerAdded
	 */
	struct UUI_HUD_C_OnMarkerAdded_Params
	{
	public:
		class UHUDMarkerData*                                      MarkerData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnMarkerRemove
	 */
	struct UUI_HUD_C_OnMarkerRemove_Params
	{
	public:
		class UHUDMarkerData*                                      MarkerData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnPlayerMarkerAdded
	 */
	struct UUI_HUD_C_OnPlayerMarkerAdded_Params
	{
	public:
		class UHUDMarkerData*                                      MarkerData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnPlayerMarkerRemoved
	 */
	struct UUI_HUD_C_OnPlayerMarkerRemoved_Params
	{
	public:
		class UHUDMarkerData*                                      MarkerData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnItemSpoiled
	 */
	struct UUI_HUD_C_OnItemSpoiled_Params
	{
	public:
		struct FDataTableRowHandle                                 OriginalItemHandle;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FDataTableRowHandle                                 SpoiledResultItemHandle;                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.Construct
	 */
	struct UUI_HUD_C_Construct_Params
	{	};

	/**
	 * Function UI_HUD.UI_HUD_C.SetSCABVisible
	 */
	struct UUI_HUD_C_SetSCABVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A37A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.BindPlayerEvents
	 */
	struct UUI_HUD_C_BindPlayerEvents_Params
	{
	public:
		class ABP_SurvivalPlayerCharacter_C*                       NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.BindPlayerStateEvents
	 */
	struct UUI_HUD_C_BindPlayerStateEvents_Params
	{
	public:
		class ASurvivalPlayerCharacter*                            SurvivalPlayerCharacter;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnInteractionTargetChanged
	 */
	struct UUI_HUD_C_OnInteractionTargetChanged_Params
	{	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnBuildingModeChanged
	 */
	struct UUI_HUD_C_OnBuildingModeChanged_Params
	{
	public:
		bool                                                       bIsPlacingBuilding;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnHaulingChanged
	 */
	struct UUI_HUD_C_OnHaulingChanged_Params
	{
	public:
		bool                                                       bIsHauling;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnBlockChanged
	 */
	struct UUI_HUD_C_OnBlockChanged_Params
	{
	public:
		bool                                                       bIsBlocking;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnOffHandChanged
	 */
	struct UUI_HUD_C_OnOffHandChanged_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.HUDHitAnim
	 */
	struct UUI_HUD_C_HUDHitAnim_Params
	{	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnPossessedPlayerChange
	 */
	struct UUI_HUD_C_OnPossessedPlayerChange_Params
	{
	public:
		class ASurvivalPlayerCharacter*                            NewPlayerCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.HandleGenericMessage
	 */
	struct UUI_HUD_C_HandleGenericMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D*                                          MessageIcon;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnSaveBegin
	 */
	struct UUI_HUD_C_OnSaveBegin_Params
	{
	public:
		ESaveGameType                                              SaveGameType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.Destruct
	 */
	struct UUI_HUD_C_Destruct_Params
	{	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnGliderChanged
	 */
	struct UUI_HUD_C_OnGliderChanged_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnEnemyChanged
	 */
	struct UUI_HUD_C_OnEnemyChanged_Params
	{
	public:
		class ASurvivalCharacter*                                  Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsInteractableTarget;                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.HandleToggleMessage
	 */
	struct UUI_HUD_C_HandleToggleMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D*                                          MessageIcon;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.PlayerOnItemPickup
	 */
	struct UUI_HUD_C_PlayerOnItemPickup_Params
	{
	public:
		class UInventoryComponent*                                 InventoryComponentOwner;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDataTableRowHandle                                 ItemHandle;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       IsNewItem;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1EAZ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Count;                                                   // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalCount;                                              // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnPointOfInterestDiscovered
	 */
	struct UUI_HUD_C_OnPointOfInterestDiscovered_Params
	{
	public:
		class UPointOfInterestDataAsset*                           PointOfInterest;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASurvivalPlayerState*                                UnlockerPlayerState;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnEquipmentChangeFailure
	 */
	struct UUI_HUD_C_OnEquipmentChangeFailure_Params
	{
	public:
		EEquipmentChangeFailureFromFullInventoryStimulus           Stimulus;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnGliderMovementModeChanged
	 */
	struct UUI_HUD_C_OnGliderMovementModeChanged_Params
	{
	public:
		bool                                                       bIsGliding;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnZiplineMovementModeChanged
	 */
	struct UUI_HUD_C_OnZiplineMovementModeChanged_Params
	{
	public:
		bool                                                       bIsZiplining;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnFullBreathChanged
	 */
	struct UUI_HUD_C_OnFullBreathChanged_Params
	{
	public:
		bool                                                       bFullBreath;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnDeathCountdownChanged
	 */
	struct UUI_HUD_C_OnDeathCountdownChanged_Params
	{
	public:
		bool                                                       bDeathCountdown;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnConversationNode
	 */
	struct UUI_HUD_C_OnConversationNode_Params
	{
	public:
		class FString                                              NodeString;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSpeakerBundle                                      Speaker;                                                 // 0x0010(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EConversationNodeDisplayStyle                              DisplayStyle;                                            // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnConversationHide
	 */
	struct UUI_HUD_C_OnConversationHide_Params
	{
	public:
		EConversationNodeDisplayStyle                              DisplayStyle;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.HandleStaminaVisibility
	 */
	struct UUI_HUD_C_HandleStaminaVisibility_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnConversationStart
	 */
	struct UUI_HUD_C_OnConversationStart_Params
	{
	public:
		EConversationNodeDisplayStyle                              DisplayStyle;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnConversationEnd
	 */
	struct UUI_HUD_C_OnConversationEnd_Params
	{
	public:
		EConversationNodeDisplayStyle                              DisplayStyle;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnClimbMovementModeChanged
	 */
	struct UUI_HUD_C_OnClimbMovementModeChanged_Params
	{
	public:
		bool                                                       bIsClimbing;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnPerkUnlocked
	 */
	struct UUI_HUD_C_OnPerkUnlocked_Params
	{
	public:
		class FName                                                PerkName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Perk_Tier;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnSittingChanged
	 */
	struct UUI_HUD_C_OnSittingChanged_Params
	{
	public:
		bool                                                       bIsSitting;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnPetTamed
	 */
	struct UUI_HUD_C_OnPetTamed_Params
	{
	public:
		class ASurvivalCreature*                                   Pet;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnPetAquired
	 */
	struct UUI_HUD_C_OnPetAquired_Params
	{
	public:
		class ASurvivalPlayerCharacter*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASurvivalCreature*                                   Pet;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnSizzlingChanged
	 */
	struct UUI_HUD_C_OnSizzlingChanged_Params
	{
	public:
		bool                                                       bIsSizzling;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T66E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnKeyItemAcquired
	 */
	struct UUI_HUD_C_OnKeyItemAcquired_Params
	{
	public:
		struct FDataTableRowHandle                                 KeyItemRowHandle;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ASurvivalPlayerState*                                AcquirerPlayerState;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FDataTableRowHandle>                         RecipesLearned;                                          // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnEquipmentChanged
	 */
	struct UUI_HUD_C_OnEquipmentChanged_Params
	{	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnStatusEffectChanged
	 */
	struct UUI_HUD_C_OnStatusEffectChanged_Params
	{	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnCameraDisplayModeChanged
	 */
	struct UUI_HUD_C_OnCameraDisplayModeChanged_Params
	{
	public:
		ECameraDisplayMode                                         DisplayMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.HandleHeltmetOverlayAndUI
	 */
	struct UUI_HUD_C_HandleHeltmetOverlayAndUI_Params
	{	};

	/**
	 * Function UI_HUD.UI_HUD_C.SetGasMaskOverlayShown
	 */
	struct UUI_HUD_C_SetGasMaskOverlayShown_Params
	{
	public:
		bool                                                       Shown;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.HUDJumpAnim
	 */
	struct UUI_HUD_C_HUDJumpAnim_Params
	{	};

	/**
	 * Function UI_HUD.UI_HUD_C.HUDLandAnim
	 */
	struct UUI_HUD_C_HUDLandAnim_Params
	{	};

	/**
	 * Function UI_HUD.UI_HUD_C.SetSpyGlassOverlayVisibility
	 */
	struct UUI_HUD_C_SetSpyGlassOverlayVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnPlayerWaypointAdded
	 */
	struct UUI_HUD_C_OnPlayerWaypointAdded_Params
	{
	public:
		class UHUDMarkerData*                                      MarkerData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnPlayerWaypointRemoved
	 */
	struct UUI_HUD_C_OnPlayerWaypointRemoved_Params
	{
	public:
		class UHUDMarkerData*                                      MarkerData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnBuildingFragileChanged
	 */
	struct UUI_HUD_C_OnBuildingFragileChanged_Params
	{
	public:
		class ABuilding*                                           Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsFragile;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnItemStashed
	 */
	struct UUI_HUD_C_OnItemStashed_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    Count;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD.UI_HUD_C.OnItemStashFailure
	 */
	struct UUI_HUD_C_OnItemStashFailure_Params
	{	};

	/**
	 * Function UI_HUD.UI_HUD_C.ExecuteUbergraph_UI_HUD
	 */
	struct UUI_HUD_C_ExecuteUbergraph_UI_HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
