#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ItemManagerComponent.generated.h"

class UItem;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UItemManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<UItem*> ItemsWithSpawnInFlight;
    
public:
    UItemManagerComponent();
protected:
    UFUNCTION()
    void OnRest(float RestDuration);
    
    UFUNCTION()
    void OnGameModeChanged();
    
};

