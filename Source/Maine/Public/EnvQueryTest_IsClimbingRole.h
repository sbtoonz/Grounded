#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EnvQueryTest_IsClimbingRole.generated.h"

UCLASS()
class MAINE_API UEnvQueryTest_IsClimbingRole : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag Role;
    
public:
    UEnvQueryTest_IsClimbingRole();
};

