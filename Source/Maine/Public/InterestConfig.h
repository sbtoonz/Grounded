#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "InterestConfig.generated.h"

class UVitalStat;
class UGoapAction;
class UGoapWorldStateEvaluator;

USTRUCT(BlueprintType)
struct FInterestConfig {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<TSubclassOf<UVitalStat>> VitalValues;
    
    UPROPERTY(VisibleAnywhere)
    FGameplayTagContainer FoodTags;
    
    UPROPERTY(VisibleAnywhere)
    FGameplayTag TirednessTag;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bShouldDropBreadcrumbs: 1;
    
    UPROPERTY(VisibleAnywhere)
    UGoapAction* FleeBreadcrumbAction;
    
    UPROPERTY(VisibleAnywhere)
    UGoapAction* BaselineAction;
    
    UPROPERTY(VisibleAnywhere)
    TArray<UGoapWorldStateEvaluator*> WorldEvaluators;
    
    MAINE_API FInterestConfig();
};

