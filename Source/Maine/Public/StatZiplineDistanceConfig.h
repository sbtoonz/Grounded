#pragma once
#include "CoreMinimal.h"
#include "PlayerStatConfig.h"
#include "StatZiplineDistanceConfig.generated.h"

UCLASS(Blueprintable)
class MAINE_API UStatZiplineDistanceConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrackMaxDistanceOnly;
    
    UStatZiplineDistanceConfig();
};

