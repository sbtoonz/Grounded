#pragma once
#include "CoreMinimal.h"
#include "ResultFailedNode.h"
#include "ResultFailedBranchNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FResultFailedBranchNode : public FResultFailedNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BranchNodeID;
    
public:
    FResultFailedBranchNode();
};

