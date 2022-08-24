#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StencilStandInActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class MAINE_API AStencilStandInActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    AStencilStandInActor();
};

