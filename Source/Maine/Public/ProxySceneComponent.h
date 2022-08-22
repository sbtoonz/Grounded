#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ProxySceneComponent.generated.h"

UCLASS(Abstract, BlueprintType)
class MAINE_API UProxySceneComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FTransform RelativeTransform;
    
    UProxySceneComponent();
};

