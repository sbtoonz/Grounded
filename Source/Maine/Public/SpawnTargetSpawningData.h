#pragma once
#include "CoreMinimal.h"
#include "SpawnTargetSpawningData.generated.h"

class AWaveSpawnTarget;

USTRUCT()
struct FSpawnTargetSpawningData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AWaveSpawnTarget> SpawnTarget;
    
    UPROPERTY()
    bool HasRegisteredHUDMarker;
    
    MAINE_API FSpawnTargetSpawningData();
};

