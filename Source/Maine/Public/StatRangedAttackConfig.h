#pragma once
#include "CoreMinimal.h"
#include "PlayerStatConfig.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "StatRangedAttackConfig.generated.h"

class ASurvivalCharacter;

UCLASS()
class MAINE_API UStatRangedAttackConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ASurvivalCharacter> TargetHitCharacterClass;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer TargetCharacterTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer TargetTags;
    
    UPROPERTY(EditAnywhere)
    bool bRequiresKillingBlow;
    
    UPROPERTY(EditAnywhere)
    bool bTrackMaxDistance;
    
    UStatRangedAttackConfig();
};

