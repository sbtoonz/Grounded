#include "Projectile.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent

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

