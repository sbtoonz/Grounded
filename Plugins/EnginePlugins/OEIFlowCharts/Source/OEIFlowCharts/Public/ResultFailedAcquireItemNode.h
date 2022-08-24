#pragma once
#include "CoreMinimal.h"
#include "ResultFailedNode.h"
#include "ResultFailedAcquireItemNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FResultFailedAcquireItemNode : public FResultFailedNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
public:
    FResultFailedAcquireItemNode();
};

