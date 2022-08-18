#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EAttackResolutionType.h"
#include "UObject/Object.h"
#include "StatusEffectOrigin.h"
#include "Engine/DataTable.h"
#include "AttackDataPreloadAssets.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EAttackHitType.h"
#include "Attack.generated.h"

class AActor;
class UAnimMontage;
class UItem;
class AController;
class USurvivalDamageType;

UCLASS(BlueprintType, EditInlineNew)
class MAINE_API UAttack : public UObject, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FAttackDataPreloadAssets InCombatPreloader;
    
    UPROPERTY(Transient)
    FAttackDataPreloadAssets AttackActivePreloader;
    
public:
    UAttack();
    UFUNCTION(BlueprintCallable)
    void SpawnProjectile(FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldLockRotation() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldEndOnHit() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldChargeHitOnlyOnCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    void ResolveAttackForHitResult(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    EAttackResolutionType ResolveAttack(bool UseSecondaryDamageData, int32 SecondaryDamageDataIndex);
    
    UFUNCTION(BlueprintCallable)
    bool RequiresFacing() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsSummonAttack() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsSelfDestruct() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsSelfAttack() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsRangedAttack() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLoopingAttack() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHostile() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHazardAttack() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCharged() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAOE() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasToSummonBossMobPhase() const;
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetWeaponAnimMontage() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTier() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetStaminaCost() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSoundRange() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSoundIntensity() const;
    
    UFUNCTION(BlueprintCallable)
    float GetPreferredMaxDistance() const;
    
    UFUNCTION(BlueprintCallable)
    float GetPreferredHeight() const;
    
    UFUNCTION(BlueprintCallable)
    float GetPreferredDistancePostLunge() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetOverrideDeflectAnim() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMinDistance() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMaxDuration() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMaxDistance() const;
    
    UFUNCTION(BlueprintCallable)
    UItem* GetItemOwner() const;
    
    UFUNCTION(BlueprintCallable)
    AController* GetInstigatorController() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetInstigator() const;
    
    UFUNCTION(BlueprintCallable)
    EAttackHitType GetHitResolutionType() const;
    
    UFUNCTION(BlueprintCallable)
    FDataTableRowHandle GetDeathNotification() const;
    
    UFUNCTION(BlueprintCallable)
    uint8 GetDamageTypeFlags() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<USurvivalDamageType> GetDamageType() const;
    
    UFUNCTION(BlueprintCallable)
    float GetChargeTimer() const;
    
    UFUNCTION(BlueprintCallable)
    float GetChargeRatio() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetChargedStaminaCost() const;
    
    UFUNCTION(BlueprintCallable)
    float GetAttackRange() const;
    
    UFUNCTION(BlueprintCallable)
    FDataTableRowHandle GetAttackDataRowHandle() const;
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetAnimMontage() const;
    
    UFUNCTION(BlueprintCallable)
    bool FireAttackOnFullCharge() const;
    
    UFUNCTION(BlueprintCallable)
    bool DoesHitFrameLoop() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanCharge() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

