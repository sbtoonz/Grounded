#include "InstancedStaticMeshFunctionLibrary.h"

class UInstancedStaticMeshComponent;

int32 UInstancedStaticMeshFunctionLibrary::GetClosestInstanceInRadius(const UInstancedStaticMeshComponent* Component, FVector Center, float Radius) {
    return 0;
}

void UInstancedStaticMeshFunctionLibrary::GatherInstancesInRadius(const UInstancedStaticMeshComponent* Component, FVector Center, float Radius, TArray<int32>& OutInstances) {
}

UInstancedStaticMeshFunctionLibrary::UInstancedStaticMeshFunctionLibrary() {
}

