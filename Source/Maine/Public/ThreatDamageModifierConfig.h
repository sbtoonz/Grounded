#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ThreatDamageModifierConfig.generated.h"

class USurvivalDamageType;

USTRUCT(BlueprintType)
struct MAINE_API FThreatDamageModifierConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ThreatMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer DamageSourceTags;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 DamageTypeFlags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USurvivalDamageType> DamageType;
    
    FThreatDamageModifierConfig();
};

