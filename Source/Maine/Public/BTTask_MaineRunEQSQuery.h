#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_MaineRunEQSQuery.generated.h"

class UEQSRequest;

UCLASS(Blueprintable)
class MAINE_API UBTTask_MaineRunEQSQuery : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEQSRequest* EQSRequest;
    
public:
    UBTTask_MaineRunEQSQuery();
};

