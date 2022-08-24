#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "OnClosestValidTransmitterChangedDelegate.h"
#include "TransmissionReceiverComponent.generated.h"

class UTransmitterComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UTransmissionReceiverComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UTransmitterComponent* ClosestInRangeTransmittor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> ReceiverDistanceNoSignals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReceiverDistanceFullSignal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClosestValidTransmitterChanged OnClosestValidTransmitterChanged;
    
    UTransmissionReceiverComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClosestTransmitterStrength();
    
};

