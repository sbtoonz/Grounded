#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "RecipeRequirements.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EquippableData.generated.h"

class USoundCue;
class UAnimMontage;

USTRUCT(BlueprintType)
struct FEquippableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* EquipAudio;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* EquipAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Durability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FlatDamageReduction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PercentageDamageReduction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> StatusEffects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> HiddenStatusEffects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FRecipeRequirements> RepairRecipe;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag HairType;
    
    MAINE_API FEquippableData();
};

