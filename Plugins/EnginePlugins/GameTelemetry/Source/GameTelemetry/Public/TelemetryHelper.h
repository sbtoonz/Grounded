#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TelemetryHelper.generated.h"

UCLASS(Blueprintable)
class GAMETELEMETRY_API UTelemetryHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTelemetryHelper();
};

