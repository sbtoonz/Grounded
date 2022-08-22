#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "BuildingRecipeData.h"
#include "BuildingRecipeDataLibrary.generated.h"

UCLASS(BlueprintType)
class MAINE_API UBuildingRecipeDataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBuildingRecipeDataLibrary();
    UFUNCTION(BlueprintPure)
    static FDataTableRowHandle GetBuildingRecipePrimaryMaterial(const FBuildingRecipeData& Data);
    
};

