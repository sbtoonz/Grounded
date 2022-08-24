#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnInteractionWarningDelegateDelegate.h"
#include "GameFramework/PlayerController.h"
#include "OnIneffectiveAttackDelegateDelegate.h"
#include "OnRespawnDelegateDelegate.h"
#include "ItemUseCooldownDelegateDelegate.h"
#include "Curves/CurveFloat.h"
#include "GameFramework/PlayerInput.h"
#include "EPhotoModeEntryAllowedResult.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EPlayerCharacterIdentity.h"
#include "GameFramework/PlayerInput.h"
#include "ECannotDamageReason.h"
#include "SurvivalPlayerController.generated.h"

class UInventoryComponent;
class AGardenBuilding;
class UInputComponent;
class UObject;
class ASurvivalCreature;
class UPlayerSFXComponent;
class APawn;
class UWindowWidget;
class AStorage;
class AActor;
class UItem;
class APhotoPawn;
class AEquipmentDisplayBuilding;
class AProductionBuilding;
class APheromoneBroadcasterBuilding;
class ASignBuilding;
class APlayerState;
class UInteractionWidget;
class AItemDisplayBuilding;
class UBurgleQuestInstance;
class ASurvivalPlayerState;

UCLASS(Blueprintable)
class MAINE_API ASurvivalPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRespawnDelegate OnRespawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIneffectiveAttackDelegate OnIneffectiveAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionWarningDelegate OnInteractionWarning;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemUseCooldownDelegate OnItemUseCooldownBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemUseCooldownDelegate OnItemUseCooldownEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPlayerSFXComponent* PlayerSFXComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookStickBaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookStickBasePitchRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookStickExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookStickTurnRampDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookStickTurnRampTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookStickTurnRampMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookStickMinTurnRateScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookStickMaxTurnRateScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve LookStickInputYawCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve LookStickInputPitchCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* InteractInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* BuildingPlacementInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* WirePlacementInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* MotionEaterInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* SplineClimbingInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* PauseInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* SpyGlassInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForcedLookStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoLevelSpeed;
    
    UPROPERTY(EditAnywhere, Replicated)
    TWeakObjectPtr<APawn> PreviousPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWindowWidget> PhotoModeWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RequestedInventories;
    
