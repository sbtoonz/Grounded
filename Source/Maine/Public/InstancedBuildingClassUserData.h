#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "InstancedBuildingClassUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API UInstancedBuildingClassUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BuildingClass;
    
    UInstancedBuildingClassUserData();
};

