#pragma once
#include "CoreMinimal.h"
#include "AuraEmitterInfo.h"
#include "EmitterList.generated.h"

USTRUCT(BlueprintType)
struct FEmitterList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAuraEmitterInfo> Emitters;
    
    MAINE_API FEmitterList();
};

