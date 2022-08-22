#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "GroundLevelAssetUserData.generated.h"

UCLASS(EditInlineNew)
class MAINE_API UGroundLevelAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UGroundLevelAssetUserData();
};

