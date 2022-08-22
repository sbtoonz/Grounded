#pragma once
#include "CoreMinimal.h"
#include "FoliageKey.h"
#include "RespawnableInstancedMeshData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FRespawnableInstancedMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FFoliageKey AttachedToFoliage;
    
    FRespawnableInstancedMeshData();
};

