#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_LadderHandPlant.generated.h"

UCLASS(CollapseCategories)
class MAINE_API UAnimNotify_LadderHandPlant : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsRightHand: 1;
    
    UAnimNotify_LadderHandPlant();
};

