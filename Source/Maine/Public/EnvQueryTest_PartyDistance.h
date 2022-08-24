#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EPartyDistanceType.h"
#include "EnvQueryTest_PartyDistance.generated.h"

UCLASS(Blueprintable)
class MAINE_API UEnvQueryTest_PartyDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyDistanceType TestMode;
    
    UEnvQueryTest_PartyDistance();
};

