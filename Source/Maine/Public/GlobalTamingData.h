#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "TamingHappinessStep.h"
#include "GlobalTamingData.generated.h"

UCLASS(Blueprintable, Const)
class MAINE_API UGlobalTamingData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTamingHappinessStep> HappinessSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HappinessVitalTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquippedHappinessDecayMult;
    
    UGlobalTamingData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float HungerToHappiness(float Hunger) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float HappinessToHunger(float Happiness) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHappinessStepIndexFromHunger(float Hunger) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHappinessStepIndex(float Happiness) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTamingHappinessStep GetHappinessStepData(float Happiness) const;
    
};

