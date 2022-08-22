#pragma once
#include "CoreMinimal.h"
#include "BaseRecipeData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "MetaBuildingIdentifier.h"
#include "BuildingRecipeData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBuildingRecipeData : public FBaseRecipeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle Building;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMetaBuildingIdentifier MetaBuilding;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bIsFlammable: 1;
    
    FBuildingRecipeData();
};

