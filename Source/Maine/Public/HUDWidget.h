#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "DamageInfo.h"
#include "HUDWidget.generated.h"

class UNotificationLogBase;
class UHUDMarkerWidget;
class UInventoryComponent;
class UPlayerNameplateWidget;
class UHUDMarkerData;
class ATurretPawn;
class AZiplineSelectorPawn;
class ASurvivalCharacter;
class AActor;
class APawn;
class UItem;
class UHaulingComponent;
class ABuilding;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHUDWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGameUserWidget* UIInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGameUserWidget* SlotsUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNotificationLogBase* TemporaryNotificationLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotificationsSurpressed;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UInventoryComponent> InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHUDMarkerWidget*> HUDMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZiplineMovementModeChanged(bool bIsZiplining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZiplineModeChanged(AZiplineSelectorPawn* Selector);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTurretModeChanged(ATurretPawn* TurretPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetScanned(ASurvivalCharacter* Target);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSizzlingChanged(bool bIsSizzling, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSizzleCountdownChanged(float NewRatio, bool bIsLocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnSittingChangedImpl(bool bIsSitting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSittingChanged(bool bIsSitting);
    
    UFUNCTION(BlueprintCallable)
    void OnRevived();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerNewPawn(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDeathOrIncap(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPerfectBlock();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOffHandChanged(UItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMainHandChanged(UItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHUDShowChange(bool bShowHUD);
    
    UFUNCTION(BlueprintCallable)
    void OnHaulingChangedImpl(UHaulingComponent* Sender);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHaulingChanged(bool bIsHauling);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGliderMovementModeChanged(bool bIsGliding);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGliderChanged(UItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFullBreathChanged(bool bFullBreath);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeathCountdownChanged(bool bDeathCountdown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClimbMovementModeChanged(bool bIsClimbing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBuildingModeChanged(bool bIsPlacingBuilding);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBuildingFragileChanged(ABuilding* Sender, bool IsFragile);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
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

