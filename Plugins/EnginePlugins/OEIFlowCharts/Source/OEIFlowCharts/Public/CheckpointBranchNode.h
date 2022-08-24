#pragma once
#include "CoreMinimal.h"
#include "ScriptNode.h"
#include "CheckpointBranchNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FCheckpointBranchNode : public FScriptNode {
    GENERATED_BODY()
public:
    FCheckpointBranchNode();
};

