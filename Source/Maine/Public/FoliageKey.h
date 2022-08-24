#pragma once
#include "CoreMinimal.h"
#include "InstancedMeshKey.h"
#include "FoliageKey.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FFoliageKey : public FInstancedMeshKey {
    GENERATED_BODY()
public:
    FFoliageKey();
};

