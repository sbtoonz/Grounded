#pragma once
#include "CoreMinimal.h"
#include "EExceptionRestoreOption.h"
#include "ClassToRestore.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct MAINE_API FClassToRestore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> SoftClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExceptionRestoreOption ExceptionRestoreOption;
    
    FClassToRestore();
};

