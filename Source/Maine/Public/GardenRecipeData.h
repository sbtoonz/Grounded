#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "GardenRecipeData.generated.h"

class UItemSpawnData;
class UStaticMesh;

USTRUCT(BlueprintType)
struct MAINE_API FGardenRecipeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle CatalystItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UItemSpawnData> SpawnData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UItemSpawnData> RareSpawnData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> SpawnSockets;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RareSpawnChance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* InProductionMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* RareSpawnInProductionMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* PreviewMesh;
    
    FGardenRecipeData();
};

