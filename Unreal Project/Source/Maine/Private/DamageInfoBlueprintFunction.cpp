#include "DamageInfoBlueprintFunction.h"

class UBaseLODActor;
class APlayerState;
class AActor;

UBaseLODActor* UDamageInfoBlueprintFunction::GetLODActorDamageSource(const FDamageInfo& DamageInfo) {
    return NULL;
}

AActor* UDamageInfoBlueprintFunction::GetActorDamageSource(const FDamageInfo& DamageInfo) {
    return NULL;
}

UDamageInfoBlueprintFunction::UDamageInfoBlueprintFunction() {
}

