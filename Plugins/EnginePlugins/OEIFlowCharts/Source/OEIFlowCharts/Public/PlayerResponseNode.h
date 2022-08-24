#pragma once
#include "CoreMinimal.h"
#include "DialogueNode.h"
#include "PlayerResponseNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FPlayerResponseNode : public FDialogueNode {
    GENERATED_BODY()
public:
    FPlayerResponseNode();
};

