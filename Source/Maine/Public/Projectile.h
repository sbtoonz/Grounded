#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InteractableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Projectile.generated.h"

class UProjectileMovementComponent;
class USphereComponent;
class UParticleSystemComponent;
class UPrimitiveComponent;

UCLASS(Abstract)
class MAINE_API AProjectile : public AActor, public IInteractableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    UProjectileMovementComponent* ProjectileMovementComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    USphereComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    UParticleSystemComponent* ParticleTrailComponent;
    
    UPROPERTY(EditAnywhere)
    bool bDestroyOnImpact;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle ItemRowHandle;
    
    UPROPERTY(Replicated)
    uint8 bHasAttackTimer: 1;
    
public:
    AProjectile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnStop(const FHitResult& ImpactResult);
    
    UFUNCTION()
    void OnParticleSystemFinished(UParticleSystemComponent* ParticleSystemComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void DestroyProjectile(bool bForceDestroy);
    
    
    // Fix for true pure virtual functions not being implemented
};

