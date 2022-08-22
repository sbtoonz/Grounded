#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "HourBasedOneShotBundle.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct MAINE_API FHourBasedOneShotBundle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 HourOfDay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D SpawnDistanceRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<USoundBase*> RandomSounds;
    
    FHourBasedOneShotBundle();
};

