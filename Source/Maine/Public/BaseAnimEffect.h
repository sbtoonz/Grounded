#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BaseAnimEffect.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API UBaseAnimEffect : public UDataAsset {
    GENERATED_BODY()
public:
    UBaseAnimEffect();
};

