#pragma once
#include "CoreMinimal.h"
#include "PhaseEncounter.generated.h"

class AEncounter;

USTRUCT(BlueprintType)
struct FPhaseEncounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PhaseIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AEncounter* Encounter;
    
    MAINE_API FPhaseEncounter();
};

