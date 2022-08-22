#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "ProxyComponentTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FProxyComponentTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    MAINE_API FProxyComponentTickFunction();
};

