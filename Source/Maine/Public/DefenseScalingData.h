#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DefenseScalingData.generated.h"

UCLASS(Blueprintable)
class MAINE_API UDefenseScalingData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MaxHealthMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MaxStunMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> StunDurationMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DamageResistanceMultipliers;
    
    UDefenseScalingData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStunDurationMultiplier(int32 PlayerCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxStunMultiplier(int32 PlayerCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealthMultiplier(int32 PlayerCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageResistanceMultiplier(int32 PlayerCount) const;
    
};

