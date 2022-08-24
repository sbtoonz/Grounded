#include "ProxyStandInActor.h"
#include "Components/StaticMeshComponent.h"

AProxyStandInActor::AProxyStandInActor() {
    this->LODOwner = NULL;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
}

