#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "TrapHitParams.generated.h"

class USurvivalDamageType;

USTRUCT(BlueprintType)
struct MAINE_API FTrapHitParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DamageSourceTags;
    
    UPROPERTY(EditAnywhere)
    uint32 DamageTypeFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USurvivalDamageType> DamageType;
    
    FTrapHitParams();
};

