#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "EAttackResolutionType.h"
#include "HUDInteractableWidget.generated.h"

class UHealthComponent;
class UInteractableInterface;
class IInteractableInterface;
class UObject;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UHUDInteractableWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UHUDInteractableWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateInteractionTargetChanged(UObject* NewTarget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateAttackResolutionChanged();
    
    UFUNCTION()
    void OnPlayerInteractableChanged(TScriptInterface<IInteractableInterface> NewInteractable);
    
    UFUNCTION()
    void OnPlayerAttackTargetChanged(TScriptInterface<IInteractableInterface> NewTarget);
    
    UFUNCTION()
    void OnEquipmentChanged();
    
    UFUNCTION()
    void OnAttackResolutionChanged(EAttackResolutionType AttackResolution);
    
    UFUNCTION(BlueprintPure)
    UHealthComponent* GetCurrentTargetHealth() const;
    
    UFUNCTION(BlueprintPure)
    EAttackResolutionType GetCurrentAttackResolution() const;
    
};

