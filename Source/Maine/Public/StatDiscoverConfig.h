#pragma once
#include "CoreMinimal.h"
#include "PlayerStatConfig.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "StatDiscoverConfig.generated.h"

class UPointOfInterestDataAsset;

UCLASS()
class MAINE_API UStatDiscoverConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPointOfInterestDataAsset* PointOfInterestData;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer Tags;
    
    UStatDiscoverConfig();
};

