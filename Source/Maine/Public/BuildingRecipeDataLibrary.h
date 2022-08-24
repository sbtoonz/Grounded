#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "BuildingRecipeData.h"
#include "BuildingRecipeDataLibrary.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBuildingRecipeDataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBuildingRecipeDataLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDataTableRowHandle GetBuildingRecipePrimaryMaterial(const FBuildingRecipeData& Data);
    
};

