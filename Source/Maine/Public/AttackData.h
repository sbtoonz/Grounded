#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "DamageData.h"
#include "EAttackHitType.h"
#include "AttackAIParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "AttackHazardParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EAttackStatusEffectApplyType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "AttackData.generated.h"

class USoundBase;
class ASurvivalCharacter;
class AProjectile;
class UAttackAnimEffect;
class UAnimMontage;
class UVisualEffect;
class USurfaceEffectData;

USTRUCT(BlueprintType)
struct MAINE_API FAttackData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDamageData DamageData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDamageData> DamageDataSecondary;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDamageData ChargedDamageData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ChargeTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bChargeHoldChainsAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Range;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OverrideTraceRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ConeAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ConeBaseDirectionAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool ConeBaseDirectionSymetry;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIgnoreVisibilityCheck;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SoundIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SoundRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EAttackHitType HitResolutionType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bIsHostile: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bFriendlyFire: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bIgnoreOwner: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bDropHauledItems: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 FireAttackOnFullCharge: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bEndAttackOnHit: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bHitFrameLoops: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bChargeHitOnlyOnCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bSelfDestruct: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bDestroyTarget: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAttackAIParams AIParams;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 StaminaCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ChargedStaminaCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AProjectile> ChargedProjectileClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<ASurvivalCharacter> SummonClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FAttackHazardParams> Hazards;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRangedAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bBurrowAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bBurrowOnEndAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUnBurrowOnEndAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ProjectileAttackTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName OriginSocket;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator LauchOrientationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseLegacyOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseOffsetAsRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bSummonBossMobsPhase;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> StatusEffects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EAttackStatusEffectApplyType StatusEffectApplyType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAttackAnimEffect* AttackAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* WeaponAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* DeflectAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle DeathNotification;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UVisualEffect> StartVFX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UVisualEffect> LaunchVFX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UVisualEffect> AttackVFX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<USoundBase> SoundFX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<USurfaceEffectData> HitEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer Tags;
    
    FAttackData();
};

