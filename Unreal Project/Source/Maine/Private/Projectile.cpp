#include "Projectile.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;

void AProjectile::OnStop(const FHitResult& ImpactResult) {
}

void AProjectile::OnParticleSystemFinished(UParticleSystemComponent* ParticleSystemComponent) {
}

void AProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AProjectile::DestroyProjectile(bool bForceDestroy) {
}

void AProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AProjectile, bHasAttackTimer);
}

AProjectile::AProjectile() {
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    this->ParticleTrailComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    this->bDestroyOnImpact = true;
    this->bHasAttackTimer = false;
}

