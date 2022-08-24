#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MaterialToIngredientMapping.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FMaterialToIngredientMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(EditAnywhere)
    uint8 StartIndex;
    
    UPROPERTY(EditAnywhere)
    uint8 EndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NeedsInvisibleConstructionMaterial: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Ingredient;
    
    FMaterialToIngredientMapping();
};

