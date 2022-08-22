#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnClosestValidTransmitterChangedDelegate.h"
#include "TransmissionReceiverComponent.generated.h"

class UTransmitterComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UTransmissionReceiverComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UTransmitterComponent* ClosestInRangeTransmittor;
    
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, float> ReceiverDistanceNoSignals;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ReceiverDistanceFullSignal;
    
    UPROPERTY(BlueprintAssignable)
    FOnClosestValidTransmitterChanged OnClosestValidTransmitterChanged;
    
    UTransmissionReceiverComponent();
    UFUNCTION(BlueprintPure)
    float GetClosestTransmitterStrength();
    
};

