#include "Attack.h"
#include "Templates/SubclassOf.h"

class AController;
class UAnimMontage;
class AActor;
class UItem;
class USurvivalDamageType;

void UAttack::SpawnProjectile(FTransform SpawnTransform) {
}

bool UAttack::ShouldLockRotation() const {
    return false;
}

bool UAttack::ShouldEndOnHit() const {
    return false;
}

bool UAttack::ShouldChargeHitOnlyOnCharacter() const {
    return false;
}

void UAttack::ResolveAttackForHitResult(const FHitResult& HitResult) {
}

EAttackResolutionType UAttack::ResolveAttack(bool UseSecondaryDamageData, int32 SecondaryDamageDataIndex) {
    return EAttackResolutionType::WontHit;
}

bool UAttack::RequiresFacing() const {
    return false;
}

bool UAttack::IsSummonAttack() const {
    return false;
}

bool UAttack::IsSelfDestruct() const {
    return false;
}

bool UAttack::IsSelfAttack() const {
    return false;
}

bool UAttack::IsRangedAttack() const {
    return false;
}

bool UAttack::IsLoopingAttack() const {
    return false;
}

bool UAttack::IsHostile() const {
    return false;
}

bool UAttack::IsHazardAttack() const {
    return false;
}

bool UAttack::IsCharged() const {
    return false;
}

bool UAttack::IsAOE() const {
    return false;
}

bool UAttack::HasToSummonBossMobPhase() const {
    return false;
}

UAnimMontage* UAttack::GetWeaponAnimMontage() const {
    return NULL;
}

int32 UAttack::GetTier() const {
    return 0;
}

int32 UAttack::GetStaminaCost() const {
    return 0;
}

float UAttack::GetSoundRange() const {
    return 0.0f;
}

float UAttack::GetSoundIntensity() const {
    return 0.0f;
}

float UAttack::GetPreferredMaxDistance() const {
    return 0.0f;
}

float UAttack::GetPreferredHeight() const {
    return 0.0f;
}

float UAttack::GetPreferredDistancePostLunge() const {
    return 0.0f;
}

AActor* UAttack::GetOwner() const {
    return NULL;
}

UAnimMontage* UAttack::GetOverrideDeflectAnim() const {
    return NULL;
}

float UAttack::GetMinDistance() const {
    return 0.0f;
}

float UAttack::GetMaxDuration() const {
    return 0.0f;
}

float UAttack::GetMaxDistance() const {
    return 0.0f;
}

UItem* UAttack::GetItemOwner() const {
    return NULL;
}

AController* UAttack::GetInstigatorController() const {
    return NULL;
}

AActor* UAttack::GetInstigator() const {
    return NULL;
}

EAttackHitType UAttack::GetHitResolutionType() const {
    return EAttackHitType::Default;
}

FDataTableRowHandle UAttack::GetDeathNotification() const {
    return FDataTableRowHandle{};
}

uint8 UAttack::GetDamageTypeFlags() const {
    return 0;
}

TSubclassOf<USurvivalDamageType> UAttack::GetDamageType() const {
    return NULL;
}

float UAttack::GetChargeTimer() const {
    return 0.0f;
}

float UAttack::GetChargeRatio() const {
    return 0.0f;
}

int32 UAttack::GetChargedStaminaCost() const {
    return 0;
}

float UAttack::GetAttackRange() const {
    return 0.0f;
}

FDataTableRowHandle UAttack::GetAttackDataRowHandle() const {
    return FDataTableRowHandle{};
}

UAnimMontage* UAttack::GetAnimMontage() const {
    return NULL;
}

bool UAttack::FireAttackOnFullCharge() const {
    return false;
}

bool UAttack::DoesHitFrameLoop() const {
    return false;
}

bool UAttack::CanCharge() const {
    return false;
}

UAttack::UAttack() {
}

