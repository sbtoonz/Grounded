#pragma once
#include "CoreMinimal.h"
#include "ItemSpawnParameters.generated.h"

class AActor;

USTRUCT()
struct FItemSpawnParameters {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* EquippedTo;
    
    UPROPERTY()
    TSoftClassPtr<AActor> OverrideSpawnActor;
    
    MAINE_API FItemSpawnParameters();
};

