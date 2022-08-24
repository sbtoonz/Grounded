#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "UObject/NoExportTypes.h"
#include "ProxySceneComponent.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API UProxySceneComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeTransform;
    
    UProxySceneComponent();
};

