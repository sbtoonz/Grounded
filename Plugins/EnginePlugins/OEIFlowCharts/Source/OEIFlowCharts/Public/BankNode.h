#pragma once
#include "CoreMinimal.h"
#include "EBankNodePlayType.h"
#include "FlowChartNode.h"
#include "EPersistenceType.h"
#include "BankNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FBankNode : public FFlowChartNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBankNodePlayType PlayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPersistenceType Persistence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ChildNodeIDs;
    
public:
    FBankNode();
};

