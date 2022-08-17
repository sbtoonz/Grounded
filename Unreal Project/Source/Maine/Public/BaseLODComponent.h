#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseLODComponent.generated.h"

class UBaseLODActor;
class UActorComponent;
class UProxyComponent;

UCLASS()
class MAINE_API UBaseLODComponent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UBaseLODActor* OwnerActor;
    
    UPROPERTY(Export)
    UActorComponent* FullComponent;
    
    // UPROPERTY()
    // UProxyComponent* ProxyComponent;
    
public:
    UBaseLODComponent();
};