public:
    ASurvivalPlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool TryUseItem(UObject* From, UItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void ToggleSpectatorMode();
    
    UFUNCTION(BlueprintCallable)
    void TogglePhotoPawnType();
    
    UFUNCTION(BlueprintCallable)
    void TogglePhotoModeUI();
    
    UFUNCTION(BlueprintCallable)
    void TogglePhotoModeSettings();
    
    UFUNCTION(BlueprintCallable)
    void ShowPhotoModeUI();
    
    UFUNCTION(BlueprintCallable)
    void SetYAxisInverted(bool bIsInverted);
    
    UFUNCTION(BlueprintCallable)
    void SetXAxisInverted(bool bIsInverted);
    
    UFUNCTION(BlueprintCallable)
    void SetupPhotoPawnInputs(APhotoPawn* PhotoPawn, UInputComponent* PhotoPawnInputComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetRumbleEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetRightStickOuterDeadZone(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRightStickInnerDeadZone(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivityY(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivityX(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivity(const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftStickOuterDeadZone(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftStickInnerDeadZone(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadSensitivityY(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadSensitivityX(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadSensitivity(const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFOV(float InFOV);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerMoveYInverted(bool bIsInverted);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerMoveXInverted(bool bIsInverted);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLookYInverted(bool bIsInverted);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLookXInverted(bool bIsInverted);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseItem(UObject* From, UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnequipDisplayBuilding(AEquipmentDisplayBuilding* Building, UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnequipCreature(ASurvivalCreature* Creature, UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTryGetProductionItem(AProductionBuilding* Building, UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSwapDisplayBuilding(AEquipmentDisplayBuilding* Building);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopRequestInventory(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopRequestInventories(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartRequestInventory(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartRequestInventories(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPheromoneBroadcasterGatherEnabled(APheromoneBroadcasterBuilding* Building, bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPheromoneBroadcasterBuildEnabled(APheromoneBroadcasterBuilding* Building, bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSelectSign(ASignBuilding* SignBuilding, FDataTableRowHandle SignDataHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSelectPlayerDrivenConversationResponse(int32 ResponseIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRespawn(bool bIgnorePlayerRespawnPoint);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestUnlockItemStackUpgradeTier(FGameplayTag ItemStackTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestTechTreeRecipePointSpend(FDataTableRowHandle TechTreeRowHandle, int32 PointsToSpend);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestSetPlayerIdentity(EPlayerCharacterIdentity PlayerIdentity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestInteractionWidget(AActor* Interactable, const TSoftClassPtr<UInteractionWidget>& WidgetClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRenameStorage(AStorage* Storage, const FString& NewName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveItemFromGarden(AGardenBuilding* Building, UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveItemDisplayBuilding(AItemDisplayBuilding* Building, UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveItem(UObject* From, UItem* Item, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRejectBurgleQuest(UBurgleQuestInstance* QuestInstance);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRefillBurgleQuests();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerProgressPlayerDrivenConversation();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlaceItemDisplayBuilding(AItemDisplayBuilding* Building, UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNotifyClosedInteractionWidget(const TSoftClassPtr<UInteractionWidget>& WidgetClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGiveUp();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquipDisplayBuilding(AEquipmentDisplayBuilding* Building, UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquipCreature(ASurvivalCreature* Creature, UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEnhanceItemBonus(UItem* Item, FGameplayTag BonusEnhancementType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEnhanceItem(UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEndWidgetInteraction(AActor* Interactable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndPlayerDrivenConversation();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDumpItem(UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropItem(UObject* From, UItem* Item, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDepositToPheromoneBroadcaster(APheromoneBroadcasterBuilding* Building, UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCraftRecipeDataAtBuilding(AProductionBuilding* Building, FDataTableRowHandle RecipeRowHandle, FDataTableRowHandle RecipeModRowHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCraftRecipeAtBuilding(AProductionBuilding* Building, FDataTableRowHandle RecipeModRowHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCommitGardenItems(AGardenBuilding* Building);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCancelRequestSkipMovie(APlayerState* InPlayer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelProductionItem(AProductionBuilding* Building, UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelGardenProduction(AGardenBuilding* Building);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerBeginRequestSkipMovie(APlayerState* InPlayer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddItemToGarden(AGardenBuilding* Building, UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAcceptBurgleQuest(UBurgleQuestInstance* QuestInstance);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAbandonBurgleQuest(UBurgleQuestInstance* QuestInstance);
    
    UFUNCTION(BlueprintCallable)
    void RestoreDefaultPhotoSettings();
    
    UFUNCTION(BlueprintCallable)
    void RespawnCharacter(bool bIgnorePlayerRespawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void RequestTechTreeRecipePointSpend(FDataTableRowHandle TechTreeRowHandle, int32 PointsToSpend);
    
    UFUNCTION(BlueprintCallable)
    void PhotoCamSpeedAdjust(float Value);
    
    UFUNCTION(BlueprintCallable)
    void PhotoCamFlightSpeedUp();
    
    UFUNCTION(BlueprintCallable)
    void PhotoCamFlightSpeedDown();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVoiceChatActivationSettingChanged(int32 IntSetting);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPhotoModeEntryUnallowed(EPhotoModeEntryAllowedResult PhotoModeEntryAllowedResult);
    
    UFUNCTION(BlueprintCallable)
    void OnPhotoModeEntered(APhotoPawn* PhotoPawn);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnKeyBindsReset();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnExitPhotoMode();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAxisMappingRemoved(const FInputAxisKeyMapping& Value);
    
    UFUNCTION(BlueprintCallable)
    void OnAxisMappingAdded(const FInputAxisKeyMapping& Value);
    
    UFUNCTION(BlueprintCallable)
    void OnActionMappingRemoved(const FInputActionKeyMapping& Value);
    
    UFUNCTION(BlueprintCallable)
    void OnActionMappingAdded(const FInputActionKeyMapping& Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyWasKicked(const FText& Reason);
    
    UFUNCTION(BlueprintCallable)
    void NotifyInteractError(UObject* Interactable, const FText& WarningText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequestedInventory(const UInventoryComponent* Inventory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMounted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemUseOnCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractInputAvailable() const;
    
    UFUNCTION(BlueprintCallable)
    void HidePhotoModeUI();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePhotoModeUnallowedInMP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASurvivalPlayerState* GetSurvivalPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRumbleEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPreviousPawn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMouseSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetItemUseCoooldownRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetGamepadSensitivity() const;
    
    UFUNCTION(BlueprintCallable)
    void EndForceLookAt(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void DestroyPhotoModeUI();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnRespawn();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyInteractError(UObject* Interactable, const FText& WarningText);
    
    UFUNCTION(Client, Unreliable)
    void ClientNotifyAttackError(const AActor* Target, ECannotDamageReason CannotDamageReason, uint32 FailedDamageTypeFlags);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCreateInteractionWidget(AActor* Interactable, const TSoftClassPtr<UInteractionWidget>& WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    void BeginForceLookAt(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowIdentitySelection() const;
    
    UFUNCTION(BlueprintCallable)
    void AdjustPhotoCamFlightSpeed(float Multiplier);
    
};

