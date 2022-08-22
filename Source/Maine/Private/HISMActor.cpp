#include "HISMActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HierarchicalInstancedStaticMeshComponent -FallbackName=HierarchicalInstancedStaticMeshComponent

AHISMActor::AHISMActor() {
    this->HISMC = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISMC"));
}

