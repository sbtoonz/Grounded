#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NativeRippleEvent.generated.h"

USTRUCT(BlueprintType)
struct FNativeRippleEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    MAINE_API FNativeRippleEvent();
};

