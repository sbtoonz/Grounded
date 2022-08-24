#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProxyStandInActor.generated.h"

class UBaseLODActor;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class MAINE_API AProxyStandInActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseLODActor* LODOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
public:
    AProxyStandInActor();
};

