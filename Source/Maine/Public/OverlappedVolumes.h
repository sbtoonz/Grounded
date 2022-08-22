#pragma once
#include "CoreMinimal.h"
#include "OverlappedVolumes.generated.h"

class APlayerState;
class AGameZoneVolume;

USTRUCT(BlueprintType)
struct FOverlappedVolumes {
    GENERATED_BODY()
public:
    UPROPERTY()
    APlayerState* PlayerState;
    
    UPROPERTY()
    TArray<AGameZoneVolume*> Volumes;
    
    MAINE_API FOverlappedVolumes();
};

