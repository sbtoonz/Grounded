#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TargetPoint -FallbackName=TargetPoint
#include "ESpawnTargetAllowedTypes.h"
#include "WaveSpawnTarget.generated.h"

class AWaveSpawnRegionVolume;

UCLASS()
class MAINE_API AWaveSpawnTarget : public ATargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bIsObstructed;
    
    UPROPERTY(BlueprintReadOnly)
    AWaveSpawnRegionVolume* Volume;
    
    UPROPERTY(EditAnywhere)
    ESpawnTargetAllowedTypes AllowedTypes;
    
    AWaveSpawnTarget();
};

