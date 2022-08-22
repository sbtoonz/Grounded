#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AIDynamicParam_Maine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EEnvQueryRunMode -FallbackName=EEnvQueryRunMode
#include "EQSRequest.generated.h"

class UEnvQuery;

UCLASS()
class MAINE_API UEQSRequest : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FAIDynamicParam_Maine> QueryConfigDynamicOverrides;
    
protected:
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam_Maine> QueryConfig;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
    
public:
    UEQSRequest();
};

