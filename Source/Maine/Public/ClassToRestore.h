#pragma once
#include "CoreMinimal.h"
#include "EExceptionRestoreOption.h"
#include "ClassToRestore.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct MAINE_API FClassToRestore {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AActor> SoftClassPath;
    
    UPROPERTY(EditDefaultsOnly)
    EExceptionRestoreOption ExceptionRestoreOption;
    
    FClassToRestore();
};

