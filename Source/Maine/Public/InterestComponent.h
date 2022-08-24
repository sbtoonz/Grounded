#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnComponentActivityModeChangedDelegate.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ECreatureActivityMode.h"
#include "VitalStatValue.h"
#include "VitalState.h"
#include "RealInterestState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GoapActionInstance.h"
#include "InterestComponent.generated.h"

class UInterestCore;
class UVitalStat;
class UGoapWorldStateEvaluator;
class UGoapAction;
class AActor;
class UAttractionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UInterestComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComponentActivityModeChanged OnActivityModeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterestCore* Core;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FoodTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TirednessTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldDropBreadcrumbs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGoapAction* FleeBreadcrumbAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGoapAction* BaselineAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UVitalStat>> VitalValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGoapWorldStateEvaluator*> WorldEvaluators;
    
public:
    UInterestComponent();
    UFUNCTION(BlueprintCallable)
    void VisitBreadcrumb();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInterest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDesiredBreadcrumb() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCoreActivityModeChanged(UInterestCore* Sender, ECreatureActivityMode Mode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGoapWorldStateEvaluator*> GetWorldEvaluators() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVitalValueBySemantic(const FGameplayTag& Tag, float& Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVitalValue(const UVitalStat* Stat, float& Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVitalState GetVitalState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UVitalStat*, FVitalStatValue> GetVitals() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTirednessTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRealInterestState GetState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldDropBreadcrumbs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetFoodTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGoapAction* GetFleeBreadcrumbAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDesiredTargetRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDesiredTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetDesiredTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttractionComponent* GetDesiredTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBreadcrumbActionLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGoapActionInstance GetBreadcrumbAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGoapAction* GetBaselineAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECreatureActivityMode GetActivityMode() const;
    
    UFUNCTION(BlueprintCallable)
    void AdjustVitalValueBySemantic(const FGameplayTag& Tag, float Adjustment);
    
    UFUNCTION(BlueprintCallable)
    void AdjustVitalValue(const UVitalStat* Stat, float Adjustment);
    
};

