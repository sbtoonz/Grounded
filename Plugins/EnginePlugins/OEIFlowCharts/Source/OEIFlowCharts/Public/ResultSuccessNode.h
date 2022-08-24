#pragma once
#include "CoreMinimal.h"
#include "ResultNode.h"
#include "ResultSuccessNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FResultSuccessNode : public FResultNode {
    GENERATED_BODY()
public:
    FResultSuccessNode();
};

