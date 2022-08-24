#pragma once
#include "CoreMinimal.h"
#include "BaseRecipeData.h"
#include "Engine/DataTable.h"
#include "MetaBuildingIdentifier.h"
#include "BuildingRecipeData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBuildingRecipeData : public FBaseRecipeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Building;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaBuildingIdentifier MetaBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsFlammable: 1;
    
    FBuildingRecipeData();
};

