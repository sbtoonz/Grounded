#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NativeRippleEvent.generated.h"

USTRUCT(BlueprintType)
struct FNativeRippleEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite)
    float Size;
    
    UPROPERTY(BlueprintReadWrite)
    float Intensity;
    
    MAINE_API FNativeRippleEvent();
};

