#pragma once
#include "CoreMinimal.h"
#include "ResultFailedNode.h"
#include "UObject/NoExportTypes.h"
#include "EKillTargetType.h"
#include "ResultFailedKillNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FResultFailedKillNode : public FResultFailedNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TargetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKillTargetType TargetType;
    
public:
    FResultFailedKillNode();
};

