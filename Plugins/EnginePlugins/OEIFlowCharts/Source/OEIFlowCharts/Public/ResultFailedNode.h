#pragma once
#include "CoreMinimal.h"
#include "ResultNode.h"
#include "ResultFailedNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FResultFailedNode : public FResultNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsIrrelevant;
    
public:
    FResultFailedNode();
};

