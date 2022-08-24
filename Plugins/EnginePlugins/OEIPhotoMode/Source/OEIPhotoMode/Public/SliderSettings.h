#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeValueFormat.h"
#include "SliderSettings.generated.h"

USTRUCT(BlueprintType)
struct FSliderSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhotoModeValueFormat ValueFormat;
    
    OEIPHOTOMODE_API FSliderSettings();
};

