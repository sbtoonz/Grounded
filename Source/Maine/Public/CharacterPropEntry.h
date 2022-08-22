#pragma once
#include "CoreMinimal.h"
#include "CharacterPropEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCharacterPropEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Actor;
    
    MAINE_API FCharacterPropEntry();
};

