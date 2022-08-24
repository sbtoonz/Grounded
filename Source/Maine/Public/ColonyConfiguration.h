#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ColonyConfiguration.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class MAINE_API UColonyConfiguration : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PopulationCurve;
    
    UColonyConfiguration();
};

