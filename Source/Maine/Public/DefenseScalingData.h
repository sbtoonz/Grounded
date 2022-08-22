#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DefenseScalingData.generated.h"

UCLASS(BlueprintType)
class MAINE_API UDefenseScalingData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<float> MaxHealthMultipliers;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> MaxStunMultipliers;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> StunDurationMultipliers;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> DamageResistanceMultipliers;
    
    UDefenseScalingData();
    UFUNCTION(BlueprintPure)
    float GetStunDurationMultiplier(int32 PlayerCount) const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxStunMultiplier(int32 PlayerCount) const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxHealthMultiplier(int32 PlayerCount) const;
    
    UFUNCTION(BlueprintPure)
    float GetDamageResistanceMultiplier(int32 PlayerCount) const;
    
};

