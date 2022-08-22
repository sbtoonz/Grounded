#include "DynamicMaterialCache.h"

class UMaterialInterface;
class UMeshComponent;
class UMaterialInstanceDynamic;

UMaterialInstanceDynamic* UDynamicMaterialCache::GetDynamicMaterialWithColor(UMaterialInterface* BaseMaterial, FName ParameterName, FLinearColor Color) {
    return NULL;
}

UMaterialInstanceDynamic* UDynamicMaterialCache::AssignDynamicMaterialWithColor(UMaterialInterface* BaseMaterial, FName ParameterName, FLinearColor Color, UMeshComponent* Component, int32 MaterialIndex) {
    return NULL;
}

UDynamicMaterialCache::UDynamicMaterialCache() {
}

