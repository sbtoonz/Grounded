#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "BTTask_MaineRunEQSQuery.generated.h"

class UEQSRequest;

UCLASS()
class MAINE_API UBTTask_MaineRunEQSQuery : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UEQSRequest* EQSRequest;
    
public:
    UBTTask_MaineRunEQSQuery();
};

