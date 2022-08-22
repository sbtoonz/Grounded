#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "MaterialToIngredientMapping.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FMaterialToIngredientMapping {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName MeshName;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 StartIndex;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 EndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 NeedsInvisibleConstructionMaterial: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FDataTableRowHandle Ingredient;
    
    FMaterialToIngredientMapping();
};

