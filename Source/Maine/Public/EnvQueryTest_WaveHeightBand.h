#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderBoolValue -FallbackName=AIDataProviderBoolValue
#include "EnvQueryTest_WaveHeightBand.generated.h"

UCLASS()
class MAINE_API UEnvQueryTest_WaveHeightBand : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue IsFlyingCreatureWave;
    
public:
    UEnvQueryTest_WaveHeightBand();
};

