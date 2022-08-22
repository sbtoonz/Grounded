#pragma once
#include "CoreMinimal.h"
#include "EControlConflictContext.h"
#include "ControlConflictContextMetadata.generated.h"

USTRUCT(BlueprintType)
struct FControlConflictContextMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<EControlConflictContext> ConflictsWith;
    
    MAINE_API FControlConflictContextMetadata();
};

