#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ThrowingImpactData.h"
#include "ComboScalingData.h"
#include "GlobalCombatData.generated.h"

class UVisualEffect;
class USurvivalDamageType;
class USoundBase;

UCLASS(BlueprintType, Const)
class MAINE_API UGlobalCombatData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DefaultAttackTraceRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OutOfStaminaBlockStunMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OutOfStaminaBlockMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USurvivalDamageType> GenericDamageType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USurvivalDamageType> HungerDamageType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USurvivalDamageType> ThirstDamageType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USurvivalDamageType> BadFoodDamageType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USurvivalDamageType> EnvironmentalDamageType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinimumDamageReduction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinimumDamageReductionDecreasePerEquipmentLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CriticalHitMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FComboScalingData> ComboScalingTypes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ThrowingStaminaCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ThrowingDurabilityCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ThrowingForce;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ThrowingRotationalForce;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ItemVelocityThresholdForDamage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ItemVelocityThresholdForSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FThrowingImpactData DefaultThrowingImpact;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FThrowingImpactData> ThrowingImpactTypes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* HitMarkerSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UVisualEffect* CriticalHitEffect;
    
    UPROPERTY(EditAnywhere)
    float CombatRegenDelay;
    
    UPROPERTY(EditAnywhere)
    float CombatRegenTickPercentage;
    
    UPROPERTY(EditAnywhere)
    float CombatRegenTickRate;
    
    UGlobalCombatData();
};

