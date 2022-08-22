#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "DamageInfo.h"
#include "HUDWidget.generated.h"

class UHUDMarkerData;
class UNotificationLogBase;
class UInventoryComponent;
class UHUDMarkerWidget;
class UPlayerNameplateWidget;
class ATurretPawn;
class AZiplineSelectorPawn;
class UHaulingComponent;
class ASurvivalCharacter;
class AActor;
class APawn;
class UItem;
class ABuilding;
class UTexture2D;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UHUDWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UGameUserWidget* UIInteract;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UGameUserWidget* SlotsUsed;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UNotificationLogBase* TemporaryNotificationLog;
    
    UPROPERTY(BlueprintReadOnly)
    bool bNotificationsSurpressed;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UInventoryComponent> InventoryComponent;
    
    UPROPERTY(Export, Transient)
    TArray<UHUDMarkerWidget*> HUDMarkers;
    
    UPROPERTY(Export, Transient)
    TArray<UPlayerNameplateWidget*> PlayerNameplates;
    
public:
    UHUDWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSpyGlassOverlayVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScanTargetVisibility(bool Visible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetNotificationsSupressed(bool bSurpressed);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemovePlayerNameplateWidget(UHUDMarkerData* HUDMarkerData);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHUDMarkerWidget(UHUDMarkerData* HUDMarkerData);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnZiplineMovementModeChanged(bool bIsZiplining);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZiplineModeChanged(AZiplineSelectorPawn* Selector);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTurretModeChanged(ATurretPawn* TurretPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetScanned(ASurvivalCharacter* Target);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSizzlingChanged(bool bIsSizzling, AActor* Actor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSizzleCountdownChanged(float NewRatio, bool bIsLocalPlayer);
    
    UFUNCTION()
    void OnSittingChangedImpl(bool bIsSitting);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSittingChanged(bool bIsSitting);
    
    UFUNCTION()
    void OnRevived();
    
    UFUNCTION()
    void OnPlayerNewPawn(APawn* Pawn);
    
    UFUNCTION()
    void OnPlayerDeathOrIncap(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPerfectBlock();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOffHandChanged(UItem* Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMainHandChanged(UItem* Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHUDShowChange(bool bShowHUD);
    
    UFUNCTION()
    void OnHaulingChangedImpl(UHaulingComponent* Sender);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHaulingChanged(bool bIsHauling);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGliderMovementModeChanged(bool bIsGliding);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGliderChanged(UItem* Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFullBreathChanged(bool bFullBreath);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeathCountdownChanged(bool bDeathCountdown);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClimbMovementModeChanged(bool bIsClimbing);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBuildingModeChanged(bool bIsPlacingBuilding);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBuildingFragileChanged(ABuilding* Sender, bool IsFragile);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnBlockChanged(bool bIsBlocking);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPlayerNameplateDataActive(UHUDMarkerData* HUDMarkerData);
    
    UFUNCTION(BlueprintCallable)
    bool IsHUDMarkerDataActive(UHUDMarkerData* HUDMarkerData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleGenericMessage(const FString& Message, UTexture2D* MessageIcon);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddPlayerNameplateWidget(UPlayerNameplateWidget* PlayerNameplateWidget);
    
    UFUNCTION(BlueprintCallable)
    void AddHUDMarkerWidget(UHUDMarkerWidget* HUDMarkerWidget);
    
};

