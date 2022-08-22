#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EPartyDistanceType.h"
#include "EnvQueryTest_PartyDistance.generated.h"

UCLASS()
class MAINE_API UEnvQueryTest_PartyDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EPartyDistanceType TestMode;
    
    UEnvQueryTest_PartyDistance();
};

