#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "GroundLevelAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API UGroundLevelAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UGroundLevelAssetUserData();
};

