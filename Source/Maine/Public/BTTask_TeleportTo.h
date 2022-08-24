#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_TeleportTo.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_TeleportTo : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_TeleportTo();
};

