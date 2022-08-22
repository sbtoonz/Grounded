#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator_BlackboardBase -FallbackName=BTDecorator_BlackboardBase
#include "BTDecorator_ShouldTryAltMove.generated.h"

UCLASS()
class MAINE_API UBTDecorator_ShouldTryAltMove : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UBTDecorator_ShouldTryAltMove();
};

