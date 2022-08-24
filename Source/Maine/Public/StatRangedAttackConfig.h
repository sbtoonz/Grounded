#pragma once
#include "CoreMinimal.h"
#include "PlayerStatConfig.h"
#include "GameplayTagContainer.h"
#include "StatRangedAttackConfig.generated.h"

class ASurvivalCharacter;

UCLASS(Blueprintable)
class MAINE_API UStatRangedAttackConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASurvivalCharacter> TargetHitCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetCharacterTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresKillingBlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrackMaxDistance;
    
    UStatRangedAttackConfig();
};

