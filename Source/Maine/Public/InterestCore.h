#pragma once
#include "CoreMinimal.h"
#include "VitalStatValue.h"
#include "VitalState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UnreachableActionData.h"
#include "PersistentInterface.h"
#include "GoapActionDelegateDelegate.h"
#include "VitalStatChangedDelegateDelegate.h"
#include "ECreatureActivityMode.h"
#include "InterestConfig.h"
#include "OnCoreActivityModeChangedDelegate.h"
#include "GoapActionInstance.h"
#include "RealInterestState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EFaceTargetType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InterestCore.generated.h"

class UAttractionComponent;
class UVitalStat;

UCLASS(BlueprintType)
class MAINE_API UInterestCore : public UObject, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGoapActionDelegate OnActionExecuted;
    
    UPROPERTY(BlueprintAssignable)
    FVitalStatChangedDelegate OnVitalChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnCoreActivityModeChanged OnActivityModeChanged;
    
private:
    UPROPERTY()
    FInterestConfig Config;
    
    UPROPERTY(Transient)
    TMap<UObject*, FUnreachableActionData> UnreachableActions;
    
    UPROPERTY(Transient)
    TArray<FGoapActionInstance> DesiredActionSequence;
    
    UPROPERTY(Transient)
    FGoapActionInstance PreviousAction;
    
    UPROPERTY(Transient)
    FGoapActionInstance BreadcrumbAction;
    
    UPROPERTY(Transient)
    FGoapActionInstance DesiredAction;
    
public:
    UInterestCore();
    UFUNCTION(BlueprintPure)
    bool ShouldTrackDesiredTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldInteractWithFace() const;
    
    UFUNCTION(BlueprintCallable)
    bool SetVitalValueBySemantic(const FGameplayTag& Tag, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityMode(ECreatureActivityMode Mode);
    
    UFUNCTION(BlueprintPure)
    bool HasInterest() const;
    
    UFUNCTION(BlueprintPure)
    bool HasDesiredBreadcrumb() const;
    
    UFUNCTION(BlueprintPure)
    bool GetVitalValueBySemantic(const FGameplayTag& Tag, float& Value) const;
    
    UFUNCTION(BlueprintPure)
    bool GetVitalValue(const UVitalStat* Stat, float& Value) const;
    
    UFUNCTION(BlueprintPure)
    FVitalState GetVitalState();
    
    UFUNCTION(BlueprintPure)
    TMap<UVitalStat*, FVitalStatValue> GetVitals() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetTirednessTag() const;
    
    UFUNCTION(BlueprintPure)
    FRealInterestState GetState();
    
    UFUNCTION(BlueprintPure)
    bool GetShouldDropBreadcrumbs() const;
    
    UFUNCTION(BlueprintPure)
    float GetPetHappinessNormalized() const;
    
    UFUNCTION(BlueprintPure)
    bool GetMustLand() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetFoodTags() const;
    
    UFUNCTION(BlueprintPure)
    EFaceTargetType GetFacingBehavior() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetDesiredTargetRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDesiredTargetLocation() const;
    
    UFUNCTION(BlueprintPure)
    UAttractionComponent* GetDesiredTarget() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBreadcrumbActionLocation();
    
    UFUNCTION(BlueprintPure)
    FGoapActionInstance GetBreadcrumbAction();
    
    UFUNCTION(BlueprintPure)
    ECreatureActivityMode GetActivityMode() const;
    
    UFUNCTION(BlueprintCallable)
    void AdjustVitalValueBySemantic(const FGameplayTag& Tag, float Adjustment);
    
    UFUNCTION(BlueprintCallable)
    void AdjustVitalValue(const UVitalStat* Stat, float Adjustment);
    
    
    // Fix for true pure virtual functions not being implemented
};

