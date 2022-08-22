#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "ActorCustomTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FActorCustomTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    MAINE_API FActorCustomTickFunction();
};

