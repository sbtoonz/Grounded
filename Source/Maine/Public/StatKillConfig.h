#pragma once
#include "CoreMinimal.h"
#include "PlayerStatConfig.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "StatKillConfig.generated.h"

class ASurvivalCharacter;

UCLASS()
class MAINE_API UStatKillConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ASurvivalCharacter> TargetClass;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer TargetTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AttackTags;
    
    UStatKillConfig();
};

