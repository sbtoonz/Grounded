#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvQueryTest_IsInJumpRange.generated.h"

class UEnvQueryContext;

UCLASS()
class MAINE_API UEnvQueryTest_IsInJumpRange : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> From;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> To;
    
public:
    UEnvQueryTest_IsInJumpRange();
};

