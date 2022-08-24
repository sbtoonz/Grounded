#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DamageInfo.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "VitalStat.generated.h"

class UCurveFloat;
class UInterestCore;

UCLASS(Abstract, Blueprintable)
class MAINE_API UVitalStat : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Sematics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange StartingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ValueCurve;
    
protected:
    UPROPERTY(EditAnywhere)
    uint8 StartingRangeEnabled;
    
public:
    UVitalStat();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDecayRate(UInterestCore* Core, float DeltaHours) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageResponse(float Damage, const FDamageInfo& DamageInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GenerateStartingValue(UInterestCore* Core) const;
    
};

