#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EquippedActorOption.generated.h"

class ASpawnedItem;

USTRUCT(BlueprintType)
struct MAINE_API FEquippedActorOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag CharacterType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<ASpawnedItem> EquippedActor;
    
    FEquippedActorOption();
};

