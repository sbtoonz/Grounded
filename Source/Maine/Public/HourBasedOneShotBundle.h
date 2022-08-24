#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HourBasedOneShotBundle.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct MAINE_API FHourBasedOneShotBundle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HourOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpawnDistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> RandomSounds;
    
    FHourBasedOneShotBundle();
};

