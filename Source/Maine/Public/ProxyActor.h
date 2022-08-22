#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ProxyActor.generated.h"

class UBaseLODActor;

UCLASS()
class MAINE_API UProxyActor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBaseLODActor* LODActor;
    
    UProxyActor();
};

