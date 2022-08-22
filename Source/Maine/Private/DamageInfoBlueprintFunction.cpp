#include "DamageInfoBlueprintFunction.h"

class UBaseLODActor;
class APlayerState;
class AActor;

UBaseLODActor* UDamageInfoBlueprintFunction::GetLODActorDamageSource(const FDamageInfo& DamageInfo) {
    return NULL;
}

void UDamageInfoBlueprintFunction::GetDeathMessage(APlayerState* OwnerPlayerState, const FDeathInfo& DeathInfo, FString& OutText, bool bForceDeathMessage) {
}

AActor* UDamageInfoBlueprintFunction::GetActorDamageSource(const FDamageInfo& DamageInfo) {
    return NULL;
}

UDamageInfoBlueprintFunction::UDamageInfoBlueprintFunction() {
}

