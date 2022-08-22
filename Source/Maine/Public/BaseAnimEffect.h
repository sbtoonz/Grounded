#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BaseAnimEffect.generated.h"

UCLASS(Abstract)
class MAINE_API UBaseAnimEffect : public UDataAsset {
    GENERATED_BODY()
public:
    UBaseAnimEffect();
};

