#pragma once
#include "CoreMinimal.h"
#include "QuestEventNode.h"
#include "ResultNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FResultNode : public FQuestEventNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceNodeID;
    
public:
    FResultNode();
};

