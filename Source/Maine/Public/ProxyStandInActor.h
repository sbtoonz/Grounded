#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ProxyStandInActor.generated.h"

class UBaseLODActor;
class UStaticMeshComponent;

UCLASS(Abstract, NotPlaceable)
class MAINE_API AProxyStandInActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UBaseLODActor* LODOwner;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* MeshComponent;
    
public:
    AProxyStandInActor();
};

