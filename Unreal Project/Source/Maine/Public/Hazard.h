#pragma once
#include "CoreMinimal.h"
#include "StatusEffectOrigin.h"
#include "GameFramework/Actor.h"
#include "HazardEnterDelegateDelegate.h"
#include "HazardExitDelegateDelegate.h"
#include "HazardTickDelegateDelegate.h"
#include "HazardEndedDelegateDelegate.h"
#include "HazardEnabledDelegateDelegate.h"
#include "DamageData.h"
#include "EInflictDamageStyle.h"
#include "EHazardEffectApplyType.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Hazard.generated.h"

class USceneComponent;
class UShapeComponent;
class UPrimitiveComponent;
class UScreenEffectData;
class UAttack;
class ASurvivalCharacter;

UCLASS(Abstract)
class MAINE_API AHazard : public AActor, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHazardEnterDelegate OnCharacterEnter;
    
    UPROPERTY(BlueprintAssignable)
    FHazardExitDelegate OnCharacterExit;
    
    UPROPERTY(BlueprintAssignable)
    FHazardEndedDelegate OnHazardEnded;
    
    UPROPERTY(BlueprintAssignable)
    FHazardEnabledDelegate OnHazardEnabled;
    
    UPROPERTY(BlueprintAssignable)
    FHazardTickDelegate OnHazardTargetTick;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UShapeComponent* CollisionComponent;
    
    UPROPERTY(EditAnywhere)
    float TickInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Lifetime;
    
    UPROPERTY(EditAnywhere)
    FDamageData DamageData;
    
    UPROPERTY(EditAnywhere)
    bool bTickForDamage;
    
    UPROPERTY(EditAnywhere)
    EInflictDamageStyle DamageStyle;
    
    UPROPERTY(ReplicatedUsing=OnRep_HazardEnding)
    bool bHazardEnded;
    
    UPROPERTY(ReplicatedUsing=OnRep_HazardEnabled)
    bool bHazardEnabled;
    
    UPROPERTY(EditAnywhere)
    float FailsafeDestroyTime;
    
    UPROPERTY(EditAnywhere)
    EHazardEffectApplyType StatusEffectApplyType;
    
    UPROPERTY(EditAnywhere)
    TArray<FDataTableRowHandle> StatusEffects;
    
    // UPROPERTY(EditAnywhere)
    // UScreenEffectData* ScreenEffect;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle ProjectileAttackData;
    
    UPROPERTY(Transient)
    AActor* ProjectileOwner;
    
    /*UPROPERTY(Transient)
    UAttack* ProjectileAttack;*/
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysClearEffectsOnExit;
    
public:
    AHazard();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void SetProjectileAttackOwner(AActor* NewOwner);
    
protected:
    UFUNCTION()
    void OnRep_HazardEnding();
    
    UFUNCTION()
    void OnRep_HazardEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsHazardExpired() const;
    
protected:
    UFUNCTION()
    void HazardExpired();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleHazardEnding();
    
public:
    /*UFUNCTION(BlueprintPure)
    UAttack* GetProjectileAttack();*/
    
    UFUNCTION(BlueprintPure)
    bool GetHazardEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableHazard(bool bEnabled);
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanApplyToTarget(ASurvivalCharacter* TargetToTest);
    
    
    // Fix for true pure virtual functions not being implemented
};

