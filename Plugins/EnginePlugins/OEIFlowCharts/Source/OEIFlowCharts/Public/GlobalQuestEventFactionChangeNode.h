#pragma once
#include "CoreMinimal.h"
#include "GlobalQuestEventNode.h"
#include "GlobalQuestEventFactionChangeNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FGlobalQuestEventFactionChangeNode : public FGlobalQuestEventNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FactionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Relationship;
    
public:
    FGlobalQuestEventFactionChangeNode();
};

