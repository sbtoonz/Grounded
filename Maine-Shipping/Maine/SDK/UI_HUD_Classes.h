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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_HUD.UI_HUD_C
	 * Size -> 0x0290 (FullSize[0x05B8] - InheritedSize[0x0328])
	 */
	class UUI_HUD_C : public UHUDWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    HaulingHidesEquipmentAnim;                               // 0x0330(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    PlayerHit;                                               // 0x0338(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    NotificationHelper;                                      // 0x0340(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    PlayerJump;                                              // 0x0348(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    PlayerLand;                                              // 0x0350(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UUI_Block_C*                                         BlockWidget;                                             // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Breath_C*                                        BreathIndicator;                                         // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ChatLog_C*                                       ChatLog;                                                 // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDemoTimer_C*                                        DemoTimer;                                               // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        DoNotFlipInRTL;                                          // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_EquipmentAction_C*                               ExitPeeprKey;                                            // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_EquippedAccessory_C*                             GliderAccessory;                                         // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HelmetOverlay;                                           // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        HUDCanvasPanel;                                          // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        HUDDistort;                                              // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        HUDMarkerHolder;                                         // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUDLatency_C*                                    HUDping;                                                 // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StatusEffectTimerRow_C*                          NegativeStatusEffects;                                   // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Peepr1;                                                  // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Peepr2;                                                  // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Peepr3;                                                  // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Peepr4;                                                  // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PeepRImg;                                                // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        PeeprLines;                                              // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        PeeprPanel;                                              // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_PlaceBuilding_C*                                 PlaceBuildingWidget;                                     // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_EquipmentAction_C*                               PlaceWaypointKey;                                        // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StatusEffectTimerRow_C*                          PositiveStatusEffects;                                   // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_EquipmentAction_C*                               RemoveWaypointKey;                                       // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_EquippedAccessory_C*                             ShieldAccessory;                                         // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SpyGlassOverlay;                                         // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_DropPrompt_C*                                    StopSitPrompt;                                           // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_EquippedAccessory_C*                             TorchAccessory;                                          // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BuildingHealth_C*                                UI_BuildingHealth;                                       // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BuildingPlacement_C*                             UI_BuildingPlacement;                                    // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ConnectionWarning_C*                             UI_ConnectionWarning;                                    // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Crosshair_C*                                     UI_Crosshair;                                            // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_DeathCountdown_C*                                UI_DeathCountdown;                                       // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_EnemyHealth_C*                                   UI_EnemyHealth;                                          // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_EquippedWeapon_C*                                UI_EquippedWeapon;                                       // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_GasMask_C*                                       UI_GasMask;                                              // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Gliding_C*                                       UI_Gliding;                                              // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HaulingCapacity_C*                               UI_HaulingCapacity;                                      // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HotBar_C*                                        UI_HotBar;                                               // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUD_CommunicationBox_C*                          UI_HUD_CommunicationBox;                                 // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUD_DestroyStructure_C*                          UI_HUD_DestroyStructure;                                 // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUDInteractionManager_C*                         UI_HUDInteractionManager;                                // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_KeyNotificationLog_C*                            UI_KeyNotificationLog;                                   // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_MutationNotification_C*                          UI_MutationNotification;                                 // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ObjectiveNotification_C*                         UI_ObjectiveNotification;                                // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_PointOfInterestNotification_C*                   UI_PointOfInterestNotification;                          // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_RestQuery_C*                                     UI_RestQuery;                                            // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_RockInteract_C*                                  UI_RockInteract;                                         // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_SCAB_C*                                          UI_SCAB;                                                 // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScienceFoundNotification_C*                      UI_ScienceFoundNotification;                             // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScienceTotal_C*                                  UI_ScienceTotal;                                         // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Sizzle_C*                                        UI_Sizzle;                                               // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Notification_C*                                  UI_StatNotification;                                     // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StickiedObjective_C*                             UI_StickiedObjective;                                    // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StopSitPrompt_C*                                 UI_StopSitPrompt;                                        // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TutorialPrompt_C*                                UI_TutorialPrompt;                                       // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_UpgradeCollectableFoundNotification_C*           UI_UpgradeCollectableFoundNotification;                  // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_WaveStatus_C*                                    UI_WaveStatus;                                           // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_WaveWarning_C*                                   UI_WaveWarning;                                          // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_DropPrompt_C*                                    ZipDropPrompt;                                           // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ZiplinePlacement_C*                              ZiplinePlacement;                                        // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       ShowingStatNotification;                                 // 0x0540(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EUIStatNotificationState                                   CurrentStatNotificationState;                            // 0x0541(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A2AX[0x2];                                   // 0x0542(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PreviousStamina;                                         // 0x0544(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StaminaShowDelay;                                        // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              GeneralNotificationColor;                                // 0x054C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              VitalsNotificationColor;                                 // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayerStateEventsBound;                                  // 0x0554(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JT5O[0x3];                                   // 0x0555(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_SurvivalPlayerCharacter_C*                       PlayerEventsBoundTo;                                     // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_SCABAnim_C*                                      UI_SCAB_Anim;                                            // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          AutoSaveText;                                            // 0x0568(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AZiplineSelectorPawn*                                SubscribedZiplineSelector;                               // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          SpoiledString;                                           // 0x0580(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          UnequipFailureFromTwoHandedWeaponText;                   // 0x0590(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          UnequipFailureFromGeneralUnequipText;                    // 0x05A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USoundSubmix*                                        SFX_GasMask_Filter;                                      // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HandlePetTamed(class ASurvivalCreature* Pet);
		void UpdateInteractableVisibility();
		ESlateVisibility GetDeathBarVisibility();
		ESlateVisibility Get_Building_Relocate_Visibility();
		ESlateVisibility GetBuildingCancelVisibility();
		ESlateVisibility GetIsZiplining();
		void OnShowFarHUDMarkersChanged(bool NewValue);
		void OnPowerItemDepleted(class UItem* Item);
		ESlateVisibility GetGlidingVisibility();
		ESlateVisibility Get_HUDCanvasPanel_Visibility_1();
		ESlateVisibility GetStunVisibility();
		float GetStunRatio();
		ESlateVisibility GetRecycleBuildingVisibility();
		ESlateVisibility GetSlotsUsedVisibility();
		ESlateVisibility GetHotBarVisibilty();
		ESlateVisibility GetRestWaitingVisibility();
		ESlateVisibility GetBreathVisibility();
		ESlateVisibility GetBuildingTargetVisibility();
		void GetCancelVisibility(ESlateVisibility* Visiblity);
		ESlateVisibility GetBuildingHealthVisibility();
		struct FLinearColor GetScienceColor();
		struct FLinearColor GetFGColor();
		struct FSlateColor GetHeaderColor();
		class FText GetText_1();
		ESlateVisibility GetVisibilityRockInteract();
		ESlateVisibility GetEquippedWeaponCountVisibility();
		ESlateVisibility GetTorchBurnVisibility();
		float GetBlockRatio();
		void RemoveHUDMarker(class UHUDMarkerData* MarkerData);
		void CreateHUDMarker(class UHUDMarkerData* MarkerData, class UUI_HUDMarker_C** HUDMarker);
		ESlateVisibility GetPlaceBuildingVisibility();
		class FText GetTimeText();
		void UpdateStatNotification();
		ESlateVisibility GetDropHaulVisibility();
		void RegisterNewOwner(class ABP_SurvivalPlayerCharacter_C* NewPlayer);
		float GetThirstRatio();
		float GetHungerRatio();
		void DisableChatLog();
		void EnableChatLog();
		float GetEnergyRatio();
		float GetStaminaRatio();
		void RemoveNameplateWidget(class UHUDMarkerData* MarkerData);
		void CreateNameplateWidget(class UHUDMarkerData* MarkerData, class UUI_PlayerNameplate_C** Nameplate);
		float GetHealthRatio();
		void GetHideHUD(bool* HideHud);
		void GetInteractionTarget();
		void OnZiplineModeChanged(class AZiplineSelectorPawn* Selector);
		void OnMarkerAdded(class UHUDMarkerData* MarkerData);
		void OnMarkerRemove(class UHUDMarkerData* MarkerData);
		void OnPlayerMarkerAdded(class UHUDMarkerData* MarkerData);
		void OnPlayerMarkerRemoved(class UHUDMarkerData* MarkerData);
		void OnItemSpoiled(const struct FDataTableRowHandle& OriginalItemHandle, const struct FDataTableRowHandle& SpoiledResultItemHandle);
		void Construct();
		void SetSCABVisible(bool Visible, float Delay);
		void BindPlayerEvents(class ABP_SurvivalPlayerCharacter_C* NewPlayer);
		void BindPlayerStateEvents(class ASurvivalPlayerCharacter* SurvivalPlayerCharacter);
		void OnInteractionTargetChanged();
		void OnBuildingModeChanged(bool bIsPlacingBuilding);
		void OnHaulingChanged(bool bIsHauling);
		void OnBlockChanged(bool bIsBlocking);
		void OnOffHandChanged(class UItem* Item);
		void HUDHitAnim();
		void OnPossessedPlayerChange(class ASurvivalPlayerCharacter* NewPlayerCharacter);
		void HandleGenericMessage(const class FString& Message, class UTexture2D* MessageIcon);
		void OnSaveBegin(ESaveGameType SaveGameType);
		void Destruct();
		void OnGliderChanged(class UItem* Item);
		void OnEnemyChanged(class ASurvivalCharacter* Target, bool bIsInteractableTarget);
		void HandleToggleMessage(const class FString& Message, class UTexture2D* MessageIcon);
		void PlayerOnItemPickup(class UInventoryComponent* InventoryComponentOwner, const struct FDataTableRowHandle& ItemHandle, bool IsNewItem, int32_t Count, int32_t TotalCount);
		void OnPointOfInterestDiscovered(class UPointOfInterestDataAsset* PointOfInterest, class ASurvivalPlayerState* UnlockerPlayerState);
		void OnEquipmentChangeFailure(EEquipmentChangeFailureFromFullInventoryStimulus Stimulus);
		void OnGliderMovementModeChanged(bool bIsGliding);
		void OnZiplineMovementModeChanged(bool bIsZiplining);
		void OnFullBreathChanged(bool bFullBreath);
		void OnDeathCountdownChanged(bool bDeathCountdown);
		void OnConversationNode(const class FString& NodeString, const struct FSpeakerBundle& Speaker, EConversationNodeDisplayStyle DisplayStyle);
		void OnConversationHide(EConversationNodeDisplayStyle DisplayStyle);
		void HandleStaminaVisibility(float DeltaTime);
		void OnConversationStart(EConversationNodeDisplayStyle DisplayStyle);
		void OnConversationEnd(EConversationNodeDisplayStyle DisplayStyle);
		void OnClimbMovementModeChanged(bool bIsClimbing);
		void OnPerkUnlocked(const class FName& PerkName, int32_t Perk_Tier);
		void OnSittingChanged(bool bIsSitting);
		void OnPetTamed(class ASurvivalCreature* Pet);
		void OnPetAquired(class ASurvivalPlayerCharacter* Sender, class ASurvivalCreature* Pet);
		void OnSizzlingChanged(bool bIsSizzling, class AActor* Actor);
		void OnKeyItemAcquired(const struct FDataTableRowHandle& KeyItemRowHandle, class ASurvivalPlayerState* AcquirerPlayerState, TArray<struct FDataTableRowHandle> RecipesLearned);
		void OnEquipmentChanged();
		void OnStatusEffectChanged();
		void OnCameraDisplayModeChanged(ECameraDisplayMode DisplayMode);
		void HandleHeltmetOverlayAndUI();
		void SetGasMaskOverlayShown(bool Shown);
		void HUDJumpAnim();
		void HUDLandAnim();
		void SetSpyGlassOverlayVisibility(bool Visible);
		void OnPlayerWaypointAdded(class UHUDMarkerData* MarkerData);
		void OnPlayerWaypointRemoved(class UHUDMarkerData* MarkerData);
		void OnBuildingFragileChanged(class ABuilding* Sender, bool IsFragile);
		void OnItemStashed(const struct FDataTableRowHandle& ItemRowHandle, int32_t Count);
		void OnItemStashFailure();
		void ExecuteUbergraph_UI_HUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
