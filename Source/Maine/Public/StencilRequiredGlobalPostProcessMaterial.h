#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "EManagedPostProcessBitMasks.h"
#include "StencilRequiredGlobalPostProcessMaterial.generated.h"

USTRUCT(BlueprintType)
struct FStencilRequiredGlobalPostProcessMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeightedBlendable PostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManagedPostProcessBitMasks Bits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<int32> ActiveObjectIDs;
    
    MAINE_API FStencilRequiredGlobalPostProcessMaterial();
};

