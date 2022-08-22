#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "EAttackResolutionType.h"
#include "ECameraDisplayMode.h"
#include "HUDCrosshairWidget.generated.h"

class AController;
class UInteractableInterface;
class IInteractableInterface;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UHUDCrosshairWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush WontHitBrush;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush InvalidDamageBrush;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush WillHitBrush;
    
    UPROPERTY(BlueprintReadOnly)
    EAttackResolutionType MostRecentAttackOutcome;
    
public:
    UHUDCrosshairWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateCursorBrush(EAttackResolutionType AttackResolution);
    
    UFUNCTION()
    void OnPlayerAttackTargetChanged(TScriptInterface<IInteractableInterface> NewInteractable);
    
    UFUNCTION()
    void OnCharacterControllerChanged(AController* NewController);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCameraModeChanged(ECameraDisplayMode DisplayMode);
    
    UFUNCTION()
    void OnAttackResolutionChanged(EAttackResolutionType AttackResolution);
    
};

