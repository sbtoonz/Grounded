#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AIDynamicParam_Maine.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EQSRequest.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class MAINE_API UEQSRequest : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAIDynamicParam_Maine> QueryConfigDynamicOverrides;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIDynamicParam_Maine> QueryConfig;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
    
public:
    UEQSRequest();
};

