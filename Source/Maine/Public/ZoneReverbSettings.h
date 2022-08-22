#pragma once
#include "CoreMinimal.h"
#include "ZoneReverbSettings.generated.h"

class UReverbEffect;

USTRUCT(BlueprintType)
struct MAINE_API FZoneReverbSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UReverbEffect* ReverbEffect;
    
    UPROPERTY(EditAnywhere)
    FName TagName;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    float Volume;
    
    UPROPERTY(EditAnywhere)
    float FadeTime;
    
    FZoneReverbSettings();
};

