#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvQueryTest_BaseDistance.generated.h"

UCLASS()
class MAINE_API UEnvQueryTest_BaseDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bCheckWaveTargetBase;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCheckAllBases;
    
    UEnvQueryTest_BaseDistance();
};

