#include "HISMActor.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

AHISMActor::AHISMActor() {
    this->HISMC = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISMC"));
}

