#pragma once
#include "CoreMinimal.h"
#include "ESocketName.h"
#include "HaulingData.generated.h"

USTRUCT(BlueprintType)
struct FHaulingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESocketName HaulingSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHaulCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StackHeight;
    
    MAINE_API FHaulingData();
};

