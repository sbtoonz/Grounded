#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "EAttackResolutionType.h"
#include "HUDInteractableWidget.generated.h"

class UHealthComponent;
class UInteractableInterface;
class IInteractableInterface;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHUDInteractableWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
    UHUDInteractableWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateInteractionTargetChanged(UObject* NewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAttackResolutionChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInteractableChanged(TScriptInterface<IInteractableInterface> NewInteractable);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerAttackTargetChanged(TScriptInterface<IInteractableInterface> NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipmentChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnAttackResolutionChanged(EAttackResolutionType AttackResolution);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHealthComponent* GetCurrentTargetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAttackResolutionType GetCurrentAttackResolution() const;
    
};

