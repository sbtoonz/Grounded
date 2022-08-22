#pragma once
#include "CoreMinimal.h"
#include "FoliageKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedFoliageMeshInfo.generated.h"

class UBaseLODActor;

USTRUCT(BlueprintType)
struct MAINE_API FCachedFoliageMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FFoliageKey FoliageKey;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform FoliageTransform;
    
    UPROPERTY(BlueprintReadOnly)
    float TimeStampWhenRemoved;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UBaseLODActor> ActorInstance;
    
    FCachedFoliageMeshInfo();
};

