#pragma once
#include "CoreMinimal.h"
#include "CombinedLadderData.generated.h"

class ACombinedLadder;
class ALadderBuilding;

USTRUCT(BlueprintType)
struct FCombinedLadderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACombinedLadder* CombinedLadder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALadderBuilding*> BuildingStack;
    
    MAINE_API FCombinedLadderData();
};

