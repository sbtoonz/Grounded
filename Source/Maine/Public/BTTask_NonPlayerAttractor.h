#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BTTask_NonPlayerAttractor.generated.h"

UCLASS()
class MAINE_API UBTTask_NonPlayerAttractor : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_NonPlayerAttractor();
};

