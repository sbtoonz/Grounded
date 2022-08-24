#pragma once
#include "CoreMinimal.h"
#include "ItemSpawnParameters.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FItemSpawnParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* EquippedTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> OverrideSpawnActor;
    
    MAINE_API FItemSpawnParameters();
};

