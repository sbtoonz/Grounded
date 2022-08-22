#pragma once
#include "CoreMinimal.h"
#include "DynamicMaterialColorKey.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FDynamicMaterialColorKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialInterface* BaseMaterial;
    
    MAINE_API FDynamicMaterialColorKey();
};

