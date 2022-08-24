#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "Styling/SlateBrush.h"
#include "EAttackResolutionType.h"
#include "ECameraDisplayMode.h"
#include "HUDCrosshairWidget.generated.h"

class UInteractableInterface;
class IInteractableInterface;
class AController;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHUDCrosshairWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush WontHitBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush InvalidDamageBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush WillHitBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackResolutionType MostRecentAttackOutcome;
    
public:
    UHUDCrosshairWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCursorBrush(EAttackResolutionType AttackResolution);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerAttackTargetChanged(TScriptInterface<IInteractableInterface> NewInteractable);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterControllerChanged(AController* NewController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCameraModeChanged(ECameraDisplayMode DisplayMode);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackResolutionChanged(EAttackResolutionType AttackResolution);
    
};

