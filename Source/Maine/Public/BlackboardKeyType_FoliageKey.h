#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BlackboardKeyType_FoliageKey.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MAINE_API UBlackboardKeyType_FoliageKey : public UBlackboardKeyType {
    GENERATED_BODY()
public:
    UBlackboardKeyType_FoliageKey();
};

