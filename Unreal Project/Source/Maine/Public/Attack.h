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
    
    UFUNCTION(BlueprintPure)
    bool ShouldLockRotation() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldEndOnHit() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldChargeHitOnlyOnCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    void ResolveAttackForHitResult(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    EAttackResolutionType ResolveAttack(bool UseSecondaryDamageData, int32 SecondaryDamageDataIndex);
    
    UFUNCTION(BlueprintPure)
    bool RequiresFacing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSummonAttack() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSelfDestruct() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSelfAttack() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRangedAttack() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLoopingAttack() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHostile() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHazardAttack() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCharged() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAOE() const;
    
    UFUNCTION(BlueprintPure)
    bool HasToSummonBossMobPhase() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetWeaponAnimMontage() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStaminaCost() const;
    
    UFUNCTION(BlueprintPure)
    float GetSoundRange() const;
    
    UFUNCTION(BlueprintPure)
    float GetSoundIntensity() const;
    
    UFUNCTION(BlueprintPure)
    float GetPreferredMaxDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetPreferredHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetPreferredDistancePostLunge() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetOverrideDeflectAnim() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxDistance() const;
    
    UFUNCTION(BlueprintPure)
    UItem* GetItemOwner() const;
    
    UFUNCTION(BlueprintPure)
    AController* GetInstigatorController() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetInstigator() const;
    
    UFUNCTION(BlueprintPure)
    EAttackHitType GetHitResolutionType() const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetDeathNotification() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetDamageTypeFlags() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<USurvivalDamageType> GetDamageType() const;
    
    UFUNCTION(BlueprintPure)
    float GetChargeTimer() const;
    
    UFUNCTION(BlueprintPure)
    float GetChargeRatio() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChargedStaminaCost() const;
    
    UFUNCTION(BlueprintPure)
    float GetAttackRange() const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetAttackDataRowHandle() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetAnimMontage() const;
    
    UFUNCTION(BlueprintPure)
    bool FireAttackOnFullCharge() const;
    
    UFUNCTION(BlueprintPure)
    bool DoesHitFrameLoop() const;
    
    UFUNCTION(BlueprintPure)
    bool CanCharge() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

