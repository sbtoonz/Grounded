#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RecipeRequirements.h"
#include "Engine/DataTable.h"
#include "ERecipeVisibility.h"
#include "GameplayTagContainer.h"
#include "BaseRecipeData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBaseRecipeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERecipeVisibility Visibility;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWasCut: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideInCraftingMenu: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bQuestCritical: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecipeRequirements> Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ReplaceRecipe;
    
    FBaseRecipeData();
};

