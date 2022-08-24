#pragma once
#include "CoreMinimal.h"
#include "BTTask_SetDestinationBase.h"
#include "BTTask_SetInvestigateLocation.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_SetInvestigateLocation : public UBTTask_SetDestinationBase {
    GENERATED_BODY()
public:
    UBTTask_SetInvestigateLocation();
};

