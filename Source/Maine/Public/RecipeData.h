#pragma once
#include "CoreMinimal.h"
#include "BaseRecipeData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "RecipeMod.h"
#include "RecipeData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FRecipeData : public FBaseRecipeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle CraftedItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CraftedItemCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle ToolRequired;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag CraftingBuildingTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FRecipeMod> RecipeMods;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bBurgleQuestCanCraft: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BurgleQuestCraftRewardLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BurgleQuestMinCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BurgleQuestMaxCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BurgleQuestMaxCountProgress;
    
    FRecipeData();
};

