#pragma once
#include "CoreMinimal.h"
#include "AutoConsoleCommandProperties.generated.h"

USTRUCT(BlueprintType)
struct FAutoConsoleCommandProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnable;
    
    UPROPERTY(EditAnywhere)
    bool bTriggerRegularly;
    
    UPROPERTY(EditAnywhere)
    bool bOneTimeTrigger;
    
    UPROPERTY(EditAnywhere)
    float ExecuteWaitTime;
    
    UPROPERTY(EditAnywhere)
    bool bTriggerAfterTravel;
    
    UPROPERTY(EditAnywhere)
    FString Command;
    
    MAINE_API FAutoConsoleCommandProperties();
};

