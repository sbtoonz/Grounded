#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerCombatTracker.generated.h"

USTRUCT(BlueprintType)
struct FPlayerCombatTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    MAINE_API FPlayerCombatTracker();
};

