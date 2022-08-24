#pragma once
#include "CoreMinimal.h"
#include "ActiveScreenEffect.generated.h"

class UScreenEffectData;

USTRUCT(BlueprintType)
struct MAINE_API FActiveScreenEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScreenEffectData* ScreenEffectData;
    
    FActiveScreenEffect();
};

