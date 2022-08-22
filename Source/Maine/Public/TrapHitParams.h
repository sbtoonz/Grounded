#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "TrapHitParams.generated.h"

class USurvivalDamageType;

USTRUCT(BlueprintType)
struct MAINE_API FTrapHitParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer DamageSourceTags;
    
    UPROPERTY(EditAnywhere)
    uint32 DamageTypeFlags;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<USurvivalDamageType> DamageType;
    
    FTrapHitParams();
};

