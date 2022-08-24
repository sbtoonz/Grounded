#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h"
#include "BTTask_RotateToAlignBBEntry.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_RotateToAlignBBEntry : public UBTTask_RotateToFaceBBEntry {
    GENERATED_BODY()
public:
    UBTTask_RotateToAlignBBEntry();
};

