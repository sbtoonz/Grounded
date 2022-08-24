#pragma once
#include "CoreMinimal.h"
#include "BTTask_SetTargetTo.h"
#include "BTTask_SetConversationTarget.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_SetConversationTarget : public UBTTask_SetTargetTo {
    GENERATED_BODY()
public:
    UBTTask_SetConversationTarget();
};

