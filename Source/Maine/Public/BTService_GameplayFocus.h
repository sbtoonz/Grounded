#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_DefaultFocus.h"
#include "BTService_GameplayFocus.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTService_GameplayFocus : public UBTService_DefaultFocus {
    GENERATED_BODY()
public:
    UBTService_GameplayFocus();
};

