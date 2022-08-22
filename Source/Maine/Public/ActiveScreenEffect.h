#pragma once
#include "CoreMinimal.h"
#include "ActiveScreenEffect.generated.h"

class UScreenEffectData;

USTRUCT()
struct MAINE_API FActiveScreenEffect {
    GENERATED_BODY()
public:
    UPROPERTY()
    UScreenEffectData* ScreenEffectData;
    
    FActiveScreenEffect();
};

