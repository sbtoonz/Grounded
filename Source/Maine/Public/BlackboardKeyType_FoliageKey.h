#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeyType -FallbackName=BlackboardKeyType
#include "BlackboardKeyType_FoliageKey.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class MAINE_API UBlackboardKeyType_FoliageKey : public UBlackboardKeyType {
    GENERATED_BODY()
public:
    UBlackboardKeyType_FoliageKey();
};

