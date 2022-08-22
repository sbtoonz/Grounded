#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "InstancedBuildingClassUserData.generated.h"

UCLASS(EditInlineNew)
class MAINE_API UInstancedBuildingClassUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UClass* BuildingClass;
    
    UInstancedBuildingClassUserData();
};

