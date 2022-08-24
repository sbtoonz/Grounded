#pragma once
#include "CoreMinimal.h"
#include "AttackHazardParams.generated.h"

class AHazard;

USTRUCT(BlueprintType)
struct MAINE_API FAttackHazardParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHazard> HazardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachToOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocket;
    
    FAttackHazardParams();
};

