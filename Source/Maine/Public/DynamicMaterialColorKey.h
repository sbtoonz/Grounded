#pragma once
#include "CoreMinimal.h"
#include "DynamicMaterialColorKey.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FDynamicMaterialColorKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BaseMaterial;
    
    MAINE_API FDynamicMaterialColorKey();
};

