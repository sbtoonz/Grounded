#pragma once
#include "CoreMinimal.h"
#include "ObjectiveNode.h"
#include "BranchCompleteObjectiveNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FBranchCompleteObjectiveNode : public FObjectiveNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestBranchNodeID;
    
public:
    FBranchCompleteObjectiveNode();
};

