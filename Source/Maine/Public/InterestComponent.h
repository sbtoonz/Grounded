#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnComponentActivityModeChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "VitalStatValue.h"
#include "VitalState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ECreatureActivityMode.h"
#include "RealInterestState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GoapActionInstance.h"
#include "InterestComponent.generated.h"

class UVitalStat;
class UInterestCore;
class UGoapAction;
class UGoapWorldStateEvaluator;
class UAttractionComponent;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UInterestComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnComponentActivityModeChanged OnActivityModeChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UInterestCore* Core;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer FoodTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag TirednessTag;
    
    UPROPERTY(EditAnywhere)
    uint8 bShouldDropBreadcrumbs: 1;
    
    UPROPERTY(EditAnywhere)
    UGoapAction* FleeBreadcrumbAction;
    
    UPROPERTY(EditAnywhere)
    UGoapAction* BaselineAction;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UVitalStat>> VitalValues;
    
    UPROPERTY(EditAnywhere)
    TArray<UGoapWorldStateEvaluator*> WorldEvaluators;
    
public:
    UInterestComponent();
    UFUNCTION(BlueprintCallable)
    void VisitBreadcrumb();
    
    UFUNCTION(BlueprintPure)
    bool HasInterest() const;
    
    UFUNCTION(BlueprintPure)
    bool HasDesiredBreadcrumb() const;
    
protected:
    UFUNCTION()
    void HandleCoreActivityModeChanged(UInterestCore* Sender, ECreatureActivityMode Mode);
    
public:
    UFUNCTION(BlueprintPure)
    TArray<UGoapWorldStateEvaluator*> GetWorldEvaluators() const;
    
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
    FGameplayTagContainer GetFoodTags() const;
    
    UFUNCTION(BlueprintPure)
    UGoapAction* GetFleeBreadcrumbAction() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetDesiredTargetRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDesiredTargetLocation() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetDesiredTargetActor() const;
    
    UFUNCTION(BlueprintPure)
    UAttractionComponent* GetDesiredTarget() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBreadcrumbActionLocation();
    
    UFUNCTION(BlueprintPure)
    FGoapActionInstance GetBreadcrumbAction();
    
    UFUNCTION(BlueprintPure)
    UGoapAction* GetBaselineAction() const;
    
    UFUNCTION(BlueprintPure)
    ECreatureActivityMode GetActivityMode() const;
    
    UFUNCTION(BlueprintCallable)
    void AdjustVitalValueBySemantic(const FGameplayTag& Tag, float Adjustment);
    
    UFUNCTION(BlueprintCallable)
    void AdjustVitalValue(const UVitalStat* Stat, float Adjustment);
    
};

