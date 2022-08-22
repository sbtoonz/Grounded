#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_HitFrame.generated.h"

UCLASS(CollapseCategories)
class MAINE_API UAnimNotify_HitFrame : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool UseSecondaryDamageData;
    
    UPROPERTY(EditAnywhere)
    int32 SecondaryDamageDataIndex;
    
    UAnimNotify_HitFrame();
};

