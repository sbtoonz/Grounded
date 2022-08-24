#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "ESpawnTargetAllowedTypes.h"
#include "WaveSpawnTarget.generated.h"

class AWaveSpawnRegionVolume;

UCLASS(Blueprintable)
class MAINE_API AWaveSpawnTarget : public ATargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsObstructed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWaveSpawnRegionVolume* Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnTargetAllowedTypes AllowedTypes;
    
    AWaveSpawnTarget();
};

