#pragma once
#include "CoreMinimal.h"
#include "BTTask_WaitButKeepUp.h"
#include "BTTask_FollowerWait.generated.h"

UCLASS()
class MAINE_API UBTTask_FollowerWait : public UBTTask_WaitButKeepUp {
    GENERATED_BODY()
public:
    UBTTask_FollowerWait();
};

