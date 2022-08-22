#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EInteractionState.h"
#include "EInteractionType.h"
#include "EInteractionPriority.h"
#include "EInteractionChannel.h"
#include "EInteractionVisibility.h"
#include "EInteractAnimType.h"
#include "EInteractHighlightLevel.h"
#include "EInteractHoldHandleType.h"
#include "InteractableInterface.generated.h"

class AActor;
class UAnimMontage;

UINTERFACE(Blueprintable, MinimalAPI)
class UInteractableInterface : public UInterface {
    GENERATED_BODY()
};

class IInteractableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateInteractionPosition(AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLockingAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TEnumAsByte<EInteractionState> IsInteractionEnabled(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Interact(EInteractionChannel Channel, AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HideHUDCursorWhenInRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FDataTableRowHandle GetRequiredRecipe(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetRequiredItemCount(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FDataTableRowHandle GetRequiredItem(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetOverrideInteractionTime(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInteractionType GetOverrideInteractIcon(const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInteractionVisibility GetNameVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInteractionType GetInteractionType(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetInteractionText(EInteractionChannel Channel, const AActor* InstigatedBy, FString& OutText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInteractionPriority GetInteractionPriority(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInteractAnimType GetInteractHoldAnimType(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintNativeEvent)
    EInteractHighlightLevel GetInteractHighlightLevel(const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetInteractableName(FString& OutText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInteractAnimType GetInteractableAnimType(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<AActor> GetInteractableAnimProp(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* GetCustomInteractAnim(EInteractionChannel Channel, const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndInteraction(const AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndInteractHold(EInteractionChannel Channel, AActor* InstigatedBy, EInteractHoldHandleType HoldInteractType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanReleaseLockBeforeEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginInteractHold(EInteractionChannel Channel, AActor* InstigatedBy);
    
};

