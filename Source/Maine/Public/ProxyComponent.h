#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ProxyComponentTickFunction.h"
#include "ProxyComponent.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API UProxyComponent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProxyComponentTickFunction PrimaryComponentTick;
    
    UProxyComponent();
};

