#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "BTTask_TeleportTo.generated.h"

UCLASS()
class MAINE_API UBTTask_TeleportTo : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_TeleportTo();
};

