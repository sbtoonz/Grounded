#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "EAttackCapsuleType.h"
#include "DamageInfo.h"
#include "Engine/EngineTypes.h"
#include "AttackCapsuleComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class UAttackCapsuleComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAttackCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EAttackCapsuleType AttackType;
    
    UPROPERTY(EditAnywhere)
    float ForceValue;
    
    UPROPERTY(EditAnywhere)
    float PullAcceptableDistance;
    
    UPROPERTY(EditAnywhere)
    FName AttackAttachSocket;
    
    UPROPERTY(Export, Transient)
    TArray<UAttackCapsuleComponent*> AttacksCapsuleComponents;
    
public:
    UAttackCapsuleComponent();
protected:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnDeath(const FDamageInfo& DamageInfo);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

