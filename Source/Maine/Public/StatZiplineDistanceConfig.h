#pragma once
#include "CoreMinimal.h"
#include "PlayerStatConfig.h"
#include "StatZiplineDistanceConfig.generated.h"

UCLASS()
class MAINE_API UStatZiplineDistanceConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bTrackMaxDistanceOnly;
    
    UStatZiplineDistanceConfig();
};

