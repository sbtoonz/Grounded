#pragma once
#include "CoreMinimal.h"
#include "QuestEventNode.h"
#include "GlobalQuestEventNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FGlobalQuestEventNode : public FQuestEventNode {
    GENERATED_BODY()
public:
    FGlobalQuestEventNode();
};

