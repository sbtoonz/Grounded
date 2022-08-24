#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_WaveHeightBand.generated.h"

UCLASS(Blueprintable)
class MAINE_API UEnvQueryTest_WaveHeightBand : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue IsFlyingCreatureWave;
    
public:
    UEnvQueryTest_WaveHeightBand();
};

