#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_InteractShakeDown.generated.h"

class UCurveFloat;

UCLASS(CollapseCategories)
class MAINE_API UAnimNotify_InteractShakeDown : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* WiggleAmplitude;
    
    UAnimNotify_InteractShakeDown();
};

