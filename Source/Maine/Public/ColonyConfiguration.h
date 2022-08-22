#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ColonyConfiguration.generated.h"

class UCurveFloat;

UCLASS()
class MAINE_API UColonyConfiguration : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* PopulationCurve;
    
    UColonyConfiguration();
};

