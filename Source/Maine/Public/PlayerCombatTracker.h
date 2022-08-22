#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "PlayerCombatTracker.generated.h"

USTRUCT(BlueprintType)
struct FPlayerCombatTracker {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTag Tag;
    
    UPROPERTY()
    int32 Count;
    
    MAINE_API FPlayerCombatTracker();
};

