#pragma once
#include "CoreMinimal.h"
#include "GlobalQuestEventNode.h"
#include "UObject/NoExportTypes.h"
#include "EKillTargetType.h"
#include "GlobalQuestEventKillNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FGlobalQuestEventKillNode : public FGlobalQuestEventNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TargetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKillTargetType TargetType;
    
public:
    FGlobalQuestEventKillNode();
};

