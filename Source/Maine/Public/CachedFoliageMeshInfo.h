#pragma once
#include "CoreMinimal.h"
#include "FoliageKey.h"
#include "UObject/NoExportTypes.h"
#include "CachedFoliageMeshInfo.generated.h"

class UBaseLODActor;

USTRUCT(BlueprintType)
struct MAINE_API FCachedFoliageMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFoliageKey FoliageKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform FoliageTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeStampWhenRemoved;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UBaseLODActor> ActorInstance;
    
    FCachedFoliageMeshInfo();
};

