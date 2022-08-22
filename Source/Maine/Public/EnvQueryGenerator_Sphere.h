#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderFloatValue -FallbackName=AIDataProviderFloatValue
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryGenerator_ProjectedPoints -FallbackName=EnvQueryGenerator_ProjectedPoints
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderIntValue -FallbackName=AIDataProviderIntValue
#include "EnvQueryGenerator_Sphere.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class MAINE_API UEnvQueryGenerator_Sphere : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue InnerRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue OuterRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue NumberOfRings;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue PointsPerRing;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ArcAngle;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> Center;
    
    UEnvQueryGenerator_Sphere();
};

