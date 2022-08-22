#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "TamingHappinessStep.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GlobalTamingData.generated.h"

UCLASS(BlueprintType, Const)
class MAINE_API UGlobalTamingData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FTamingHappinessStep> HappinessSteps;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag HappinessVitalTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EquippedHappinessDecayMult;
    
    UGlobalTamingData();
    UFUNCTION(BlueprintPure)
    static float HungerToHappiness(float Hunger) const;
    
    UFUNCTION(BlueprintPure)
    static float HappinessToHunger(float Happiness) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHappinessStepIndexFromHunger(float Hunger) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHappinessStepIndex(float Happiness) const;
    
    UFUNCTION(BlueprintPure)
    FTamingHappinessStep GetHappinessStepData(float Happiness) const;
    
};

