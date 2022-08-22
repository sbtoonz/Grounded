#pragma once
#include "CoreMinimal.h"
#include "DefensePointWave.generated.h"

class AEncounter;

USTRUCT(BlueprintType)
struct FDefensePointWave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AEncounter*> Encounters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnTime;
    
    MAINE_API FDefensePointWave();
};

