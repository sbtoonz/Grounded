#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EFootstepType.h"
#include "AnimNotify_Footstep.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class MAINE_API UAnimNotify_Footstep : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFootstepType OverrideFootstepType;
    
    UAnimNotify_Footstep();
};

