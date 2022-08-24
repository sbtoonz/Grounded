#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GameplayTagContainer.h"
#include "EnvQueryTest_IsClimbingRole.generated.h"

UCLASS(Blueprintable)
class MAINE_API UEnvQueryTest_IsClimbingRole : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Role;
    
public:
    UEnvQueryTest_IsClimbingRole();
};

