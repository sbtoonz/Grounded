#pragma once
#include "CoreMinimal.h"
#include "EControlConflictContext.h"
#include "ControlConflictContextMetadata.generated.h"

USTRUCT(BlueprintType)
struct FControlConflictContextMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EControlConflictContext> ConflictsWith;
    
    MAINE_API FControlConflictContextMetadata();
};

