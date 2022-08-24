#pragma once
#include "CoreMinimal.h"
#include "PlayerStatConfig.h"
#include "GameplayTagContainer.h"
#include "StatKillConfig.generated.h"

class ASurvivalCharacter;

UCLASS(Blueprintable)
class MAINE_API UStatKillConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASurvivalCharacter> TargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AttackTags;
    
    UStatKillConfig();
};

