#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "StencilStandInActor.generated.h"

class UStaticMeshComponent;

UCLASS()
class MAINE_API AStencilStandInActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    AStencilStandInActor();
};

