#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ProxyComponentTickFunction.h"
#include "ProxyComponent.generated.h"

UCLASS(Abstract)
class MAINE_API UProxyComponent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FProxyComponentTickFunction PrimaryComponentTick;
    
    UProxyComponent();
};

