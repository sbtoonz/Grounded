#pragma once
#include "CoreMinimal.h"
#include "AttackHazardParams.generated.h"

class AHazard;

USTRUCT(BlueprintType)
struct MAINE_API FAttackHazardParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AHazard> HazardClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAttachToOwner;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName AttachSocket;
    
    FAttackHazardParams();
};

