#pragma once
#include "CoreMinimal.h"
#include "MaterialInterfaceArray.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialInterfaceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Array;
    
    MAINE_API FMaterialInterfaceArray();
};

