#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "InteractableInterface.h"
#include "InteractingActorDelegateDelegate.h"
#include "EInteractionType.h"
#include "WidgetInteractComponent.generated.h"

class AActor;
class UInteractionWidget;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UWidgetInteractComponent : public UActorComponent, public IInteractableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInteractingActorDelegate OnSingleUseInteractingActorChanged;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UInteractionWidget> WidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAllowMultipleUsers;
    
    UPROPERTY(EditDefaultsOnly)
    EInteractionType DefaultInteractionType;
    
    UPROPERTY(Replicated, Transient)
    uint8 bInUse: 1;
    
public:
    UWidgetInteractComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnInteractingActorDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    bool IsBusy() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

