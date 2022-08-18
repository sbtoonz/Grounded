#pragma once
#include "CoreMinimal.h"
#include "AttackDataPreloadAssets.generated.h"

class USoundBase;
class UVisualEffect;
class USurfaceEffectData;

USTRUCT(BlueprintType)
struct FAttackDataPreloadAssets {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UClass* ProjectileClass;
    
    UPROPERTY(Transient)
    UClass* ChargedProjectileClass;
    
    UPROPERTY(Transient)
    UVisualEffect* StartVFX;
    
    UPROPERTY(Transient)
    UVisualEffect* LaunchVFX;
    
    UPROPERTY(Transient)
    UVisualEffect* AttackVFX;
    
    UPROPERTY(Transient)
    USoundBase* SoundFX;
    
    UPROPERTY(Transient)
    USurfaceEffectData* HitEffect;
    
public:
    MAINE_API FAttackDataPreloadAssets();
};

