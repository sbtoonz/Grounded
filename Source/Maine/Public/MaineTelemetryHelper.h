#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameTelemetry -ObjectName=TelemetryHelper -FallbackName=TelemetryHelper
#include "MaineTelemetryHelper.generated.h"

UCLASS()
class MAINE_API UMaineTelemetryHelper : public UTelemetryHelper {
    GENERATED_BODY()
public:
    UMaineTelemetryHelper();
};

