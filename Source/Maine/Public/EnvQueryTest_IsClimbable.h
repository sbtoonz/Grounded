#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_IsClimbable.generated.h"

UCLASS(Blueprintable)
class MAINE_API UEnvQueryTest_IsClimbable : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderStructValue ClimbingSizeProvider;
    
public:
    UEnvQueryTest_IsClimbable();
};

