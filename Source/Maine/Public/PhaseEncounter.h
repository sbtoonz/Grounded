#pragma once
#include "CoreMinimal.h"
#include "PhaseEncounter.generated.h"

class AEncounter;

USTRUCT(BlueprintType)
struct FPhaseEncounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhaseIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEncounter* Encounter;
    
    MAINE_API FPhaseEncounter();
};

