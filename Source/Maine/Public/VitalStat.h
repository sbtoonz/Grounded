#pragma once
#include "CoreMinimal.h"
#include "DamageInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "VitalStat.generated.h"

class UInterestCore;
class UCurveFloat;

UCLASS(Abstract, BlueprintType)
class MAINE_API UVitalStat : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer Sematics;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatRange StartingRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* ValueCurve;
    
protected:
    UPROPERTY()
    uint8 StartingRangeEnabled;
    
public:
    UVitalStat();
    UFUNCTION(BlueprintPure)
    float GetDecayRate(UInterestCore* Core, float DeltaHours) const;
    
    UFUNCTION(BlueprintPure)
    float GetDamageResponse(float Damage, const FDamageInfo& DamageInfo) const;
    
    UFUNCTION(BlueprintPure)
    float GenerateStartingValue(UInterestCore* Core) const;
    
};

