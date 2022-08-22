#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WeightedBlendable -FallbackName=WeightedBlendable
#include "EManagedPostProcessBitMasks.h"
#include "StencilRequiredGlobalPostProcessMaterial.generated.h"

USTRUCT(BlueprintType)
struct FStencilRequiredGlobalPostProcessMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FWeightedBlendable PostProcessMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EManagedPostProcessBitMasks Bits;
    
    UPROPERTY(Transient)
    TSet<int32> ActiveObjectIDs;
    
    MAINE_API FStencilRequiredGlobalPostProcessMaterial();
};

