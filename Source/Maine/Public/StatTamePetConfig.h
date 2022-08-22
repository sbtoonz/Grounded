#pragma once
#include "CoreMinimal.h"
#include "PlayerStatConfig.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "StatTamePetConfig.generated.h"

class ASurvivalCreature;

UCLASS()
class MAINE_API UStatTamePetConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ASurvivalCreature> TargetClass;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer TargetTags;
    
    UStatTamePetConfig();
};

