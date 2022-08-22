#pragma once
#include "CoreMinimal.h"
#include "ESocketName.h"
#include "HaulingData.generated.h"

USTRUCT(BlueprintType)
struct FHaulingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESocketName HaulingSocket;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxHaulCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StackHeight;
    
    MAINE_API FHaulingData();
};

