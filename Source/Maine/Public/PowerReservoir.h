#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PowerReservoir.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FPowerReservoir {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AllowedPowerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentPowerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargesStored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeCapacity;
    
public:
    FPowerReservoir();
};

