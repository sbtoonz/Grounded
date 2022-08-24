#pragma once
#include "CoreMinimal.h"
#include "PhobiaMaterialSetting.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct MAINE_API FPhobiaMaterialSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    FPhobiaMaterialSetting();
};

