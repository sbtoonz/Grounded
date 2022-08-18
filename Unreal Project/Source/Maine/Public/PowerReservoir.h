#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PowerReservoir.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FPowerReservoir {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag AllowedPowerType;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag CurrentPowerType;
    
    UPROPERTY(BlueprintReadOnly)
    float ChargesStored;
    
    UPROPERTY(BlueprintReadOnly)
    float ChargeCapacity;
    
public:
    FPowerReservoir();
};

