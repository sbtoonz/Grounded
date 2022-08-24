#include "AttackCapsuleComponent.h"

class AActor;
class UPrimitiveComponent;

void UAttackCapsuleComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UAttackCapsuleComponent::OnDeath(const FDamageInfo& DamageInfo) {
}

void UAttackCapsuleComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UAttackCapsuleComponent::UAttackCapsuleComponent() {
    this->AttackType = EAttackCapsuleType::Attack;
    this->ForceValue = 0.00f;
    this->PullAcceptableDistance = 0.00f;
}

