#pragma once
#include "CoreMinimal.h"
#include "CharacterPropEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCharacterPropEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    MAINE_API FCharacterPropEntry();
};

