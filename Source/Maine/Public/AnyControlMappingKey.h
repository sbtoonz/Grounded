#pragma once
#include "CoreMinimal.h"
#include "EControlMappingKeyType.h"
#include "AnyControlMappingKey.generated.h"

USTRUCT(BlueprintType)
struct FAnyControlMappingKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlMappingKeyType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAxisPositive;
    
    MAINE_API FAnyControlMappingKey();
};

