#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EquippedActorOption.generated.h"

class ASpawnedItem;

USTRUCT(BlueprintType)
struct MAINE_API FEquippedActorOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASpawnedItem> EquippedActor;
    
    FEquippedActorOption();
};

