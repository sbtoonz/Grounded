#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CraftingInterfaceWidget.generated.h"

class UUserWidget;
class UHorizontalBox;
class UBottomButtonWidget;
class UTextBlock;
class UDataTable;
class UImage;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UCraftingInterfaceWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUserWidget* WorkbenchTab;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUserWidget* ModelViewer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUserWidget* CraftingRequirements;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UHorizontalBox* WarningContainer;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBottomButtonWidget* CraftEquip;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBottomButtonWidget* Craft;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBottomButtonWidget* CraftMany;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBottomButtonWidget* PlaceBlueprint;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBottomButtonWidget* HotCraft;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBottomButtonWidget* HotCraftMany;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBottomButtonWidget* JumpToEntry;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* ItemCount;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UGameUserWidget* ItemDescriptionBox;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UGameUserWidget* KnownRecipesUsedIn;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* DangerLoopImage;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CraftingRecipes;
    
    UPROPERTY(BlueprintReadWrite)
    FDataTableRowHandle SelectedCraftingRecipe;
    
    UPROPERTY(BlueprintReadWrite)
    FDataTableRowHandle SelectedBuildingRecipe;
    
    UPROPERTY(BlueprintReadWrite)
    FDataTableRowHandle SelectedResource;
    
    UPROPERTY(BlueprintReadWrite)
    FDataTableRowHandle SelectedCraftingRequirement;
    
    UPROPERTY(BlueprintReadWrite)
    FDataTableRowHandle SelectedKnownRecipeUsedIn;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag CraftingBuildingType;
    
public:
    UCraftingInterfaceWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectionChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPageOpened();
    
};

