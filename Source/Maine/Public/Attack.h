#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "StatusEffectOrigin.h"
#include "AttackDataPreloadAssets.h"
#include "UObject/NoExportTypes.h"
#include "EAttackResolutionType.h"
#include "EAttackHitType.h"
#include "Engine/DataTable.h"
#include "Attack.generated.h"

class UAnimMontage;
class AActor;
class UItem;
class AController;
class USurvivalDamageType;

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API UAttack : public UObject, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAttackDataPreloadAssets InCombatPreloader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAttackDataPreloadAssets AttackActivePreloader;
    
public:
    UAttack();
    UFUNCTION(BlueprintCallable)
    void SpawnProjectile(FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldLockRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldEndOnHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldChargeHitOnlyOnCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    void ResolveAttackForHitResult(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    EAttackResolutionType ResolveAttack(bool UseSecondaryDamageData, int32 SecondaryDamageDataIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RequiresFacing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSummonAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelfDestruct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelfAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRangedAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoopingAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHostile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHazardAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAOE() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasToSummonBossMobPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetWeaponAnimMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStaminaCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSoundRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSoundIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreferredMaxDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreferredHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreferredDistancePostLunge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetOverrideDeflectAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* GetItemOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetInstigatorController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAttackHitType GetHitResolutionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetDeathNotification() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetDamageTypeFlags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<USurvivalDamageType> GetDamageType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChargeTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChargeRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChargedStaminaCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetAttackDataRowHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetAnimMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FireAttackOnFullCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesHitFrameLoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCharge() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

