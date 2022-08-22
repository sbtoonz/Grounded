#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GlobalTableData.generated.h"

class UDataTable;

UCLASS(BlueprintType, Const)
class MAINE_API UGlobalTableData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* AllItemsTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* CraftingRecipeTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* BuildingRecipeTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* MetaBuildingsTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* MetaBuildingVariantsTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* GardenRecipeTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* QuestsTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* ItemSetsTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* TechTreesTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* PowerTypesTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* TutorialsTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* PerksTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* PlayerUpgradesTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* SignsTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* ZonesTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* AchievementsTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* PetPersonalitiesTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* CharactersTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* StatusEffectsTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* BestiaryTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* KeyItemsTable;
    
    UGlobalTableData();
};

