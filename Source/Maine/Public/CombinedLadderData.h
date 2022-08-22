#pragma once
#include "CoreMinimal.h"
#include "CombinedLadderData.generated.h"

class ACombinedLadder;
class ALadderBuilding;

USTRUCT(BlueprintType)
struct FCombinedLadderData {
    GENERATED_BODY()
public:
    UPROPERTY()
    ACombinedLadder* CombinedLadder;
    
    UPROPERTY()
    TArray<ALadderBuilding*> BuildingStack;
    
    MAINE_API FCombinedLadderData();
};

