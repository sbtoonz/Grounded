#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "BirdSplineItemSpawn.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FBirdSplineItemSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Chance;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> SpawnActor;
    
    UPROPERTY(EditAnywhere)
    FFloatRange SplineRange;
    
    MAINE_API FBirdSplineItemSpawn();
};

