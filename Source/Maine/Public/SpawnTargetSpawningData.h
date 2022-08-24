#pragma once
#include "CoreMinimal.h"
#include "SpawnTargetSpawningData.generated.h"

class AWaveSpawnTarget;

USTRUCT(BlueprintType)
struct FSpawnTargetSpawningData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AWaveSpawnTarget> SpawnTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasRegisteredHUDMarker;
    
    MAINE_API FSpawnTargetSpawningData();
};

