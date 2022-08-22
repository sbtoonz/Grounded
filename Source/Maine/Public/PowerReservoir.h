#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
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

