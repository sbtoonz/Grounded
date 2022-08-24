#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemManagerComponent.generated.h"

class UItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UItemManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItem*> ItemsWithSpawnInFlight;
    
public:
    UItemManagerComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnRest(float RestDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnGameModeChanged();
    
};

