#pragma once
#include "CoreMinimal.h"
#include "BankNode.h"
#include "ObjectiveBankNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FObjectiveBankNode : public FBankNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllObjectivesMustSucceed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalObjectivesNeededToSucceed;
    
public:
    FObjectiveBankNode();
};

