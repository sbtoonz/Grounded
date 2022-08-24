#pragma once
#include "CoreMinimal.h"
#include "ResultFailedNode.h"
#include "ResultFailedObjectiveBankNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FResultFailedObjectiveBankNode : public FResultFailedNode {
    GENERATED_BODY()
public:
    FResultFailedObjectiveBankNode();
};

