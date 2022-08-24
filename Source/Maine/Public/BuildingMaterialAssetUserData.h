#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "Engine/DataTable.h"
#include "BuildingMaterialAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API UBuildingMaterialAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Ingredient;
    
    UBuildingMaterialAssetUserData();
};

