#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_PreventDisable.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTService_PreventDisable : public UBTService {
    GENERATED_BODY()
public:
    UBTService_PreventDisable();
};

