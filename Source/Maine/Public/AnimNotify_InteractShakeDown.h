#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_InteractShakeDown.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, CollapseCategories)
class MAINE_API UAnimNotify_InteractShakeDown : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* WiggleAmplitude;
    
    UAnimNotify_InteractShakeDown();
};

