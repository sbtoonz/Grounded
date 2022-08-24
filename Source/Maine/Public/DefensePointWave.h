#pragma once
#include "CoreMinimal.h"
#include "DefensePointWave.generated.h"

class AEncounter;

USTRUCT(BlueprintType)
struct FDefensePointWave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEncounter*> Encounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnTime;
    
    MAINE_API FDefensePointWave();
};

