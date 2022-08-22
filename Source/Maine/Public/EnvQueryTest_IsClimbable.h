#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderStructValue -FallbackName=AIDataProviderStructValue
#include "EnvQueryTest_IsClimbable.generated.h"

UCLASS()
class MAINE_API UEnvQueryTest_IsClimbable : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderStructValue ClimbingSizeProvider;
    
public:
    UEnvQueryTest_IsClimbable();
};

