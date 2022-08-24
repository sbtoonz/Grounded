#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_HitFrame.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class MAINE_API UAnimNotify_HitFrame : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseSecondaryDamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondaryDamageDataIndex;
    
    UAnimNotify_HitFrame();
};

