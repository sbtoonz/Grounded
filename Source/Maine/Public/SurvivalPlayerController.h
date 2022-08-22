#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "OnIneffectiveAttackDelegateDelegate.h"
#include "OnRespawnDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "OnInteractionWarningDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "ItemUseCooldownDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EPlayerCharacterIdentity.h"
#include "ECannotDamageReason.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIPhotoMode -ObjectName=EPhotoModeEntryAllowedResult -FallbackName=EPhotoModeEntryAllowedResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAxisKeyMapping -FallbackName=InputAxisKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
#include "SurvivalPlayerController.generated.h"

class UInputComponent;
class UPlayerSFXComponent;
class APawn;
class UWindowWidget;
class AActor;
class UObject;
class UItem;
class APhotoPawn;
class AEquipmentDisplayBuilding;
class ASurvivalCreature;
class ASurvivalPlayerState;
class AProductionBuilding;
class APheromoneBroadcasterBuilding;
class ASignBuilding;
class UInteractionWidget;
class AStorage;
class AGardenBuilding;
class AItemDisplayBuilding;
class UBurgleQuestInstance;
class APlayerState;
class UInventoryComponent;

UCLASS()
class MAINE_API ASurvivalPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnRespawnDelegate OnRespawn;
    
    UPROPERTY(BlueprintAssignable)
    FOnIneffectiveAttackDelegate OnIneffectiveAttack;
    
    UPROPERTY(BlueprintAssignable)
    FOnInteractionWarningDelegate OnInteractionWarning;
    
    UPROPERTY(BlueprintAssignable)
    FItemUseCooldownDelegate OnItemUseCooldownBegin;
    
    UPROPERTY(BlueprintAssignable)
    FItemUseCooldownDelegate OnItemUseCooldownEnd;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UPlayerSFXComponent* PlayerSFXComponent;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookStickBaseTurnRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookStickBasePitchRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookStickExponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookStickTurnRampDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookStickTurnRampTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookStickTurnRampMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookStickMinTurnRateScalar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookStickMaxTurnRateScalar;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve LookStickInputYawCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve LookStickInputPitchCurve;
    
    UPROPERTY(Export, Transient)
    UInputComponent* InteractInputComponent;
    
    UPROPERTY(Export, Transient)
    UInputComponent* BuildingPlacementInputComponent;
    
    UPROPERTY(Export, Transient)
    UInputComponent* WirePlacementInputComponent;
    
    UPROPERTY(Export, Transient)
    UInputComponent* MotionEaterInputComponent;
    
    UPROPERTY(Export, Transient)
    UInputComponent* SplineClimbingInputComponent;
    
    UPROPERTY(Export, Transient)
    UInputComponent* PauseInputComponent;
    
    UPROPERTY(Export, Transient)
    UInputComponent* SpyGlassInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForcedLookStrength;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoLevelSpeed;
    
    UPROPERTY(Replicated)
    TWeakObjectPtr<APawn> PreviousPawn;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UWindowWidget> PhotoModeWidgetClass;
    
    UPROPERTY(Transient)
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
    
    UFUNCTION()
    void SetupPhotoPawnInputs(APhotoPawn* PhotoPawn, UInputComponent* PhotoPawnInputComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetRumbleEnabled(bool bIsEnabled);
    
    UFUNCTION()
    void SetRightStickOuterDeadZone(float Value);
    
    UFUNCTION()
    void SetRightStickInnerDeadZone(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivityY(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivityX(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivity(const FVector2D& Value);
    
    UFUNCTION()
    void SetLeftStickOuterDeadZone(float Value);
    
    UFUNCTION()
    void SetLeftStickInnerDeadZone(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadSensitivityY(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadSensitivityX(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadSensitivity(const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFOV(float InFOV);
    
    UFUNCTION()
    void SetControllerMoveYInverted(bool bIsInverted);
    
    UFUNCTION()
    void SetControllerMoveXInverted(bool bIsInverted);
    
    UFUNCTION()
    void SetControllerLookYInverted(bool bIsInverted);
    
    UFUNCTION()
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
    
    UFUNCTION(Reliable, Server, WithValidation)
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
    
    UFUNCTION(Reliable, Server)
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
    
    UFUNCTION()
    void RestoreDefaultPhotoSettings();
    
    UFUNCTION(BlueprintCallable)
    void RespawnCharacter(bool bIgnorePlayerRespawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void RequestTechTreeRecipePointSpend(FDataTableRowHandle TechTreeRowHandle, int32 PointsToSpend);
    
    UFUNCTION()
    void PhotoCamSpeedAdjust(float Value);
    
    UFUNCTION()
    void PhotoCamFlightSpeedUp();
    
    UFUNCTION()
    void PhotoCamFlightSpeedDown();
    
protected:
    UFUNCTION()
    void OnVoiceChatActivationSettingChanged(int32 IntSetting);
    
public:
    UFUNCTION()
    void OnPhotoModeEntryUnallowed(EPhotoModeEntryAllowedResult PhotoModeEntryAllowedResult);
    
    UFUNCTION()
    void OnPhotoModeEntered(APhotoPawn* PhotoPawn);
    
protected:
    UFUNCTION()
    void OnKeyBindsReset();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnExitPhotoMode();
    
protected:
    UFUNCTION()
    void OnAxisMappingRemoved(const FInputAxisKeyMapping& Value);
    
    UFUNCTION()
    void OnAxisMappingAdded(const FInputAxisKeyMapping& Value);
    
    UFUNCTION()
    void OnActionMappingRemoved(const FInputActionKeyMapping& Value);
    
    UFUNCTION()
    void OnActionMappingAdded(const FInputActionKeyMapping& Value);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyWasKicked(const FText& Reason);
    
    UFUNCTION(BlueprintCallable)
    void NotifyInteractError(UObject* Interactable, const FText& WarningText);
    
    UFUNCTION(BlueprintPure)
    bool IsRequestedInventory(const UInventoryComponent* Inventory) const;
    
    UFUNCTION(BlueprintPure)
    bool IsMounted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsItemUseOnCooldown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractInputAvailable() const;
    
    UFUNCTION(BlueprintCallable)
    void HidePhotoModeUI();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HandlePhotoModeUnallowedInMP();
    
public:
    UFUNCTION(BlueprintPure)
    ASurvivalPlayerState* GetSurvivalPlayerState() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRumbleEnabled() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetPreviousPawn();
    
    UFUNCTION(BlueprintPure)
    FVector2D GetMouseSensitivity() const;
    
    UFUNCTION(BlueprintPure)
    float GetItemUseCoooldownRemaining() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetGamepadSensitivity() const;
    
    UFUNCTION(BlueprintCallable)
    void EndForceLookAt(AActor* Target);
    
    UFUNCTION()
    void DestroyPhotoModeUI();
    
    UFUNCTION(Client, Reliable)
    void ClientOnRespawn();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyInteractError(UObject* Interactable, const FText& WarningText);
    
    UFUNCTION(Client, Unreliable)
    void ClientNotifyAttackError(const AActor* Target, ECannotDamageReason CannotDamageReason, uint32 FailedDamageTypeFlags);
    
    UFUNCTION(Client, Reliable)
    void ClientCreateInteractionWidget(AActor* Interactable, const TSoftClassPtr<UInteractionWidget>& WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    void BeginForceLookAt(AActor* Target);
    
    UFUNCTION(BlueprintPure)
    bool AllowIdentitySelection() const;
    
    UFUNCTION(BlueprintCallable)
    void AdjustPhotoCamFlightSpeed(float Multiplier);
    
};

