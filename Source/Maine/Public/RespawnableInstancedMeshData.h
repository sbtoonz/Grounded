#pragma once
#include "CoreMinimal.h"
#include "FoliageKey.h"
#include "RespawnableInstancedMeshData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FRespawnableInstancedMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFoliageKey AttachedToFoliage;
    
    FRespawnableInstancedMeshData();
};

