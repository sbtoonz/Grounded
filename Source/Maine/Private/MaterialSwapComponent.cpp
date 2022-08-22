#include "MaterialSwapComponent.h"

class UMeshComponent;
class UMaterialInterface;

void UMaterialSwapComponent::SetMaterial(EMaterialSwapLayer Layer, UMeshComponent* Component, int32 MaterialIndex, UMaterialInterface* Material) {
}

UMaterialInterface* UMaterialSwapComponent::GetMaterial(EMaterialSwapLayer Layer, UMeshComponent* Component, int32 MaterialIndex) {
    return NULL;
}

void UMaterialSwapComponent::ClearMaterials(EMaterialSwapLayer Layer, UMeshComponent* Component) {
}

void UMaterialSwapComponent::ClearMaterial(EMaterialSwapLayer Layer, UMeshComponent* Component, int32 MaterialIndex) {
}

UMaterialSwapComponent::UMaterialSwapComponent() {
}

