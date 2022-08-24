#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_LockRotation.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTService_LockRotation : public UBTService {
    GENERATED_BODY()
public:
    UBTService_LockRotation();
};

