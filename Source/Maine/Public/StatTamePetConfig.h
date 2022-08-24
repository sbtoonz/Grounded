#pragma once
#include "CoreMinimal.h"
#include "PlayerStatConfig.h"
#include "GameplayTagContainer.h"
#include "StatTamePetConfig.generated.h"

class ASurvivalCreature;

UCLASS(Blueprintable)
class MAINE_API UStatTamePetConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASurvivalCreature> TargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetTags;
    
    UStatTamePetConfig();
};

