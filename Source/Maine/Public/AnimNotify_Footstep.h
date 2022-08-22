#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EFootstepType.h"
#include "AnimNotify_Footstep.generated.h"

UCLASS(CollapseCategories)
class MAINE_API UAnimNotify_Footstep : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EFootstepType OverrideFootstepType;
    
    UAnimNotify_Footstep();
};

