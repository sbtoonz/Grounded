#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ERecipeVisibility.h"
#include "RecipeRequirements.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BaseRecipeData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBaseRecipeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ERecipeVisibility Visibility;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    uint8 bWasCut: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    uint8 bHideInCraftingMenu: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bQuestCritical: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FRecipeRequirements> Requirements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle ReplaceRecipe;
    
    FBaseRecipeData();
};

