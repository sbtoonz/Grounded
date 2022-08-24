#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_LadderHandPlant.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class MAINE_API UAnimNotify_LadderHandPlant : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsRightHand: 1;
    
    UAnimNotify_LadderHandPlant();
};

