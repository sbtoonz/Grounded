#pragma once
#include "CoreMinimal.h"
#include "PhobiaMaterialSetting.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct MAINE_API FPhobiaMaterialSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 MaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> Material;
    
    FPhobiaMaterialSetting();
};

