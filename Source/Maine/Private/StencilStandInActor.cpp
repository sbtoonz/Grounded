#include "StencilStandInActor.h"
#include "Components/StaticMeshComponent.h"

AStencilStandInActor::AStencilStandInActor() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

