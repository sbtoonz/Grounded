#pragma once
#include "CoreMinimal.h"
#include "PlayerStatConfig.h"
#include "GameplayTagContainer.h"
#include "StatDiscoverConfig.generated.h"

class UPointOfInterestDataAsset;

UCLASS(Blueprintable)
class MAINE_API UStatDiscoverConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPointOfInterestDataAsset* PointOfInterestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UStatDiscoverConfig();
};

